// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitWeapon.h"
#include "Items/AdvKitFireModeConfiguration.h"

#include "Player/AdvKitCharacter.h"

#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"

AAdvKitWeapon::AAdvKitWeapon(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultRootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Default Root"));
	DefaultRootComponent->SetNetAddressable();
	DefaultRootComponent->SetIsReplicated(true);
	//DefaultRootComponent->bAutoRegister = true;
	RootComponent = DefaultRootComponent;

	PrimaryActorTick.bCanEverTick = true;

	BurstCounter = 0;
}

void AAdvKitWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AAdvKitWeapon, WeaponState);
	DOREPLIFETIME(AAdvKitWeapon, BurstCounter);
	DOREPLIFETIME(AAdvKitWeapon, DefaultFireModes);
	DOREPLIFETIME(AAdvKitWeapon, Ammunition);
}

void AAdvKitWeapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

bool AAdvKitWeapon::StartFireServer_Validate(uint8 FireModeIndex)
{
	return true;
}

void AAdvKitWeapon::StartFireServer_Implementation(uint8 FireModeIndex)
{
	//////UE_LOG(LogAdvKit, Log, TEXT("Server Fire: %s"), *GetName());

	StartFire(FireModeIndex);
}


bool AAdvKitWeapon::StopFireServer_Validate()
{
	return true;
}

void AAdvKitWeapon::StopFireServer_Implementation()
{
	StopFire();
}

bool AAdvKitWeapon::StartReloadServer_Validate()
{
	return true;
}

void AAdvKitWeapon::StartReloadServer_Implementation()
{
	StartReload();
}

bool AAdvKitWeapon::StopReloadServer_Validate()
{
	return true;
}

void AAdvKitWeapon::StopReloadServer_Implementation()
{
	StopReload();
}


void AAdvKitWeapon::OnRep_WeaponState(FAdvKitWeaponState OldState)
{
	if (WeaponState.State != OldState.State)
	{
		//Call client side events
		switch (OldState.State)
		{
		case EAdvKitWeaponState::Firing:
			OnFireEnd();
			break;
		case EAdvKitWeaponState::Reloading:
			OnReloadEnd();
			break;
		default: break;
		}

		//Call client side events
		switch (WeaponState.State)
		{
		case EAdvKitWeaponState::Firing:
			OnFireBegin();
			break;
		case EAdvKitWeaponState::Reloading:
			OnReloadBegin();
			break;
		case EAdvKitWeaponState::Idle: break;
		default: break;
		}
	}

}

void AAdvKitWeapon::OnRep_BurstCounter(int32 OldBurstCounter)
{
	//Burst counter changed, so weapon must have fired
	if (BurstCounter != OldBurstCounter)
	{
		OnFireShot();
	}
}

UTexture2D* AAdvKitWeapon::GetWeaponCrosshairTexture(TSubclassOf<AAdvKitWeapon> WeaponClass)
{
	if (!IsValid(WeaponClass))
	{
		return nullptr;
	}

	auto DefaultObject = Cast<AAdvKitWeapon>(WeaponClass->GetDefaultObject());
	if (!IsValid(DefaultObject))
	{
		return nullptr;
	}

	return DefaultObject->Crosshair;
}

void AAdvKitWeapon::StartFire_Implementation(uint8 FireModeIndex)
{
	//UE_LOG(LogAdvKit, Log, TEXT("Start Fire: %s - %s"), *GetWorld()->GetFirstLocalPlayerFromController()->GetName(), *GetName());

	//Cannot start a non existent fire mode
	if (!HasFireMode(FireModeIndex))
	{
		return;
	}

	//Call server if client execution
	if (Role < ROLE_Authority)
	{
		StartFireServer(FireModeIndex);
	}

	//Set fire mode as pending and set flag
	WeaponState.PendingFireMode = FireModeIndex;
	WeaponState.bWantsToFire = true;

	//Weapon is firing other mode, change modes
	if (WeaponState.State == EAdvKitWeaponState::Firing)
	{
		if (WeaponState.PendingFireMode == WeaponState.ActiveFireMode)
		{
			//Already firing in the new mode
			return;
		}

		StopFireInternal();
		return;
	}

	//Weapon is not doing anything, so it can fire
	if (WeaponState.State == EAdvKitWeaponState::Idle)
	{
		if (!CanFire())
		{
			HandleFiringPrerequisites();
			return;
		}

		StartFireInternal();
		return;
	}

	//It's reloading right now, so the weapon cannot fire
}

void AAdvKitWeapon::StopFire_Implementation()
{
	//Call server if client execution
	if (Role < ROLE_Authority)
	{
		StopFireServer();
	}

	WeaponState.bWantsToFire = false;

	//Weapon is firing, stop it
	if (WeaponState.State == EAdvKitWeaponState::Firing)
	{
		auto* ActiveMode = GetFireMode(WeaponState.ActiveFireMode);
		if (ActiveMode && ActiveMode->bFireOnStop)
		{
			FireAmmunition();
		}

		StopFireInternal();
		return;
	}
}


void AAdvKitWeapon::ConsumeAmmunition_Implementation()
{
	//Check how much ammo this mode subtracts
	auto* ActiveMode = GetFireMode(WeaponState.ActiveFireMode);
	if (!ActiveMode)
	{
		return;
	}

	//Subtract ammunition
	AmmunitionInMagazine -= ActiveMode->AmmunitionPerShot;
	Ammunition -= ActiveMode->AmmunitionPerShot;
}

void AAdvKitWeapon::HandleFiringPrerequisites_Implementation()
{
	//No ammo means the weapon is empty
	if (!HasAmmunition())
	{
		OnWeaponEmpty();
	}
	//Has ammo but not in the magazine
	else if (!HasAmmunitionInMagazine())
	{
		OnMagazineEmpty();
	}

	//If reloading is possible, do it
	if (CanReload())
	{
		StartReload();
	}
}


void AAdvKitWeapon::FireAmmunition_Implementation()
{
	//Cannot fire without fire mode config
	auto* ActiveMode = GetFireMode(WeaponState.ActiveFireMode);
	if (!ActiveMode)
	{
		return;
	}

	//If current mode cannot be fired, check why
	if (!CanFire())
	{
		HandleFiringPrerequisites();
		return;
	}

	//Eat ammo and shoot
	ConsumeAmmunition();
	BurstCounter++;
	
	OnFireShot();

	//Fire depending on configuration
	switch (ActiveMode->FireType)
	{
	case EAdvKitRifleFireType::InstantHit:
		FireInstant();
		break;
	case EAdvKitRifleFireType::Projectile:
		FireProjectile();
		break;
	case EAdvKitRifleFireType::Custom:
		FireCustom();
		break;
	default: break;
	}

	//Weapon fires on trigger release, not on press, so refiring is not needed
	if (ActiveMode->bFireOnStop)
	{
		return;
	}

	//Start refiring if desired
	if (ActiveMode->bShouldRefire)
	{
		StartRefireTimer(ActiveMode->RefireTime);
	}
}

void AAdvKitWeapon::FireInstant_Implementation()
{
	//Only fire on server
	if (Role < ROLE_Authority)
	{
		return;
	}

	auto* ActiveFireMode = GetFireMode(WeaponState.ActiveFireMode);
	if (!ActiveFireMode)
	{
		//Firemode doesn't exist
		return;
	}

	//Trace for hit
	FVector StartTrace = GetTraceStart(WeaponState.ActiveFireMode);
	FVector AimDir = GetAdjustedAim(StartTrace, WeaponState.ActiveFireMode).Vector();
	FVector EndTrace = StartTrace + AimDir * ActiveFireMode->TraceDistance;

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Instigator);
	Params.AddIgnoredActor(this);
	FCollisionObjectQueryParams ObjectParams;

	if (!GetWorld()->LineTraceSingleByObjectType(Hit, StartTrace, EndTrace, ObjectParams, Params))
	{
		return;
	}

	UGameplayStatics::ApplyPointDamage(Hit.Actor.Get(), ActiveFireMode->InstantDamage, (EndTrace - StartTrace).GetSafeNormal(), Hit, GetInstigatorController(), this, ActiveFireMode->InstantDamageTypeClass);
}

class AAdvKitProjectile* AAdvKitWeapon::FireProjectile_Implementation()
{
	//Only spawn on server
	if (Role < ROLE_Authority)
	{
		return nullptr;
	}

	auto* ActiveFireMode = GetFireMode(WeaponState.ActiveFireMode);
	if (!ActiveFireMode)
	{
		//Firemode doesn't exist
		return nullptr;
	}

	FVector StartLocation = GetMuzzleLocation(WeaponState.ActiveFireMode);
	FVector StartTrace = GetTraceStart(WeaponState.ActiveFireMode);
	FVector AimDir = GetAdjustedAim(StartTrace, WeaponState.ActiveFireMode).Vector();

	//If muzzle is different from trace origin, adjust projectile path
	if (StartTrace != StartLocation)
	{
		FVector EndTrace = StartTrace + AimDir * ActiveFireMode->TraceDistance;

		FHitResult Hit;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(Instigator);
		Params.AddIgnoredActor(this);
		Params.bTraceComplex = true;
		
		if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECollisionChannel::ECC_Visibility, Params))
		{
			AimDir = (Hit.ImpactPoint - StartLocation).GetSafeNormal();
		}
	}

	//Spawn projectile
	FActorSpawnParameters Params;
	Params.Owner = this;
	Params.Instigator = Instigator;
	AAdvKitProjectile* NewProjectile = GetWorld()->SpawnActor<AAdvKitProjectile>(ActiveFireMode->ProjectileClass, StartLocation, AimDir.Rotation(), Params);
	if (!NewProjectile)
	{
		return nullptr;
	}

	NewProjectile->Init(AimDir);
	NewProjectile->SetReplicates(true);
	return NewProjectile;
}

void AAdvKitWeapon::FireCustom_Implementation()
{
	//Implement your own behavior in sub class
}

void AAdvKitWeapon::StartRefireTimer(float Duration)
{
	//If refiring is instant
	if (Duration <= 0)
	{
		RefireTimer();
		return;
	}

	//Set the timer
	GetWorld()->GetTimerManager().SetTimer(RefireTimerHandle, this, &AAdvKitWeapon::RefireTimer, Duration);
}

void AAdvKitWeapon::StopRefireTimer()
{
	GetWorld()->GetTimerManager().ClearTimer(RefireTimerHandle);
}

void AAdvKitWeapon::RefireTimer()
{
	//Yeah it's a simple wrapper, so what?
	FireAmmunition();
}

bool AAdvKitWeapon::IsMagazineEmpty()
{
	return !HasAmmunitionInMagazine();
}

bool AAdvKitWeapon::HasAmmunition(int32 Amount)
{
	//Weapon has ALL the ammo
	if (bHasInfiniteAmmunition)
	{
		return true;
	}

	return Ammunition >= Amount;
}

bool AAdvKitWeapon::HasAmmunitionInMagazine(int32 Amount)
{
	return AmmunitionInMagazine >= Amount;
}

bool AAdvKitWeapon::IsIdle()
{
	return WeaponState.State == EAdvKitWeaponState::Idle;
}

bool AAdvKitWeapon::IsFiring()
{
	return WeaponState.State == EAdvKitWeaponState::Firing;
}

bool AAdvKitWeapon::IsReloading()
{
	return WeaponState.State == EAdvKitWeaponState::Reloading;
}


FVector AAdvKitWeapon::GetMuzzleLocation_Implementation(uint8 FireModeIndex)
{
	return GetActorLocation();
}

FVector AAdvKitWeapon::GetTraceStart_Implementation(uint8 FireModeIndex)
{
	AAdvKitCharacter* Character = Cast<AAdvKitCharacter>(Instigator);
	if (Character)
	{
		return Character->GetWeaponStartTraceLocation(this);
	}

	return GetActorLocation();
}

FRotator AAdvKitWeapon::GetAdjustedAim(FVector StartFireLocation, uint8 FireModeIndex)
{
	AAdvKitCharacter* Character = Cast<AAdvKitCharacter>(Instigator);
	if (Character)
	{
		return AddSpread(Character->GetAdjustedAimFor(this, StartFireLocation));
	}

	return AddSpread(GetActorForwardVector().Rotation());
}

FRotator AAdvKitWeapon::AddSpread(FRotator OriginalAim, uint8 FireModeIndex)
{
	const UAdvKitFireModeConfiguration* FireMode;
	if (!GetFireMode(FireModeIndex, &FireMode))
	{
		//Fire mode doesn't exist
		return OriginalAim;
	}

	if (FireMode->Spread == 0)
	{
		return OriginalAim;
	}

	const float SpreadHalf = FireMode->Spread*0.5f;
	OriginalAim.Pitch += FMath::FRandRange(-SpreadHalf, SpreadHalf);
	OriginalAim.Yaw += FMath::FRandRange(-SpreadHalf, SpreadHalf);
	OriginalAim.Roll += FMath::FRandRange(-SpreadHalf, SpreadHalf);

	return OriginalAim;
}

bool AAdvKitWeapon::CanFire_Implementation()
{
	auto* ActiveMode = GetFireMode(WeaponState.ActiveFireMode);
	if (!ActiveMode)
	{
		return false;
	}

	//Is there enough ammo for this mode
	return HasAmmunitionInMagazine(ActiveMode->AmmunitionPerShot);
}

void AAdvKitWeapon::StartFireInternal_Implementation()
{
	//Hook layer for deferred firing in sub classes
	WeaponState.ActiveFireMode = WeaponState.PendingFireMode;
	WeaponState.State = EAdvKitWeaponState::Firing;

	//Play effects
	OnFireBegin();

	//If the weapon fires on trigger release, don't fire now
	auto* ActiveMode = GetFireMode(WeaponState.ActiveFireMode);
	if (ActiveMode && ActiveMode->bFireOnStop)
	{
		return;
	}

	FireAmmunition();
}


void AAdvKitWeapon::StopFireInternal_Implementation()
{
	WeaponState.State = EAdvKitWeaponState::Idle;
	StopRefireTimer();

	//Play effects
	OnFireEnd();

	//The firing was stopped, because it should be reloaded
	if (WeaponState.bWantsToReload)
	{
		StartReloadInternal();
		return;
	}

	//The firing was stopped, but the weapon should still fire 
	//(probably because a fire mode change occured)
	if (WeaponState.bWantsToFire)
	{
		StartFireInternal();
	}
}

bool AAdvKitWeapon::CanReload_Implementation()
{
	//Does the weapon have more ammunition than the one currently in the magazine?
	if (!HasAmmunition(AmmunitionInMagazine + 1))
	{
		return false;
	}

	//The magazine must not be full already
	if (AmmunitionInMagazine == AmmunitionPerMagazine)
	{
		return false;
	}

	//Cannot start reloading while already at it
	if (WeaponState.State == EAdvKitWeaponState::Reloading)
	{
		return false;
	}

	return true;
}

void AAdvKitWeapon::StartReload_Implementation()
{
	//Notify server
	if (Role < ROLE_Authority)
	{
		StartReloadServer();
	}

	//Set reloading flag
	WeaponState.bWantsToReload = true;

	//Cannot reload while firing, stop it
	if (WeaponState.State == EAdvKitWeaponState::Firing)
	{
		StopFireInternal();
		return;
	}

	//Reloead
	StartReloadInternal();
}

void AAdvKitWeapon::StartReloadInternal_Implementation()
{
	WeaponState.State = EAdvKitWeaponState::Reloading;
	OnReloadBegin();
	StartReloadTimer();
}

void AAdvKitWeapon::StopReload_Implementation()
{
	//Notify server
	if (Role < ROLE_Authority)
	{
		StopReloadServer();
	}

	//Unset flag
	WeaponState.bWantsToReload = false;

	//Weapon is not reloading anyway
	if (WeaponState.State != EAdvKitWeaponState::Reloading)
	{
		return;
	}

	//Stop the reload
	StopReloadInternal();
}

void AAdvKitWeapon::StopReloadInternal_Implementation()
{
	WeaponState.State = EAdvKitWeaponState::Idle;
	StopReloadTimer();
	OnReloadEnd();

	//Reloading is done/aborted and the player wants to fire
	if (WeaponState.bWantsToFire)
	{
		StartFireInternal();
	}
}

void AAdvKitWeapon::ReloadAmmunition_Implementation()
{
	//Add ammunition to magazine after reload
	int32 AmmoReloadAmount = FMath::Max<float>(0, FMath::Min<float>(AmmunitionPerMagazine, Ammunition) - AmmunitionInMagazine);
	AmmunitionInMagazine += AmmoReloadAmount;
}

void AAdvKitWeapon::AddAmmunition_Implementation(int32 Amount)
{
	Ammunition = FMath::Min<float>(Ammunition + Amount, MaxAmmunition);
}


void AAdvKitWeapon::StartReloadTimer_Implementation()
{
	//Reload is instant
	if (ReloadTime <= 0)
	{
		ReloadedTimer();
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &AAdvKitWeapon::ReloadedTimer, ReloadTime);
}

void AAdvKitWeapon::StopReloadTimer_Implementation()
{
	GetWorld()->GetTimerManager().ClearTimer(ReloadTimerHandle);
}

void AAdvKitWeapon::ReloadedTimer()
{
	//Reloading finished, do reload things
	ReloadAmmunition();
	OnReloaded();
	WeaponState.bWantsToReload = false;
	StopReloadInternal();
}

bool AAdvKitWeapon::HasFireMode(uint8 FireModeIndex)
{
	if (DefaultFireModes.Num() > FireModeIndex)
	{
		return true;
	}

	return false;
}

UAdvKitFireModeConfiguration* AAdvKitWeapon::GetFireModeBP(uint8 FireModeIndex)
{
	//Check if a fire mode exists
	if (HasFireMode(FireModeIndex) && IsValid(DefaultFireModes[FireModeIndex]))
	{
		return DefaultFireModes[FireModeIndex].GetDefaultObject();
	}

	return nullptr;
}

const UAdvKitFireModeConfiguration* AAdvKitWeapon::GetFireMode(uint8 FireModeIndex)
{
	//Check if a fire mode exists
	if (HasFireMode(FireModeIndex) && IsValid(DefaultFireModes[FireModeIndex]))
	{
		return DefaultFireModes[FireModeIndex].GetDefaultObject();
	}

	return nullptr;
}

TSubclassOf<UAdvKitFireModeConfiguration> AAdvKitWeapon::GetFireModeClass(uint8 FireModeIndex)
{
	if (HasFireMode(FireModeIndex))
	{
		return DefaultFireModes[FireModeIndex];
	}

	return nullptr;
}

bool AAdvKitWeapon::GetFireMode(uint8 FireModeIndex, const UAdvKitFireModeConfiguration** OutFireMode)
{
	*OutFireMode = GetFireMode(FireModeIndex);
	return (*OutFireMode != nullptr);
}

float AAdvKitWeapon::BlockDamage_Implementation(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return Damage;
}

void AAdvKitWeapon::BlockedBy_Implementation(AActor* By, float BlockedDamage)
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::OnFireBegin_Implementation()
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::OnFireShot_Implementation()
{
	auto* ActiveMode = GetFireMode(WeaponState.ActiveFireMode);
	if (!ActiveMode)
	{
		//Firemode doesn't exist
		return;
	}

	if (!ActiveMode->CharacterFireMontage)
	{
		//No Animation to play
		return;
	}

	ACharacter* Character = Cast<ACharacter>(Instigator);
	if (!Character)
	{
		return;
	}

	Character->PlayAnimMontage(ActiveMode->CharacterFireMontage);
}

void AAdvKitWeapon::OnFireEnd_Implementation()
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::OnReloadBegin_Implementation()
{
	if (!CharacterReloadMontage)
	{
		//No Animation to play
		return;
	}

	ACharacter* Character = Cast<ACharacter>(Instigator);
	if (Character)
	{
		Character->PlayAnimMontage(CharacterReloadMontage);
	}

}

void AAdvKitWeapon::OnReloaded_Implementation()
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::OnReloadEnd_Implementation()
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::OnMagazineEmpty_Implementation()
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::OnWeaponEmpty_Implementation()
{
	//Dummy event to be implemented
}

void AAdvKitWeapon::Uneqiup(bool bInstant )
{
	StopFire();
	Super::Uneqiup(bInstant);
}

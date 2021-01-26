// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitCharacterMovementComponent.h"
#include "Player/AdvKitPlayerController.h"
#include "Player/AdvKitInventoryManager.h"
#include "Player/AdvKitTraceUtilityComponent.h"
#include "Player/AdvKitTargetPoint.h"
#include "Player/AdvKitCameraController.h"

#include "Environment/AdvKitTransitionComponent.h"
#include "Environment/AdvKitZone.h"

#include "Actions/AnimNotifyState_AdvKitDodge.h"

#include "Items/AdvKitUsable.h"
#include "Items/AdvKitInventoryItem.h"
#include "Items/AdvKitWeapon.h"

#include "AdvKitLogCategories.h"

#include "Net/UnrealNetwork.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"

AAdvKitCharacter::AAdvKitCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UAdvKitCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(30.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
    auto MoveComp = GetCharacterMovement();
	if (MoveComp)
	{
		MoveComp->bOrientRotationToMovement = true; // Character moves in the direction of input...
		MoveComp->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
		MoveComp->JumpZVelocity = 600.f;
		MoveComp->AirControl = 0.2f;
		MoveComp->Buoyancy = 1;
	}

	CollisionChannelsToIgnoreInZones.Add(ECollisionChannel::ECC_WorldStatic);
	CollisionChannelsToIgnoreInZones.Add(ECollisionChannel::ECC_WorldDynamic);
	bEnterZonesFromHitAutomatically = true;
	bEnterZonesFromOverlapAutomatically = true;
	bIgnoreItemWhenEnteringZonesAutomatically = false;


	//Default manager classes
	InventoryManagerClass = AAdvKitInventoryManager::StaticClass();

	PointAndClickTraceDistance = 1000.0f;
	MaxTargetDistance = 500.0f;

	//Health
	Health = 100;
	MaxHealth = 100;

	bInvincibleDuringDodge = true;

	//Multiplayer
	bReplicates = true;

	//Camera stuff

	HeadSocket = "Item_Head";

	bFaceLockedTarget = false;
}

void AAdvKitCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAdvKitCharacter, InventoryManager);
	DOREPLIFETIME(AAdvKitCharacter, RepAnimMontage);
	DOREPLIFETIME(AAdvKitCharacter, Health);
	DOREPLIFETIME(AAdvKitCharacter, MaxHealth);
	DOREPLIFETIME(AAdvKitCharacter, PendingTransition);
	//DOREPLIFETIME(AAdvKitCharacter, LocalZoneLocation);
	//DOREPLIFETIME_CONDITION(AAdvKitCharacter, LocalZoneLocation, COND_SkipOwner);
}

const struct FAdvKitMovementProperties* AAdvKitCharacter::GetAdvMovementProperties() const
{ 
	const UAdvKitCharacterMovementComponent* AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		//No properties without movement component
		return nullptr;
	}
	
	return AdvMoveComp->GetAdvMovementProperties();
}

class UAdvKitCharacterMovementComponent* AAdvKitCharacter::GetAdvMovementComponent() const
{
	return Cast<UAdvKitCharacterMovementComponent>(GetMovementComponent());
}

FRotator AAdvKitCharacter::GetBaseAimRotation() const
{
	//Aim is modified to look at target
	if (bLockTarget && CurrentTarget)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector LocationDifference = CurrentTarget->GetActorLocation() - EyeLocation;
		return (LocationDifference.Rotation().Quaternion()).Rotator();
	}

	return Super::GetBaseAimRotation();
}

void AAdvKitCharacter::NextItem()
{
	if (!IsValid(InventoryManager))
	{
		return;
	}

	InventoryManager->NextItem();
}

void AAdvKitCharacter::PreviousItem()
{
	if (!IsValid(InventoryManager))
	{
		return;
	}

	InventoryManager->PreviousItem();
}

FRotator AAdvKitCharacter::GetAdjustedAimFor_Implementation(AAdvKitWeapon* Weapon, FVector FireLocation)
{
	//Without a controller only the character can be used
	if (Controller == nullptr || GetLocalRole() < ROLE_Authority)
	{
		return GetBaseAimRotation();
	}

	//Always look at locked target
	if (bLockTarget && CurrentTarget)
	{
		return (CurrentTarget->GetActorLocation() - GetWeaponStartTraceLocation(Weapon)).Rotation();
	}

	return GetBaseAimRotation();
}

FVector AAdvKitCharacter::GetWeaponStartTraceLocation_Implementation(AAdvKitWeapon* Weapon)
{
	//If a controller is present use it for view location
	if (Controller)
	{
		FVector Location;
		FRotator Rotation;
		Controller->GetPlayerViewPoint(Location, Rotation);
		return Location;
	}

	//Locking on target means the character is the start for a weapon trace
	if (HeadSocket != NAME_None)
	{
		return GetMesh()->GetSocketLocation(HeadSocket);
	}

	return GetPawnViewLocation();
}


float AAdvKitCharacter::GetMaximumTargetDistance()
{
	return MaxTargetDistance;
}

TArray<AAdvKitTargetPoint*> AAdvKitCharacter::GetAllAvailableTargets()
{
	const float CurTime = GetWorld()->TimeSeconds;
	
	//How long ago the last render has to be in order to considerer it invisible.
	//Originally this was supposed to be since the last frame, e.g. DeltaSeconds, however 
	//due to float inaccuracies it is doubled to avoid flickering.
	const float DeltaSeconds = GetWorld()->DeltaTimeSeconds * 2;
	
	TArray<AAdvKitTargetPoint*> ResultArray;

	float MaxDistance = GetMaximumTargetDistance();

	//Go through all target actors
	for (TActorIterator<AAdvKitTargetPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AAdvKitTargetPoint* TempTarget = Cast<AAdvKitTargetPoint>(*ActorItr);

		//Check if target actor is attached to another actor to avoid targeting loose traget points
		if (!TempTarget || !TempTarget->IsValidTarget())
		{
			continue;
		}

		auto TargetedActor = TempTarget->GetTargetedActor();
		if (!TargetedActor || TargetedActor == this)
		{
			continue;
		}

		//Check if the target is close enough
		if (FVector::Dist(GetActorLocation(), TempTarget->GetActorLocation()) > MaxDistance)
		{
			continue;
		}

		//Only include visible targets
		float LastRenderDelta = CurTime - TargetedActor->GetLastRenderTime();
		if (LastRenderDelta > DeltaSeconds) //TODO this is a nasty hack...?
		{
			continue;
		}

		ResultArray.AddUnique(TempTarget);
	}

	return ResultArray;
}

AAdvKitTargetPoint* AAdvKitCharacter::GetBestTarget(const TArray<AAdvKitTargetPoint*> &AvailableTargets)
{
	float ClosestDistance = GetMaximumTargetDistance();
	AAdvKitTargetPoint* ClosestTarget = nullptr;

	//Find closest target
	for (AAdvKitTargetPoint* TempTarget : AvailableTargets)
	{
		float Distance = FVector::Dist(GetActorLocation(), TempTarget->GetActorLocation());
		if ((ClosestTarget && Distance<ClosestDistance) || !ClosestTarget)
		{
			ClosestDistance = Distance;
			ClosestTarget = TempTarget;
		}
	}

	return ClosestTarget;
}

void AAdvKitCharacter::SetTarget(AAdvKitTargetPoint* NewTarget, bool bLock)
{
	//Don't do anything if new values are already set
	if (CurrentTarget == NewTarget && bLock == bLockTarget)
	{
		return;
	}

	CurrentTarget = NewTarget;

	//Cannot lock to nothing
	if (!CurrentTarget)
	{
		bLockTarget = false;
		return;
	}

	//Lock is already set to what it should be
	if (bLock == bLockTarget)
	{
		return;
	}

	bLockTarget = bLock;
}

void AAdvKitCharacter::StartFire(uint8 FireMode)
{
	//Point and click
	APlayerController* PlayerController = Cast<APlayerController>(this->Controller);
	if (IsValid(PlayerController) && PlayerController->bShowMouseCursor)
	{
		FVector Start;
		FVector Direction;
		PlayerController->DeprojectMousePositionToWorld(Start, Direction);

		FVector End = Start + Direction * PointAndClickTraceDistance;

		FHitResult hitresult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		FCollisionObjectQueryParams ObjectQueryParams;
		
		//Try to hit an actor
		if (!GetWorld()->LineTraceSingleByObjectType(hitresult, Start, End, ObjectQueryParams, Params))
		{
			return;
		}

		//Check if actor is usable
		AAdvKitUsable* Useable = Cast<AAdvKitUsable>(hitresult.GetActor());
		if (!IsValid(Useable))
		{
			return;
		}

		//Check if usable can be used
		if (!Useable->CanBeUsedBy(this, InventoryManager->GetCurrentInventory()))
		{
			return;
		}

		//Use it
		Use(Useable, InventoryManager->GetCurrentInventory());
		return;
	}

	//Try to start firing

	//Need inventory to have weapon
	if (!InventoryManager)
	{
		return;
	}

	//Get active weapon and fire
	AAdvKitWeapon* CurrentWeapon = Cast<AAdvKitWeapon>(InventoryManager->GetCurrentInventory());
	if (CurrentWeapon)
	{
		CurrentWeapon->StartFire(FireMode);
	}
}

void AAdvKitCharacter::StopFire()
{
	//If in point and click mode weapons are not used
	APlayerController* PlayerController = Cast<APlayerController>(this->Controller);
	if (IsValid(PlayerController) && PlayerController->bShowMouseCursor)
	{
		return;
	}

	//Need inventory to have weapon
	if (!InventoryManager)
	{
		return;
	}

	//Get active weapon and stop
	AAdvKitWeapon* CurrentWeapon = Cast<AAdvKitWeapon>(InventoryManager->GetCurrentInventory());
	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}


void AAdvKitCharacter::Reload()
{
	//Need inventory to have weapon
	if (!InventoryManager)
	{
		return;
	}

	//Get active weapon and reload
	AAdvKitWeapon* CurrentWeapon = Cast<AAdvKitWeapon>(InventoryManager->GetCurrentInventory());
	if (CurrentWeapon)
	{
		CurrentWeapon->StartReload();
	}
}

bool AAdvKitCharacter::Use_Implementation(class AAdvKitUsable* Usable /*= NULL*/, class AAdvKitInventoryItem* WithItem /*= NULL*/)
{
	//Cannot use nothing
	if (!Usable)
	{
		return false;
	}

	//Notify server of use
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		ServerUse(Usable, WithItem);
	}

	if (GetLocalRole() < ROLE_Authority)
	{
		return false;
	}

	//Check if object can be used
	if (!Usable->CanBeUsedBy(this, WithItem))
	{
		return false;
	}

	//Use object
	Usable->UsedBy(this, WithItem);
	return true;
}


bool  AAdvKitCharacter::ServerUse_Validate(class AAdvKitUsable* Useable, class AAdvKitInventoryItem* WithItem)
{
	return true;
}

void AAdvKitCharacter::ServerUse_Implementation(class AAdvKitUsable* Useable, class AAdvKitInventoryItem* WithItem)
{
	Use(Useable, WithItem);
}

bool AAdvKitCharacter::LetGoOfZone_Implementation()
{
	//Cannot let go of zone if not in zone
	auto* Zone = GetZone();
	if (!Zone)
	{
		return false;
	}


	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return false;
	}

	//These zones support downwards transitions
	if ((AdvMoveComp->IsWalkingTightspace() || AdvMoveComp->IsClimbingLedge()))
	{
		return TryToTransition(
			GetZone(),
			Zone->GetZoneLocationWorld(AdvMoveComp->LocalZoneLocation),
			-GetActorUpVector()
			);
	}

	UE_LOG(LogAdvKitZone, Verbose, TEXT("Transition to NULL from Let go"));
	TransitionTo(nullptr, nullptr);
	return true;
}

bool AAdvKitCharacter::JumpUpZone_Implementation()
{
	//Try to transition upwards from zone
	auto* Zone = GetZone();
	if (!Zone)
	{
		return false;
	}

	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return false;
	}

	FVector TransitionDirection = AdvMoveComp->GetCurrentAcceleration();
	if (TransitionDirection.IsNearlyZero())
	{
		TransitionDirection = GetActorUpVector();

		if (AdvMoveComp->IsClimbingLadder())
		{
			TransitionDirection = -GetActorForwardVector();
		}
	}


	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + TransitionDirection * 100, FColor::Green);
	return TryToTransitionFromCurrentZone(TransitionDirection, true);
}

FVector AAdvKitCharacter::GetZoneAcceleration_Implementation()
{
	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return FVector::ZeroVector;
	}

	return AdvMoveComp->GetCurrentAcceleration();
}


float AAdvKitCharacter::GetMaxZoneSpeed_Implementation()
{
	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return 0.0f;
	}

	return AdvMoveComp->GetMaxSpeed();
}

bool AAdvKitCharacter::TryToTransitionFromCurrentZone_Implementation(const FVector& InWorldDirection, bool bIsJump)
{
	auto Zone = GetZone();
	if (!Zone)
	{
		return false;
	}

	auto MoveComp = GetAdvMovementComponent();
	if (!MoveComp)
	{
		return false;
	}

	FVector ZoneWorldLocation = Zone->GetZoneLocationWorld(MoveComp->LocalZoneLocation);
	return TryToTransition(Zone, ZoneWorldLocation, InWorldDirection, bIsJump);
}


bool AAdvKitCharacter::TryToTransition_Implementation(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection, bool bIsJump)
{
	static FColor ClosestTransitionDebugColor = FColorList::Cyan;
	
	UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("AAdvKitCharacter::TryToTransition: %s - at %s in dir: %s"), *GetNameSafe(ForZone), *ForWorldPosition.ToString(), *InWorldDirection.ToString());

	//Try to find a transition
	UAdvKitTransitionComponent* ClosestTransition = GetPossibleTransition(ForZone, ForWorldPosition, InWorldDirection, bIsJump);
	if (ClosestTransition == nullptr)
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("AAdvKitCharacter::TryToTransition: no transition available for zone %s"),*GetNameSafe(ForZone));
		return false;
	}

	if(bDrawZoneDebug)
	{
		ClosestTransition->DrawDebug(ClosestTransitionDebugColor, 2.f,1.f);
	}
	
	//Execute the transition
	TransitionTo(ClosestTransition->TargetZone.Get(), ClosestTransition);
	return true;
}

UAdvKitTransitionComponent* AAdvKitCharacter::GetPossibleTransition_Implementation(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection, bool bIsJump)
{
	//Get all transitions for this character
	TArray<UAdvKitTransitionComponent*> AvailableTransitions = ForZone->GetPossibleTransitions(this);
	if (AvailableTransitions.Num() == 0)
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("AAdvKitCharacter::GetPossibleTransition: Zone %s has no transitions for character %s"), *GetNameSafe(ForZone), *GetNameSafe(this));
		return nullptr;
	}

	TArray<UAdvKitTransitionComponent*> PossibleTransitions;

	//Filter out transitions that are traversable with the arguments
	for (auto& TempTransition : AvailableTransitions)
	{
		if (!IsValid(TempTransition))
		{
			continue;
		}
		
		if (!TempTransition->CanTransition(this, ForWorldPosition, InWorldDirection, bIsJump))
		{
			continue;
		}
		
		PossibleTransitions.Add(TempTransition);
	}

	//Cannot do anything without transitions
	if (PossibleTransitions.Num() == 0)
	{
		return nullptr;
	}

	//Find the closest transition and return it
	float ClosestDistance = 0;
	UAdvKitTransitionComponent* ClosestTransition = nullptr;

	for (auto& TempTransition : PossibleTransitions)
	{
		if (!IsValid(TempTransition))
		{
			continue;
		}

		float Distance = FVector::Dist(ForWorldPosition, TempTransition->GetClosestSourcePosition(ForWorldPosition));
		if (!ClosestTransition || ClosestDistance > Distance)
		{
			ClosestDistance = Distance;
			ClosestTransition = TempTransition;
		}
	}

	return ClosestTransition;
}

bool AAdvKitCharacter::CanTransitionFromCurrentZone_Implementation(const FVector& InWorldDirection, bool bIsJump)
{
	auto Zone = GetZone();
	if (!Zone)
	{
		return false;
	}

	auto MoveComp = GetAdvMovementComponent();
	if (MoveComp)
	{
		return false;
	}

	FVector ZoneWorldLocation = Zone->GetZoneLocationWorld(MoveComp->LocalZoneLocation);
	return CanTransition(Zone, ZoneWorldLocation, InWorldDirection, bIsJump);
}


bool AAdvKitCharacter::CanTransition_Implementation(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection, bool bIsJump)
{
	//At least one transition can be used
	return GetPossibleTransition(ForZone, ForWorldPosition, InWorldDirection, bIsJump) != nullptr;
}

FRotator AAdvKitCharacter::GetDesiredRotationInZone_Implementation(AAdvKitZone* Zone, const FVector& AtZoneLocation)
{
	FRotator NewRotation = GetActorRotation();

	if (!Zone)
	{
		return NewRotation;
	}

	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return NewRotation;
	}

	FVector ZoneForward = Zone->GetZoneForwardVectorNew(AtZoneLocation);
	FVector ZoneRight = Zone->GetZoneRightVectorNew(AtZoneLocation);
	FVector ZoneUp = Zone->GetZoneUpVectorNew(AtZoneLocation);

	EAdvKitMovementMode ForMovementMode = Zone->GetPhysics();
	//uint8 ForCustomMovementMode = Zone->GetCustomPhysics();

	switch (ForMovementMode)
	{
	case EAdvKitMovementMode::WalkingTightspace:
		//Just look at the zone
		NewRotation = ZoneForward.Rotation();
		break;
	case EAdvKitMovementMode::ClimbingWall:
	case EAdvKitMovementMode::ClimbingLedge:
	case EAdvKitMovementMode::ClimbingLadder:
	{
		FQuat ZoneOrientation = FMatrix(
			ZoneForward,
			ZoneRight,
			ZoneUp,
			FVector::ZeroVector
			).Rotator().Quaternion();


		//Look at zone
		FRotator LocalLookAtRotation(0, 180, 0);
		//Convert to global rotation
		NewRotation = (ZoneOrientation * LocalLookAtRotation.Quaternion()).Rotator();
	}
	break;
	case EAdvKitMovementMode::WalkingBalance:
	{
		FVector GlobalForwardVector = GetActorForwardVector();
		FVector ZoneForwardVector = ZoneRight;

		//DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ZoneForwardVector * 100, 10, FColor::Red, false, -1, 0, 3);

		//Find out which direction to face
		float DotProduct = FVector::DotProduct(ZoneForwardVector, AdvMoveComp->LastNonZeroAcceleration.GetSafeNormal());
		if (DotProduct > AdvMoveComp->MaxBalanceTurnAroundDot)
		{
			GlobalForwardVector = ZoneForwardVector;
		}
		else if (DotProduct < -AdvMoveComp->MaxBalanceTurnAroundDot)
		{
			GlobalForwardVector = -ZoneForwardVector;
		}
		//Not going forwards or backwards, so the character should align the way it is already facing
		else
		{
			GlobalForwardVector = ZoneForwardVector*FVector::DotProduct(ZoneForwardVector, GlobalForwardVector);
		}

		//GlobalForwardVector = ZoneForwardVector;
		GlobalForwardVector.Normalize();

		//Convert to global space
		FQuat GlobalDesiredQuat = GlobalForwardVector.Rotation().Quaternion();

		//Calculate delta degrees and lerp alpha
		FQuat CurrentQuat = GetActorQuat();
		float DegreeDifference = FMath::RadiansToDegrees<float>(FMath::Acos(FVector::DotProduct(GlobalDesiredQuat.GetAxisX(), CurrentQuat.GetAxisX())));
		float Alpha = FMath::Clamp<float>(FMath::FInterpConstantTo(0, DegreeDifference, GetWorld()->DeltaTimeSeconds, AdvMoveComp->BalanceRotationRate) / DegreeDifference, 0, 1);

		//Apply interpolation and set new rotation
		FQuat NewQuat = FQuat::Slerp(GetActorQuat(), GlobalDesiredQuat, Alpha);
		NewRotation = NewQuat.Rotator();
	}
	break;
	case EAdvKitMovementMode::CustomZone:
		break;
	case EAdvKitMovementMode::None: break;
	case EAdvKitMovementMode::Walking: break;
	case EAdvKitMovementMode::NavWalking: break;
	case EAdvKitMovementMode::Falling: break;
	case EAdvKitMovementMode::Swimming: break;
	case EAdvKitMovementMode::Flying: break;
	case EAdvKitMovementMode::ClimbingCeiling: break;
	case EAdvKitMovementMode::ActionDriven: break;
	case EAdvKitMovementMode::Custom: break;
	default: break;
	}

	return NewRotation;
}

FVector AAdvKitCharacter::GetDesiredOffsetFromZone_Implementation(AAdvKitZone* Zone, const FVector& AtZoneLocation)
{
	if (!Zone)
	{
		return FVector::ZeroVector;
	}

	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return FVector::ZeroVector;
	}

	EAdvKitMovementMode ForMovementMode = Zone->GetPhysics();
	//uint8 ForCustomMovementMode = Zone->GetCustomPhysics();

	FVector LocalOffset = FVector::ZeroVector;

	switch (ForMovementMode)
	{
	case EAdvKitMovementMode::ClimbingLedge:
		LocalOffset = AdvMoveComp->LedgeOffset;
		break;
	case EAdvKitMovementMode::ClimbingWall:
		LocalOffset = AdvMoveComp->WallOffset;
		break;
	case EAdvKitMovementMode::ClimbingLadder:
		LocalOffset = AdvMoveComp->LadderOffset;
		break;
	case EAdvKitMovementMode::ClimbingCeiling:
		LocalOffset = AdvMoveComp->CeilingOffset;
		break;
	case EAdvKitMovementMode::WalkingTightspace:
		LocalOffset = AdvMoveComp->TightSpaceOffset;
		break;
	case EAdvKitMovementMode::WalkingBalance:
		LocalOffset = AdvMoveComp->BalanceOffset;
		break;
	case EAdvKitMovementMode::CustomZone:
		break;
	default:
		break;
	}

	//Transform desired offsets into world space using the location orienation inside the current zone
	FVector OffsetFromZone =
		Zone->GetZoneForwardVectorNew(AtZoneLocation) * LocalOffset.X
		+ Zone->GetZoneRightVectorNew(AtZoneLocation) * LocalOffset.Y
		+ Zone->GetZoneUpVectorNew(AtZoneLocation) * LocalOffset.Z;


	return OffsetFromZone;
}

FVector AAdvKitCharacter::GetHalfExtentForZone_Implementation(AAdvKitZone* Zone) const
{
	//GetPawnCapsuleExtent is not safe to be called on the default object
	float Radius, HalfHeight;
	GetCapsuleComponent()->GetScaledCapsuleSize(Radius, HalfHeight);
	FVector LocalExtent(Radius, Radius, HalfHeight);

	return LocalExtent;
}

void AAdvKitCharacter::SetZone_Implementation(AAdvKitZone* NewZone, bool bSnap, bool bClearPendingTransition)
{
	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return;
	}

	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		SetZoneServer(NewZone,bSnap,bClearPendingTransition);
	}

	UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::SetZone %s"), *GetNameSafe(NewZone));
	SetBase(
		IsValid(NewZone) 
		? Cast<UPrimitiveComponent>(NewZone->GetRootComponent()) 
		: nullptr);

	if (PendingTransition.Zone == NewZone && bClearPendingTransition)
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::SetZone Clearing pending transition for Zone %s, flag is %d"), *GetNameSafe(NewZone), bClearPendingTransition);
		PendingTransition.Clear();
	}

	if (!NewZone)
	{
		return;
	}

	auto AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		return;
	}

	AdvMoveComp->CurrentBalance = 0;

	//Get zone location
	FVector HalfExtent = GetHalfExtentForZone(NewZone);

	UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::SetZone Setting new zone %s location at %s"), *GetNameSafe(NewZone), *GetActorLocation().ToString());
	AdvMoveComp->LocalZoneLocation = NewZone->GetClosestZoneLocationNew(GetActorLocation(), HalfExtent, GetActorRotation());

	//LocationInZone = NewZone->GetClosestZoneLocation(GetActorLocation(), HalfExtent, GetActorRotation());
	//SetZoneLocation(LocationInZone, bSnap);

	if (!bSnap)
	{
		return;
	}

	UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::SetZone Snapping new location at %s"), *GetActorLocation().ToString());
	//Place character according to zone
	const FVector DesiredOffset = GetDesiredOffsetFromZone(NewZone, AdvMoveComp->LocalZoneLocation);
	SetActorLocation(NewZone->GetZoneLocationWorld(AdvMoveComp->LocalZoneLocation) + DesiredOffset);
	SetActorRotation(GetDesiredRotationInZone(NewZone, AdvMoveComp->LocalZoneLocation));
	UpdateComponentTransforms();
	UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::SetZone Done with zone loc: %s"),*AdvMoveComp->LocalZoneLocation.ToString());
}

bool AAdvKitCharacter::SetZoneServer_Validate(AAdvKitZone* NewZone, bool bSnap, bool bClearPendingTransition)
{
	return true;
}

void AAdvKitCharacter::SetZoneServer_Implementation(AAdvKitZone* NewZone, bool bSnap, bool bClearPendingTransition)
{
	UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::SetZoneServer %s"), *GetNameSafe(NewZone));
	SetZone(NewZone, bSnap, bClearPendingTransition);
}

class AAdvKitZone* AAdvKitCharacter::GetZone() const
{
	auto BaseComp = GetMovementBase();
	if (!BaseComp)
	{
		return nullptr;
	}

	auto BaseZone = Cast<AAdvKitZone>(BaseComp->GetOwner());
	return BaseZone;
}

float AAdvKitCharacter::GetDotToClosestLocation(AAdvKitZone* Zone, FVector LocalCharacterDirection)
{
	FVector GlobalDirection = GetActorTransform().TransformVector(LocalCharacterDirection).GetSafeNormal();

	return FVector::DotProduct(GlobalDirection.GetSafeNormal(), GetDirectionToClosestLocation(Zone));
}

FVector AAdvKitCharacter::GetDirectionToClosestLocation(AAdvKitZone* Zone) const
{
	if (!Zone)
	{
		return FVector::ZeroVector;
	}

	FVector ClosestLocation = Zone->ConstrainPositionToZone(GetActorLocation(), GetHalfExtentForZone(Zone), GetActorRotation());
	FVector Direction = ClosestLocation - GetActorLocation();

	return Direction.GetSafeNormal();
}

float AAdvKitCharacter::GetZoneDotToLocation(AAdvKitZone* Zone, FVector LocalZoneDirection)
{
	if (!Zone)
	{
		return 0.0f;
	}

	FTransform ZoneTransform = Zone->GetClosestZoneTransform(GetActorLocation());
	FVector LocalCharacterLocation = ZoneTransform.InverseTransformPosition(GetActorLocation());
	float Dot = FVector::DotProduct(LocalZoneDirection.GetSafeNormal(), LocalCharacterLocation.GetSafeNormal());

	//DrawDebugCoordinateSystem(GetWorld(), ZoneTransform.GetLocation(), ZoneTransform.GetRotation().Rotator(), 100, false, 1.0f, 0, 5);
	//UE_LOG(LogAdvKitCharacter, Log, TEXT("AAdvKitCharacter::GetZoneDotToLocation Dot is %f"), Dot);
	return Dot;
}

bool AAdvKitCharacter::CanTransitionTo_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition)
{
	if (PendingTransition.IsValid())
	{
		return false;
	}

	if (!NewZone && !NewTransition)
	{
		return false;
	}

	//Cannot enter zones with item
	if (!bIgnoreItemWhenEnteringZonesAutomatically 
		&& InventoryManager 
		&& (InventoryManager->GetCurrentInventory() || InventoryManager->GetPendingInventory()))
	{
		return false;
	}

	auto Zone = NewTransition ? NewTransition->TargetZone.Get() : NewZone;

	//Already in a zone
	if (!NewTransition && GetZone())
	{
		return false;
	}

	bool bCanUseZone = true;

	auto AdvMoveComp = GetAdvMovementComponent();
	if (AdvMoveComp && Zone)
	{
		auto Properties = AdvMoveComp->GetAdvMovementProperties();
		auto Physics = Zone->GetPhysics();

		switch (Physics)
		{
		case EAdvKitMovementMode::ClimbingCeiling:
			if (!Properties->bCanClimbCeiling)
			{
				bCanUseZone = false;
			}
			break;
		case EAdvKitMovementMode::ClimbingLadder:
			if (!Properties->bCanClimbLadder)
			{
				bCanUseZone = false;
				break;
			}
			
			if(AdvMoveComp->IsFalling())
			{
				FVector LocalVelocity = GetActorTransform().InverseTransformVector(AdvMoveComp->Velocity);
				LocalVelocity.Z = 0;
				bCanUseZone = LocalVelocity.Size() > 0.0f;
			}
			break;
		case EAdvKitMovementMode::ClimbingLedge:
			if (!Properties->bCanClimbLedge)
			{
				bCanUseZone = false;
			}
			break;
		case EAdvKitMovementMode::ClimbingWall:
			if (!Properties->bCanClimbWall)
			{
				bCanUseZone = false;
				break;
			}

			bCanUseZone = (GetDotToClosestLocation(Zone, FVector::ForwardVector) > 0.0f && GetZoneDotToLocation(Zone, FVector::ForwardVector) > 0.0f);
			break;
		case EAdvKitMovementMode::WalkingBalance:
			if (!Properties->bCanWalkBalance)
			{
				bCanUseZone = false;
				break;
			}

			bCanUseZone = GetDotToClosestLocation(Zone, FVector::ForwardVector) > 0.0f;
			break;
		case EAdvKitMovementMode::WalkingTightspace:
			if (!Properties->bCanWalkTightSpace)
			{
				bCanUseZone = false;
				break;
			}

			bCanUseZone = GetDotToClosestLocation(Zone, FVector::ForwardVector) > 0.0f;
			break;
		case EAdvKitMovementMode::None: break;
		case EAdvKitMovementMode::Walking: break;
		case EAdvKitMovementMode::NavWalking: break;
		case EAdvKitMovementMode::Falling: break;
		case EAdvKitMovementMode::Swimming: break;
		case EAdvKitMovementMode::Flying: break;
		case EAdvKitMovementMode::CustomZone: break;
		case EAdvKitMovementMode::ActionDriven: break;
		case EAdvKitMovementMode::Custom: break;
		default: break;
		}
	}

	if (!bCanUseZone)
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("Character %s cannot use zone %s"), *GetNameSafe(this), *GetNameSafe(Zone));
		return false;
	}

	if (Zone && !Zone->IsCharacterSupported(this))
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("Zone %s does not support character %s"), *GetNameSafe(Zone), *GetNameSafe(this));
		return false;
	}

	return true;
}

bool AAdvKitCharacter::TransitionTo_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition, bool bForce)
{
	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return false;
	}

	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		TransitionToServer(NewZone, NewTransition);
	}

	if (PendingTransition.IsValid() && !bForce)
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::TransitionTo Trying to transition to %s, while already transitioning to %s"), *GetNameSafe(NewZone), *GetNameSafe(PendingTransition.Zone));
		return false;
	}

	auto ActualNewZone = NewZone;
	if (!ActualNewZone && NewTransition)
	{
		ActualNewZone = NewTransition->TargetZone.Get();
	}

	UE_LOG(LogAdvKitZone, Verbose, TEXT("AAdvKitCharacter::TransitionTo %s"), *GetNameSafe(ActualNewZone));

	PendingTransition.Set(ActualNewZone, NewTransition);

	return true;
}

bool AAdvKitCharacter::TransitionToServer_Validate(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition, bool bForce)
{
	return true;
}

void AAdvKitCharacter::TransitionToServer_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition, bool bForce)
{
	TransitionTo(NewZone, NewTransition, bForce);
}


bool AAdvKitCharacter::UseClosestUseable()
{
	AAdvKitUsable* ClosestUseable = nullptr;
	float LastDistance = 0;

	AAdvKitInventoryItem* CurrentInventory = nullptr;
	if (InventoryManager)
	{
		CurrentInventory = InventoryManager->GetCurrentInventory();
	}

	//Get all overlapping usables
	TSet<AActor*> OverlappingUsables;
	GetOverlappingActors(OverlappingUsables, AAdvKitUsable::StaticClass());

	if (OverlappingUsables.Num() == 0)
	{
		//Nothing overlapped
		return false;
	}

	//Filter results to get the closest one
	for (auto Usable : OverlappingUsables)
	{
		AAdvKitUsable* TempUsable = Cast<AAdvKitUsable>(Usable);
		if (!TempUsable)
		{
			//No usable
			continue;
		}

		//Cannot be used
		if (!TempUsable->CanBeUsedBy(this, CurrentInventory))
		{
			continue;
		}

		//Set first result
		if (!ClosestUseable)
		{
			ClosestUseable = TempUsable;
			LastDistance = FVector::Dist(ClosestUseable->GetActorLocation(), GetActorLocation());
			continue;
		}

		//Check if current candidate is closer
		float NewDistance = FVector::Dist(TempUsable->GetActorLocation(), GetActorLocation());
		if (NewDistance < LastDistance)
		{
			ClosestUseable = TempUsable;
			LastDistance = NewDistance;
		}
	}

	if (!ClosestUseable)
	{
		//Nothing was found
		return false;
	}

	//Use found usable
	Use(ClosestUseable, CurrentInventory);
	return true;
}

void AAdvKitCharacter::SetMouseCursorEnabled(bool bEnabled) const
{
	APlayerController* PlayerController = Cast<APlayerController>(this->Controller);
	if (!IsValid(PlayerController))
	{
		return;
	}

	//Set mouse cursor flag
	PlayerController->bShowMouseCursor = bEnabled;

	//Place mouse in the center of the screen
	ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(PlayerController->Player);
	FViewport* Viewport = LocalPlayer->ViewportClient->Viewport;
	FIntPoint ScreenSize = Viewport->GetSizeXY();
	Viewport->SetMouse(ScreenSize.X / 2, ScreenSize.Y / 2);

	//Fix to prevent the cursor being restricted by the window border, thus preventing proper rotation by mouse movement
	if (!bEnabled)
	{
		FInputModeGameOnly InputMode;
		PlayerController->SetInputMode(InputMode);
		return;
	}

	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	InputMode.SetHideCursorDuringCapture(false);
	PlayerController->SetInputMode(InputMode);
}


FRotator AAdvKitCharacter::GetAimOffsets_Implementation() const
{
	const FVector AimDirWS = GetBaseAimRotation().Vector();
	const FVector AimDirLS = ActorToWorld().InverseTransformVectorNoScale(AimDirWS);
	const FRotator AimRotLS = AimDirLS.Rotation();

	return AimRotLS;
}


bool AAdvKitCharacter::IsDodging_Implementation() const
{
	auto AnimInst = GetMesh()->GetAnimInstance();
	if (AnimInst)
	{
		for (auto State : AnimInst->ActiveAnimNotifyState)
		{
			if (!IsValid(State.NotifyStateClass))
			{
				continue;
			}

			if (State.NotifyStateClass->IsA(UAnimNotifyState_AdvKitDodge::StaticClass()))
			{
				return true;
			}
		}
	}

	return false;
}

void AAdvKitCharacter::AddConditionalMovementInput(FVector WorldDirection, FVector LocalDirection, float ScaleValue, bool bForce)
{
	FVector Direction = WorldDirection;

	auto MoveComp = GetAdvMovementComponent();
	if (MoveComp)
	{
		switch (MoveComp->GetAdvMovementMode())
		{
		case EAdvKitMovementMode::ClimbingWall:
		case EAdvKitMovementMode::ClimbingLadder:
			Direction = GetActorRotation().RotateVector(LocalDirection);
			break;
		case EAdvKitMovementMode::ClimbingLedge:
			LocalDirection.X = LocalDirection.Z;
			LocalDirection.Z = 0;
			Direction = GetActorRotation().RotateVector(LocalDirection);
			break;
		case EAdvKitMovementMode::WalkingTightspace:
			if (GetZone())
			{
				Direction = WorldDirection.ProjectOnTo(GetZone()->GetClosestZoneRightVector(GetActorLocation()));
			}
			break;
		default:
			break;
		}
	}

	AddMovementInput(Direction, ScaleValue, bForce);
}

void AAdvKitCharacter::SetAnimRootMotionTranslationScaleBP(float InAnimRootMotionTranslationScale)
{
	SetAnimRootMotionTranslationScale(InAnimRootMotionTranslationScale);
}

void AAdvKitCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	CameraController = Cast<UAdvKitCameraController>(GetComponentByClass(UAdvKitCameraController::StaticClass()));

	if (GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Instigator = this;
	SpawnParameters.Owner = this;

	//Create inventory manager
	if(IsValid(InventoryManagerClass))
	{
		InventoryManager = GetWorld()->SpawnActor<AAdvKitInventoryManager>(InventoryManagerClass, SpawnParameters);
		if (InventoryManager)
		{
			InventoryManager->AttachToActor(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

			if (!this->IsLocallyControlled())
			{
				InventoryManager->SetAutonomousProxy(true);
			}
		}
	}
}

void AAdvKitCharacter::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	if (InventoryManager)
	{
		InventoryManager->Destroy();
	}
}

void AAdvKitCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//Set active target automatically if not locked
	if (!bLockTarget)
	{
		auto* Target = GetBestTarget(GetAllAvailableTargets());
		SetTarget(Target, false);
	}
}

void AAdvKitCharacter::CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult)
{
	Super::CalcCamera(DeltaTime, OutResult);

	if (!IsValid(CameraController))
	{
		return;
	}

	OutResult.Location = CameraController->GetViewLocation(OutResult.Location);
	OutResult.Rotation = CameraController->GetViewRotation(OutResult.Rotation);
}


void AAdvKitCharacter::NotifyActorEndOverlap(class AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);
}

void AAdvKitCharacter::NotifyActorBeginOverlap(class AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return;
	}

	if (!bEnterZonesFromOverlapAutomatically)
	{
		return;
	}

	//Check if overlapped actor is a zone
	AAdvKitZone* OverlappedZone = Cast<AAdvKitZone>(OtherActor);
	if (CanTransitionTo(OverlappedZone))
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("Entering Zone from Overlap: %s"), *GetNameSafe(OverlappedZone));
		TransitionTo(OverlappedZone);
	}
}

void AAdvKitCharacter::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return;
	}

	if (!bEnterZonesFromHitAutomatically)
	{
		return;
	}

	//Enter hit zone
	AAdvKitZone *NewZone = Cast<AAdvKitZone>(Hit.Actor.Get());
	if (CanTransitionTo(NewZone))
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("Entering Zone from Hit: %s"), *GetNameSafe(NewZone));
		TransitionTo(NewZone);
	}
}

bool AAdvKitCharacter::ShouldTakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const 
{
	if (!Super::ShouldTakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser))
	{
		return false;
	}

	if (bInvincibleDuringDodge && IsDodging())
	{
		return false;
	}

	return true;
}

float AAdvKitCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	if (!ShouldTakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser))
	{
		return 0.f;
	}

	float ActualDamage = BlockDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	ActualDamage = Super::TakeDamage(ActualDamage, DamageEvent, EventInstigator, DamageCauser);

	//Avoid calling the died method multiple times
	bool bWasDeadPrior = Health <= 0;

	Health -= ActualDamage;

	if (Health <= 0 && !bWasDeadPrior)
	{
		Died(EventInstigator, DamageEvent, GetActorLocation());
	}

	return ActualDamage;
}

float AAdvKitCharacter::BlockDamage(float Damage, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	float ActualDamage = Damage;

	//Call block method depending on damage event class
	UDamageType const* const DamageTypeCDO = DamageEvent.DamageTypeClass ? DamageEvent.DamageTypeClass->GetDefaultObject<UDamageType>() : GetDefault<UDamageType>();
	if (DamageEvent.IsOfType(FPointDamageEvent::ClassID))
	{
		FPointDamageEvent* const PointDamageEvent = (FPointDamageEvent*)&DamageEvent;
		ActualDamage = BlockPointDamage(ActualDamage, DamageTypeCDO, PointDamageEvent->HitInfo.ImpactPoint, PointDamageEvent->HitInfo.ImpactNormal, PointDamageEvent->HitInfo.Component.Get(), PointDamageEvent->HitInfo.BoneName, PointDamageEvent->ShotDirection, EventInstigator, DamageCauser);
	}
	else if (DamageEvent.IsOfType(FRadialDamageEvent::ClassID))
	{
		FRadialDamageEvent* const RadialDamageEvent = (FRadialDamageEvent*)&DamageEvent;
		FHitResult const& Hit = (RadialDamageEvent->ComponentHits.Num() > 0) ? RadialDamageEvent->ComponentHits[0] : FHitResult();
		ActualDamage = BlockRadialDamage(ActualDamage, DamageTypeCDO, RadialDamageEvent->Origin, Hit, EventInstigator, DamageCauser);
	}

	//Block any remaining damage
	if (ActualDamage != 0.f)
	{
		ActualDamage = BlockAnyDamage(ActualDamage, DamageTypeCDO, EventInstigator, DamageCauser);
	}

	//In case the character holds a weapon have it be possible for the weapon to block damage
	if (!InventoryManager)
	{
		return ActualDamage;
	}

	AAdvKitWeapon* Weapon = Cast<AAdvKitWeapon>(InventoryManager->GetCurrentInventory());
	if (!Weapon)
	{
		return ActualDamage;
	}

	return Weapon->BlockDamage(ActualDamage, DamageEvent, EventInstigator, DamageCauser);
}

float AAdvKitCharacter::BlockAnyDamage_Implementation(float DamageReceived, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	//Dummy Implementation, does nothing
	return DamageReceived;
}

float AAdvKitCharacter::BlockRadialDamage_Implementation(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, AActor* DamageCauser)
{
	//Dummy Implementation, does nothing
	return DamageReceived;
}

float AAdvKitCharacter::BlockPointDamage_Implementation(float DamageReceived, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, AActor* DamageCauser)
{
	//Dummy Implementation, does nothing
	return DamageReceived;
}

void AAdvKitCharacter::Jump()
{
	auto* AdvMoveComp = GetAdvMovementComponent();
	if (!AdvMoveComp)
	{
		Super::Jump();
		return;
	}

	//Try to jump in zone
	if (JumpUpZone())
	{
		return;
	}

	if (GetZone())
	{
		return;
	}

	Super::Jump();
}


void AAdvKitCharacter::Crouch(bool bClientSimulation)
{
	if (LetGoOfZone())
	{
		return;
	}

	Super::Crouch(bClientSimulation);
}


void AAdvKitCharacter::FaceRotation(FRotator NewControlRotation, float DeltaSeconds)
{
	if (GetZone())
	{
		return;
	}

	if (bFaceLockedTarget && bLockTarget && CurrentTarget)
	{
		FVector LocationDifference = CurrentTarget->GetActorLocation() - GetActorLocation();
		LocationDifference.Z = 0;
		NewControlRotation = LocationDifference.Rotation();
	}

	Super::FaceRotation(NewControlRotation, DeltaSeconds);
	return;

	//SetActorRotation(NewControlRotation);
}

bool AAdvKitCharacter::CanJumpInternal_Implementation() const
{
	if (GetZone())
	{
		return true;
	}

	return Super::CanJumpInternal_Implementation();
}

void AAdvKitCharacter::SetBase(UPrimitiveComponent* NewBase, const FName BoneName, bool bNotifyActor)
{
	bool bNewBase = BasedMovement.MovementBase != NewBase;

	UE_LOG(LogAdvKitCharacter, VeryVerbose, TEXT("AAdvKitCharacter::SetBase %s"), *GetNameSafe(NewBase));

	if (bNewBase)
	{
		//Restore blocking collision flags to normal when the new base is no ledge
		if (!IsValid(NewBase) || !IsValid(NewBase->GetOwner()) || !NewBase->GetOwner()->IsA(AAdvKitZone::StaticClass()))
		{
			for (auto Channel : CollisionChannelsToIgnoreInZones)
			{
				UE_LOG(LogAdvKitCharacter, VeryVerbose, TEXT("Setting collision channel %d to block."), static_cast<int32>(Channel.GetValue()));
				GetCapsuleComponent()->SetCollisionResponseToChannel(Channel.GetValue(), ECollisionResponse::ECR_Block);
			}
			GetAdvMovementComponent()->MoveComponentFlags = MOVECOMP_NoFlags;
		}
		else
		{
			//If the character walked over a zone (e.g. a ledge) and is not already doing a transition try to transition to the ledge
			if (GetLocalRole() == ROLE_Authority && !PendingTransition.IsValid())
			{
				auto Zone = Cast<AAdvKitZone>(NewBase->GetOwner());
				if (CanTransitionTo(Zone))
				{
					UE_LOG(LogAdvKitZone, Verbose, TEXT("Transition to from Set Base: %s"), *GetNameSafe(Zone));
					TransitionTo(Zone);
				}
			}

			//Set collision channels to ignore to allow undisturbed movement while using a ledge
			for (auto Channel : CollisionChannelsToIgnoreInZones)
			{
				UE_LOG(LogAdvKitCharacter, VeryVerbose, TEXT("Setting collision channel %d to ignore."), (int32)Channel.GetValue());
				GetCapsuleComponent()->SetCollisionResponseToChannel(Channel.GetValue(), ECollisionResponse::ECR_Ignore);
			}
			GetAdvMovementComponent()->MoveComponentFlags = MOVECOMP_IgnoreBases;
		}
	}

	Super::SetBase(NewBase, BoneName, bNotifyActor);
}

bool AAdvKitCharacter::IsAlive_Implementation()
{
	return Health > 0.0f;
}

void AAdvKitCharacter::Died_Implementation(AController* Killer, struct FDamageEvent const& DamageEvent, FVector HitLocation)
{
	if (OnDied.IsBound())
	{
		OnDied.Broadcast(this);
	}

	if (!InventoryManager)
	{
		return;
	}

	InventoryManager->OwnerDied();
}

float AAdvKitCharacter::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	AnimMontage = GetMappedAnimMontage(AnimMontage);

	//Replicate to server
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		PlayAnimMontageServer(AnimMontage, InPlayRate, StartSectionName);
	}

	//Set parameters
	if (GetLocalRole() == ROLE_Authority || GetLocalRole() == ROLE_AutonomousProxy)
	{
		RepAnimMontage.SetNewMontage(AnimMontage, InPlayRate, StartSectionName);
	}

	//Play the anim montage
	return Super::PlayAnimMontage(AnimMontage, InPlayRate, StartSectionName);
}

void AAdvKitCharacter::StopAnimMontage(class UAnimMontage* AnimMontage)
{
	AnimMontage = GetMappedAnimMontage(AnimMontage);

	//Replicate to server
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		StopAnimMontageServer(AnimMontage);
	}

	//Set parameters
	if (GetLocalRole() == ROLE_Authority || GetLocalRole() == ROLE_AutonomousProxy)
	{
		RepAnimMontage.SetNewMontage(AnimMontage, 1.0f, NAME_None, false);
	}

	Super::StopAnimMontage(AnimMontage);
}

UAnimMontage* AAdvKitCharacter::GetMappedAnimMontage(UAnimMontage* AnimMontage)
{
	auto NewMontagePtr = MappedMontages.Find(AnimMontage);
	if (!NewMontagePtr)
	{
		return AnimMontage;
	}

	UAnimMontage* NewMontage = *NewMontagePtr;
	if(IsValid(NewMontage))
	{
		return NewMontage;
	}

	return AnimMontage;
}

void AAdvKitCharacter::OnRep_RepAnimMontage(FRepAdvKitAnimMontage OldRepAnimMontage)
{
	if (RepAnimMontage.AnimCounter == OldRepAnimMontage.AnimCounter)
	{
		return;
	}

	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		return; //TODO Hotfix because authority repnotify causes action montages to play twice. When the first locally started montage is aborted it ends the action
	}

	//Montage got repliated, play it

	if (RepAnimMontage.bPlay)
	{
		PlayAnimMontage(RepAnimMontage.Montage, RepAnimMontage.PlayRate, RepAnimMontage.StartSectionName);
	}
	else
	{
		StopAnimMontage(RepAnimMontage.Montage);
	}
}

bool AAdvKitCharacter::PlayAnimMontageServer_Validate(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	return true;
}

void AAdvKitCharacter::PlayAnimMontageServer_Implementation(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	PlayAnimMontage(AnimMontage, InPlayRate, StartSectionName);
}

bool AAdvKitCharacter::StopAnimMontageServer_Validate(class UAnimMontage* AnimMontage)
{
	return true;
}

void AAdvKitCharacter::StopAnimMontageServer_Implementation(class UAnimMontage* AnimMontage)
{
	StopAnimMontage(AnimMontage);
}

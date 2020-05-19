// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitInventoryItem.h"
#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitInventoryManager.h"
#include "Items/AdvKitPickup.h"

#include "GameFramework/MovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"

AAdvKitInventoryItem::AAdvKitInventoryItem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AttachmentSocketName = NAME_None;

	SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
	bReplicates = true;
	bNetUseOwnerRelevancy = true;
	
	RepItemState.State = EAdvKitInventoryState::Inactive;
	RepItemState.bInstantChange = false;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}


void AAdvKitInventoryItem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAdvKitInventoryItem, RepItemState);
}

void AAdvKitInventoryItem::BeginPlay()
{
	Super::BeginPlay();

	if (RepItemState.State == EAdvKitInventoryState::Inactive)
	{
		SetActorHiddenInGame(true);
	}
	else if(RepItemState.State == EAdvKitInventoryState::Active)
	{
		//UE_LOG(LogAdvKitItem, Warning, TEXT("BeginPlay Equip of %s"), *GetNameSafe(this));
		OnEquip(true);
		OnEquipped(RepItemState.bInstantChange);
	}
}

void AAdvKitInventoryItem::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//Item should be equipped
	if (RepItemState.bWantsToEquip && RepItemState.State == EAdvKitInventoryState::Inactive)
	{
		RepItemState.bWantsToEquip = false;
		Equip();
	}

	//Item should be unequipped
	if (RepItemState.bWantsToUnequip && RepItemState.State == EAdvKitInventoryState::Active)
	{
		RepItemState.bWantsToUnequip = false;
		Uneqiup();
	}
}

void AAdvKitInventoryItem::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//Remove from owner inventory
	auto* Character = Cast<AAdvKitCharacter>(Instigator);
	if (Character && Character->InventoryManager)
	{
		Character->InventoryManager->RemoveInventory(this);
	}

	Super::EndPlay(EndPlayReason);
}

UTexture2D* AAdvKitInventoryItem::GetInventoryIconTexture(TSubclassOf<AAdvKitInventoryItem> InventoryClass)
{
	if(!IsValid(InventoryClass))
	{
		return nullptr;
	}

	auto DefaultObject = Cast<AAdvKitInventoryItem>(InventoryClass->GetDefaultObject());
	if(!IsValid(DefaultObject))
	{
		return nullptr;
	}

	return DefaultObject->Icon;
}

bool AAdvKitInventoryItem::CanBeCombinedWith_Implementation(class AAdvKitInventoryItem* With)
{
	return false;
}

class AAdvKitInventoryItem* AAdvKitInventoryItem::CombinedWith_Implementation(class AAdvKitInventoryItem* With)
{
	return NULL;
}

void AAdvKitInventoryItem::SetItemState(EAdvKitInventoryState NewState, bool bInstant)
{
	RepItemState.State = NewState;
	RepItemState.bInstantChange = bInstant;
}

EAdvKitInventoryState AAdvKitInventoryItem::GetItemState()
{
	return RepItemState.State;
}

void AAdvKitInventoryItem::OnRep_ItemState(FRepAdvKitInventoryState PreviousRepItemState)
{
	//UE_LOG(LogAdvKitItem, Warning, TEXT("OnRep_ItemState of %s"), *GetNameSafe(this));

	//if (!HasActorBegunPlay())
	//{
	//	//UE_LOG(LogAdvKitItem, Warning, TEXT("OnRep_ItemState NotBegunPlay of %s"), *GetNameSafe(this));
	//	return;
	//}

	switch (RepItemState.State)
	{
	case EAdvKitInventoryState::Inactive:
		//Skipped a state because server changed states faster than it replicated
		if (PreviousRepItemState.State == EAdvKitInventoryState::Active)
		{
			OnUneqiup(true);
		}
		OnUneqiupped(RepItemState.bInstantChange);
		break;
	case EAdvKitInventoryState::Equipping:
		//UE_LOG(LogAdvKitItem, Warning, TEXT("Replicated Equip EAdvKitInventoryState::Equipping of %s"), *GetNameSafe(this));
		OnEquip(RepItemState.bInstantChange);
		break;
	case EAdvKitInventoryState::Active:
		//UE_LOG(LogAdvKitItem, Warning, TEXT("Replicated Equip EAdvKitInventoryState::Active of %s"), *GetNameSafe(this));
		//Skipped a state because server changed states faster than it replicated
		if (PreviousRepItemState.State == EAdvKitInventoryState::Inactive) 
		{
			OnEquip(true);
		}
		OnEquipped(RepItemState.bInstantChange);
		break;
	case EAdvKitInventoryState::Uneqiupping:
		OnUneqiup(RepItemState.bInstantChange);
		break;
	default: break;
	}
}

void AAdvKitInventoryItem::Equip(bool bInstant)
{
	if (GetItemState() == EAdvKitInventoryState::Active)
	{
		return;
	}

	if (Role < ROLE_Authority)
	{
		EquipServer(bInstant);
	}

	if (!CanEquip(bInstant))
	{
		RepItemState.bWantsToEquip = true;
		return;
	}

	SetItemState(EAdvKitInventoryState::Equipping);
	OnEquip(bInstant);

	//Timed equip
	if (!bInstant && EquipTime > 0)
	{
		GetWorld()->GetTimerManager().SetTimer(EquipTimerHandle,FTimerDelegate::CreateUObject(this, &AAdvKitInventoryItem::Equipped, false), EquipTime, false);
		return;
	}

	//Instant equip
	Equipped(bInstant);
}

bool AAdvKitInventoryItem::EquipServer_Validate(bool bInstant)
{
	return true;
}

void AAdvKitInventoryItem::EquipServer_Implementation(bool bInstant)
{
	Equip(bInstant);
}

void AAdvKitInventoryItem::Uneqiup(bool bInstant)
{
	if (GetItemState() == EAdvKitInventoryState::Uneqiupping)
	{
		return;
	}

	if (Role < ROLE_Authority)
	{
		UneqiupServer(bInstant);
	}

	if (!CanUneqiup(bInstant))
	{
		RepItemState.bWantsToUnequip = true;
		return;
	}

	SetItemState(EAdvKitInventoryState::Uneqiupping);
	OnUneqiup(bInstant);

	//Timed unequip
	if (!bInstant && UneqiupTime > 0)
	{
		GetWorld()->GetTimerManager().SetTimer(EquipTimerHandle,FTimerDelegate::CreateUObject(this, &AAdvKitInventoryItem::Uneqiupped, false), UneqiupTime, false);
		return;
	}

	//Instant unequip
	Uneqiupped(bInstant);
}


bool AAdvKitInventoryItem::UneqiupServer_Validate(bool bInstant)
{
	return true;
}

void AAdvKitInventoryItem::UneqiupServer_Implementation(bool bInstant)
{
	Uneqiup(bInstant);
}

bool AAdvKitInventoryItem::CanEquip_Implementation(bool bInstant)
{
	return true;
}

bool AAdvKitInventoryItem::CanUneqiup_Implementation(bool bInstant)
{
	return true;
}

void AAdvKitInventoryItem::Equipped(bool bInstant)
{
	//If the item has been unequipped before the timer ran out, do not equip
	if (GetItemState() != EAdvKitInventoryState::Equipping)
	{
		return;
	}

	SetItemState(EAdvKitInventoryState::Active);
	OnEquipped(bInstant);
}

void AAdvKitInventoryItem::Uneqiupped(bool bInstant)
{
	//If the item has been equipped before the timer ran out, do not unequip
	if (GetItemState() != EAdvKitInventoryState::Uneqiupping)
	{
		return;
	}

	SetItemState(EAdvKitInventoryState::Inactive);
	OnUneqiupped(bInstant);
}

void AAdvKitInventoryItem::OnEquip_Implementation(bool bInstant)
{
	AttachToCharacter();

	if (bInstant || !EquipMontage)
	{
		return;
	}

	AAdvKitCharacter* AdvOwner = Cast<AAdvKitCharacter>(Instigator);
	if (AdvOwner)
	{
		AdvOwner->PlayAnimMontage(EquipMontage);
	}
}

void AAdvKitInventoryItem::OnEquipped_Implementation(bool bInstant)
{
}

void AAdvKitInventoryItem::OnUneqiup_Implementation(bool bInstant)
{
	if (bInstant || !UneqiupMontage)
	{
		return;
	}
	
	AAdvKitCharacter* AdvOwner = Cast<AAdvKitCharacter>(Instigator);
	if (AdvOwner)
	{
		AdvOwner->PlayAnimMontage(UneqiupMontage);
	}
}

void AAdvKitInventoryItem::OnUneqiupped_Implementation(bool bInstant)
{
	DetachFromCharacter();
}

void AAdvKitInventoryItem::AttachToCharacter_Implementation()
{
	AAdvKitCharacter* Character = Cast<AAdvKitCharacter>(Instigator);
	if (Character)
	{
		//SetActorLocation(Character->GetMesh()->GetSocketLocation(AttachmentSocketName));
		//SetActorRotation(Character->GetMesh()->GetSocketRotation(AttachmentSocketName));
		AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, AttachmentSocketName);
	}

	SetActorHiddenInGame(false);
}

void AAdvKitInventoryItem::DetachFromCharacter_Implementation()
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	SetActorHiddenInGame(true);
}

void AAdvKitInventoryItem::OwnerDied_Implementation()
{
	if (Role < ROLE_Authority)
	{
		return;
	}

	if (bDropOnDeath)
	{
		Drop(Instigator->GetVelocity());
	}

	DetachFromCharacter();
	Destroy();
}

void AAdvKitInventoryItem::Drop_Implementation(FVector Velocity)
{
	if (!DroppedPickupClass)
	{
		return;
	}

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	FVector SpawnLocation = Instigator ? Instigator->GetActorLocation() : GetActorLocation();
	FRotator SpawnRotation = Instigator ? Instigator->GetActorRotation() : GetActorRotation();

	auto* Drop = GetWorld()->SpawnActor<AAdvKitPickup>(DroppedPickupClass, SpawnLocation, SpawnRotation, Params);
	if (!Drop)
	{
		return;
	}

	
	auto MoveComp = Cast<UMovementComponent>(Drop->GetComponentByClass(UMovementComponent::StaticClass()));
	if (!MoveComp)
	{
		return;
	}

	MoveComp->Velocity = Velocity;
}
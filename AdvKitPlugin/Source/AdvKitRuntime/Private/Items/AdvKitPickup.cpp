

#include "Items/AdvKitPickup.h"
#include "Items/AdvKitInventoryItem.h"
#include "Player/AdvKitCharacter.h"
#include "TimerManager.h"
#include "AdvKitLogCategories.h"

AAdvKitPickup::AAdvKitPickup(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bActive = true;
	bDestroyOnPickup = false;
	bRespawnAfterPickup = true;
	RespawnTime = 2.0f;
	bCanBePickedUpWithUse = true;
	bCanBePickedUpByOverlap = true;

	SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
	bReplicates = true;
}

void AAdvKitPickup::NotifyActorBeginOverlap(class AActor* Other)
{
	Super::NotifyActorBeginOverlap(Other);

	if (!bActive || !bCanBePickedUpByOverlap)
	{
		return;
	}

	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}


	AAdvKitCharacter* Character = Cast<AAdvKitCharacter>(Other);
	if (!IsValid(Character))
	{
		return;
	}

	if (CanBePickedUpBy(Character))
	{
		PickedUpBy(Character);
	}
}


bool AAdvKitPickup::CanBePickedUpBy_Implementation(class AAdvKitCharacter* Character)
{
	if (!IsValid(Character))
	{
		return false;
	}

	if (!Character->IsAlive())
	{
		return false;
	}

	return bActive;
}

bool AAdvKitPickup::CanBeUsedBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	return bCanBePickedUpWithUse && CanBePickedUpBy(Character);
}

void AAdvKitPickup::UsedBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	Super::UsedBy_Implementation(Character, WithItem);

	if (CanBeUsedBy(Character, WithItem))
	{
		PickedUpBy(Character, WithItem);
	}
}


void AAdvKitPickup::Respawn_Implementation()
{
	GetWorldTimerManager().ClearTimer(RespawnTimerHandle);
	SetActorHiddenInGame(false);
	bActive = true;
}

void AAdvKitPickup::PickedUpBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	bActive = false;

	if (bDestroyOnPickup)
	{
		if (!Destroy())
		{
			UE_LOG(LogAdvKit, Error, TEXT("Pickup %s wants to be destroyed, but can't."), *GetName());
		}
	}
	else if (bRespawnAfterPickup)
	{
		GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &AAdvKitPickup::Respawn, RespawnTime, false);
		SetActorHiddenInGame(true);
	}
}


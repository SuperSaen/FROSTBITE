// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitInventoryPickup.h"
#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitInventoryManager.h"
#include "Items/AdvKitInventoryItem.h"

AAdvKitInventoryPickup::AAdvKitInventoryPickup(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bDestroyOnPickup = true;
	bRespawnAfterPickup = false;
}

void AAdvKitInventoryPickup::PickedUpBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	if (!IsValid(Character))
	{
		return;
	}

	if (!IsValid(Character->InventoryManager))
	{
		return;
	}

	FActorSpawnParameters Params;
	Params.Owner = Character->InventoryManager;
	Params.Instigator = GetInstigator();
	auto NewInventory = GetWorld()->SpawnActor<AAdvKitInventoryItem>(SpawnedInventoryClass, GetActorLocation(), GetActorRotation(),Params);
	if (!IsValid(NewInventory))
	{
		return;
	}

	NewInventory->SetReplicates(true);
	Character->InventoryManager->AddInventory(NewInventory);

	Super::PickedUpBy_Implementation(Character, WithItem);
}

// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitAmmunitionPickup.h"
#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitInventoryManager.h"
#include "Items/AdvKitInventoryItem.h"
#include "Items/AdvKitWeapon.h"

AAdvKitAmmunitionPickup::AAdvKitAmmunitionPickup(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Ammunition = 0;
	bDestroyOnPickup = true;
	bRespawnAfterPickup = false;
}

void AAdvKitAmmunitionPickup::PickedUpBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	Super::PickedUpBy_Implementation(Character, WithItem);

	if (!IsValid(Character))
	{
		return;
	}

	if (!IsValid(Character->InventoryManager))
	{
		return;
	}

	//Try to get the weapon
	AAdvKitInventoryItem* Item = Character->InventoryManager->GetInventoryByClass(AmmuntionForWeapon);
	AAdvKitWeapon* Weapon = Cast<AAdvKitWeapon>(Item);
	if (!Weapon)
	{
		return;
	}

	Weapon->AddAmmunition(Ammunition);
}

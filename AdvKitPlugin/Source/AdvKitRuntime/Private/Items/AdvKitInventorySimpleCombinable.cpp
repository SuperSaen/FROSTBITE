// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitInventorySimpleCombinable.h"

AAdvKitInventorySimpleCombinable::AAdvKitInventorySimpleCombinable(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CombinableWithClass = nullptr;
	CombinationResultClass = nullptr;
}


bool AAdvKitInventorySimpleCombinable::CanBeCombinedWith_Implementation(class AAdvKitInventoryItem* With)
{
	if (!CombinableWithClass)
	{
		return false;
	}

	if (!With)
	{
		return false;
	}

	if (With == this)
	{
		return false;
	}

	return With->IsA(CombinableWithClass);
}

class AAdvKitInventoryItem* AAdvKitInventorySimpleCombinable::CombinedWith_Implementation(class AAdvKitInventoryItem* With)
{
	if (!CanBeCombinedWith(With))
	{
		return nullptr;
	}

	if (!CombinationResultClass)
	{
		return nullptr;
	}

	AAdvKitInventoryItem* NewInventory = GetWorld()->SpawnActor<AAdvKitInventoryItem>(CombinationResultClass);
	if (!NewInventory)
	{
		return nullptr;
	}

	With->Destroy();
	Destroy();
	
	return NewInventory;
}

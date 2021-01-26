// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitUsableSimpleSwitch.h"
#include "Items/AdvKitInventoryItem.h"

#include "Player/AdvKitCharacter.h"

#include "Net/UnrealNetwork.h"


AAdvKitUsableSimpleSwitch::AAdvKitUsableSimpleSwitch(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	KeyClass = nullptr;
	bActive = false;
	bCanBeActivated = true;
	bCanBeDeactivated = true;
	bReplicates = true;
	SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);

	Root = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, "Root");
	RootComponent = Root;
}

void AAdvKitUsableSimpleSwitch::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAdvKitUsableSimpleSwitch, bActive);
}


bool AAdvKitUsableSimpleSwitch::CanBeUsedBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	if (bActive && !bCanBeDeactivated)
	{
		UE_LOG(LogAdvKitSwitch, Verbose, TEXT("AAdvKitUsableSimpleSwitch::CanBeUsedBy - %s cannot be used (bActive && !bCanBeDeactivated)"), *GetNameSafe(this));
		return false;
	}

	if (!bActive && !bCanBeActivated)
	{
		UE_LOG(LogAdvKitSwitch, Verbose, TEXT("AAdvKitUsableSimpleSwitch::CanBeUsedBy - %s cannot be used (!bActive && !bCanBeActivated)"), *GetNameSafe(this));
		return false;
	}

	if (!KeyClass)
	{
		UE_LOG(LogAdvKitSwitch, Verbose, TEXT("AAdvKitUsableSimpleSwitch::CanBeUsedBy - %s No key needed"), *GetNameSafe(this));
		return true;
	}

	if (!WithItem)
	{
		UE_LOG(LogAdvKitSwitch, Verbose, TEXT("AAdvKitUsableSimpleSwitch::CanBeUsedBy - %s cannot because no item was given but one is needed"), *GetNameSafe(this));
		return false;
	}

	if (!WithItem->IsA(KeyClass)) 
	{
		UE_LOG(LogAdvKitSwitch, Verbose, TEXT("AAdvKitUsableSimpleSwitch::CanBeUsedBy - %s cannot because item %s is not of class %s"), *GetNameSafe(this), *GetNameSafe(WithItem), *GetNameSafe(KeyClass));
		return false;
	}

	UE_LOG(LogAdvKitSwitch, Verbose, TEXT("AAdvKitUsableSimpleSwitch::CanBeUsedBy - %s can be used"), *GetNameSafe(this));
	return true;
}

void AAdvKitUsableSimpleSwitch::UsedBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem)
{
	if (!CanBeUsedBy(Character, WithItem))
	{
		return;
	}

	Super::UsedBy_Implementation(Character, WithItem);

	//Broadcast activation changes
	bActive = !bActive;
	if (bActive)
	{
		if (OnActivatedBy.IsBound())
		{
			OnActivatedBy.Broadcast(Character, WithItem);
		}
	}
	else
	{
		if (OnDeactivatedBy.IsBound())
		{
			OnDeactivatedBy.Broadcast(Character, WithItem);
		}
	}
}


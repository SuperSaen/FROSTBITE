// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitInventoryManager.h"
#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitCharacterMovementComponent.h"
#include "Items/AdvKitInventoryItem.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"


AAdvKitInventoryManager::AAdvKitInventoryManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CurrentInventory = nullptr;
	PendingInventory = nullptr;
	PrimaryActorTick.bCanEverTick = true;

	SetRemoteRoleForBackwardsCompat(ROLE_AutonomousProxy);
	bReplicates = true;
	bNetUseOwnerRelevancy = true;
	SetReplicatingMovement(false);
}

void AAdvKitInventoryManager::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAdvKitInventoryManager, PendingInventory);
	DOREPLIFETIME(AAdvKitInventoryManager, CurrentInventory);
	DOREPLIFETIME(AAdvKitInventoryManager, Inventory);
}

void AAdvKitInventoryManager::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AAdvKitCharacter* CharacterOwner = Cast<AAdvKitCharacter>(GetOwner());
	if (!IsValid(CharacterOwner))
	{
		return;
	}

	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	//Go through default inventory, spawn items and add them to the character
	for (FAdvKitInventoryConfig Config : CharacterOwner->DefaultInventory)
	{
		//Ignore empty config
		if (!Config.InventoryClass)
		{
			continue;
		}

		//Try to spawn item
		auto* NewInventory = GetWorld()->SpawnActor<AAdvKitInventoryItem>(Config.InventoryClass);
		if (!NewInventory)
		{
			continue;
		}

		//Add item
		AddInventory(NewInventory, Config.bEquip);
	}
}


void AAdvKitInventoryManager::EndPlay(EEndPlayReason::Type Reason)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	//Clear inventory on exit
	while (Inventory.Num() > 0)
	{
		//Destroying an item might call remove from inventory
		//so it is removed from the array first to prevent an 
		//infinite loop
		auto* Item = Inventory[0];
		Inventory.Remove(Item);

		if (!Item)
		{
			continue;
		}

		Item->Destroy();
	}

	Inventory.Empty();

	Super::EndPlay(Reason);
}

void AAdvKitInventoryManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return;
	}

	//If the current item is not inactive there is no need to equip the pending item
	if (CurrentInventory && CurrentInventory->GetItemState() != EAdvKitInventoryState::Inactive)
	{
		return;
	}
	
	bool bChangedInv = CurrentInventory != PendingInventory;

	//Current item is already unequipped, equip the pending item
	CurrentInventory = PendingInventory;
	PendingInventory = nullptr;
	
	if (bChangedInv && OnActiveItemChanged.IsBound())
	{
		OnActiveItemChanged.Broadcast(this, CurrentInventory);
	}

	if (CurrentInventory)
	{
		CurrentInventory->Equip();
	}
}

AAdvKitInventoryItem* AAdvKitInventoryManager::GetPendingInventory() const
{
	return PendingInventory;
}

AAdvKitInventoryItem* AAdvKitInventoryManager::GetCurrentInventory() const
{
	return CurrentInventory;
}

void AAdvKitInventoryManager::AddInventory_Implementation(class AAdvKitInventoryItem* NewInventory, bool bEquip)
{
	NewInventory->SetInstigator(this->GetInstigator());
	NewInventory->SetOwner(this->GetOwner());
	Inventory.AddUnique(NewInventory);
	
	if (HasAuthority())
	{
		OnRep_InventoryArray();
	}

	if (bEquip)
	{
		SetNewInventory(NewInventory, false);
	}
}

void AAdvKitInventoryManager::RemoveInventory_Implementation(class AAdvKitInventoryItem* RemovedInventory)
{
	Inventory.Remove(RemovedInventory);

	if (HasAuthority())
	{
		OnRep_InventoryArray();
	}

	//Equip something else if the removed item was equipped
	if (CurrentInventory == RemovedInventory)
	{
		CurrentInventory = nullptr;
		//TODO Uneqiup Inventory
		NextItem();
	}
}

AAdvKitInventoryItem* AAdvKitInventoryManager::GetInventoryByClass(TSubclassOf<class AAdvKitInventoryItem> InventoryClass)
{
	if (InventoryClass == nullptr)
	{
		return nullptr;
	}

	for (AAdvKitInventoryItem* Item : Inventory)
	{
		if (Item->IsA(InventoryClass))
		{
			return Item;
		}
	}

	return nullptr;
}

class AAdvKitInventoryItem* AAdvKitInventoryManager::NextItem()
{
	//No items means there is nothing to equip
	if (Inventory.Num() == 0)
	{
		return nullptr;
	}

	//Get the index of the current item and increment it
	AAdvKitInventoryItem* NewInventory = nullptr;
	int32 Index = 0;
	if (CurrentInventory)
	{
		Inventory.Find(CurrentInventory, Index);
		Index += 1;
	}

	//Set new item when index is not overflowing
	if (Index < Inventory.Num())
	{
		NewInventory = Inventory[Index];
	}

	//Equip new item
	SetNewInventory(NewInventory);
	return NewInventory;
}

class AAdvKitInventoryItem* AAdvKitInventoryManager::PreviousItem()
{
	//No items means there is nothing to equip
	if (Inventory.Num() == 0)
	{
		return nullptr;
	}

	//Get the index of the current item and decrement it
	AAdvKitInventoryItem* NewInventory = nullptr;
	int32 Index = Inventory.Num() - 1;
	if (CurrentInventory)
	{
		Inventory.Find(CurrentInventory, Index);
		Index -= 1;
	}

	//Set new item when index is inside array
	if (Index > -1)
	{
		NewInventory = Inventory[Index];
	}

	//Equip new item
	SetNewInventory(NewInventory);
	return NewInventory;
}

bool AAdvKitInventoryManager::CanEquipInventory_Implementation(AAdvKitInventoryItem* NewInventory, bool bInstant)
{
	if (!NewInventory)
	{
		return true;
	}

	auto CharacterOwner = Cast<AAdvKitCharacter>(GetOwner());
	if (!IsValid(CharacterOwner))
	{
		return false;
	}

	auto MovementComponent = CharacterOwner->GetAdvMovementComponent();
	if (!IsValid(MovementComponent))
	{
		return false;
	}

	return MovementComponent->IsWalking() || MovementComponent->IsFalling();
}

void AAdvKitInventoryManager::SetNewInventory(AAdvKitInventoryItem* NewInventory, bool bInstant)
{
	//Do not change item if the current one is already the desired one
	if (CurrentInventory == NewInventory)
	{
		return;
	}

	if (!CanEquipInventory(NewInventory, bInstant))
	{
		return;
	}

	//Call server if necessary to make it replicated the change
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		SetNewInventoryServer(NewInventory, bInstant);
	}

	//Cache new item as pending
	PendingInventory = NewInventory;

	//If there is an active item, unequip it
	if (CurrentInventory)
	{
		CurrentInventory->Uneqiup(bInstant);
		if (!bInstant)
		{
			return;
		}
	}

	//In case there is no active item or the change should be instant
	//equip the new item immediately
	PendingInventory = nullptr;
	CurrentInventory = NewInventory;

	if (OnActiveItemChanged.IsBound())
	{
		OnActiveItemChanged.Broadcast(this, CurrentInventory);
	}

	//New item might be null
	if (CurrentInventory)
	{
		CurrentInventory->Equip(bInstant);
	}
}

void AAdvKitInventoryManager::SetNewInventoryByClass(TSubclassOf<class AAdvKitInventoryItem> NewInventoryClass, bool bInstant)
{
	//If the current item is already of the desired class, do nothing
	if (CurrentInventory && NewInventoryClass && CurrentInventory->IsA(NewInventoryClass))
	{
		return;
	}

	//Equip new item
	AAdvKitInventoryItem* NewInventory = GetInventoryByClass(NewInventoryClass);
	SetNewInventory(NewInventory, bInstant);
}

bool AAdvKitInventoryManager::SetNewInventoryServer_Validate(class AAdvKitInventoryItem* NewInventory, bool bInstant)
{
	//Cannot set items that aren't there
	int32 Index;
	return !NewInventory || Inventory.Find(NewInventory, Index);
}

void AAdvKitInventoryManager::SetNewInventoryServer_Implementation(class AAdvKitInventoryItem* NewInventory, bool bInstant)
{
	SetNewInventory(NewInventory, bInstant);
}

void AAdvKitInventoryManager::OwnerDied()
{
	//Unequip current item
	SetNewInventory(nullptr, true);

	//Tell all items that the owner died
	TArray<AAdvKitInventoryItem*> ItemsToNotify = Inventory;
	for (AAdvKitInventoryItem* Item : ItemsToNotify)
	{
		Item->OwnerDied();
	}
}

void AAdvKitInventoryManager::OnRep_InventoryArray()
{
	if (OnInventoryItemsChanged.IsBound())
	{
		OnInventoryItemsChanged.Broadcast(this);
	}
}

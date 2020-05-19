// Copyright 2015 Pascal Krabbe

#include "Actions/AnimNotify_SetItem.h"
#include "Player/AdvKitInventoryManager.h"
#include "Player/AdvKitCharacter.h"
#include "Components/SkeletalMeshComponent.h"

UAnimNotify_SetItem::UAnimNotify_SetItem()
	: Super()
{
	bInstant = true;
	NewItem = nullptr;
}

void UAnimNotify_SetItem::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	auto Character = Cast<AAdvKitCharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}
	
	auto InventoryManager = Character->InventoryManager;
	if (!InventoryManager)
	{
		return;
	}

	InventoryManager->SetNewInventoryByClass(NewItem, bInstant);
}

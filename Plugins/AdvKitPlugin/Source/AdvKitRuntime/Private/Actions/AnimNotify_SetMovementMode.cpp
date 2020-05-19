// Copyright 2015 Pascal Krabbe

#include "Actions/AnimNotify_SetMovementMode.h"
#include "Player/AdvKitCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Player/AdvKitCharacterMovementComponent.h"

UAnimNotify_SetMovementMode::UAnimNotify_SetMovementMode()
	: Super()
{
	MovementMode = EAdvKitMovementMode::Falling;
	CustomMovementMode = 0;
}

void UAnimNotify_SetMovementMode::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	auto Character = Cast<AAdvKitCharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}

	auto MoveComp = Character->GetAdvMovementComponent();
	if (!MoveComp)
	{
		return;
	}

	MoveComp->SetAdvMovementMode(MovementMode, CustomMovementMode);
}

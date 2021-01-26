// Copyright 2015 Pascal Krabbe

#include "Actions/AnimNotify_ApplyTransitionMovementMode.h"
#include "Environment/AdvKitZone.h"
#include "Components/SkeletalMeshComponent.h"
#include "Environment/AdvKitTransitionComponent.h"
#include "Player/AdvKitCharacter.h"

UAnimNotify_ApplyTransitionMovementMode::UAnimNotify_ApplyTransitionMovementMode()
	: Super()
{
	FallbackMovementMode = EAdvKitMovementMode::Falling;
	FallbackCustomMovementMode = 0;
}

void UAnimNotify_ApplyTransitionMovementMode::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	auto Character = Cast<AAdvKitCharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}
	
	auto PendingTransition = Character->PendingTransition;
	if (!PendingTransition.IsValid())
	{
		return;
	}

	EAdvKitMovementMode NewMode = FallbackMovementMode;
	uint32 NewCustomMode = FallbackCustomMovementMode;

	auto Zone = PendingTransition.Zone;
	auto Transition = PendingTransition.Transition;
	if (Zone)
	{
		NewMode = Zone->GetPhysics();
		NewCustomMode = Zone->GetCustomPhysics();
	}
	else if (Transition)
	{
		NewMode = Transition->TargetPhysics;
		NewCustomMode = Transition->TargetCustomPhysics;
	}

	auto MoveComp = Character->GetAdvMovementComponent();
	if (MoveComp)
	{
		MoveComp->SetAdvMovementMode(NewMode, NewCustomMode);
	}
}

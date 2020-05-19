// Copyright 2015 Pascal Krabbe

#include "Actions/AnimNotify_SetTransitionZone.h"
#include "Player/AdvKitCharacter.h"
#include "Environment/AdvKitZone.h"
#include "AdvKitLogCategories.h"
#include "Environment/AdvKitTransitionComponent.h"
#include "Components/SkeletalMeshComponent.h"

UAnimNotify_SetTransitionZone::UAnimNotify_SetTransitionZone()
	: Super()
{
	bSnapToZone = true;
	bApplyMovementMode = true;
	bClearPendingTransition = true;
}

void UAnimNotify_SetTransitionZone::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	auto Character = Cast<AAdvKitCharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}

	UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotify_SetTransitionZone::Notify - Clear Pending: %d"), bClearPendingTransition);

	auto Transition = Character->PendingTransition.Transition;
	auto Zone = Character->PendingTransition.Zone;
	if (!Character->PendingTransition.IsValid())
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotify_SetTransitionZone::Notify - Pending transition invalid, setting current zone"));
		Zone = Character->GetZone();
	}

	auto MoveComp = Character->GetAdvMovementComponent();
	if (bApplyMovementMode && MoveComp)
	{
		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotify_SetTransitionZone::Notify - Applying movement mode"));

		EAdvKitMovementMode NewMode = EAdvKitMovementMode::Walking;
		uint32 NewCustomMode = 0;

		if (Zone)
		{
			UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotify_SetTransitionZone::Notify - Setting movementmode based on zone"));
			NewMode = Zone->GetPhysics();
			NewCustomMode = Zone->GetCustomPhysics();
		}
		else if (Transition)
		{
			UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotify_SetTransitionZone::Notify - Setting movementmode based on transition"));
			NewMode = Transition->TargetPhysics;
			NewCustomMode = Transition->TargetCustomPhysics;
		}

		MoveComp->SetAdvMovementMode(NewMode, NewCustomMode);
	}

	//if (Character->Role != ROLE_AutonomousProxy && !Character->IsLocallyControlled())
	//{
	//	Character->SetZone(Zone, false, false);
	//	return;
	//}

	Character->SetZone(Zone, bSnapToZone, bClearPendingTransition);
	//Character->SetZone(Args->Zone, bSnapToZone);
}

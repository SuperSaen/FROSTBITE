// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitGravityPlayerController.h"
#include "Player/AdvKitGravityCharacterMovementComponent.h"
#include "Player/AdvKitGravityCharacter.h"

//#include "Kismet/GameplayStatics.h"

void AAdvKitGravityPlayerController::UpdateRotation(float DeltaSeconds)
{
	//Without an orientation component the controller cannot use arbitrary gravity
	UAdvKitOrientationComponent* WorldOrientation = GetOrientationComp();
	if (!WorldOrientation)
	{
		Super::UpdateRotation(DeltaSeconds);
		return;
	}

	// Calculate Delta to be applied on ViewRotation
	FRotator DeltaRot(RotationInput);

	//Transform global rotation into local
	FRotator ViewRotation = GetControlRotation();
	ViewRotation = WorldOrientation->TransformRotationW2L(ViewRotation);

	//Modify rotation by player view
	if (PlayerCameraManager)
	{
		PlayerCameraManager->ProcessViewRotation(DeltaSeconds, ViewRotation, DeltaRot);
	}

	//TODO handle this somehow
	//if (!PlayerCameraManager || !PlayerCameraManager->bFollowHmdOrientation)
	//{
	//	if (GEngine->HMDDevice.IsValid() && GEngine->HMDDevice->IsHeadTrackingAllowed())
	//	{
	//		GEngine->HMDDevice->ApplyHmdRotation(this, ViewRotation);
	//	}
	//}

	//Transform back to world rotation 
	ViewRotation = WorldOrientation->TransformRotationL2W(ViewRotation);
	SetControlRotation(ViewRotation);

	APawn* const P = GetPawnOrSpectator();
	if (P)
	{
		P->FaceRotation(ViewRotation, DeltaSeconds);
	}
}




void AAdvKitGravityPlayerController::SetControlRotation(const FRotator& NewRotation)
{
	Super::SetControlRotation(NewRotation);
	return;

	//auto Character = Cast<AAdvKitGravityCharacter>(GetPawn());
	//auto WorldOrientation = GetOrientationComp();
	//if (!Character || !WorldOrientation)
	//{
	//	Super::SetControlRotation(NewRotation);
	//	return;
	//}

	////Transform world rotation to local rotation of orientation space
	//FRotator ModifiedNewRotation = NewRotation;

	////ModifiedNewRotation = WorldOrientation->TransformRotationW2L(ModifiedNewRotation);

	////Restrict new rotation by character
	//if (Character->CameraController)
	//{
	//	Character->CameraController->RestrictViewRotation(ModifiedNewRotation);
	//}

	////ModifiedNewRotation.Roll = 0;
	////ModifiedNewRotation.Pitch = 0;

	////Transform local rotation to world space
	////ModifiedNewRotation = WorldOrientation->TransformRotationL2W(ModifiedNewRotation);

	////Set the new rotation (skip AdvKitCharacter implementation)
	//APlayerController::SetControlRotation(ModifiedNewRotation);
}


UAdvKitOrientationComponent* AAdvKitGravityPlayerController::GetOrientationComp()
{
	auto GravityCharacter = Cast<AAdvKitGravityCharacter>(GetPawn());
	//Cannot get orientation without character
	if (!GravityCharacter)
	{
		return nullptr;
	}

	return GravityCharacter->WorldOrientationComponent;
}

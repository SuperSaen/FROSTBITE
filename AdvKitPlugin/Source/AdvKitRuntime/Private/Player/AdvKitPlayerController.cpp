// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitPlayerController.h"
#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitCameraController.h"

void AAdvKitPlayerController::SetControlRotation(const FRotator& NewRotation)
{
	AAdvKitCharacter *AdvKitCharacter = Cast<AAdvKitCharacter>(GetPawn());
	//No special view modification without a AdvKitCharacter
	if (!AdvKitCharacter)
	{
		Super::SetControlRotation(NewRotation);
		return;
	}

	FRotator ModifiedNewRotation = NewRotation;

	//Restrict new rotation by character
	if (AdvKitCharacter->CameraController)
	{
		AdvKitCharacter->CameraController->RestrictViewRotation(ModifiedNewRotation);
	}

	//Set the new rotation
	Super::SetControlRotation(ModifiedNewRotation);
}


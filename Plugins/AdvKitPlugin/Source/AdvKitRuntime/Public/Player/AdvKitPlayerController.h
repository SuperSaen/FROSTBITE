// Copyright 2015 Pascal Krabbe

#pragma once

#include "GameFramework/PlayerController.h"
#include "AdvKitPlayerController.generated.h"

/**
 * @brief This is a slightly modified version of the default player controller and lets
 * the character restrict the view rotation. 
 * 
 * This is useful for first person, when
 * the player cannot turn their head beyond what the skeleton allows for.
 */
UCLASS()
class ADVKITRUNTIME_API AAdvKitPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	// Begin APlayerController Interface
	virtual void SetControlRotation(const FRotator& NewRotation) override;
	// End APlayerController Interface
};

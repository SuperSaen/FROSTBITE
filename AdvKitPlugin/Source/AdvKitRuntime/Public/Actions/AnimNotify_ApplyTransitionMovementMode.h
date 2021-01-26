// Copyright 2015 Pascal Krabbe

#pragma once
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AdvKitTypes.h"
#include "AnimNotify_ApplyTransitionMovementMode.generated.h"

class AAdvKitInventoryItem;

UCLASS(meta = (DisplayName = "Apply Transition Movement Mode"))
class UAnimNotify_ApplyTransitionMovementMode : public UAnimNotify
{
	GENERATED_BODY()

protected:
	/** Fall back to this mode in case there is no transition */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	EAdvKitMovementMode FallbackMovementMode;

	/** Fall back to this custom mode in case there is no transition */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	uint8 FallbackCustomMovementMode;

public:
	UAnimNotify_ApplyTransitionMovementMode();
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
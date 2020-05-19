// Copyright 2015 Pascal Krabbe

#pragma once
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AdvKitTypes.h"
#include "AnimNotify_SetMovementMode.generated.h"

class AAdvKitInventoryItem;

UCLASS(meta = (DisplayName = "Set Movement Mode"))
class UAnimNotify_SetMovementMode : public UAnimNotify
{
	GENERATED_BODY()

protected:
	/** The new movement mode */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	EAdvKitMovementMode MovementMode;

	/** The new custom movement mode */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	uint8 CustomMovementMode;

public:
	UAnimNotify_SetMovementMode();
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
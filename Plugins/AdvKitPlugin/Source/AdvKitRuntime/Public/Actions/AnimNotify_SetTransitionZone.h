// Copyright 2015 Pascal Krabbe

#pragma once

#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_SetTransitionZone.generated.h"

UCLASS(meta = (DisplayName = "Set Zone"))
class UAnimNotify_SetTransitionZone : public UAnimNotify
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category="Transition")
	bool bSnapToZone;

	UPROPERTY(EditAnywhere, Category = "Transition")
	bool bApplyMovementMode;

	UPROPERTY(EditAnywhere, Category = "Transition")
	bool bClearPendingTransition;
public:
	UAnimNotify_SetTransitionZone();
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
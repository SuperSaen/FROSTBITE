// Copyright 2015 Pascal Krabbe

#pragma once
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_OrientToZone.generated.h"

UCLASS(meta = (DisplayName = "Orient To Zone"))
class UAnimNotify_OrientToZone : public UAnimNotify
{
	GENERATED_BODY()

protected:
	/** Whether to set a relative location */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	bool bSetLocation;

	/** Relative location to set */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (EditCondition = bSetLocation))
	FVector Location;

	/** Whether to set a relative rotation */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	bool bSetRotation;

	/** Relative rotation to set */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (EditCondition = bSetRotation))
	FRotator Rotation;

public:
	UAnimNotify_OrientToZone();
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
// Copyright 2015 Pascal Krabbe

#pragma once
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Curves/CurveFloat.h"
#include "AnimNotifyState_AdvKitDodge.generated.h"

class UAdvKitCharacterMovementComponent;
class AAdvKitCharacter;

UCLASS(meta = (DisplayName = "Dodge"))
class UAnimNotifyState_AdvKitDodge : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	/** This curve handles the percentage of dodge speed at which to dodge at a given time */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dodge")
	FRuntimeFloatCurve DodgeSpeedCurve;

	/** Direction in which to dodge */
	UPROPERTY(BlueprintReadWrite, Category = "Dodge")
	FVector DodgeDirection;

	/** How long to dodge in seconds */
	UPROPERTY(BlueprintReadOnly, Category = "Dodge")
	float DodgeDuration;

	/** Current progress of the dodging */
	UPROPERTY(BlueprintReadWrite, Category = "Dodge")
	float DodgeAlpha;

	/** How fast to dodge (gets multiplied by the dodge speed curve) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dodge")
	float DodgeSpeed;

protected:
	/** Location the character had before the current dodge move was executed */
	FVector LastCharacterLocation;


	AAdvKitCharacter* GetOwningCharacter(USkeletalMeshComponent * MeshComp) const;
	UAdvKitCharacterMovementComponent* GetOwningMovementComponent(USkeletalMeshComponent * MeshComp) const;
	virtual FVector ModifyAccelerationWhenTargetLocked(AAdvKitCharacter* CharacterOwner, const FVector& OriginalAcceleration);

public:
	UAnimNotifyState_AdvKitDodge(const FObjectInitializer& ObjectInitializer);
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime) override;
};
// Copyright 2015 Pascal Krabbe

#pragma once
//#include "Gameframework/RootMotionSource.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_TransitionCorrection.generated.h"

class UAdvKitCharacterMovementComponent;
class AAdvKitCharacter;
class AAdvKitZone;


USTRUCT()
struct FTransitionLocation
{
	GENERATED_USTRUCT_BODY();

	/** Zone of the transition*/
	UPROPERTY()
	AAdvKitZone* Zone;

	/** Location in zone of the transition*/
	UPROPERTY()
	FVector LocalZoneLocation;
	
	/** Location if zone location is not valid */
	UPROPERTY()
	FVector Location;

	/** Rotation if zone location is not valid */
	UPROPERTY()
	FRotator Rotation;

	FTransitionLocation()
		: Zone(nullptr)
		, LocalZoneLocation(FVector::ZeroVector)
		, Location(FVector::ZeroVector)
		, Rotation(FRotator::ZeroRotator)
	{}

	FVector GetLocation(AAdvKitCharacter* Character) const;
	FRotator GetRotation(AAdvKitCharacter* Character) const;
	void Clear();
};

USTRUCT()
struct FTransitionCorrectionData
{
	GENERATED_USTRUCT_BODY();

	/** Last alpha of the location transition curve */
	float LastLocationAlpha;

	/** Last alpha of the rotation transition curve */
	float LastRotationAlpha;

	/** Delta translation during the current transition */
	FVector TranslationDifference;

	/** Delta rotation during the current transition */
	FRotator RotationDifference;

	/** Location before the transition */
	UPROPERTY()
	FTransitionLocation PreviousLocation;

	/** New location in target zone after the transition*/
	UPROPERTY()
	FTransitionLocation NextLocation;

	FTransitionCorrectionData()
		: LastLocationAlpha(0)
		, LastRotationAlpha(0)
		, TranslationDifference(FVector::ZeroVector)
		, RotationDifference(FRotator::ZeroRotator)
		, PreviousLocation()
		, NextLocation()
	{}
};


//
//USTRUCT()
//struct FRootMotionSource_TransitionCorrection : public FRootMotionSource
//{
//	GENERATED_USTRUCT_BODY()
//
//	FRootMotionSource_TransitionCorrection();
//
//	virtual ~FRootMotionSource_TransitionCorrection() {}
//
//
//	/** Last alpha of the location transition curve */
//	float LastLocationAlpha;
//
//	/** Last alpha of the rotation transition curve */
//	float LastRotationAlpha;
//
//	/** Delta translation during the current transition */
//	FVector TranslationDifference;
//
//	/** Delta rotation during the current transition */
//	FRotator RotationDifference;
//
//	/** Location before the transition */
//	UPROPERTY()
//	FTransitionLocation PreviousLocation;
//
//	/** New location in target zone after the transition*/
//	UPROPERTY()
//	FTransitionLocation NextLocation;
//	UPROPERTY()
//	FVector Force;
//
//	UPROPERTY()
//	UCurveFloat* StrengthOverTime;
//
//	virtual FRootMotionSource* Clone() const override;
//
//	virtual bool Matches(const FRootMotionSource* Other) const override;
//
//	virtual bool MatchesAndHasSameState(const FRootMotionSource* Other) const override;
//
//	virtual bool UpdateStateFrom(const FRootMotionSource* SourceToTakeStateFrom, bool bMarkForSimulatedCatchup = false) override;
//
//	virtual void PrepareRootMotion(
//		float SimulationTime, 
//		float MovementTickTime,
//		const ACharacter& Character, 
//		const UCharacterMovementComponent& MoveComponent
//		) override;
//
//	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;
//
//	virtual UScriptStruct* GetScriptStruct() const override;
//
//	virtual FString ToSimpleString() const override;
//
//	virtual void AddReferencedObjects(class FReferenceCollector& Collector) override;
//};
//

UCLASS(meta = (DisplayName = "Transiton Correction"))
class UAnimNotifyState_TransitionCorrection : public UAnimNotifyState
{
	GENERATED_BODY()

//#if WITH_EDITOR
//		virtual void OnAnimNotifyCreatedInEditor(FAnimNotifyEvent& ContainingAnimNotifyEvent) override;
//#endif

protected:

	/** Use rotation part of transition correction */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Correction")
	bool bAbsoluteTransitionCorrection;

	/** Name of the anim curve to use for location correction alpha */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Correction")
	FName LocationCurveName;

	/** Name of the anim curve to use for rotation correction alpha */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Correction")
	FName RotationCurveName;

	/** Name of the anim curve to use if doing absolute transition correction */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Correction", meta=(EditCondition="bAbsoluteTransitionCorrection"))
	FName EnforcementCurveName;

	AAdvKitCharacter* GetOwningCharacter(USkeletalMeshComponent * MeshComp) const;
	UAdvKitCharacterMovementComponent* GetOwningMovementComponent(USkeletalMeshComponent * MeshComp) const;
	
public:
	UAnimNotifyState_TransitionCorrection(const FObjectInitializer& ObjectInitializer);
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) override;
};
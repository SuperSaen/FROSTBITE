// Copyright 2015 Pascal Krabbe

#pragma once

#include "Environment/AdvKitTransitionComponent.h"
#include "AdvKitTransitionComponentSpline.generated.h"

class AAdvKitZone;

USTRUCT(BlueprintType)//CollapseCategories)
struct ADVKITRUNTIME_API FSplineTransitionPosition
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Transition")
	FBasedPosition Position;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Transition")
	FVector LocalOffset;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Transition")
	float Distance;


	FSplineTransitionPosition();
	FSplineTransitionPosition(AActor* Base, FVector WorldLocation, float NewDistance);
	void Set(AActor* Base, FVector WorldLocation, float NewDistance);
	FVector GetWorldLocation() const;
	static FVector Lerp(const FSplineTransitionPosition& A, const FSplineTransitionPosition& B, float Alpha);
	static FVector FindClosestBetween(const FSplineTransitionPosition& A, const FSplineTransitionPosition& B, FVector ToWorldLocation);
};

/**
 * @brief Transition that is an area between two defined parts of splines on the source and target zone. 
 */
UCLASS()
class ADVKITRUNTIME_API UAdvKitTransitionComponentSpline : public UAdvKitTransitionComponent
{
	GENERATED_BODY()

	friend class FAdvKitTransitionComponentSplineVisualizer;

protected:
	/** Left start of the transition line(inside the source zone) */
	UPROPERTY(EditInstanceOnly, BlueprintReadonly, Category = "Transition")
	FSplineTransitionPosition MinSourcePosition;

	/** Left end of the transition line (inside of the target zone) */
	UPROPERTY(EditInstanceOnly, BlueprintReadonly, Category = "Transition")
	FSplineTransitionPosition MinTargetPosition;

	/** Right start of the transition (inside the source zone) */
	UPROPERTY(EditInstanceOnly, BlueprintReadonly, Category = "Transition")
	FSplineTransitionPosition MaxSourcePosition;

	/** Right end of the transition (inside of the target zone) */
	UPROPERTY(EditInstanceOnly, BlueprintReadonly, Category = "Transition")
	FSplineTransitionPosition MaxTargetPosition;

public:
	/**
	 * Initializes the transition
	 * @param	ForCharacter 			Character that can use the transition
	 * @param	MinWorldSource 			Left start of the transition line on the source zone in world space
	 * @param	MinWorldTarget 			Left end of the transition line on the target zone in world space
	 * @param	MaxWorldSource 			Right start of the transition line on the source zone in world space
	 * @param	MaxWorldTarget 			Right end of the transition line on the target zone in world space
	 * @param	NewTargetPhysics 		Movement mode the character will have after the transition
	 * @param	NewTargetZone 			Zone the character will be in after the transition
	 * @param	NewTargetCustomPhysics	Custom movement mode the character will have after the transition
	 */
	virtual void Init(
		TSubclassOf<AAdvKitCharacter> ForCharacter, 
		const float& MinSourceDistance,
		const FVector& MinWorldSourcePosition,

		const float& MinTargetDistance,
		const FVector& MinWorldTargetPosition,

		const float& MaxSourceDistance,
		const FVector& MaxWorldSourcePosition,

		const float& MaxTargetDistance,
		const FVector& MaxWorldTargetPosition,
		EAdvKitMovementMode NewTargetPhysics,
		AAdvKitZone* NewTargetZone = nullptr,
		uint8 NewTargetCustomPhysics = 0
		);

	//Begin UActorComponent Interface
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
	//End UActorComponent Interface

	//Begin UAdvKitTransitionComponent Interface
	virtual FVector GetClosestSourcePosition(const FVector& ToWorldPosition) override;
	virtual FVector GetClosestTargetPosition(const FVector& ToWorldPosition) override;
	//End UAdvKitTransitionComponent Interface

	/** @return The min source location of the transition in world space */
	const FSplineTransitionPosition& GetMinSourcePosition() const;

	/** @return The max source location of the transition in world space */
	const FSplineTransitionPosition& GetMaxSourcePosition() const;

	/** @return The min target location of the transition in world space */
	const FSplineTransitionPosition& GetMinTargetPosition() const;

	/** @return The max target location of the transition in world space */
	const FSplineTransitionPosition& GetMaxTargetPosition() const;

};

// Copyright 2015 Pascal Krabbe

#pragma once

#include "Environment/AdvKitZone.h"
#include "AdvKitTypes.h"
#include "Components/SplineComponent.h"
#include "AdvKitZoneSpline.generated.h"

/**
 * @brief Implementation of a zone that consists of a straight line defined by a beginning and end point.
 * The character can only move in two directions along the line.
 */
UCLASS(Abstract, Experimental)
class ADVKITRUNTIME_API AAdvKitZoneSpline : public AAdvKitZone
{
	GENERATED_BODY()

protected:
	/* Spline component defining the path the character can use */
	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Zone")
	class USplineComponent* SplineComponent;

public:
	/** Whether or not the start of the line is clamped by the character's extent (think it as being a wall). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone")
	bool bConstrainExtentAtStart;

	/** Whether or not the end of the line is clamped by the character's extent (think it as being a wall). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone")
	bool bConstrainExtentAtEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone")
	bool bUseSplineUpVector;

public:
	/**
	 * Constructor
	 */
	AAdvKitZoneSpline(const FObjectInitializer& ObjectInitializer);


	//Begin AdvKitZone Interface
	virtual FVector GetZoneForwardVectorNew_Implementation(const FVector& LocalZoneLocation) const override;
	virtual FVector GetZoneRightVectorNew_Implementation(const FVector& LocalZoneLocation) const override;
	virtual FVector GetZoneUpVectorNew_Implementation(const FVector& LocalZoneLocation) const override;
	virtual bool MoveLocationInDirectionNew(FVector& LocalZoneLocation, const FVector& WorldDesiredDelta, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) override;
	virtual FVector ConstrainPositionToZone_Implementation(const FVector& WorldPosition, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const override;
	virtual FVector ConstrainDirectionToZone_Implementation(const FVector& WorldDirection, const FVector& AtWorldLocation) const override;
	virtual FVector GetZoneLocationWorld(const FVector& LocalZoneLocation) const override;
	virtual FVector GetZoneLocationLocal(const FVector& WorldLocation) const override;
	//End AdvKitZone Interface

	/**
	 * Gets the closest distance on a spline (distance is the index value on the spline curve).
	 * @param	ToWorldLocation 	Reference location to get distance to
	 * @param	HalfExtent 	The extent of the character to project
	 * @param	ExtentWorldRotation 	World rotation of the character.
	 * @return	Closest distance (index value on spline curve)
	 */
	virtual float GetClosestDistanceOnSpline(const FVector& ToWorldLocation, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;

	/**
	 * Gets the closest distance on a spline sub segment (distance is the index value on the spline curve).
	 * @param	FromLength				Start of the segment
	 * @param	ToLength				End of the segment
	 * @param	OutMinDistance			The closest distance from the spline to the location
	 * @param	ToWorldLocation 		Reference location to get distance to
	 * @param	HalfExtentStart 			The extent of the character to project on the start end of the segment
	 * @param	HalfExtentEnd 		The extent of the character to project on the end end of the segment
	 * @param	ExtentWorldRotation 	World rotation of the character.
	 * @return	Closest distance (index value on spline curve)
	 */
	virtual float GetClosestDistanceOnSplineSegment(float FromLength, float ToLength, float& OutMinDistance, const FVector& ToWorldLocation, const FVector& HalfExtentStart, const FVector& HalfExtentEnd, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;

	const USplineComponent* GetSplineComponent();

protected:

	/**
	 * Projects a given character extent onto a line defined by direction.
	 * @param	LocalDirection 	The line's direction to project onto in local space
	 * @param	HalfExtent 	The extent of the character to project
	 * @param	ExtentWorldRotation 	World rotation of the character.
	 * @return	The projected half extent.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FVector GetProjectedHalfExtent(const FVector &LocalDirection, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;
};


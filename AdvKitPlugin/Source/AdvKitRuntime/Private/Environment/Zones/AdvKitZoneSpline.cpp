// Copyright 2015 Pascal Krabbe

#include "Environment/Zones/AdvKitZoneSpline.h"

#include "DrawDebugHelpers.h"

AAdvKitZoneSpline::AAdvKitZoneSpline(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ZonePhysics = EAdvKitMovementMode::Falling;

	SplineComponent = ObjectInitializer.CreateDefaultSubobject<USplineComponent>(this, TEXT("Spline"));
	SetRootComponent(SplineComponent);

	bConstrainExtentAtStart = true;
	bConstrainExtentAtEnd = true;
	bUseSplineUpVector = false;
}

FVector AAdvKitZoneSpline::GetZoneForwardVectorNew_Implementation(const FVector& LocalZoneLocation) const
{
	return -SplineComponent->GetRightVectorAtDistanceAlongSpline(LocalZoneLocation.X, ESplineCoordinateSpace::World).GetSafeNormal();
}

FVector AAdvKitZoneSpline::GetZoneRightVectorNew_Implementation(const FVector& LocalZoneLocation) const
{
	if (bUseSplineUpVector)
	{
		return SplineComponent->GetTangentAtDistanceAlongSpline(LocalZoneLocation.X, ESplineCoordinateSpace::World).GetSafeNormal();
	}

	return FVector::CrossProduct(GetZoneUpVectorNew(LocalZoneLocation), GetZoneForwardVectorNew(LocalZoneLocation));
}

FVector AAdvKitZoneSpline::GetZoneUpVectorNew_Implementation(const FVector& LocalZoneLocation) const
{
	if (bUseSplineUpVector)
	{
		return SplineComponent->GetUpVectorAtDistanceAlongSpline(LocalZoneLocation.X, ESplineCoordinateSpace::World).GetSafeNormal();
	}

	return GetActorUpVector();
}

FVector AAdvKitZoneSpline::ConstrainPositionToZone_Implementation(const FVector& WorldPosition, const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	return SplineComponent->GetWorldLocationAtDistanceAlongSpline(GetClosestDistanceOnSpline(WorldPosition,HalfExtent,ExtentWorldRotation));
}

FVector AAdvKitZoneSpline::ConstrainDirectionToZone_Implementation(const FVector& WorldDirection, const FVector& AtWorldLocation) const
{
	FVector ZoneDirection = SplineComponent->GetWorldTangentAtDistanceAlongSpline(GetClosestDistanceOnSpline(AtWorldLocation,FVector::ZeroVector)).GetSafeNormal();
	return ZoneDirection * FVector::DotProduct(ZoneDirection, WorldDirection);
}

float AAdvKitZoneSpline::GetClosestDistanceOnSpline(const FVector& ToWorldLocation, const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	float ClosestDistance = -1;
	float ClosestLength = -1;
	int32 NumSplinePoints = SplineComponent->GetNumberOfSplinePoints();
	if (SplineComponent->IsClosedLoop())
	{
		NumSplinePoints += 1;
	}

	for (int32 i = 0; i < NumSplinePoints - 1; i++)
	{
		//UE_LOG(LogAdvKit, Log, TEXT("index: %d"), i);

		float Left = SplineComponent->GetDistanceAlongSplineAtSplinePoint(i);
		float Right = SplineComponent->GetDistanceAlongSplineAtSplinePoint(i + 1);

		FVector SegmentHalfExtentStart = FVector::ZeroVector;
		FVector SegmentHalfExtentEnd = FVector::ZeroVector;
		if (!SplineComponent->IsClosedLoop())
		{
			if (i == 0)
			{
				SegmentHalfExtentStart = HalfExtent;
			}
			if (i == NumSplinePoints - 2)
			{
				SegmentHalfExtentEnd = HalfExtent;
			}
		}

		float TempDistance = 0;
		float TempLength = GetClosestDistanceOnSplineSegment(Left, Right, TempDistance, ToWorldLocation, SegmentHalfExtentStart, SegmentHalfExtentEnd, ExtentWorldRotation);
		if (ClosestDistance < 0 || ClosestDistance > TempDistance)
		{
			ClosestDistance = TempDistance;
			ClosestLength = TempLength;
		}
	}

	return ClosestLength;
}

float AAdvKitZoneSpline::GetClosestDistanceOnSplineSegment(float FromLength, float ToLength, float& OutMinDistance, const FVector& ToWorldLocation, const FVector& HalfExtentStart, const FVector& HalfExtentEnd, const FRotator& ExtentWorldRotation) const
{
	FVector LocalLeftTangent = SplineComponent->GetTangentAtDistanceAlongSpline(FromLength, ESplineCoordinateSpace::Local).GetSafeNormal();// GetTransform().InverseTransformVectorNoScale(SplineComponent->GetWorldTangentAtDistanceAlongSpline(FromLength).GetSafeNormal());
	//float Left = FromLength;
	float Left = FromLength + GetProjectedHalfExtent(LocalLeftTangent, HalfExtentStart, ExtentWorldRotation).Size();
	FVector LeftLocation = SplineComponent->GetWorldLocationAtDistanceAlongSpline(Left);
	float LeftDistance = FVector::Dist(ToWorldLocation, LeftLocation);

	FVector LocalRightTangent = SplineComponent->GetTangentAtDistanceAlongSpline(ToLength, ESplineCoordinateSpace::Local).GetSafeNormal();// GetTransform().InverseTransformVectorNoScale(SplineComponent->GetWorldTangentAtDistanceAlongSpline(ToLength).GetSafeNormal());
	//float Right = ToLength;
	float Right = ToLength - GetProjectedHalfExtent(LocalRightTangent, HalfExtentEnd, ExtentWorldRotation).Size();
	FVector RightLocation = SplineComponent->GetWorldLocationAtDistanceAlongSpline(Right);
	float RightDistance = FVector::Dist(ToWorldLocation, RightLocation);
	float Delta = Right;

	while (Delta > 0.01f) //TODO delta variable
	{
		//DrawDebugLine(GetWorld(), RightLocation, RightLocation + FVector::UpVector * 100, FColor::Red, false);
		//DrawDebugLine(GetWorld(), LeftLocation, LeftLocation + FVector::UpVector * 100, FColor::Red, false);

		float Middle = (Left + Right) / 2.0f;
		FVector MiddleLocation = SplineComponent->GetWorldLocationAtDistanceAlongSpline(Middle);
		float MiddleDistance = FVector::Dist(ToWorldLocation, MiddleLocation);

		if (LeftDistance < RightDistance)
		{
			Right = Middle;
			RightLocation = MiddleLocation;
			RightDistance = MiddleDistance;
			//DrawDebugLine(GetWorld(), MiddleLocation, MiddleLocation + FVector::UpVector * 100, FColor::Red, false);
		}
		else
		{
			Left = Middle;
			LeftLocation = MiddleLocation;
			LeftDistance = MiddleDistance;
			//DrawDebugLine(GetWorld(), MiddleLocation, MiddleLocation + FVector::UpVector * 100, FColor::Green, false);
		}

		Delta = Right - Left;
		//UE_LOG(LogAdvKit, Log, TEXT("Length: %f"), (Right - Left));
	}

	OutMinDistance = (RightDistance + LeftDistance) * 0.5f;
	return (Left + Right) / 2.0f;
}

bool AAdvKitZoneSpline::MoveLocationInDirectionNew(FVector& LocalZoneLocation, const FVector& WorldDesiredDelta, const FVector& HalfExtent, const FRotator& ExtentWorldRotation)
{
	
	FVector OldLocation = GetZoneLocationWorld(LocalZoneLocation);
	FVector AdjustedDirection = ConstrainDirectionToZone(WorldDesiredDelta, OldLocation);
	
	//DrawDebugLine(GetWorld(), OldLocation, OldLocation + AdjustedDirection * 100, FColor::Green);
	//DrawDebugLine(GetWorld(), OldLocation, OldLocation + SplineLocation->GetRightVector() * 100, FColor::Red);

	float Dot = FVector::DotProduct(GetZoneRightVectorNew(LocalZoneLocation), AdjustedDirection.GetSafeNormal());
	float NewLength = LocalZoneLocation.X + Dot*AdjustedDirection.Size();

	//NewLength = SplineLocation->Length + 10;

	//UE_LOG(LogAdvKit, Log, TEXT("L:%f D:%f A:%f"), NewLength, Dot, AdjustedDirection.Size());
	
	FVector LocalTangent = GetTransform().InverseTransformVectorNoScale(
		SplineComponent->GetWorldTangentAtDistanceAlongSpline(NewLength).GetSafeNormal());

	float HalfExtentOffset = GetProjectedHalfExtent(LocalTangent, HalfExtent, ExtentWorldRotation).Size();

	if (SplineComponent->IsClosedLoop())
	{
		if (NewLength >= 0)
		{
			NewLength = FMath::Fmod(NewLength, SplineComponent->GetSplineLength());
		}
		else
		{
			NewLength = SplineComponent->GetSplineLength() + NewLength;
		}
	}
	else
	{
		NewLength = FMath::Clamp(NewLength, bConstrainExtentAtStart ? HalfExtentOffset : 0, SplineComponent->GetSplineLength() - (bConstrainExtentAtEnd ? HalfExtentOffset : 0));
	}
	FVector NewLocation = SplineComponent->GetWorldLocationAtDistanceAlongSpline(NewLength);

	LocalZoneLocation.X = NewLength;

	//return true;
	return !(NewLocation - OldLocation).IsNearlyZero();
}


FVector AAdvKitZoneSpline::GetProjectedHalfExtent(const FVector &LocalDirection, const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	FQuat LocalExtentRotation = GetActorQuat() * ExtentWorldRotation.Quaternion().Inverse();
	FVector ZoneDirectionExtent = LocalExtentRotation * LocalDirection.GetSafeNormal();

	FVector LocalOffset = FVector::ZeroVector;

	//TODO magic numbers
	if (ZoneDirectionExtent.Z > 0.999f)
	{
		//PrintDebug("Z=1  ::: " + ZoneDirectionExtent.ToString());
		LocalOffset = FVector::UpVector * HalfExtent;
	}
	else if (ZoneDirectionExtent.Z < 0.001f)
	{
		//PrintDebug("Z=0  ::: " + ZoneDirectionExtent.ToString());
		LocalOffset = ZoneDirectionExtent * HalfExtent;
	}
	else
	{
		//PrintDebug("else  ::: " + ZoneDirectionExtent.ToString());
		FVector FlatVector = FVector(ZoneDirectionExtent.X, ZoneDirectionExtent.Y, 0);
		if (!FlatVector.IsNearlyZero())
		{
			float Distance = HalfExtent.X / FlatVector.Size();
			LocalOffset = ZoneDirectionExtent * Distance;
		}
	}


	return LocalExtentRotation.Inverse() * LocalOffset;
}

FVector AAdvKitZoneSpline::GetZoneLocationWorld(const FVector& LocalZoneLocation) const
{
	//DrawDebugCoordinateSystem(GetWorld(), SplineComponent->GetWorldLocationAtDistanceAlongSpline(LocalZoneLocation.X), FRotationMatrix::MakeFromXY(GetZoneForwardVectorNew(LocalZoneLocation), GetZoneRightVectorNew(LocalZoneLocation)).Rotator(), 100);
	return SplineComponent->GetWorldLocationAtDistanceAlongSpline(LocalZoneLocation.X);
}

FVector AAdvKitZoneSpline::GetZoneLocationLocal(const FVector& WorldLocation) const
{
	float Distance = GetClosestDistanceOnSpline(WorldLocation, FVector::ZeroVector, FRotator::ZeroRotator);
	return FVector(Distance, 0, 0);
}

const USplineComponent*AAdvKitZoneSpline::GetSplineComponent()
{
	return SplineComponent;
}

void AAdvKitZoneSpline::DrawDebug_Implementation(const FColor& DebugColor, const float& DebugThickness, const float& DebugLifeTime)
{
	Super::DrawDebug_Implementation(DebugColor,DebugThickness,DebugLifeTime);

	for(int32 i = 1; i<SplineComponent->GetNumberOfSplinePoints();i++)
	{
		DrawDebugLine(GetWorld(), SplineComponent->GetLocationAtSplinePoint(i-1, ESplineCoordinateSpace::World), SplineComponent->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World), DebugColor, false, DebugLifeTime,0, DebugThickness);
	}
}

#include "Environment/Transitions/AdvKitTransitionComponentSpline.h"
#include "Environment/AdvKitZone.h"
#include "Environment/Zones/AdvKitZoneSpline.h"

FSplineTransitionPosition::FSplineTransitionPosition()
	: Position()
	, LocalOffset(FVector::ZeroVector)
	, Distance(0.0f)
{
}

FSplineTransitionPosition::FSplineTransitionPosition(AActor* Base, FVector WorldLocation, float NewDistance)
	: Position(Base, WorldLocation)
	, LocalOffset(FVector::ZeroVector)
	, Distance(NewDistance)
{
	Set(Base, WorldLocation, NewDistance);
}

void FSplineTransitionPosition::Set(AActor* Base, FVector WorldLocation, float NewDistance)
{
	Position.Set(Base, WorldLocation);
	Distance = NewDistance;
	LocalOffset = FVector::ZeroVector;

	auto SplineZone = Cast<AAdvKitZoneSpline>(Base);
	if (!IsValid(SplineZone))
	{
		return;
	}

	FVector SplinePoint = SplineZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(NewDistance,ESplineCoordinateSpace::World);

	FVector WorldOffset = WorldLocation - SplinePoint;

	FRotator RotatorAtPoint = FRotationMatrix::MakeFromXY(
		SplineZone->GetZoneForwardVectorNew(FVector::ForwardVector*NewDistance),
		SplineZone->GetZoneRightVectorNew(FVector::ForwardVector*NewDistance)
		).Rotator();

	LocalOffset = RotatorAtPoint.UnrotateVector(WorldOffset);
}

FVector FSplineTransitionPosition::GetWorldLocation() const
{
	auto Spline = Cast<AAdvKitZoneSpline>(Position.Base);
	if (!Spline)
	{
		return *Position;
	}

	FVector SplinePoint = Spline->GetSplineComponent()->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

	FRotator RotatorAtPoint = FRotationMatrix::MakeFromXY(
		Spline->GetZoneForwardVectorNew(FVector::ForwardVector*Distance),
		Spline->GetZoneRightVectorNew(FVector::ForwardVector*Distance)
		).Rotator();


	FVector WorldOffset = RotatorAtPoint.RotateVector(LocalOffset);
	return SplinePoint + WorldOffset;
}

FVector FSplineTransitionPosition::Lerp(const FSplineTransitionPosition& A, const FSplineTransitionPosition& B, float Alpha)
{
	auto Spline = Cast<AAdvKitZoneSpline>(A.Position.Base);
	if (!Spline)
	{
		return FMath::Lerp<FVector>(*A.Position, *B.Position, Alpha);
	}

	float Distance = FMath::Lerp<float>(A.Distance, B.Distance, Alpha);
	FVector LerpedOffset = FMath::Lerp<FVector>(A.LocalOffset, B.LocalOffset, Alpha);

	FVector SplinePoint = Spline->GetSplineComponent()->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
	FRotator RotatorAtPoint = FRotationMatrix::MakeFromXY(
		Spline->GetZoneForwardVectorNew(FVector::ForwardVector*Distance),
		Spline->GetZoneRightVectorNew(FVector::ForwardVector*Distance)
		).Rotator();

	FVector WorldOffset = RotatorAtPoint.RotateVector(LerpedOffset);
	return SplinePoint + WorldOffset;
}

FVector FSplineTransitionPosition::FindClosestBetween(const FSplineTransitionPosition& A, const FSplineTransitionPosition& B, FVector ToWorldLocation)
{
	auto Spline = Cast<AAdvKitZoneSpline>(A.Position.Base);
	if (Spline)
	{
		float ClosestDistance = Spline->GetClosestDistanceOnSpline(ToWorldLocation, FVector::ZeroVector);

		float MinDist = FMath::Min<float>(A.Distance, B.Distance);
		float MaxDist = FMath::Max<float>(A.Distance, B.Distance);

		float ClampedDistance = FMath::Clamp<float>(ClosestDistance, MinDist, MaxDist);
		return Spline->GetZoneLocationWorld(FVector::ForwardVector*ClampedDistance);
	}

	return FMath::ClosestPointOnLine(*A.Position, *B.Position, ToWorldLocation);
}

void UAdvKitTransitionComponentSpline::Init(
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
	AAdvKitZone* NewTargetZone,
	uint8 NewTargetCustomPhysics)
{
	AActor* BaseActor = Cast<AActor>(this->GetOuter());

	MinSourcePosition.Set(BaseActor, MinWorldSourcePosition, MinSourceDistance);
	MaxSourcePosition.Set(BaseActor, MaxWorldSourcePosition, MaxSourceDistance);

	MinTargetPosition.Set(NewTargetZone ? NewTargetZone : BaseActor, MinWorldTargetPosition, MinTargetDistance);
	MaxTargetPosition.Set(NewTargetZone ? NewTargetZone : BaseActor, MaxWorldTargetPosition, MaxTargetDistance);

	//FVector MediumSource = (MinWorldSource + MaxWorldSource)*0.5f;
	//FVector MediumTarget = (MinWorldTarget + MaxWorldTarget)*0.5f;
	//TransitionDirection = BaseActor->GetTransform().InverseTransformVector(MediumTarget - MediumSource).GetSafeNormal();

	TransitionDirection = -FVector::UpVector;

	UseableBy = ForCharacter;

	TargetZone = NewTargetZone;
	TargetPhysics = NewTargetPhysics;
	TargetCustomPhysics = NewTargetCustomPhysics;

	auto BaseRoot = BaseActor->GetRootComponent();
	if (BaseRoot && BaseRoot->Mobility == EComponentMobility::Movable)
	{
		bIsDynamic = true;
	}

	if (NewTargetZone)
	{
		auto TargetRoot = NewTargetZone->GetRootComponent();
		if (TargetRoot && TargetRoot->Mobility == EComponentMobility::Movable)
		{
			bIsDynamic = true;
		}
	}
}

FVector UAdvKitTransitionComponentSpline::GetClosestSourcePosition(const FVector& ToWorldPosition)
{
	return FSplineTransitionPosition::FindClosestBetween(MinSourcePosition, MaxSourcePosition, ToWorldPosition);
}

FVector UAdvKitTransitionComponentSpline::GetClosestTargetPosition(const FVector& ToWorldPosition)
{
	return FSplineTransitionPosition::FindClosestBetween(MinTargetPosition, MaxTargetPosition, ToWorldPosition);
}

void UAdvKitTransitionComponentSpline::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}


const FSplineTransitionPosition& UAdvKitTransitionComponentSpline::GetMinSourcePosition() const
{
	return MinSourcePosition;
}

const FSplineTransitionPosition& UAdvKitTransitionComponentSpline::GetMaxSourcePosition() const
{
	return MaxSourcePosition;
}

const FSplineTransitionPosition& UAdvKitTransitionComponentSpline::GetMinTargetPosition() const
{
	return MinTargetPosition;
}

const FSplineTransitionPosition& UAdvKitTransitionComponentSpline::GetMaxTargetPosition() const
{
	return MaxTargetPosition;
}



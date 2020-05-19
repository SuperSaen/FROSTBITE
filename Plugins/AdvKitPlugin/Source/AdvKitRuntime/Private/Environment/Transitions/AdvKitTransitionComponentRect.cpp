#include "Environment/Transitions/AdvKitTransitionComponentRect.h"
#include "Environment/AdvKitZone.h"
#include "DrawDebugHelpers.h"

void UAdvKitTransitionComponentRect::Init(TSubclassOf<AAdvKitCharacter> ForCharacter, const FVector& MinWorldSource, const FVector& MinWorldTarget, const FVector& MaxWorldSource, const FVector& MaxWorldTarget, EAdvKitMovementMode NewTargetPhysics, class AAdvKitZone* NewTargetZone, uint8 NewTargetCustomPhysics)
{
	AActor* BaseActor = Cast<AActor>(this->GetOuter());

	MinSourcePosition = FBasedPosition(BaseActor, MinWorldSource);
	MaxSourcePosition = FBasedPosition(BaseActor, MaxWorldSource);

	MinTargetPosition = FBasedPosition(NewTargetZone ? NewTargetZone : BaseActor, MinWorldTarget);
	MaxTargetPosition = FBasedPosition(NewTargetZone ? NewTargetZone : BaseActor, MaxWorldTarget);

	FVector MediumSource = (MinWorldSource + MaxWorldSource)*0.5f;
	FVector MediumTarget = (MinWorldTarget + MaxWorldTarget)*0.5f;
	TransitionDirection = BaseActor->GetTransform().InverseTransformVector(MediumTarget - MediumSource).GetSafeNormal();

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

FVector UAdvKitTransitionComponentRect::GetClosestSourcePosition(const FVector& ToWorldPosition)
{
	auto Base = GetOwner();
	if (!Base)
	{
		return ToWorldPosition;
	}

	const FTransform& BaseTransform = Base->GetActorTransform();

	const FVector& SourceRectBottomLeft = GetMinSourceLocation();
	const FVector& SourceRectTopRight = GetMaxSourceLocation();

	const FVector& LocalMin = BaseTransform.InverseTransformPosition(SourceRectBottomLeft);
	const FVector& LocalMax = BaseTransform.InverseTransformPosition(SourceRectTopRight);

	const FVector& SourceRectBottomRight = BaseTransform.TransformPosition(FVector(LocalMin.X, LocalMax.Y, LocalMin.Z));
	const FVector& SourceRectTopLeft = BaseTransform.TransformPosition(FVector(LocalMax.X, LocalMin.Y, LocalMax.Z));

	DrawDebugLine(GetWorld(), SourceRectBottomLeft, SourceRectBottomRight, FColor::Red, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), SourceRectBottomRight, SourceRectTopRight, FColor::Red, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), SourceRectTopRight, SourceRectBottomLeft, FColor::Red, false, -1, 0, 2.f);

	DrawDebugLine(GetWorld(), SourceRectTopRight, SourceRectTopLeft, FColor::Blue, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), SourceRectTopLeft, SourceRectBottomLeft, FColor::Blue, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), SourceRectBottomLeft, SourceRectTopRight, FColor::Blue, false, -1, 0, 2.f);

	const FVector& ClosestPointA = FMath::ClosestPointOnTriangleToPoint(ToWorldPosition, SourceRectBottomLeft, SourceRectBottomRight, SourceRectTopRight);
	const FVector& ClosestPointB = FMath::ClosestPointOnTriangleToPoint(ToWorldPosition, SourceRectTopRight, SourceRectTopLeft, SourceRectBottomLeft);

	if (FVector::Dist(ToWorldPosition, ClosestPointA) < FVector::Dist(ToWorldPosition, ClosestPointB))
	{
		DrawDebugLine(GetWorld(), ClosestPointA, ToWorldPosition, FColor::Green, false, -1, 0, 2.f);
		return ClosestPointA;
	}

	DrawDebugLine(GetWorld(), ClosestPointB, ToWorldPosition, FColor::Green, false, -1, 0, 2.f);
	return ClosestPointB;
}

FVector UAdvKitTransitionComponentRect::GetClosestTargetPosition(const FVector& ToWorldPosition)
{
	auto Base = MinTargetPosition.Base ? MinTargetPosition.Base : GetOwner();
	if (!Base)
	{
		return ToWorldPosition;
	}

	const FTransform& BaseTransform = Base->GetActorTransform();

	const FVector& TargetRectBottomLeft = GetMinTargetLocation();
	const FVector& TargetRectTopRight = GetMaxTargetLocation();

	const FVector& LocalMin = BaseTransform.InverseTransformPosition(TargetRectBottomLeft);
	const FVector& LocalMax = BaseTransform.InverseTransformPosition(TargetRectTopRight);

	const FVector& TargetRectBottomRight = BaseTransform.TransformPosition(FVector(LocalMin.X, LocalMax.Y, LocalMin.Z));
	const FVector& TargetRectTopLeft = BaseTransform.TransformPosition(FVector(LocalMax.X, LocalMin.Y, LocalMax.Z));

	DrawDebugLine(GetWorld(), TargetRectBottomLeft, TargetRectBottomRight, FColor::Red, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), TargetRectBottomRight, TargetRectTopRight, FColor::Red, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), TargetRectTopRight, TargetRectBottomLeft, FColor::Red, false, -1, 0, 2.f);

	DrawDebugLine(GetWorld(), TargetRectTopRight, TargetRectTopLeft, FColor::Blue, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), TargetRectTopLeft, TargetRectBottomLeft, FColor::Blue, false, -1, 0, 2.f);
	DrawDebugLine(GetWorld(), TargetRectBottomLeft, TargetRectTopRight, FColor::Blue, false, -1, 0, 2.f);

	const FVector& ClosestPointA = FMath::ClosestPointOnTriangleToPoint(ToWorldPosition, TargetRectBottomLeft, TargetRectBottomRight, TargetRectTopRight);
	const FVector& ClosestPointB = FMath::ClosestPointOnTriangleToPoint(ToWorldPosition, TargetRectTopRight, TargetRectTopLeft, TargetRectBottomLeft);

	if (FVector::Dist(ToWorldPosition, ClosestPointA) < FVector::Dist(ToWorldPosition, ClosestPointB))
	{
		DrawDebugLine(GetWorld(), ClosestPointA, ToWorldPosition, FColor::Green, false, -1, 0, 2.f);
		return ClosestPointA;
	}

	DrawDebugLine(GetWorld(), ClosestPointB, ToWorldPosition, FColor::Green, false, -1, 0, 2.f);
	return ClosestPointB;
}

void UAdvKitTransitionComponentRect::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	//Clean up all pointers
	MinSourcePosition.Clear();
	MaxSourcePosition.Clear();
	MinTargetPosition.Clear();
	MaxTargetPosition.Clear();
}


FVector UAdvKitTransitionComponentRect::GetMinSourceLocation() const
{
	return *MinSourcePosition;
}

FVector UAdvKitTransitionComponentRect::GetMaxSourceLocation() const
{
	return *MaxSourcePosition;
}

FVector UAdvKitTransitionComponentRect::GetMinTargetLocation() const 
{
	return *MinTargetPosition;
}

FVector UAdvKitTransitionComponentRect::GetMaxTargetLocation() const 
{
	return *MaxTargetPosition;
}



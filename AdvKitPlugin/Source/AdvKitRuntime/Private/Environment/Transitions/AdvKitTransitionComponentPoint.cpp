// Copyright 2015 Pascal Krabbe

#include "Environment/Transitions/AdvKitTransitionComponentPoint.h"

#include "DrawDebugHelpers.h"
#include "Environment/AdvKitZone.h"


void UAdvKitTransitionComponentPoint::Init(TSubclassOf<AAdvKitCharacter> ForCharacter, const FVector& WorldSource, const FVector& WorldTarget, EAdvKitMovementMode NewTargetPhysics, class AAdvKitZone* NewTargetZone, uint8 NewTargetCustomPhysics)
{
	AActor* BaseActor = Cast<AActor>(this->GetOuter());

	SourcePosition = FBasedPosition(BaseActor, WorldSource);
	TargetPosition = FBasedPosition(NewTargetZone ? NewTargetZone : BaseActor, WorldTarget);

	TargetZone = NewTargetZone;
	TargetPhysics = NewTargetPhysics;
	TargetCustomPhysics = NewTargetCustomPhysics;

	UseableBy = ForCharacter;

	//Check if source is dynamic
	auto BaseRoot = BaseActor->GetRootComponent();
	if (BaseRoot && BaseRoot->Mobility == EComponentMobility::Movable)
	{
		bIsDynamic = true;
	}

	//Check if target is dynamic
	if (NewTargetZone)
	{
		auto TargetRoot = NewTargetZone->GetRootComponent();
		if (TargetRoot && TargetRoot->Mobility == EComponentMobility::Movable)
		{
			bIsDynamic = true;
		}
	}

	//Auto fill transiton direction
	TransitionDirection = BaseActor->GetTransform().InverseTransformVectorNoScale(WorldTarget - WorldSource).GetSafeNormal();
}

void UAdvKitTransitionComponentPoint::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	//Clean up all pointers
	SourcePosition = FBasedPosition();
	TargetPosition = FBasedPosition();

	Super::OnComponentDestroyed(bDestroyingHierarchy);
}

FVector UAdvKitTransitionComponentPoint::GetClosestSourcePosition(const FVector& ToWorldPosition)
{
	return *SourcePosition;
}

FVector UAdvKitTransitionComponentPoint::GetClosestTargetPosition(const FVector& ToWorldPosition)
{
	return *TargetPosition;
}

FVector UAdvKitTransitionComponentPoint::GetSourceLocation() const
{
	return *SourcePosition;
}

FVector UAdvKitTransitionComponentPoint::GetTargetLocation() const
{
	return *TargetPosition;
}

void UAdvKitTransitionComponentPoint::DrawDebug_Implementation(const FColor& DebugColor, const float& DebugThickness, const float& DebugLifeTime)
{
	DrawDebugDirectionalArrow(GetWorld(), GetSourceLocation(), GetTargetLocation(), DebugThickness*2, DebugColor, false, DebugLifeTime, 0, DebugThickness);
}

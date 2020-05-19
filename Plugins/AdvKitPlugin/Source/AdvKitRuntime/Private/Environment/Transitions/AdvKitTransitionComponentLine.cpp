#include "Environment/Transitions/AdvKitTransitionComponentLine.h"
#include "Environment/AdvKitZone.h"

void UAdvKitTransitionComponentLine::Init(TSubclassOf<AAdvKitCharacter> ForCharacter, const FVector& MinWorldSource, const FVector& MinWorldTarget, const FVector& MaxWorldSource, const FVector& MaxWorldTarget, EAdvKitMovementMode NewTargetPhysics, class AAdvKitZone* NewTargetZone, uint8 NewTargetCustomPhysics)
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

FVector UAdvKitTransitionComponentLine::GetClosestSourcePosition(const FVector& ToWorldPosition)
{
	return FMath::ClosestPointOnLine(*MinSourcePosition, *MaxSourcePosition, ToWorldPosition);
}

FVector UAdvKitTransitionComponentLine::GetClosestTargetPosition(const FVector& ToWorldPosition)
{
	return FMath::ClosestPointOnLine(*MinTargetPosition, *MaxTargetPosition, ToWorldPosition);
}

void UAdvKitTransitionComponentLine::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	//Clean up all pointers
	MinSourcePosition.Clear();
	MaxSourcePosition.Clear();
	MinTargetPosition.Clear();
	MaxTargetPosition.Clear();
}


FVector UAdvKitTransitionComponentLine::GetMinSourceLocation() const
{
	return *MinSourcePosition;
}

FVector UAdvKitTransitionComponentLine::GetMaxSourceLocation() const
{
	return *MaxSourcePosition;
}

FVector UAdvKitTransitionComponentLine::GetMinTargetLocation() const 
{
	return *MinTargetPosition;
}

FVector UAdvKitTransitionComponentLine::GetMaxTargetLocation() const 
{
	return *MaxTargetPosition;
}



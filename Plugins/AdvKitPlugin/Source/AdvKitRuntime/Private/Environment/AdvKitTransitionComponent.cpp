// Copyright 2015 Pascal Krabbe

#include "Environment/AdvKitTransitionComponent.h"
#include "Player/AdvKitCharacter.h"
#include "Environment/AdvKitZone.h"
#include "AdvKitLogCategories.h"

UAdvKitTransitionComponent::UAdvKitTransitionComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TargetPhysics = EAdvKitMovementMode::Falling;
	TargetCustomPhysics = 0;

	bIsDynamic = false;
	bDynamicTransitionActive = true;
	bNeedsJump = false;
	TransitionDirection = FVector::UpVector;
	MinDirectionNormal = 0.99f;
	MinLocationRadius = 2.0f;

	CreatedByBuildModule = nullptr;
	TargetZone = nullptr;
}

FVector UAdvKitTransitionComponent::GetClosestSourcePosition(const FVector& ToWorldPosition)
{
	//Dummy implementation, implement in subclass
	return FVector::ZeroVector;
}

FVector UAdvKitTransitionComponent::GetClosestTargetPosition(const FVector& ToWorldPosition)
{
	//Dummy implementation, implement in subclass
	return FVector::ZeroVector;
}

bool UAdvKitTransitionComponent::CanTransition(AAdvKitCharacter* Character, const FVector& AtLocation, const FVector& InDirection, bool bIsJump)
{
	UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("UAdvKitTransitionComponent::CanTransition %s"), *GetNameSafe(this));

	if (IsValid(UseableBy) && IsValid(Character))
	{
		if (!Character->IsA(UseableBy))
		{
			UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tUnsupported character class"));
			return false;
		}
	}

	if (bIsDynamic && !IsDynamicTransitionValid())
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tIs dynamic, but inactive"));
		return false;
	}

	if (bNeedsJump != bIsJump)
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tjump != needs jump"));
		return false;
	}

	auto* SourceZone = Cast<AAdvKitZone>(GetOuter());
	if (!SourceZone)
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tNo source zone"));
		return false;
	}

	FVector GlobalDirection = SourceZone->GetTransform().TransformVectorNoScale(TransitionDirection);
	float Dot = FVector::DotProduct(InDirection.GetSafeNormal(), GlobalDirection.GetSafeNormal());
	if (Dot < MinDirectionNormal)
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tDot too small: %f<%f"), Dot, MinDirectionNormal);
		return false;
	}

	FVector ClosestStart = GetClosestSourcePosition(AtLocation);
	if (FVector::Dist(AtLocation, ClosestStart) > MinLocationRadius)
	{
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tDistance too large: %f>%f"), FVector::Dist(AtLocation, ClosestStart), MinLocationRadius);

		return false;
	}

	UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("\tTransition %s can be taken"), *GetNameSafe(this));
	return true;
}

bool UAdvKitTransitionComponent::IsDynamicTransitionValid()
{
	return bDynamicTransitionActive;
}

bool UAdvKitTransitionComponent::IsSupportedForNetworking() const
{
	return true;
}

bool UAdvKitTransitionComponent::IsNameStableForNetworking() const
{
	return true;
}

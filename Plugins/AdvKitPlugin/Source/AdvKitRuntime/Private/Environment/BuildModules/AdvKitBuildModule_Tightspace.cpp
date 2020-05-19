// Copyright 2015 Pascal Krabbe

#include "Environment/BuildModules/AdvKitBuildModule_Tightspace.h"
#include "AdvKitTypes.h"
#include "Player/AdvKitCharacter.h"
#include "Environment/Zones/AdvKitZoneLine.h"
#include "Environment/Zones/AdvKitZoneSpline.h"

bool UAdvKitBuildModule_Tightspace::CanCreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone)
{
	//Cannot create transitions on non line zone object
	if (!ForZone->IsA(AAdvKitZoneLine::StaticClass()) 
		&& !ForZone->IsA(AAdvKitZoneSpline::StaticClass()))
	{
		return false;
	}

	//Only valid for this movement mode
	if (ForZone->GetPhysics() != EAdvKitMovementMode::WalkingTightspace)
	{
		return false;
	}

	//Need to know character's movement properties to build transitions
	auto MovementProps = GetCharacterMovementProperties(ForCharacterClass);
	if (!MovementProps)
	{
		return false;
	}

	//No need to create transitions for a character that cannot use them
	return MovementProps->bCanWalkTightSpace;
}

void UAdvKitBuildModule_Tightspace::CreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone)
{
	//Get character's attributes
	FVector CharacterHalfExtent = GetCharacterHalfExtent(ForCharacterClass, ForZone);
	float CharacterRadius = CharacterHalfExtent.X;

	//Get line configuration
	auto LineZone = Cast<AAdvKitZoneLine>(ForZone);
	if (LineZone)
	{
		//Create start exit
		if (bCreateStartTransition)
		{
			FVector TransitionStart = LineZone->GetZoneStartWorld() + LineZone->GetActorRightVector() * CharacterRadius;
			FVector TransitionEnd = LineZone->GetZoneStartWorld() - LineZone->GetActorRightVector() * CharacterRadius;

			CreateTransitionPoint(this, "ExitStart", LineZone, TransitionStart, TransitionEnd, ForCharacterClass, EAdvKitMovementMode::Walking);
		}

		//Create end exit
		if (bCreateEndTransition)
		{
			FVector TransitionStart = LineZone->GetZoneEndWorld() - LineZone->GetActorRightVector() * CharacterRadius;
			FVector TransitionEnd = LineZone->GetZoneEndWorld() + LineZone->GetActorRightVector() * CharacterRadius;

			CreateTransitionPoint(this, "ExitEnd", LineZone, TransitionStart, TransitionEnd, ForCharacterClass, EAdvKitMovementMode::Walking);
		}

		return;
	}

	auto SplineZone = Cast<AAdvKitZoneSpline>(ForZone);
	if (SplineZone)
	{
		//Create start exit
		if (bCreateStartTransition)
		{
			FVector SplineStart = SplineZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(0, ESplineCoordinateSpace::World);

			FVector TransitionStart = SplineStart + SplineZone->GetZoneRightVectorNew(FVector::ZeroVector) * CharacterRadius;
			FVector TransitionEnd = SplineStart - SplineZone->GetZoneRightVectorNew(FVector::ZeroVector) * CharacterRadius;

			CreateTransitionPoint(this, "ExitStart", SplineZone, TransitionStart, TransitionEnd, ForCharacterClass, EAdvKitMovementMode::Walking);
		}

		//Create end exit
		if (bCreateEndTransition)
		{
			float SplineLength = SplineZone->GetSplineComponent()->GetSplineLength();
			FVector SplineEnd = SplineZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(SplineLength, ESplineCoordinateSpace::World);

			FVector TransitionStart = SplineEnd - SplineZone->GetZoneRightVectorNew(FVector::ForwardVector * SplineLength) * CharacterRadius;
			FVector TransitionEnd = SplineEnd + SplineZone->GetZoneRightVectorNew(FVector::ForwardVector * SplineLength) * CharacterRadius;

			CreateTransitionPoint(this, "ExitEnd", SplineZone, TransitionStart, TransitionEnd, ForCharacterClass, EAdvKitMovementMode::Walking);
		}
	}
}

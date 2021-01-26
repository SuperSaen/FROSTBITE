// Copyright 2015 Pascal Krabbe

#include "Environment/AdvKitZone.h"
#include "Environment/AdvKitZoneLocation.h"
#include "Environment/Transitions/AdvKitTransitionComponentLine.h"
#include "Environment/AdvKitTransitionBuilderModule.h"
#include "Player/AdvKitCharacter.h"
#include "AdvKitLogCategories.h"

AAdvKitZone::AAdvKitZone(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ZonePhysics = EAdvKitMovementMode::Falling;
	CustomZonePhysics = 0;
}

void AAdvKitZone::GenerateTransitions_Implementation(bool bZoneMoved)
{
	//Zones that were targeted by transition generation
	TArray<AAdvKitZone*> AffectedZones;

	//Let all modules build transitions
	for (auto Module : BuildModules)
	{
		//Skip if module is none
		if (!Module)
		{
			UE_LOG(LogAdvKit, Error, TEXT("Invalid build module on zone %s!"), *GetName())
			continue;
		}

		//Create transitions
		TArray<AAdvKitZone*> NewAffectedZones;
		Module->CreateTransitions(NewAffectedZones);

		for (auto NewZone : NewAffectedZones)
		{
			AffectedZones.AddUnique(NewZone);
		}
	}

	//If the zone moved and affected transitions the corresponding ones need to be rebuild too
	if (!bZoneMoved)
	{
		//Zone did not move
		return;
	}

	//Regenerate transitions on affected zones
	for (auto AffectedZone : AffectedZones)
	{
		if (!AffectedZone)
		{
			continue;
		}

		//TODO provide instigator zone, so generate transitions does not regenerate all transitions
		AffectedZone->GenerateTransitions(false);
	}
}


void AAdvKitZone::AddTransition(TSubclassOf<AAdvKitCharacter> For, class UAdvKitTransitionComponent* Transition)
{
	unimplemented();

	////Try to add transition to an existing configuration
	//for (FAdvKitZoneTransitions& TransitionList : Transitions)
	//{
	//	if (TransitionList.UseableBy->IsChildOf(For))
	//	{
	//		TransitionList.Targets.AddUnique(Transition);
	//		return;
	//	}
	//}

	////No existing configuration for the character exists, so add a new one
	//FAdvKitZoneTransitions NewTransitionList;
	//NewTransitionList.Targets.Add(Transition);
	//NewTransitionList.UseableBy = For;

	//Transitions.Add(NewTransitionList);

}

void AAdvKitZone::RemoveExistingTransitionsTo(class AAdvKitZone* Other)
{
	TInlineComponentArray<UAdvKitTransitionComponent*> Transitions(this);

	//Go through all configurations
	for (auto Component : Transitions)
	{
		auto TransitionComponent = Cast<UAdvKitTransitionComponent>(Component);
		//Test all transitions
		if (TransitionComponent->TargetZone == Other)
		{
			TransitionComponent->DestroyComponent();
		}
	}
}

bool AAdvKitZone::IsPointInside(const FVector& WorldPosition, float ErrorMargin)
{
	return FVector::Dist(ConstrainPositionToZone(WorldPosition, FVector::ZeroVector), WorldPosition) < ErrorMargin;
}

TArray<class UAdvKitTransitionComponent*> AAdvKitZone::GetPossibleTransitions(const class AAdvKitCharacter* ForCharacter)
{
	TArray<class UAdvKitTransitionComponent*> OutArray;

	TInlineComponentArray<UAdvKitTransitionComponent*> Transitions(this);

	//Go through all transitions
	for (auto Component : Transitions)
	{
		auto TransitionComponent = Cast<UAdvKitTransitionComponent>(Component);
		
		//Check if usable by character
		if (IsValid(TransitionComponent->UseableBy) && !ForCharacter->IsA(TransitionComponent->UseableBy))
		{
			continue;
		}

		//Add all transitions to the result
		OutArray.Add(TransitionComponent);
	}

	return OutArray;
}

bool AAdvKitZone::MoveLocationInDirection(UAdvKitZoneLocation* LocationToMove, const FVector& WorldDesiredDelta, const FVector& HalfExtent, const FRotator& ExtentWorldRotation)
{
	return false;
}

FVector AAdvKitZone::GetPositionInDirection_Implementation(const FVector& FromWorldPosition, const FVector& WorldDesiredDelta, bool bClamp, const FVector& HalfExtent, const FRotator& ExtentWorldRotation)
{
	FVector AdjustedDirection = ConstrainDirectionToZone(WorldDesiredDelta, FromWorldPosition);
	if (bClamp)
	{
		return ConstrainPositionToZone(FromWorldPosition + AdjustedDirection, HalfExtent, ExtentWorldRotation);
	}

	return ConstrainPositionToZone(FromWorldPosition, HalfExtent, ExtentWorldRotation) + AdjustedDirection;
}

FVector AAdvKitZone::GetZoneForwardVector(const UAdvKitZoneLocation* AtLocation)
{
	return GetActorForwardVector();
}

FVector AAdvKitZone::GetZoneRightVector(const UAdvKitZoneLocation* AtLocation)
{
	return GetActorRightVector();
}

FVector AAdvKitZone::GetZoneUpVector(const UAdvKitZoneLocation* AtLocation)
{
	return GetActorUpVector();
}


FVector AAdvKitZone::ConstrainPositionToZone_Implementation(const FVector& WorldPosition, const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	return GetActorLocation();
}

FVector AAdvKitZone::ConstrainDirectionToZone_Implementation(const FVector& WorldDirection, const FVector& AtWorldLocation) const
{
	return WorldDirection;
}

void AAdvKitZone::DrawDebug_Implementation(const FColor& DebugColor, const float& DebugThickness, const float& DebugLifeTime)
{
	TInlineComponentArray<UAdvKitTransitionComponent*> Transitions(this);
	for(auto Transition : Transitions)
	{
		Transition->DrawDebug(DebugColor,DebugThickness,DebugLifeTime);
	}
}

EAdvKitMovementMode AAdvKitZone::GetPhysics()
{
	return ZonePhysics;
}

uint8 AAdvKitZone::GetCustomPhysics()
{
	return CustomZonePhysics;
}

bool AAdvKitZone::HasPhysics(EAdvKitMovementMode QueryPhysics)
{
	return GetPhysics() == QueryPhysics;
}

bool AAdvKitZone::HasCustomPhysics(uint8 QueryPhysics)
{
	return GetCustomPhysics() == QueryPhysics;
}

void AAdvKitZone::SetCharacterClass(TSubclassOf<AAdvKitCharacter> CharacterClass)
{
	for (auto Module : BuildModules)
	{
		if (!Module)
		{
			continue;
		}

		Module->DefaultCharacterClasses.Empty();
		Module->DefaultCharacterClasses.AddUnique(CharacterClass);
	}
}

void AAdvKitZone::AddCharacterClass(TSubclassOf<AAdvKitCharacter> CharacterClass)
{
	for (auto Module : BuildModules)
	{
		if (!Module)
		{
			continue;
		}

		Module->DefaultCharacterClasses.AddUnique(CharacterClass);
	}
}

void AAdvKitZone::RemoveCharacterClass(TSubclassOf<AAdvKitCharacter> CharacterClass)
{
	for (auto Module : BuildModules)
	{
		if (!Module)
		{
			continue;
		}

		Module->DefaultCharacterClasses.Remove(CharacterClass);
	}
}

bool AAdvKitZone::IsCharacterSupported(AAdvKitCharacter* Character)
{
	if (!Character)
	{
		return false;
	}

	if(BuildModules.Num()==0)
	{
		return true;
	}
	
	for (auto Module : BuildModules)
	{
		if (!Module)
		{
			continue;
		}

		for (auto CharacterClass : Module->DefaultCharacterClasses)
		{
			if (Character->IsA(CharacterClass))
			{
				return true;
			}
		}
	}

	return false;
}


bool AAdvKitZone::MoveLocationInDirectionNew(FVector& LocalZoneLocation, const FVector& WorldDesiredDelta, const FVector& HalfExtent, const FRotator& ExtentWorldRotation)
{
	static const float ZeroTolerance = 0.001f;
	FVector OldLocation = GetZoneLocationWorld(LocalZoneLocation);

	FVector NewLocation = GetPositionInDirection(OldLocation, WorldDesiredDelta, true, HalfExtent, ExtentWorldRotation);
	LocalZoneLocation = GetZoneLocationLocal(NewLocation);

	//Check if location has moved
	return !(NewLocation - OldLocation).IsNearlyZero(ZeroTolerance);
}

FVector AAdvKitZone::GetZoneLocationWorld(const FVector& LocalZoneLocation) const
{
	return GetTransform().TransformPosition(LocalZoneLocation);
}

FVector AAdvKitZone::GetZoneLocationLocal(const FVector& WorldLocation) const
{
	return GetTransform().InverseTransformPosition(WorldLocation);
}

FVector AAdvKitZone::GetZoneForwardVectorNew_Implementation(const FVector& LocalZoneLocation) const
{
	return GetActorForwardVector();
}

FVector AAdvKitZone::GetZoneRightVectorNew_Implementation(const FVector& LocalZoneLocation) const
{
	return GetActorRightVector();
}

FVector AAdvKitZone::GetZoneUpVectorNew_Implementation(const FVector& LocalZoneLocation) const
{
	return GetActorUpVector();
}

FVector AAdvKitZone::GetClosestZoneForwardVector_Implementation(const FVector& ToWorldLocation) const
{
	FVector LocalZoneLocation = GetClosestZoneLocationNew(ToWorldLocation, FVector::ZeroVector);
	return GetZoneForwardVectorNew(LocalZoneLocation);
}

FVector AAdvKitZone::GetClosestZoneRightVector_Implementation(const FVector& ToWorldLocation) const
{
	FVector LocalZoneLocation = GetClosestZoneLocationNew(ToWorldLocation, FVector::ZeroVector);
	return GetZoneRightVectorNew(LocalZoneLocation);
}

FVector AAdvKitZone::GetClosestZoneUpVector_Implementation(const FVector& ToWorldLocation) const
{
	FVector LocalZoneLocation = GetClosestZoneLocationNew(ToWorldLocation, FVector::ZeroVector);
	return GetZoneUpVectorNew(LocalZoneLocation);
}

FTransform AAdvKitZone::GetClosestZoneTransform(const FVector& ToWorldLocation) const
{
	FVector ClosestLocation = ConstrainPositionToZone(ToWorldLocation, FVector::ZeroVector);
	FVector Forward = GetClosestZoneForwardVector(ToWorldLocation);
	FVector Right = GetClosestZoneRightVector(ToWorldLocation);

	FTransform ZoneTransform;
	ZoneTransform.SetFromMatrix(FRotationMatrix::MakeFromXY(Forward, Right));
	ZoneTransform.SetTranslation(ClosestLocation);

	return ZoneTransform;
}


FVector AAdvKitZone::GetClosestZoneLocationNew_Implementation(const FVector& WorldLocation, const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	FVector ClosestGlobalLocation = ConstrainPositionToZone(WorldLocation, HalfExtent, ExtentWorldRotation);
	return GetZoneLocationLocal(ClosestGlobalLocation);
}

bool AAdvKitZone::IsNameStableForNetworking() const
{
	return true;
}

bool AAdvKitZone::IsSupportedForNetworking() const
{
	return true;
}

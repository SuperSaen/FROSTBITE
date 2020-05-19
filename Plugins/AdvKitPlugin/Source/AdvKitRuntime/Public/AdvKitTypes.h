// Copyright 2015 Pascal Krabbe

#pragma once

#include "AdvKitTypes.generated.h"


class UAdvKitTransitionComponent;
class AAdvKitZone;

/**
 * @brief Enumeration for movement mode of the @see UAdvKitMovementComponent
 */
UENUM(BlueprintType)
enum class EAdvKitMovementMode : uint8
{
	None				UMETA(DisplayName = "None"),
	Walking				UMETA(DisplayName = "Walking"),
	NavWalking			UMETA(DisplayName = "Navmesh Walking"),
	Falling				UMETA(DisplayName = "Falling"),
	Swimming			UMETA(DisplayName = "Swimming"),
	Flying				UMETA(DisplayName = "Flying"),
	//Enums above to preserve casting conversion from MovementMode to AdvMovementMode
	ClimbingWall		UMETA(DisplayName = "Wall Climbing"),
	ClimbingCeiling		UMETA(DisplayName = "Ceiling Climbing"),
	ClimbingLedge		UMETA(DisplayName = "Ledge Climbing"),
	ClimbingLadder		UMETA(DisplayName = "Ladder Climbing"),
	WalkingTightspace	UMETA(DisplayName = "Tight Space Walking"),
	WalkingBalance		UMETA(DisplayName = "Balance Walking"),
	CustomZone			UMETA(DisplayName = "Custom Zone"),
	ActionDriven		UMETA(DisplayName = "Action Driven"),
	Custom				UMETA(DisplayName = "Custom"),
};


USTRUCT(BlueprintType)
struct ADVKITRUNTIME_API FPendingTransition
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AdvKit)
	UAdvKitTransitionComponent* Transition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AdvKit)
	AAdvKitZone* Zone;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AdvKit)
	bool bIsValid;

	FPendingTransition()
		: Transition(nullptr)
		, Zone(nullptr)
		, bIsValid(false)
	{
	}

	void Set(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition)
	{
		Transition = NewTransition;
		Zone = NewZone;
		bIsValid = true;
	}

	void Clear()
	{
		Transition = nullptr;
		Zone = nullptr;
		bIsValid = false;
	}

	bool IsValid() const
	{
		return bIsValid;
	}
};

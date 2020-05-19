// Copyright 2015 Pascal Krabbe

#pragma once

#include "AdvKitTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AdvKitCharacterMovementComponent.generated.h"

/** @brief Movement properties of the adventure kit */
USTRUCT(BlueprintType)
struct ADVKITRUNTIME_API FAdvKitMovementProperties
{
	GENERATED_USTRUCT_BODY();

	/** Can the character use tight spaces */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKitMovementProperties")
	uint32 bCanWalkTightSpace : 1;

	/** Can the character use balancing zones */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKitMovementProperties")
	uint32 bCanWalkBalance: 1;

	/** Can the character climb on ceilings */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKitMovementProperties")
	uint32 bCanClimbCeiling : 1;

	/** Can the character climb on walls */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKitMovementProperties")
	uint32 bCanClimbWall : 1;

	/** Can the character climb on ledges */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKitMovementProperties")
	uint32 bCanClimbLedge: 1;

	/** Can the character use ladders */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKitMovementProperties")
	uint32 bCanClimbLadder : 1;


	FAdvKitMovementProperties()
		: bCanWalkTightSpace(true)
		, bCanWalkBalance(true)
		, bCanClimbCeiling(true)
		, bCanClimbWall(true)
		, bCanClimbLedge(true)
		, bCanClimbLadder(true)
	{
	}
};

//Thanks to https://wiki.unrealengine.com/Authoritative_Networked_Character_Movement
class FSavedMove_AdvKitCharacter : public FSavedMove_Character
{
public:

	typedef FSavedMove_Character Super;

	///@brief Resets all saved variables.
	virtual void Clear() override;

	///@brief Store input commands in the compressed flags.
	virtual uint8 GetCompressedFlags() const override;

	///@brief This is used to check whether or not two moves can be combined into one.
	///Basically you just check to make sure that the saved variables are the same.
	virtual bool CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const override;

	///@brief Sets up the move before sending it to the server. 
	virtual void SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData) override;
	///@brief Sets variables on character movement component before making a predictive correction.
	virtual void PrepMoveFor(class ACharacter* Character) override;

	FVector SavedLocalZoneLocation;

	//FPendingTransition SavedPendingTransition;

};

class FNetworkPredictionData_Client_AdvKitCharacter : public FNetworkPredictionData_Client_Character
{
public:
	FNetworkPredictionData_Client_AdvKitCharacter(const UCharacterMovementComponent& ClientMovement);

	typedef FNetworkPredictionData_Client_Character Super;

	///@brief Allocates a new copy of our custom saved move
	virtual FSavedMovePtr AllocateNewMove() override;
};

/**
 * @brief Default movement component for the @see AAdvKitCharacter. This handles zone movement and target locking.
 */
UCLASS(Blueprintable, NotPlaceable)
class ADVKITRUNTIME_API UAdvKitCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	/** Keep track of last acceleration that was not zero in case the character needs to face this direction */
	FVector LastNonZeroAcceleration;


public:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "AdvKit", Replicated)
	FVector LocalZoneLocation;

public:

	friend class FSavedMove_AdvKitCharacter;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;

	/**
	 * Constructor
	 */
	UAdvKitCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);


	/**
	 * Hard set the velocity variables
	 * @param	NewVelocity 	New velocity in world space
	 * @param	NewAcceleration 	New acceleration in world space
	 */
	void SetMovementVariables(FVector NewVelocity, FVector NewAcceleration);

	/**
	 * Set all movement variables to zero, halting movement
	 */
	void ZeroMovementVariables();

	/** Movement properties for the adventure kit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Capabilities", meta = (DisplayName = "Adv Movement Capabilities", Keywords = "Nav Agent"))
	FAdvKitMovementProperties AdvMovementProps;

	/**
	 * Get the advkit movement properties
	 */
	FORCEINLINE const FAdvKitMovementProperties* GetAdvMovementProperties() const { return &AdvMovementProps; }

	/**
	* Get the advkit movement properties
	*/
	FORCEINLINE FAdvKitMovementProperties* GetAdvMovementProperties() { return &AdvMovementProps; }

	/**
	 * Set a new movement mode
	 * @param	NewMovementMode	The new movement mode to set
	 * @param	NewCustomMode	A custom movement mode to set
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual void SetAdvMovementMode(EAdvKitMovementMode NewMovementMode, uint8 NewCustomMode = 0);

	/** @return True if the character is currently climbing a wall. */
	virtual bool IsClimbingWall() const;

	/** @return True if the character is currently climbing a ceiling. */
	virtual bool IsClimbingCeiling() const;

	/** @return True if the character is currently climbing a ledge. */
	virtual bool IsClimbingLedge() const;

	/** @return True if the character is currently climbing a ladder. */
	virtual bool IsClimbingLadder() const;

	/** @return True if the character is currently walking in a tight space. */
	virtual bool IsWalkingTightspace() const;

	/** @return True if the character is currently in a balance zone. */
	virtual bool IsWalkingBalance() const;

	/**
	 * Get the current movement mode
	 * @return	Current movement mode
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual EAdvKitMovementMode GetAdvMovementMode() const;

	/**
	 * Get the current custom movement mode
	 * @return	Current custom movement mode
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	uint8 GetAdvCustomMovementMode() const;
	
	//Begin UActorComponent Interface
	virtual void TickComponent(float DeltaSeconds, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	//End UActorComponent Interface

	//Begin UMovementComponent Interface
	virtual float GetMaxSpeed() const override;
	virtual void SetUpdatedComponent(USceneComponent* NewUpdatedComponent) override;
	//End UMovementComponent Interface

	//Begin UCharacterMovementComponent interface
	virtual void StartNewPhysics(float DeltaSeconds, int32 Iterations) override;
	virtual void PhysSwimming(float DeltaSeconds, int32 Iterations) override;
	virtual void PhysicsRotation(float DeltaSeconds) override;
	virtual void OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity) override;
	//End UCharacterMovementComponent interface

public:
	/** How far the character can jump horizontally between ladder and ledge */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Transitions")
	float JumpDistanceLedgeLadderHorizontal;

	/** How far the character can jump vertically from a ledge */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Ledge")
	float LedgeJumpDistanceVertical;

	/** How far the character can jump horizontally from a ledge */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Ledge")
	float LedgeJumpDistanceHorizontal;

	/** How far the character can jump back from a ledge */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Ledge")
	float LedgeJumpDistanceBack;

	/** How fast the character can climb on a ledge */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Ledge")
	float MaxLedgeClimbSpeed;

	/** What local offset to keep from a ledge while climbing it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Ledge")
	FVector LedgeOffset;

	/** How far the character can jump horizontally from a ladder */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Ladder")
	float LadderJumpDistanceHorizontal;

	/** How far the character can jump back from a ladder to another*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Ladder")
	float LadderJumpDistanceBack;
	
	//How fast the character climbs a ladder
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Ladder")
	float MaxLadderClimbSpeed;

	//What offset to have from the ladder the character is climbing on
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Ladder")
	FVector LadderOffset;

	//What offset to keep from it when climbing a wall
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Wall")
	FVector WallOffset;

	//How fast the character can climb on a wall
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Adv Character Movement: Wall")
	float MaxWallClimbSpeed;

	//How fast the character can climb on a ceiling
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Ceiling")
	float MaxCeilingClimbSpeed;

	//What offset to keep from the ceiling if the character is climbing on it
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Ceiling")
	FVector CeilingOffset;

	//The minimum orientation difference betweeen the character and a wall to start transitioning
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Ceiling")
	float CeilingMinTransitionDot;

	//What offset to keep from it when in a tight space
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Tight Space")
	FVector TightSpaceOffset;

	//How fast the character moves inside a tight space
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Tight Space")
	float MaxTightSpaceWalkSpeed;

	//How fast the character moves when balancing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Balance")
	float MaxBalanceWalkSpeed;

	//What offset to keep from a balance zone
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Balance", Replicated)
	FVector BalanceOffset;
	
	//How fast the character turns inside a balance zone in degrees per second
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Balance")
	float BalanceRotationRate;
	/** The balance the character has when in a balancing zone */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Adv Character Movement: Balance", Transient, Replicated)
	float CurrentBalance;
	
	/** Scale to apply to player input trying to restore balance */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Adv Character Movement: Balance", Transient)
	float CounterBalanceMultiplier;

	/** If input does not align correctly with balance direction, this is the min dot required for input to count as counter balance */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Adv Character Movement: Balance", Transient)
	float MinCounterBalanceDot;

	/** How much the current forward and input directions need to differ in order for the character to turn around */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Adv Character Movement: Balance", Transient)
	float MaxBalanceTurnAroundDot;

	/** How fast to change the balance to the target balance */
	UPROPERTY(BlueprintReadWrite, Category = "Adv Character Movement: Balance", Transient)
	float BalanceChangePerSecond;

	/** How fast to change the balance to the target balance at minimum */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Adv Character Movement: Balance")
	float MinBalanceChangePerSecond;

	/** How fast to change the balance to the target balance at maximum */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Adv Character Movement: Balance")
	float MaxBalanceChangePerSecond;

	/*Max balance, if Abs(Balance) is bigger or equals to this the character falls off*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Balance")
	float MaxBalance;

	/** How fast to change the target balance */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Balance")
	float BalanceChangeTime;

	/** TImer to change target balance */
	FTimerHandle ChangeBalanceTimerHandle;

	/** Timer callback to change target balance */
	UFUNCTION()
	virtual void ChangeTargetBalance();

	//How far the character will sink below the surface when swimming straight
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Swimming")
	float SwimmingImmersionDepthFlat;

	//How far the character will sink below the surface when swimming idle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Swimming")
	float SwimmingImmersionDepthUpright;

	//How fast the character will surface 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Swimming")
	float SwimmingSurfaceMultiplier;

	//The depth the character has to be below the surface to start diving
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Swimming")
	float DivingToSwimmingImmersionDepth;

	/* Amount of speed the character can swim before it will tilt forward */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Adv Character Movement: Swimming")
	float MaxUprightSwimSpeed;


public:
	/**
	 * Query the current zone of the character
	 * @return	Zone the character is currently in
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual class AAdvKitZone* GetZone();

	/**
	 * Moves the character's zone location object with the given parameters
	 * @param	GlobalAcceleration 	Acceleration to use for the intended moving direction
	 * @param	DeltaSeconds 		Delta time since last tick
	 * @param	HalfExtent			Size of the character in the zone (e.g. FVector(Radius,Radius,HalfHeight))
	 * @param	bAutoTransition 	True to try to transition if the character cannot move
	 * @param	ConstrainAcceleration	True to restrict the acceleration vector to the zone
	 * @return	True if location was moved
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual bool MoveLocationInZone(FVector GlobalAcceleration, float DeltaSeconds, const FVector& HalfExtent, bool bAutoTransition = true, bool ConstrainAcceleration = true);

	/**
	 * Moves the character inside the current zone with the given parameters
	 * @param	GlobalAcceleration 	Acceleration to use for the intended moving direction
	 * @param	DeltaSeconds 		Delta time since last tick
	 * @param	HalfExtent			Size of the character in the zone (e.g. FVector(Radius,Radius,HalfHeight))
	 * @param	bAutoTransition 	True to try to transition if the character cannot move
	 * @param	ConstrainAcceleration	True to restrict the acceleration vector to the zone
	 * @return	True if location was moved
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual bool PhysMoveInZone(FVector GlobalAcceleration, FVector WorldOffset, float DeltaSeconds, const FVector& HalfExtent, bool bAutoTransition = true, bool ConstrainAcceleration = true);

	virtual void PhysZoneMoving(float DeltaSeconds, int32 Iterations);

	/**
	 * Adds root motion to the owning character.
	 * @param	MovementDelta	Translation to be added to the character.
	 * @param	NewRotation		New rotation the character should have.
	 */
	UFUNCTION(BlueprintCallable, Category="AdvKit")
	void AccumulateRootMotion(FVector MovementDelta, FRotator NewRotation);


	/**
	 * Adds root motion rotation to the owning character.
	 * @param	NewRotation		New rotation the character should have.
	 */
	void AccumulateRootMotionRotation(FRotator NewRotation);

	/**
	 * Adds root motion to the owning character.
	 * @param	GlobalDelta	Translation to be added to the character.
	 */
	void AddRootMotionMovement(FVector GlobalDelta);

	/**
	 * Adds root motion rotation to the owning character.
	 * @param	AdditionalRotation	Rotation do be added to the character.
	 */
	void AddRootMotionRotation(FRotator AdditionalRotation);

protected:

	/** AdvKitCharacter movement component belongs to */
	UPROPERTY()
	class AAdvKitCharacter* AdvKitCharacterOwner;

};

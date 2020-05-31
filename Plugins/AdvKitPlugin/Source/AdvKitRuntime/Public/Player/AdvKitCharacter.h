// Copyright 2020 Sean Neville

#pragma once

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Actions/AnimNotifyState_TransitionCorrection.h"
#include "AdvKitTypes.h"
#include "AdvKitCharacter.generated.h"


class AAdvKitTargetPoint;
class AAdvKitCharacter; 

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdvKitCharacterDied, AAdvKitCharacter*, Character);

/** @brief Helper struct to replicated @see UAnimMontage on the character */
USTRUCT()
struct FRepAdvKitAnimMontage
{
	GENERATED_USTRUCT_BODY();

	/** Anim montage that is being replicated */
	UPROPERTY()
	UAnimMontage* Montage;

	/** Counter to make sure each new play of a montage is replicated */
	UPROPERTY()
	uint32 AnimCounter;

	/** How fast to play the montage */
	UPROPERTY()
	float PlayRate;

	/** Whether to play or stop the montage */
	UPROPERTY()
	bool bPlay;

	/** Which section to start playing */
	UPROPERTY()
	FName StartSectionName;

	/**
	 * Set the values of the struct
	 * @param	NewMontage 	Montage to play
	 * @param	NewPlayRate 	How fast to play the montage
	 * @param	NewStartSectionName 	Section to start playing at
	 * @return 
	 */
	void SetNewMontage(UAnimMontage* NewMontage, float NewPlayRate = 1.0f, FName NewStartSectionName = NAME_None, bool bNewPlay = true)
	{
		AnimCounter++;
		Montage = NewMontage;
		PlayRate = NewPlayRate;
		StartSectionName = NewStartSectionName;
		bPlay = bNewPlay;
	}
};

/**
 * @brief Enumeration to distinguish the integrated camera modes of the kit.
 */
UENUM(BlueprintType)
enum class EAdvKitCameraType : uint8
{
	FirstPerson,
	ThirdPerson,
	Shoulder,
	TargetLocked,
	Unkown
};

/**
 * @brief Base character class of the Adventure Kit. 
 * 
 * This character can use zones, inventory items and execute character actions.
 * It also provides functionality for several different camera styles and locking onto a target.
 */
UCLASS(Blueprintable, abstract)
class ADVKITRUNTIME_API AAdvKitCharacter : public ACharacter
{
		GENERATED_BODY()

public:

	/** Whether or not to automatically enter a zone when the character hits it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zones")
	bool bEnterZonesFromHitAutomatically;

	/** Whether or not to automatically enter a zone when the character overlaps it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zones")
	bool bEnterZonesFromOverlapAutomatically;

	/** Whether or not to automatically enter a zone when the character overlaps it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zones")
	bool bIgnoreItemWhenEnteringZonesAutomatically;

	/** List of collision channels to ignore while moving inside a zone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zones")
	TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnoreInZones;

	/** Name of the socket which represents the character's head. Used for first person camera and weapon targeting. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKit")
	FName HeadSocket;

	/** If true the character takes no damage if it is dodging */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvKit | Dodge")
	bool bInvincibleDuringDodge;

public:
	/**
	 * Constructor
	 */
	AAdvKitCharacter(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
	class UAdvKitCameraController* CameraController;

	/** Health points of the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvKit, Replicated, Meta = (ExposeOnSpawn = true))
	float Health;

	/** Max health of the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvKit, Replicated, Meta = (ExposeOnSpawn = true))
	float MaxHealth;


public:
//Inventory
	/** How far away items and switches can be from the camera to be found with clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AdvKit")
	float PointAndClickTraceDistance;

	/** Class of the inventory manager for this character */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
	TSubclassOf<class AAdvKitInventoryManager> InventoryManagerClass;

	/** Inventory manager this character uses */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Inventory", Replicated)
	class AAdvKitInventoryManager* InventoryManager;





	


//Targeting
	/** How far away targets can be for auto targeting */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Target")
	float MaxTargetDistance;

	/** Currently targeted component */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Target")
	AAdvKitTargetPoint* CurrentTarget;

	/** Whether the target is locked in */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Target")
	bool bLockTarget;

	/** Whether or not to face a target that has been locked */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	bool bFaceLockedTarget;

	/**
	 * Get the maximum distance at which targets should be considered for the character
	 * @return	Distance at which targets are considered.
	 */
	virtual float GetMaximumTargetDistance();

	/**
	 * Gets all targets the player can reach and lock on to.
	 * @return	Reachable targets
	 */
	UFUNCTION(BlueprintCallable, Category = "Target")
	virtual TArray<AAdvKitTargetPoint*> GetAllAvailableTargets();

	/**
	 * Filter a list of targets and get the best (e.g. closest) one
	 * @param	AvailableTargets	List to filter for target
	 * @return	Chosen target
	 */
	virtual AAdvKitTargetPoint* GetBestTarget(const TArray<AAdvKitTargetPoint*> &AvailableTargets);
	
	/**
	 * Set a new target for the character
	 * @param	NewTarget	The target to set
	 * @param	bLock	True to lock onto the target
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual void SetTarget(AAdvKitTargetPoint* NewTarget, bool bLock = false);

//Movement / Input

	/**
	 * Get the character's adv kit movement properties
	 * @return	The character's adventure kit movement properties
	 */
	virtual const struct FAdvKitMovementProperties* GetAdvMovementProperties() const;

	/**
	 * Get the character's adv kit movement component.
	 * @return The character's adv kit movement component.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual class UAdvKitCharacterMovementComponent* GetAdvMovementComponent() const;

	/**
	 * Wraps AddMovementInput and transforms local direction in case of certain zone movement modes (Wall, Ledge and Ladder) instead of using world direction.
	 *
	 * @param	WorldDirection	Direction in world space to apply input
	 * @param	LocalDirection 	Direction of input in character space
	 * @param	ScaleValue		Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.
	 * @param	bForce			If true always add the input, ignoring the result of IsMoveInputIgnored().
	 * @see AddMovementInput
	 */
	UFUNCTION(BlueprintCallable, Category = "Character|Input", meta = (Keywords = "AddInput"))
	virtual void AddConditionalMovementInput(FVector WorldDirection, FVector LocalDirection, float ScaleValue = 1.0f, bool bForce = false);



	


public:

	/**
	 * Check if the character is dodging
	 * @return	True if dodging
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	bool IsDodging() const;
	virtual bool IsDodging_Implementation() const;

public:

	/**
	 * Tries to let go of a zone (transition downwards or leaving a wall)
	 * @return	True if a transition happened
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool LetGoOfZone();
	virtual bool LetGoOfZone_Implementation();

	/**
	 * Tries to transition upwards on a zone
	 * @return	True if a transition happened
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool JumpUpZone();
	virtual bool JumpUpZone_Implementation();

	/**
	 * Get the acceleration for the current zone
	 * @return	Current acceleration
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	FVector GetZoneAcceleration();
	virtual FVector GetZoneAcceleration_Implementation();

	/**
	 * Get the maximum speed for the current zone
	 * @return	Maximum speed
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	float GetMaxZoneSpeed();
	virtual float GetMaxZoneSpeed_Implementation();

	/**
	 * Attempts to do a transition from the zone the character is currently in
	 * @param	InWorldDirection 	The direction the player wants to transition in
	 * @param	bIsJump 	True if the character attempts to jump during the transition
	 * @return	True if a transition happened
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool TryToTransitionFromCurrentZone(const FVector& InWorldDirection, bool bIsJump = false);
	virtual bool TryToTransitionFromCurrentZone_Implementation(const FVector& InWorldDirection, bool bIsJump = false);

	/**
	 * Attempts to do a transition inside a zone to a given direction
	 * @param	ForZone 	Zone to start transition in 
	 * @param	ForWorldPosition 	Where to start the transition
	 * @param	InWorldDirection 	The direction the player wants to transition in
	 * @param	bIsJump 	True if the character attempts to jump during the transition
	 * @return	True if a transition happened
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool TryToTransition(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection = FVector::ZeroVector, bool bIsJump = false);
	virtual bool TryToTransition_Implementation(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection = FVector::ZeroVector, bool bIsJump = false);
	
	/**
	 * Queries all possible transitions a zone has for the character
	 * @param	ForZone 	Zone to get transitions from
	 * @param	ForWorldPosition 	Where to start the transition
	 * @param	InWorldDirection 	The direction the player wants to transition in
	 * @param	bIsJump 	True if the character attempts to jump during the transition
	 * @return	List of possible transitions
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	UAdvKitTransitionComponent* GetPossibleTransition(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection = FVector::ZeroVector, bool bIsJump = false);
	virtual UAdvKitTransitionComponent* GetPossibleTransition_Implementation(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection = FVector::ZeroVector, bool bIsJump = false);
	
	/**
	 * Checks if the character can use a transition in the zone it is currently in
	 * @param	InWorldDirection 	The direction the player wants to transition in
	 * @param	bIsJump 	True if the character attempts to jump during the transition
	 * @return	True if the character can transition with the provided arguments
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool CanTransitionFromCurrentZone(const FVector& InWorldDirection, bool bIsJump = false);
	virtual bool CanTransitionFromCurrentZone_Implementation(const FVector& InWorldDirection, bool bIsJump = false);

	/**
	 * Checks if the character can use a transition in a given zone
	 * @param	ForZone 	Zone to start transition in
	 * @param	ForWorldPosition 	Where to start the transition
	 * @param	InWorldDirection 	The direction the player wants to transition in
	 * @param	bIsJump 	True if the character attempts to jump during the transition
	 * @return	True if the character can transition with the provided arguments
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool CanTransition(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection = FVector::ZeroVector, bool bIsJump = false);
	virtual bool CanTransition_Implementation(AAdvKitZone* ForZone, const FVector& ForWorldPosition, const FVector& InWorldDirection = FVector::ZeroVector, bool bIsJump = false);


	/**
	 * Query what rotation the character should have at a specified location inside the current zone.
	 * @param	Zone 			Zone to get the desired rotation
	 * @param	AtZoneLocation	Location inside the current zone
	 * @return	Desired rotation of the character
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	FRotator GetDesiredRotationInZone(AAdvKitZone* Zone, const FVector& AtZoneLocation);
	virtual FRotator GetDesiredRotationInZone_Implementation(AAdvKitZone* Zone, const FVector& AtZoneLocation);


	/**
	 * Query how far the character should be away from the location inside the zone
	 * @param	Zone 			Zone to get the desired offset from
	 * @param	AtZoneLocation	Location inside the current zone
	 * @return	Desired offset from the location inside the zone
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	FVector GetDesiredOffsetFromZone(AAdvKitZone* Zone, const FVector& AtZoneLocation);
	virtual FVector GetDesiredOffsetFromZone_Implementation(AAdvKitZone* Zone, const FVector& AtZoneLocation);

	/**
	 * Query how "big" the character for a specific movement mode in local space.
	 * @param	Zone		Zone to get extent for
	 * @return Half extent of the character e.g (Radius, Radius, Capsule Half Height)
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	FVector GetHalfExtentForZone(AAdvKitZone* Zone) const;
	virtual FVector GetHalfExtentForZone_Implementation(AAdvKitZone* Zone) const;

	/**
	 * Set a new zone for the character
	 * @param	NewZone		The new zone to set
	 * @param	bSnap		Snap character to the new zone
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	void SetZone(AAdvKitZone* NewZone, bool bSnap = true, bool bClearPendingTransition = true);
	virtual void SetZone_Implementation(class AAdvKitZone* NewZone, bool bSnap = true, bool bClearPendingTransition = true);

	/**
	 * Server callback to a new zone for the character
	 * @param	NewZone	The new zone to set
	 * @param	bSnap		Snap character to the new zone
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void SetZoneServer(AAdvKitZone* NewZone, bool bSnap = true, bool bClearPendingTransition = true);
	virtual void SetZoneServer_Implementation(AAdvKitZone* NewZone, bool bSnap = true, bool bClearPendingTransition = true);

	/**
	 * Gets the zone the character is currently in.
	 * @return	Current zone
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual AAdvKitZone* GetZone() const;

	UPROPERTY(BlueprintReadWrite, Category = "Transition", Replicated)
	FPendingTransition PendingTransition;

	UPROPERTY()
	FTransitionCorrectionData TransitionCorrectionData;

	UFUNCTION(BlueprintCallable, Category = "AdvKit|Zones")
	virtual float GetDotToClosestLocation(AAdvKitZone* Zone, FVector LocalCharacterDirection);

	UFUNCTION(BlueprintCallable, Category = "AdvKit|Zones")
	virtual FVector GetDirectionToClosestLocation(AAdvKitZone* Zone) const;

	UFUNCTION(BlueprintCallable, Category = "AdvKit|Zones")
	virtual float GetZoneDotToLocation(AAdvKitZone* Zone, FVector LocalZoneDirection);

	/**
	 * Check if character can transition to a given zone
	 * @param	Zone 	Zone to transition to
	 * @return	True if zone can be transitioned to
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="AdvKit|Zones")
	bool CanTransitionTo(AAdvKitZone* Zone, UAdvKitTransitionComponent* NewTransition = nullptr);
	virtual bool CanTransitionTo_Implementation(AAdvKitZone* Zone, UAdvKitTransitionComponent* NewTransition = nullptr);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit|Zones")
	bool TransitionTo(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition = nullptr, bool bForce = false);
	virtual bool TransitionTo_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition = nullptr, bool bForce = false);

	UFUNCTION(Server, Reliable, WithValidation)
	void TransitionToServer(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition = nullptr, bool bForce = false);
	virtual void TransitionToServer_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition = nullptr, bool bForce = false);


	/**
	 * Enable the mouse cursor for point and click
	 * @param	bEnabled 	True to enable, false to disable
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	void SetMouseCursorEnabled(bool bEnabled = true) const;


	/**
	 * Check if the character is still alive
	 * @return	True if still alive
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	bool IsAlive();
	virtual bool IsAlive_Implementation();

	/**
	 * Called when the character died
	 * @param	Killer 		Who killed the character
	 * @param	DamageEvent 	The damage event responsible for the kill
	 * @param	HitLocation 	Where the damage that killed came from
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "AdvKit")
	void Died(class AController* Killer, struct FDamageEvent const& DamageEvent, FVector HitLocation);
	virtual void Died_Implementation(class AController* Killer, struct FDamageEvent const& DamageEvent, FVector HitLocation);

	/**
	 * Delegate that is called when the character dies
	 */
	UPROPERTY(Category = "AdvKit", BlueprintAssignable)
	FAdvKitCharacterDied OnDied;


	/**
	 * Maps Montages to redirect montages. If montages are played a redirected montage will be played instead.
	 */
	UPROPERTY(EditAnywhere, Category = "AdvKit | Mapped Montages")
	TMap<UAnimMontage*, UAnimMontage*> MappedMontages;

	UFUNCTION(Category = "AdvKit", BlueprintCallable)
	UAnimMontage* GetMappedAnimMontage(UAnimMontage* AnimMontage);

	/**
	 * Callback when anim montage was replicated.
	 */
	UFUNCTION()
	virtual void OnRep_RepAnimMontage(FRepAdvKitAnimMontage OldRepAnimMontage);
	
	/**
	 * Server callback to play an AnimMontage.
	 * @param	AnimMontage 	Montage to play
	 * @param	InPlayRate	Speed at which to play montage
	 * @param	StartSectionName 	Where to start playing
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void PlayAnimMontageServer(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None);
	virtual void PlayAnimMontageServer_Implementation(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None);

	UFUNCTION(Server, Reliable, WithValidation)
	void StopAnimMontageServer(class UAnimMontage* AnimMontage = NULL);
	virtual void StopAnimMontageServer_Implementation(class UAnimMontage* AnimMontage = NULL);

	/** Property that contains all required values for replicated the played AnimMontage*/
	UPROPERTY(ReplicatedUsing = OnRep_RepAnimMontage)
	FRepAdvKitAnimMontage RepAnimMontage;




public:


	/** Sets scale to apply to root motion translation on this Character */
	UFUNCTION(BlueprintCallable,Category="Animation", meta = (DisplayName = "Set AnimRootMotion Translation Scale"))
	void SetAnimRootMotionTranslationScaleBP(float InAnimRootMotionTranslationScale = 1.f);

	//Begin AActor interface
	virtual void PostInitializeComponents() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyActorEndOverlap(class AActor* OtherActor) override;
	virtual void NotifyActorBeginOverlap(class AActor* OtherActor) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser) override;
	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;
	//End AActor interface

	//Begin APawn interface
	virtual FRotator GetBaseAimRotation() const override;
	virtual bool ShouldTakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const override;
	//End APawn interface

	//Begin ACharacter Interface
	virtual float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None) override;
	virtual void StopAnimMontage(class UAnimMontage* AnimMontage = NULL) override;
	virtual void Jump() override;
	virtual void Crouch(bool bClientSimulation = false);
	virtual void FaceRotation(FRotator NewControlRotation, float DeltaSeconds) override;
	virtual bool CanJumpInternal_Implementation() const override;
	virtual void SetBase(UPrimitiveComponent* NewBase, const FName BoneName = NAME_None, bool bNotifyActor = true) override;
	//End ACharacter Interface
};


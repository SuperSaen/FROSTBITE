// Copyright 2015 Pascal Krabbe

#pragma once

#include "GameFramework/Actor.h"
#include "AdvKitTypes.h"
#include "Player/AdvKitCharacterMovementComponent.h"
#include "AdvKitZone.generated.h"

class UAdvKitTransitionComponentPoint;
class UAdvKitTransitionComponentLine;
class UAdvKitZoneLocation;
class UAdvKitTransitionBuilderModule;
class UAdvKitManualTransition;

/**
 * @brief Zones are special movement objects that a character can use for specific movement modes. 
 * 
 * A zone always restricts movement within a specified region, e.g. a line or rectangle. Zones can 
 * also have predefined transition points between them.
 */
UCLASS(abstract)
class ADVKITRUNTIME_API AAdvKitZone : public AActor
{
	GENERATED_BODY()

public:
//protected:
	/** Movement mode to be used in this zone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone")
	EAdvKitMovementMode ZonePhysics;

	/** Custom Movement mode to be used in this zone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone")
	uint8 CustomZonePhysics;

public: //TODO

	/** Build modules this zone will use. */
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadWrite, Category = "Transitions")
	TArray<UAdvKitTransitionBuilderModule*> BuildModules;

public:
	/**
	 * Constructor
	 */
	AAdvKitZone(const FObjectInitializer& ObjectInitializer);

	/**
	 * Creates all transitions for this zone. Called either manually or by a transition builder if an 
	 * adjacent zone triggers it.
	 * @param	bZoneMoved	True if this zone was moved, false if it not
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	void GenerateTransitions(bool bZoneMoved = true);
	virtual void GenerateTransitions_Implementation(bool bZoneMoved = true);

	/**
	 * Add an existing transition to the transitions list
	 * @param	For		Character class that can use the transition
	 * @param	Transition	The transition to add
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual void AddTransition(TSubclassOf<AAdvKitCharacter> For, class UAdvKitTransitionComponent* Transition);

	/**
	 * Removes all transitions that target a specified zone
	 * @param	Other	The zone that transitions target
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual void RemoveExistingTransitionsTo(class AAdvKitZone* Other);

	/**
	 * Checks if a given location is inside the zone.
	 * @param	WorldPosition 	The location to check for
	 * @param	ErrorMargin		How much leeway the check has
	 * @return True if inside zone, false otherwise
	 */
	virtual bool IsPointInside(const FVector& WorldPosition, float ErrorMargin = 0.1f);

	/**
	 * Queries all available transitions for a given character.
	 * @param	ForCharacter 	The character to get transitions for.
	 * @return List of all available transitions.
	 */
	virtual TArray<class UAdvKitTransitionComponent*> GetPossibleTransitions(const class AAdvKitCharacter* ForCharacter);

	/**
	 * Get the next position in this zone in a certain direction. Since zones restrict movement the character can not always
	 * move as it desires, but has to adhere to a direction given by the zone.
	 * @param	FromWorldPosition 	Where the movement starts
	 * @param	WorldDesiredDelta 	The intended direction of the movement
	 * @param	bClamp 	Whether or not to restrict the resulting location to the zone as well
	 * @param	HalfExtent 	Half size of the character, describing its capsule (e.g. capsule radius and half height)
	 * @param	ExtentWorldRotation 	Rotation of the character.
	 * @return The resulting location after the move was restricted to the zone.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetPositionInDirection(const FVector& FromWorldPosition, const FVector& WorldDesiredDelta, bool bClamp, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator);
	virtual FVector GetPositionInDirection_Implementation(const FVector& FromWorldPosition, const FVector& WorldDesiredDelta, bool bClamp, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator);

	/**
	 * Moves a zone location along the zone while keeping it inside the zone.
	 * @param	LocationToMove 	The location object to move
	 * @param	WorldDesiredDelta 	The intended direction of the movement
	 * @param	HalfExtent 	Half size of the character, describing its capsule (e.g. capsule radius and half height)
	 * @param	ExtentWorldRotation 	Rotation of the character.
	 * @return True if location was moved, false otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual bool MoveLocationInDirection(UAdvKitZoneLocation* LocationToMove, const FVector& WorldDesiredDelta, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator);

	/**
	 * Gets the zone's forward vector at a specified point.
	 * @param	AtLocation	Location to query the vector at.
	 * @return	Forward vector in world space.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FVector GetZoneForwardVector(const UAdvKitZoneLocation* AtLocation);
	
	/**
	 * Gets the zone's right vector at a specified point.
	 * @param	AtLocation	Location to query the vector at.
	 * @return	Right vector in world space.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FVector GetZoneRightVector(const UAdvKitZoneLocation* AtLocation);
	
	/**
	 * Gets the zone's up vector at a specified point.
	 * @param	AtLocation	Location to query the vector at.
	 * @return	Up vector in world space.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FVector GetZoneUpVector(const UAdvKitZoneLocation* AtLocation);

	/**
	 * Clamps a given location so it is inside the zone.
	 * @param	WorldPosition	Location to clamp.
	 * @param	HalfExtent 	Half size of the character, describing its capsule (e.g. capsule radius and half height)
	 * @param	ExtentWorldRotation 	Rotation of the character.
	 * @return	Location inside zone.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector ConstrainPositionToZone(const FVector& WorldPosition, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;
	virtual FVector ConstrainPositionToZone_Implementation(const FVector& WorldPosition, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;

	/**
	 * Get movement mode of this zone.
	 * @return Movement mode inside the zone.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual EAdvKitMovementMode GetPhysics();

	/**
	 * Get custom movement mode of this zone.
	 * @return Custom movement mode inside the zone.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual uint8 GetCustomPhysics();

	/**
	 * Check if the zone has a specific movement mode.
	 * @param QueryPhysics	The mode to check for.
	 * @return	True if zone has this mode.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual bool HasPhysics(EAdvKitMovementMode QueryPhysics);

	/**
	 * Check if the zone has a specific custom movement mode.
	 * @param QueryPhysics	The mode to check for.
	 * @return	True if zone has this mode.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual bool HasCustomPhysics(uint8 QueryPhysics);

	/**
	 * Sets a character class to all transition build modules removing all previous ones
	 * @param CharacterClass	Character class to set
	 */
	void SetCharacterClass(TSubclassOf<AAdvKitCharacter> CharacterClass);


	/**
	 * Adds a character class to all transition build modules if not present, yet
	 * @param CharacterClass	Character class to add
	 */
	void AddCharacterClass(TSubclassOf<AAdvKitCharacter> CharacterClass);

	/**
	 * Removes a character class from all transition build modules
	 * @param CharacterClass	Character class to remove
	 */
	void RemoveCharacterClass(TSubclassOf<AAdvKitCharacter> CharacterClass);

	/**
	 * Query if a character can enter this zone
	 * @param	Character		Character that wants to enter the zone
	 */
	bool IsCharacterSupported(AAdvKitCharacter* Character);

	/**
	 * Moves a zone location along the zone while keeping it inside the zone.
	 * @param	LocalZoneLocation 	The location object to move
	 * @param	WorldDesiredDelta 	The intended direction of the movement
	 * @param	HalfExtent 	Half size of the character, describing its capsule (e.g. capsule radius and half height)
	 * @param	ExtentWorldRotation 	Rotation of the character.
	 * @return True if location was moved, false otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual bool MoveLocationInDirectionNew(FVector& LocalZoneLocation, const FVector& WorldDesiredDelta, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator);

	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FVector GetZoneLocationWorld(const FVector& LocalZoneLocation) const;

	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FVector GetZoneLocationLocal(const FVector& WorldLocation) const;

	/**
	 * Gets the zone's forward vector at a specified point.
	 * @param	LocalZoneLocation	Location to query the vector at.
	 * @return	Forward vector in world space.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetZoneForwardVectorNew(const FVector& LocalZoneLocation) const;
	virtual FVector GetZoneForwardVectorNew_Implementation(const FVector& LocalZoneLocation) const;

	/**
	 * Gets the zone's right vector at a specified point.
	 * @param	LocalZoneLocation	Location to query the vector at.
	 * @return	Right vector in world space.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetZoneRightVectorNew(const FVector& LocalZoneLocation) const;
	virtual FVector GetZoneRightVectorNew_Implementation(const FVector& LocalZoneLocation) const;

	/**
	 * Gets the zone's up vector at a specified point.
	 * @param	LocalZoneLocation	Location to query the vector at.
	 * @return	Up vector in world space.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetZoneUpVectorNew(const FVector& LocalZoneLocation) const;
	virtual FVector GetZoneUpVectorNew_Implementation(const FVector& LocalZoneLocation) const;

	/**
	 * Gets the zone's forward vector closest to a specified point.
	 * @param	ToWorldLocation	Location to query the vector at.
	 * @return	Forward vector in world space.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetClosestZoneForwardVector(const FVector& ToWorldLocation) const;
	virtual FVector GetClosestZoneForwardVector_Implementation(const FVector& ToWorldLocation) const;

	/**
	 * Gets the zone's right vector closest to a specified point.
	 * @param	ToWorldLocation	Location to query the vector at.
	 * @return	Right vector in world space.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetClosestZoneRightVector(const FVector& ToWorldLocation) const;
	virtual FVector GetClosestZoneRightVector_Implementation(const FVector& ToWorldLocation) const;

	/**
	 * Gets the zone's up vector closest to a specified point.
	 * @param	ToWorldLocation	Location to query the vector at.
	 * @return	Up vector in world space.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetClosestZoneUpVector(const FVector& ToWorldLocation) const;
	virtual FVector GetClosestZoneUpVector_Implementation(const FVector& ToWorldLocation) const;

	/**
	 * Gets the zone's transform closest to a specified point.
	 * @param	ToWorldLocation	Location to query the vector at.
	 * @return	Transform closest to the given location.
	 */
	UFUNCTION(BlueprintCallable, Category = "AdvKit")
	virtual FTransform GetClosestZoneTransform(const FVector& ToWorldLocation) const;

	/**
	 * Creates a new zone location as close to a given location as possible
	 * @param	WorldLocation	Location the zone location would ideally be at.
	 * @param	HalfExtent 	Half size of the character, describing its capsule (e.g. capsule radius and half height)
	 * @param	ExtentWorldRotation 	Rotation of the character.
	 * @return	Zone Location inside zone.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector GetClosestZoneLocationNew(const FVector& WorldLocation, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;
	virtual FVector GetClosestZoneLocationNew_Implementation(const FVector& WorldLocation, const FVector& HalfExtent, const FRotator& ExtentWorldRotation = FRotator::ZeroRotator) const;


	/**
	 * Restricts a desired direction to match zone.
	 * @param	WorldDirection	Direction to restrict.
	 * @param	AtWorldLocation	Location at which the direction should be constrained. (Since zones may be splines a constrained direction can differ based on location).
	 * @return	Direction restricted to zone.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	FVector ConstrainDirectionToZone(const FVector& WorldDirection, const FVector& AtWorldLocation) const;
	virtual FVector ConstrainDirectionToZone_Implementation(const FVector& WorldDirection, const FVector& AtWorldLocation) const;

	/**
	 * Draw debug information of zone and all transitions
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AdvKit")
	void DrawDebug(const FColor& DebugColor, const float& DebugThickness, const float& DebugLifeTime);
	virtual void DrawDebug_Implementation(const FColor& DebugColor, const float& DebugThickness, const float& DebugLifeTime);

	//Begin AActor Interface
	virtual bool IsNameStableForNetworking() const override;
	virtual bool IsSupportedForNetworking() const override;
	//End AActor Interface
};

// Copyright 2015 Pascal Krabbe

#pragma once

#include "GameFramework/Actor.h"
#include "AdvKitInventoryManager.generated.h"

class AAdvKitInventoryItem;

/**
 * @brief Inventory manager to hold all items a character carries.  
 */
UCLASS(/*Within = AdvKitCharacter*/)
class ADVKITRUNTIME_API AAdvKitInventoryManager : public AActor
{
	GENERATED_BODY()

public:
	/** Constructor */
	AAdvKitInventoryManager(const FObjectInitializer& ObjectInitializer);

	//Begin AActor Interface
	virtual void PostInitializeComponents() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;
	virtual void Tick(float DeltaSeconds) override;
	//End AActor Interface





	/**
	 * Callback when the owner character of the inventory manager died.
	 */
	virtual void OwnerDied();



};

// Copyright 2015 Pascal Krabbe

#pragma once

#include "Items/AdvKitUsable.h"
#include "AdvKitUsableSimpleSwitch.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwitchActivatedBySignature, class AAdvKitCharacter*, ByCharacter, class AAdvKitInventoryItem*, WithItem);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwitchDeactivatedBySignature, class AAdvKitCharacter*, ByCharacter, class AAdvKitInventoryItem*, WithItem);

/**
 * @brief Base class for a simple switch that can be activated with an item (e.g. a key)
 */
UCLASS(abstract)
class ADVKITRUNTIME_API AAdvKitUsableSimpleSwitch : public AAdvKitUsable
{
	GENERATED_BODY()

protected:
	/** Root component for useable actors. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Switch")
	USceneComponent* Root;

	/** Class of another item that this switch needs to be activated (if any). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch")
	TSubclassOf<class AAdvKitInventoryItem> KeyClass;

	/** Is this switch currently active? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Switch")
	bool bActive;

	/** Can this switch be activated? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch")
	bool bCanBeActivated;

	/** Can this switch be deactivated? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch")
	bool bCanBeDeactivated;

public:
	/** Delegate that is called when the switch was activated. */
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "AdvKit")
	FSwitchActivatedBySignature OnActivatedBy;
	
	/** Delegate that is called when the switch was deactivated. */
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "AdvKit")
	FSwitchDeactivatedBySignature OnDeactivatedBy;

public:
	/**
	 * Constructor
	 */
	AAdvKitUsableSimpleSwitch(const FObjectInitializer& ObjectInitializer);

	//Begin AAdvKitUsable Interface
	virtual void UsedBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem = nullptr) override;
	virtual bool CanBeUsedBy_Implementation(class AAdvKitCharacter* Character, class AAdvKitInventoryItem* WithItem = nullptr) override;
	//End AAdvKitUsable Interface

};

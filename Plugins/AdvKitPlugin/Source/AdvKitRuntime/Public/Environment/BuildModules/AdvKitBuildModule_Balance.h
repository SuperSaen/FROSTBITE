// Copyright 2015 Pascal Krabbe

#pragma once

#include "Environment/AdvKitTransitionBuilderModule.h"
#include "AdvKitBuildModule_Balance.generated.h"

class AAdvKitZone;
class AAdvKitCharacter;

/**
 * @brief Implementation of a transition builder module to create transitions for balance zones
 */
UCLASS(Blueprintable, meta = (DisplayName = "Balance Enter and Exit"))
class ADVKITRUNTIME_API UAdvKitBuildModule_Balance : public UAdvKitTransitionBuilderModule
{
	GENERATED_BODY()


protected:
	/** Whether or not to create an exit transition at the start point */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config")
	bool bCreateStartTransition;

	/** Whether or not to create an exit transition at the end point */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config")
	bool bCreateEndTransition;

	//Begin UAdvKitTransitionBuilderModule Interface
	virtual bool CanCreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone) override;
	virtual void CreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone) override;
	//End UAdvKitTransitionBuilderModule Interface
};

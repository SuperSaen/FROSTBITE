// Copyright 2015 Pascal Krabbe

#pragma once
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Items/AdvKitInventoryItem.h"
#include "AnimNotify_SetItem.generated.h"


UCLASS(meta = (DisplayName = "Set Item"))
class UAnimNotify_SetItem : public UAnimNotify
{
	GENERATED_BODY()

protected:
	/** Change to the new item instantly */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	bool bInstant;

	/** Item to change to */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (EditCondition = bSetLocation))
	TSubclassOf<AAdvKitInventoryItem> NewItem;

public:
	UAnimNotify_SetItem();
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
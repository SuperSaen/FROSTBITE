// Copyright 2015 Pascal Krabbe

#pragma once

#include "ComponentVisualizer.h"
#include "Framework/Commands/UICommandList.h"

class UAdvKitTransitionComponent;
class AAdvKitCharacter;
class AAdvKitZone;

struct HTransitionVisProxy : public HComponentVisProxy
{
	DECLARE_HIT_PROXY();

	HTransitionVisProxy(const UActorComponent* InComponent)
		: HComponentVisProxy(InComponent, HPP_Wireframe)
	{}
};

/**
 * @brief Editor Visualizer class for UAdvKitTransitionComponentPoint
 */
class FAdvKitTransitionComponentVisualizer: public FComponentVisualizer
{
public:
	/**
	 * Constructor
	 */
	FAdvKitTransitionComponentVisualizer() {};

	/**
	 * Destructor
	 */
	virtual ~FAdvKitTransitionComponentVisualizer() {};
 
	// Begin FComponentVisualizer interface
	virtual void OnRegister() override;
	virtual bool VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click) override;
	virtual bool HandleInputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;
	virtual TSharedPtr<SWidget> GenerateContextMenu() const override;
	virtual void EndEditing() override;
	// End FComponentVisualizer interface

	/** Get the transition component we are currently editing */
	UAdvKitTransitionComponent* GetEditedTransitionComponent() const;
	void DrawArrow(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Source, const FVector& Target, const FColor& Color);

	/**Context menu commands*/
	TSharedPtr<FUICommandList> VisualizerActions;

	/** Actor that owns the currently edited transition */
	TWeakObjectPtr<AActor> TransitionOwningActor;

	/** Name of property on the actor that references the transition we are editing */
	FString TransitionCompName;

	/** Snap edited transition location to zone */
	bool bSnapEditedLocation;

	UFUNCTION()
	virtual void OnPickTargetZone();
	void CancelPickTarget();

	virtual void OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses);
	virtual void OnNewTargetZoneSelected(AActor* InActor);
	virtual bool IsFilteredActor(const AActor* const Actor) const;

	UFUNCTION()
	virtual void OnSwapDirection();

	FVector GetNewLocation(AAdvKitZone* Zone, FVector Location, FVector Delta, TSubclassOf<AAdvKitCharacter> CharacterClass);

	/**
	 * Utility method to query a character's size properties.
	 * @param	ForCharacterClass 	Character to get size of.
	 * @param	ForZone 	Zone to get character's size in.
	 * @return Half extent (Radius, Radius, Half Height) of character
	 */
	virtual const FVector GetCharacterHalfExtent(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone) const;
};
// Copyright 2015 Pascal Krabbe

#pragma once

#include "AdvKitTransitionComponentVisualizer.h"

class UAdvKitTransitionComponentPoint;
class AAdvKitCharacter;
class AAdvKitZone;

enum class ETransitionPointPosition : uint8
{
	None,
	Source,
	Target
};

struct HTransitionPointPositionProxy : public HTransitionVisProxy
{
	DECLARE_HIT_PROXY();

	HTransitionPointPositionProxy(const UActorComponent* InComponent, ETransitionPointPosition InPosition)
		: HTransitionVisProxy(InComponent)
		, Position(InPosition)
	{}

	ETransitionPointPosition Position;
};


/**
 * @brief Editor Visualizer class for UAdvKitTransitionComponentPoint
 */
class FAdvKitTransitionComponentPointVisualizer: public FAdvKitTransitionComponentVisualizer
{
public:
	/**
	 * Constructor
	 */
	FAdvKitTransitionComponentPointVisualizer() {};

	/**
	 * Destructor
	 */
	virtual ~FAdvKitTransitionComponentPointVisualizer() {};
 
	// Begin FComponentVisualizer interface
	virtual void OnRegister() override;
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual bool VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click) override;
	virtual bool GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocation) const override;
	virtual bool HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale) override;
	virtual void EndEditing() override;
	// End FComponentVisualizer interface

	/** Get the transition component we are currently editing */
	void DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Location, const ETransitionPointPosition& Position, const FColor& Color);

	ETransitionPointPosition SelectedPosition;

	virtual void OnNewTargetZoneSelected(AActor* InActor) override;
};
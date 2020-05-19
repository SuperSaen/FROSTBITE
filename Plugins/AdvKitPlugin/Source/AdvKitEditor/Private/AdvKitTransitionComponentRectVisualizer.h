// Copyright 2015 Pascal Krabbe

#pragma once

#include "AdvKitTransitionComponentVisualizer.h"


enum class ETransitionRectPosition : uint8
{
	None,
	MinSource,
	MaxSource,
	MinTarget,
	MaxTarget
};

class UAdvKitTransitionComponentRect;
class AAdvKitCharacter;
class AAdvKitZone;

struct HTransitionRectPositionProxy : public HTransitionVisProxy
{
	DECLARE_HIT_PROXY();

	HTransitionRectPositionProxy(const UActorComponent* InComponent, ETransitionRectPosition InPosition)
		: HTransitionVisProxy(InComponent)
		, Position(InPosition)
	{}

	ETransitionRectPosition Position;
};

/**
 * @brief Editor Visualizer class for UAdvKitTransitionComponentRect
 */
class FAdvKitTransitionComponentRectVisualizer: public FAdvKitTransitionComponentVisualizer
{
public:
	/**
	 * Constructor
	 */
	FAdvKitTransitionComponentRectVisualizer() {};

	/**
	 * Destructor
	 */
	virtual ~FAdvKitTransitionComponentRectVisualizer() {};
 
	// Begin FComponentVisualizer interface
	virtual void OnRegister() override;
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual bool VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click) override;
	virtual bool GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocation) const override;
	virtual bool HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale) override;
	virtual void EndEditing() override;
	// End FComponentVisualizer interface

	/** Get the transition component we are currently editing */
	void DrawRects(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FColor& Color);
	void DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Location, const ETransitionRectPosition& Position, const FColor& Color);

	ETransitionRectPosition SelectedPosition;

	virtual void OnNewTargetZoneSelected(AActor* InActor) override;
	virtual void OnSwapDirection() override;
};
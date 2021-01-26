// Copyright 2015 Pascal Krabbe

#pragma once

#include "AdvKitTransitionComponentVisualizer.h"


enum class ETransitionLinePosition : uint8
{
	None,
	MinSource,
	MaxSource,
	MinTarget,
	MaxTarget
};

class UAdvKitTransitionComponentLine;
class AAdvKitCharacter;
class AAdvKitZone;

struct HTransitionLinePositionProxy : public HTransitionVisProxy
{
	DECLARE_HIT_PROXY();

	HTransitionLinePositionProxy(const UActorComponent* InComponent, ETransitionLinePosition InPosition)
		: HTransitionVisProxy(InComponent)
		, Position(InPosition)
	{}

	ETransitionLinePosition Position;
};

/**
 * @brief Editor Visualizer class for UAdvKitTransitionComponentLine
 */
class FAdvKitTransitionComponentLineVisualizer: public FAdvKitTransitionComponentVisualizer
{
public:
	/**
	 * Constructor
	 */
	FAdvKitTransitionComponentLineVisualizer() {};

	/**
	 * Destructor
	 */
	virtual ~FAdvKitTransitionComponentLineVisualizer() {};
 
	// Begin FComponentVisualizer interface
	virtual void OnRegister() override;
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual bool VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click) override;
	virtual bool GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocation) const override;
	virtual bool HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale) override;
	virtual void EndEditing() override;
	// End FComponentVisualizer interface

	/** Get the transition component we are currently editing */
	void DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Location, const ETransitionLinePosition& Position, const FColor& Color);

	ETransitionLinePosition SelectedPosition;

	virtual void OnNewTargetZoneSelected(AActor* InActor) override;
};
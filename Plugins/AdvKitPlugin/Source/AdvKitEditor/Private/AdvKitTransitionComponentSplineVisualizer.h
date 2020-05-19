// Copyright 2015 Pascal Krabbe

#pragma once

#include "AdvKitTransitionComponentVisualizer.h"


enum class ETransitionSplinePosition : uint8
{
	None,
	MinSource,
	MaxSource,
	MinTarget,
	MaxTarget
};

class UAdvKitTransitionComponentSpline;
class AAdvKitCharacter;
class AAdvKitZone;
class AAdvKitZoneSpline;
struct FSplineTransitionPosition;

struct HTransitionSplinePositionProxy : public HTransitionVisProxy
{
	DECLARE_HIT_PROXY();

	HTransitionSplinePositionProxy(const UActorComponent* InComponent, ETransitionSplinePosition InPosition)
		: HTransitionVisProxy(InComponent)
		, Position(InPosition)
	{}

	ETransitionSplinePosition Position;
};

/**
 * @brief Editor Visualizer class for UAdvKitTransitionComponentSpline
 */
class FAdvKitTransitionComponentSplineVisualizer: public FAdvKitTransitionComponentVisualizer
{
public:
	/**
	 * Constructor
	 */
	FAdvKitTransitionComponentSplineVisualizer() {};

	/**
	 * Destructor
	 */
	virtual ~FAdvKitTransitionComponentSplineVisualizer() {};
 
	// Begin FComponentVisualizer interface
	virtual void OnRegister() override;
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual bool VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click) override;
	virtual bool GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocation) const override;
	virtual bool HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale) override;
	virtual void EndEditing() override;
	// End FComponentVisualizer interface

	/** Get the transition component we are currently editing */
	void DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FSplineTransitionPosition& Location, const ETransitionSplinePosition& Position, const FColor& Color);

	ETransitionSplinePosition SelectedPosition;

	virtual void OnNewTargetZoneSelected(AActor* InActor) override;
	void ApplyDeltaToSplineLocation(AAdvKitZone* Zone, FSplineTransitionPosition& TargetPosition, TSubclassOf<AAdvKitCharacter> CharacterClass, FVector DeltaTranslate);

};
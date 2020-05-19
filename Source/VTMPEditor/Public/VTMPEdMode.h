// Copyright Sean Neville, 2020

#pragma once

#include "CoreMinimal.h"
#include "ViewportInteractor.h"
#include "VTMP/Public/Noise.h"
#include "VTMPChunk.h"
#include "EdMode.h"


struct FPaintRay
{
	FVector CameraLocation;
	FVector RayStart;
	FVector RayDirection;
	UViewportInteractor* ViewportInteractor;
};

class FVTMPEdMode : public FEdMode
{
public:
	const static FEditorModeID EM_VTMPEdModeId;
public:



	FVTMPEdMode();
	virtual ~FVTMPEdMode();

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;
	virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	//virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	
	virtual bool InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey, EInputEvent InEvent) override;
	// End of FEdMode interface

	
	float BrushSize = 200.0f;
	float Strength = 100.0f;
	float BrushFalloff = 0.5f;

	EVoxelToolType ToolType = EVoxelToolType::Sculpt;

	private:

	bool bIsPainting = false;
	bool bIsCtrlDown = false;

	bool RetrieveViewportPaintRays(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI, TArray<FPaintRay>& OutPaintRays);
	void RenderInteractorWidget(const FVector& InCameraOrigin, const FVector& InRayOrigin, const FVector& InRayDirection, FPrimitiveDrawInterface* PDI);

	bool Paint(const FVector& InCameraOrigin, const FVector& InRayOrigin, const FVector& InRayDirection);

};

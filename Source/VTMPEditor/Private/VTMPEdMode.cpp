// Copyright Sean Neville, 2020

#include "VTMPEdMode.h"
#include "VTMPEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "VTMP/Public/Noise.h"
#include "VTMPManager.h"
#include "LevelEditor.h"
#include "EditorViewportClient.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "FVTMPEdMode"

const FEditorModeID FVTMPEdMode::EM_VTMPEdModeId = TEXT("EM_VTMPEdMode");

FVTMPEdMode::FVTMPEdMode()
{

}

FVTMPEdMode::~FVTMPEdMode()
{

}

void FVTMPEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FVTMPEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FVTMPEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FVTMPEdMode::UsesToolkits() const
{
	return true;
}

void FVTMPEdMode::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
	if (ViewportClient->IsPerspective())
	{		
		ViewportClient->SetRealtime(true, false);
				
	}	
}

void FVTMPEdMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	checkf(View && Viewport && PDI, TEXT("Invalid Viewport data"));
	FEditorViewportClient* ViewportClient = (FEditorViewportClient*)Viewport->GetClient();
	checkf(ViewportClient != nullptr, TEXT("Unable to retrieve viewport client"));

	TArray<FPaintRay> PaintRays;
	RetrieveViewportPaintRays(View, Viewport, PDI, PaintRays);

	for (const FPaintRay& PaintRay : PaintRays)
	{
		RenderInteractorWidget(PaintRay.CameraLocation, PaintRay.RayStart, PaintRay.RayDirection, PDI);

		if (bIsPainting) Paint(PaintRay.CameraLocation, PaintRay.RayStart, PaintRay.RayDirection);
	}
	

}

bool FVTMPEdMode::RetrieveViewportPaintRays(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI, TArray<FPaintRay>& OutPaintRays)
{
	checkf(View && Viewport && PDI, TEXT("Invalid Viewport data"));
	FEditorViewportClient* ViewportClient = (FEditorViewportClient*)Viewport->GetClient();
	checkf(ViewportClient != nullptr, TEXT("Unable to retrieve viewport client"));

	if (ViewportClient->IsPerspective())
	{

		// Make sure the cursor is visible OR we're flood filling.  No point drawing a paint cue when there's no cursor.
		if (Viewport->IsCursorVisible())
		{
			if (!PDI->IsHitTesting())
			{
				// Grab the mouse cursor position
				FIntPoint MousePosition;
				Viewport->GetMousePos(MousePosition);

				// Is the mouse currently over the viewport? or flood filling
				if ((MousePosition.X >= 0 && MousePosition.Y >= 0 && MousePosition.X < (int32)Viewport->GetSizeXY().X && MousePosition.Y < (int32)Viewport->GetSizeXY().Y))
				{
					// Compute a world space ray from the screen space mouse coordinates
					FViewportCursorLocation MouseViewportRay(View, ViewportClient, MousePosition.X, MousePosition.Y);

					FPaintRay& NewPaintRay = *new(OutPaintRays) FPaintRay();
					NewPaintRay.CameraLocation = View->ViewMatrices.GetViewOrigin();
					NewPaintRay.RayStart = MouseViewportRay.GetOrigin();
					NewPaintRay.RayDirection = MouseViewportRay.GetDirection();
					NewPaintRay.ViewportInteractor = nullptr;
				}
			}
		}
	}

	return false;
}

void FVTMPEdMode::RenderInteractorWidget(const FVector& InCameraOrigin, const FVector& InRayOrigin, const FVector& InRayDirection, FPrimitiveDrawInterface* PDI)
{
	bool bArePainting = false;

	ESceneDepthPriorityGroup DepthGroup = SDPG_World;
		FHitResult HitResult;

		FVector End = InRayOrigin + InRayDirection * 10000.0f;

		GetWorld()->LineTraceSingleByObjectType(HitResult, InRayOrigin, End, ECC_WorldStatic);
		//UE_LOG(LogTemp, Log, TEXT("origin: %s, end: %s"), *InRayOrigin.ToString(), *End.ToString());

const float DrawThickness = 2.0f; //WidgetLineThickness;
const float DrawIntensity = 1.0f;

	if (HitResult.Component != nullptr)
	{		
		AVTMPChunk* VTMPTerrainActor = Cast<AVTMPChunk>(HitResult.GetActor());

		if (VTMPTerrainActor)
		{
			//UE_LOG(LogTemp, Log, TEXT("hit"));
			// Display settings
			const float VisualBiasDistance = 0.15f;
			//const float NormalLineSize(BrushRadius * 0.35f);	// Make the normal line length a function of brush size
			//const FLinearColor NormalLineColor(0.3f, 1.0f, 0.3f);
			const FLinearColor BrushCueColor = FLinearColor(1.0f, 1.0f, 1.0f); //(bArePainting ? FLinearColor(1.0f, 1.0f, 0.3f) : FLinearColor(0.3f, 1.0f, 0.3f));
			const FLinearColor InnerBrushCueColor = FLinearColor(1.0f, 1.0f, 1.0f); //(bArePainting ? FLinearColor(0.5f, 0.5f, 0.1f) : FLinearColor(0.1f, 0.5f, 0.1f));

			FVector BrushXAxis, BrushYAxis;
			HitResult.Normal.FindBestAxisVectors(BrushXAxis, BrushYAxis);
			const FVector BrushVisualPosition = HitResult.Location + HitResult.Normal * VisualBiasDistance;

			if (PDI != NULL)
			{
				// Draw brush circle
				const int32 NumCircleSides = 128;
				DrawCircle(PDI, BrushVisualPosition, BrushXAxis, BrushYAxis, BrushCueColor, BrushSize, NumCircleSides, DepthGroup, DrawThickness);

				// Also draw the inner brush radius
				const float InnerBrushRadius = (BrushSize * BrushFalloff);
				DrawCircle(PDI, BrushVisualPosition, BrushXAxis, BrushYAxis, InnerBrushCueColor, InnerBrushRadius, NumCircleSides, DepthGroup, DrawThickness);
			}
		}		
	}
}

bool FVTMPEdMode::InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey, EInputEvent InEvent)
{
	bool bHandled = false;  //= MeshPainter->InputKey(InViewportClient, InViewport, InKey, InEvent);

	//if (bHandled)
	//{
		//return bHandled;
	//}
	const bool bIsLeftButtonDown = (InKey == EKeys::LeftMouseButton && InEvent != IE_Released) || InViewport->KeyState(EKeys::LeftMouseButton);
	const bool bIsRightButtonDown = (InKey == EKeys::RightMouseButton && InEvent != IE_Released) || InViewport->KeyState(EKeys::RightMouseButton);
	bIsCtrlDown = ((InKey == EKeys::LeftControl || InKey == EKeys::RightControl) && InEvent != IE_Released) || InViewport->KeyState(EKeys::LeftControl) || InViewport->KeyState(EKeys::RightControl);
	const bool bIsShiftDown = ((InKey == EKeys::LeftShift || InKey == EKeys::RightShift) && InEvent != IE_Released) || InViewport->KeyState(EKeys::LeftShift) || InViewport->KeyState(EKeys::RightShift);
	const bool bIsAltDown = ((InKey == EKeys::LeftAlt || InKey == EKeys::RightAlt) && InEvent != IE_Released) || InViewport->KeyState(EKeys::LeftAlt) || InViewport->KeyState(EKeys::RightAlt);

	// When painting we only care about perspective viewports
	if (!bIsAltDown && InViewportClient->IsPerspective())
	{
		// Does the user want to paint right now?
		const bool bUserWantsPaint = bIsLeftButtonDown && !bIsRightButtonDown && !bIsAltDown;
		bool bPaintApplied = false;
			

		// Also absorb other mouse buttons, and Ctrl/Alt/Shift events that occur while we're painting as these would cause
		// the editor viewport to start panning/dollying the camera
		
	
			// Stop current tracking if the user is no longer painting
			if (bIsPainting && !bUserWantsPaint &&
				(InKey == EKeys::LeftMouseButton || InKey == EKeys::RightMouseButton || InKey == EKeys::LeftAlt || InKey == EKeys::RightAlt))
			{
				bHandled = true;
				//finish painting:
				bIsPainting = false;
				GEditor->EndTransaction();
				//UE_LOG(LogTemp, Log, TEXT("end transaction"));				
			}
			else if (!bIsPainting && bUserWantsPaint && !InViewportClient->IsMovingCamera())
		{
			bHandled = true;

			// Compute a world space ray from the screen space mouse coordinates
			FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
				InViewportClient->Viewport,
				InViewportClient->GetScene(),
				InViewportClient->EngineShowFlags)
				.SetRealtimeUpdate(InViewportClient->IsRealtime()));

			FSceneView* View = InViewportClient->CalcSceneView(&ViewFamily);
			const FViewportCursorLocation MouseViewportRay(View, (FEditorViewportClient*)InViewport->GetClient(), InViewport->GetMouseX(), InViewport->GetMouseY());

			// Paint!
			
			bPaintApplied = Paint(View->ViewMatrices.GetViewOrigin(), MouseViewportRay.GetOrigin(), MouseViewportRay.GetDirection());
		
		}
			else if (bIsPainting && bUserWantsPaint)
			{
				bHandled = true;
			}

			if (!bPaintApplied && !bIsPainting)
			{
				bHandled = false;
			}
			else
			{
				InViewportClient->bLockFlightCamera = true;
			}

			const bool bIsOtherMouseButtonEvent = (InKey == EKeys::MiddleMouseButton || InKey == EKeys::RightMouseButton);
			const bool bCtrlButtonEvent = (InKey == EKeys::LeftControl || InKey == EKeys::RightControl);
			const bool bShiftButtonEvent = (InKey == EKeys::LeftShift || InKey == EKeys::RightShift);
			const bool bAltButtonEvent = (InKey == EKeys::LeftAlt || InKey == EKeys::RightAlt);

			if (bIsPainting && (bIsOtherMouseButtonEvent || bShiftButtonEvent || bAltButtonEvent))
			{
				bHandled = true;
			}

			if (bCtrlButtonEvent && !bIsPainting)
			{
				bHandled = false;
			}		
	}

	return bHandled;
}


bool FVTMPEdMode::Paint(const FVector& InCameraOrigin, const FVector& InRayOrigin, const FVector& InRayDirection)
{
	FHitResult HitResult;

	const FVector TraceStart(InRayOrigin);
	const FVector TraceEnd(InRayOrigin + InRayDirection * HALF_WORLD_MAX);

	if (GetWorld()->LineTraceSingleByObjectType(HitResult, TraceStart, TraceEnd, ECC_WorldStatic))
	{
		AVTMPChunk* VTMPTerrainActor = Cast<AVTMPChunk>(HitResult.GetActor());

		if (VTMPTerrainActor)
		{
			if (!bIsPainting)
			{
				//UE_LOG(LogTemp, Log, TEXT("begintransaction"));
				GEditor->BeginTransaction(LOCTEXT("VTMPTransactionName", "SculptVTMPs"));
				bIsPainting = true;
			}

			TArray<AVTMPChunk*> actors = VTMPTerrainActor->Generator->GetOverlappingVoxelComponents(HitResult.Location, BrushSize);								

			VTMPTerrainActor->Generator->Modify();
			VTMPTerrainActor->Generator->RemoveFoliageInRadius(HitResult.Location, BrushSize);

			//undo/redo system

			UE_LOG(LogTemp, Log, TEXT("Edit Mode: %f,  VTMP actors"), actors.Num());

			for (auto actor : actors)
			{
				actor->ProceduralMesh->Modify();
				actor->Modify();
				
				float strengthToApply = Strength * 0.0005f;

				if (bIsCtrlDown)  strengthToApply *= -1.0f;

				actor->SculptTerrain(ToolType, HitResult.Location, BrushSize, strengthToApply, BrushFalloff);
			}		
			

			return true;
		}	
	}

	return false;


}


#undef LOCTEXT_NAMESPACE
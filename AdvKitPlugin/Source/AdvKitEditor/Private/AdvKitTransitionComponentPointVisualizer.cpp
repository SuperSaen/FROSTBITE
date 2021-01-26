// Copyright 2015 Pascal Krabbe

#include "AdvKitTransitionComponentPointVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentPoint.h"
#include "Environment/AdvKitZone.h"
#include "Player/AdvKitCharacter.h"
#include "ActorPickerMode.h"
#include "Editor.h"

#define LOCTEXT_NAMESPACE "AdvKitTransitionComponentPointVisualizer" 

IMPLEMENT_HIT_PROXY(HTransitionPointPositionProxy, HTransitionVisProxy)

void FAdvKitTransitionComponentPointVisualizer::OnRegister()
{
	FAdvKitTransitionComponentVisualizer::OnRegister();
	SelectedPosition = ETransitionPointPosition::None;
}

void FAdvKitTransitionComponentPointVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	auto VisComponent = Cast<const UAdvKitTransitionComponentPoint>(Component);
	if (!VisComponent)
	{
		return;
	}

	bool bSelected = (Component == GetEditedTransitionComponent());

	//Query all necessary debug info
	const FVector LineStart = VisComponent->GetSourceLocation();
	const FVector LineEnd = VisComponent->GetTargetLocation();
	FColor LineColor = VisComponent->bIsDynamic ? FColorList::MandarianOrange : FColorList::Grey;
	if (bSelected)
	{
		FLinearColor Temp(LineColor);
		Temp *= 2.0f;
		LineColor = Temp.ToFColor(false);
	}
	const float LineThickness = 2;

	//Arrow lines
	const float	ArrowLength = 8.0f;// FMath::Min<float>(16.0f, FVector::Dist(LineStart, LineEnd)*0.25f);
	const FVector Forward = (LineEnd - LineStart).GetSafeNormal();
	FVector Right, Up;
	Forward.FindBestAxisVectors(Right, Up);

	//Draw lines and arrow head
	PDI->SetHitProxy(new HTransitionVisProxy(Component));
	DrawArrow(Component, View, PDI, LineStart, LineEnd, LineColor);

	if (bSelected)
	{
		DrawArrow(Component, View, PDI, LineStart, LineStart + Component->GetOwner()->GetTransform().TransformVector(VisComponent->TransitionDirection) * 25, FColorList::Grey);

		DrawPosition(Component, View, PDI, LineStart, ETransitionPointPosition::Source, LineColor);
		DrawPosition(Component,View,PDI, LineEnd, ETransitionPointPosition::Target, LineColor);
	}

	PDI->SetHitProxy(nullptr);

}


bool FAdvKitTransitionComponentPointVisualizer::VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click)
{
	auto PrevSelection = GetEditedTransitionComponent();
	if (!FAdvKitTransitionComponentVisualizer::VisProxyHandleClick(InViewportClient, VisProxy, Click))
	{
		SelectedPosition = ETransitionPointPosition::None;
		return false;
	}

	if (VisProxy && VisProxy->IsA(HTransitionPointPositionProxy::StaticGetType()))
	{
		HTransitionPointPositionProxy* Proxy = (HTransitionPointPositionProxy*)VisProxy;
		SelectedPosition = Proxy->Position;
	}
	else
	{
		SelectedPosition = ETransitionPointPosition::None;
	}
	
	return true;
}

bool FAdvKitTransitionComponentPointVisualizer::GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocaction) const
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentPoint>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	switch (SelectedPosition)
	{
	case ETransitionPointPosition::None:
		return false;
	case ETransitionPointPosition::Source:
		OutLocaction = EditedTransition->GetSourceLocation();
		return true;
	case ETransitionPointPosition::Target:
		OutLocaction = EditedTransition->GetTargetLocation();
		return true;
	}

	return false;
}

bool FAdvKitTransitionComponentPointVisualizer::HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale)
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentPoint>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	auto SourceZone = Cast<AAdvKitZone>(EditedTransition->GetOwner());
	auto TargetZone = EditedTransition->TargetZone.Get();
	auto CharacterClass = EditedTransition->UseableBy;

	switch (SelectedPosition)
	{
	case ETransitionPointPosition::None:
		return false;
	case ETransitionPointPosition::Source:
	{
		FVector NewLocation = GetNewLocation(
			SourceZone,
			*EditedTransition->SourcePosition,
			DeltaTranslate,
			CharacterClass);

		EditedTransition->SourcePosition.Set(
			EditedTransition->SourcePosition.Base,
			NewLocation);

		break;
	}
	case ETransitionPointPosition::Target:
	{
		FVector NewLocation = GetNewLocation(
			TargetZone ? TargetZone : SourceZone,
			*EditedTransition->TargetPosition,
			DeltaTranslate,
			CharacterClass);

		EditedTransition->TargetPosition.Set(
			EditedTransition->TargetPosition.Base,
			NewLocation);

		break;
	}
	}

	return true;
}

void FAdvKitTransitionComponentPointVisualizer::EndEditing()
{
	FAdvKitTransitionComponentVisualizer::EndEditing();
	SelectedPosition = ETransitionPointPosition::None;
}

void FAdvKitTransitionComponentPointVisualizer::DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Location, const ETransitionPointPosition& Position, const FColor& Color)
{
	PDI->SetHitProxy(new HTransitionPointPositionProxy(Component, Position));
	PDI->DrawPoint(Location, Color, 20.f, SDPG_Foreground);
}


void FAdvKitTransitionComponentPointVisualizer::OnNewTargetZoneSelected(AActor* InActor)
{
	auto NewZone = Cast<AAdvKitZone>(InActor);
	if (!NewZone)
	{
		return;
	}

	auto EditedTransition = Cast<UAdvKitTransitionComponentPoint>(GetEditedTransitionComponent());
	if (!EditedTransition)
	{
		return;
	}


	FVector NewTargetLocation = NewZone->ConstrainPositionToZone(EditedTransition->GetTargetLocation(), GetCharacterHalfExtent(EditedTransition->UseableBy, NewZone));
	EditedTransition->Init(EditedTransition->UseableBy,
		EditedTransition->GetSourceLocation(),
		NewTargetLocation,
		EditedTransition->TargetPhysics,
		NewZone,
		EditedTransition->TargetCustomPhysics);
}

#undef LOCTEXT_NAMESPACE
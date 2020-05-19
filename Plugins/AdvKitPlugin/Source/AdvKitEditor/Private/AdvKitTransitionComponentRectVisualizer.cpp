// Copyright 2015 Pascal Krabbe

#include "AdvKitTransitionComponentRectVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentRect.h"
#include "Environment/AdvKitZone.h"
#include "Player/AdvKitCharacter.h"
#include "ActorPickerMode.h"
#include "Editor.h"

#define LOCTEXT_NAMESPACE "AdvKitTransitionComponentRectVisualizer" 

IMPLEMENT_HIT_PROXY(HTransitionRectPositionProxy, HTransitionVisProxy)

void FAdvKitTransitionComponentRectVisualizer::OnRegister()
{
	FAdvKitTransitionComponentVisualizer::OnRegister();
	SelectedPosition = ETransitionRectPosition::None;
}


void FAdvKitTransitionComponentRectVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	static const float ArrowDistanceUnits = 100.0f;

	auto VisComponent = Cast<const UAdvKitTransitionComponentRect>(Component);
	if (!VisComponent)
	{
		return;
	}

	bool bSelected = (Component == GetEditedTransitionComponent());

	const FVector MinWorldSource = VisComponent->GetMinSourceLocation();
	const FVector MaxWorldSource = VisComponent->GetMaxSourceLocation();
	const FVector MinWorldTarget = VisComponent->GetMinTargetLocation();
	const FVector MaxWorldTarget = VisComponent->GetMaxTargetLocation();

	FColor LineColor = VisComponent->bIsDynamic ? FColorList::MandarianOrange : FColorList::Grey;
	if (bSelected)
	{
		FLinearColor Temp(LineColor);
		Temp *= 2.0f;
		LineColor = Temp.ToFColor(false);
	}

	const float Distance = FVector::Dist(MinWorldSource, MaxWorldSource);
	float ArrowCount = FPlatformMath::CeilToInt(Distance / ArrowDistanceUnits);
	float Step = 1.0f / ArrowCount;

	PDI->SetHitProxy(new HTransitionVisProxy(Component));
	DrawRects(Component, View, PDI, LineColor);
	//for (float Alpha = 0; Alpha <= 1; Alpha += Step)
	//{
	//	FVector LerpSource = FMath::Lerp<FVector>(MinWorldSource, MaxWorldSource, Alpha);
	//	FVector LerpTarget = FMath::Lerp<FVector>(MinWorldTarget, MaxWorldTarget, Alpha);
	//	DrawArrow(Component, View, PDI, LerpSource, LerpTarget, LineColor);
	//}
	//DrawArrow(Component, View, PDI, MaxWorldSource, MaxWorldTarget, LineColor);

	if (bSelected)
	{
		FVector Center = FMath::Lerp<FVector>(MinWorldSource, MaxWorldSource, 0.5f);
		DrawArrow(Component, View, PDI, Center, Center + Component->GetOwner()->GetTransform().TransformVector(VisComponent->TransitionDirection) * 25, FColorList::Grey);

		DrawPosition(Component, View, PDI, MinWorldSource, ETransitionRectPosition::MinSource, LineColor);
		DrawPosition(Component, View, PDI, MaxWorldSource, ETransitionRectPosition::MaxSource, LineColor);
		DrawPosition(Component, View, PDI, MinWorldTarget, ETransitionRectPosition::MinTarget, LineColor);
		DrawPosition(Component, View, PDI, MaxWorldTarget, ETransitionRectPosition::MaxTarget, LineColor);
	}

	PDI->SetHitProxy(nullptr);
}

bool FAdvKitTransitionComponentRectVisualizer::VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click)
{
	if (!FAdvKitTransitionComponentVisualizer::VisProxyHandleClick(InViewportClient, VisProxy, Click))
	{
		SelectedPosition = ETransitionRectPosition::None;
		return false;
	}

	if (VisProxy && VisProxy->IsA(HTransitionRectPositionProxy::StaticGetType()))
	{
		auto Proxy = (HTransitionRectPositionProxy*)VisProxy;
		SelectedPosition = Proxy->Position;
	}
	else
	{
		SelectedPosition = ETransitionRectPosition::None;
	}

	return true;
}

bool FAdvKitTransitionComponentRectVisualizer::GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocaction) const
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentRect>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	switch (SelectedPosition)
	{
	case ETransitionRectPosition::None:
		return false;
	case ETransitionRectPosition::MinSource:
		OutLocaction = EditedTransition->GetMinSourceLocation();
		return true;
	case ETransitionRectPosition::MaxSource:
		OutLocaction = EditedTransition->GetMaxSourceLocation();
		return true;
	case ETransitionRectPosition::MinTarget:
		OutLocaction = EditedTransition->GetMinTargetLocation();
		return true;
	case ETransitionRectPosition::MaxTarget:
		OutLocaction = EditedTransition->GetMaxTargetLocation();
		return true;
	}

	return false;
}

bool FAdvKitTransitionComponentRectVisualizer::HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale)
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentRect>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	auto SourceZone = Cast<AAdvKitZone>(EditedTransition->GetOwner());
	auto TargetZone = EditedTransition->TargetZone.Get();
	auto CharacterClass = EditedTransition->UseableBy;

	switch (SelectedPosition)
	{
	case ETransitionRectPosition::None:
		return false;
	case ETransitionRectPosition::MinSource:
	{
		FVector NewLocation = GetNewLocation(
			SourceZone,
			*EditedTransition->MinSourcePosition,
			DeltaTranslate,
			CharacterClass);

		EditedTransition->MinSourcePosition.Set(
			EditedTransition->MinSourcePosition.Base,
			NewLocation);

		return true;
	}
	case ETransitionRectPosition::MaxSource:
	{
		FVector NewLocation = GetNewLocation(
			SourceZone,
			*EditedTransition->MaxSourcePosition,
			DeltaTranslate,
			CharacterClass);

		EditedTransition->MaxSourcePosition.Set(
			EditedTransition->MaxSourcePosition.Base,
			NewLocation);

		return true;
	}
	case ETransitionRectPosition::MinTarget:
	{
		FVector NewLocation = GetNewLocation(
			TargetZone ? TargetZone : SourceZone,
			*EditedTransition->MinTargetPosition,
			DeltaTranslate,
			CharacterClass);

		EditedTransition->MinTargetPosition.Set(
			EditedTransition->MinTargetPosition.Base,
			NewLocation);

		return true;
	}
	case ETransitionRectPosition::MaxTarget:
	{
		FVector NewLocation = GetNewLocation(
			TargetZone ? TargetZone : SourceZone,
			*EditedTransition->MaxTargetPosition,
			DeltaTranslate,
			CharacterClass);

		EditedTransition->MaxTargetPosition.Set(
			EditedTransition->MaxTargetPosition.Base,
			NewLocation);

		return true;
	}
	}
	return true;
}

void FAdvKitTransitionComponentRectVisualizer::EndEditing()
{
	FAdvKitTransitionComponentVisualizer::EndEditing();
	SelectedPosition = ETransitionRectPosition::None;
}

void FAdvKitTransitionComponentRectVisualizer::DrawRects(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FColor& Color)
{
	static const float LineThickness = 2;

	auto VisComponent = Cast<const UAdvKitTransitionComponentRect>(Component);
	if (!VisComponent)
	{
		return;
	}

	bool bSelected = (Component == GetEditedTransitionComponent());

	auto Base = VisComponent->GetOwner();
	if (!Base)
	{
		return;
	}

	const FVector MinWorldSource = VisComponent->GetMinSourceLocation();
	const FVector MaxWorldSource = VisComponent->GetMaxSourceLocation();
	const FVector MinWorldTarget = VisComponent->GetMinTargetLocation();
	const FVector MaxWorldTarget = VisComponent->GetMaxTargetLocation();

	const FTransform& BaseTransform = Base->GetActorTransform();

	//Source Rect
	const FVector& SourceLocalRectMin = BaseTransform.InverseTransformPosition(MinWorldSource);
	const FVector& SourceLocalRectMax = BaseTransform.InverseTransformPosition(MaxWorldSource);
	
	const FVector& SourceRectBottomLeft = MinWorldSource;
	const FVector& SourceRectBottomRight = BaseTransform.TransformPosition(FVector(SourceLocalRectMin.X, SourceLocalRectMax.Y, SourceLocalRectMin.Z));

	const FVector& SourceRectTopLeft = BaseTransform.TransformPosition(FVector(SourceLocalRectMax.X, SourceLocalRectMin.Y, SourceLocalRectMax.Z));
	const FVector& SourceRectTopRight = MaxWorldSource;

	PDI->DrawLine(SourceRectBottomLeft, SourceRectBottomRight, Color, SDPG_World, LineThickness);
	PDI->DrawLine(SourceRectBottomRight, SourceRectTopRight, Color, SDPG_World, LineThickness);
	PDI->DrawLine(SourceRectTopRight, SourceRectTopLeft, Color, SDPG_World, LineThickness);
	PDI->DrawLine(SourceRectTopLeft, SourceRectBottomLeft, Color, SDPG_World, LineThickness);

	//Target Rect
	const FVector& TargetLocalRectMin = BaseTransform.InverseTransformPosition(MinWorldTarget);
	const FVector& TargetLocalRectMax = BaseTransform.InverseTransformPosition(MaxWorldTarget);

	const FVector& TargetRectBottomLeft = MinWorldTarget;
	const FVector& TargetRectBottomRight = BaseTransform.TransformPosition(FVector(TargetLocalRectMin.X, TargetLocalRectMax.Y, TargetLocalRectMin.Z));

	const FVector& TargetRectTopLeft = BaseTransform.TransformPosition(FVector(TargetLocalRectMax.X, TargetLocalRectMin.Y, TargetLocalRectMax.Z));
	const FVector& TargetRectTopRight = MaxWorldTarget;

	PDI->DrawLine(TargetRectBottomLeft, TargetRectBottomRight, Color, SDPG_World, LineThickness);
	PDI->DrawLine(TargetRectBottomRight, TargetRectTopRight, Color, SDPG_World, LineThickness);
	PDI->DrawLine(TargetRectTopRight, TargetRectTopLeft, Color, SDPG_World, LineThickness);
	PDI->DrawLine(TargetRectTopLeft, TargetRectBottomLeft, Color, SDPG_World, LineThickness);


	DrawArrow(Component, View, PDI, SourceRectBottomLeft, TargetRectBottomLeft, Color);
	DrawArrow(Component, View, PDI, SourceRectBottomRight, TargetRectBottomRight, Color);
	DrawArrow(Component, View, PDI, SourceRectTopRight, TargetRectTopRight, Color);
	DrawArrow(Component, View, PDI, SourceRectTopLeft, TargetRectTopLeft, Color);

	//PDI->DrawLine(SourceRectBottomLeft, SourceRectTopRight, Color, SDPG_World, LineThickness);
	//PDI->DrawLine(SourceRectBottomRight, SourceRectTopLeft, Color, SDPG_World, LineThickness);
}

void FAdvKitTransitionComponentRectVisualizer::DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Location, const ETransitionRectPosition& Position, const FColor& Color)
{
	PDI->SetHitProxy(new HTransitionRectPositionProxy(Component, Position));
	PDI->DrawPoint(Location, Color, 20.f, SDPG_Foreground);
}

void FAdvKitTransitionComponentRectVisualizer::OnSwapDirection()
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentRect>(GetEditedTransitionComponent());
	if (!EditedTransition)
	{
		return;
	}

	EditedTransition->Init(EditedTransition->UseableBy,
		EditedTransition->GetMinTargetLocation(),
		EditedTransition->GetMinSourceLocation(),
		EditedTransition->GetMaxTargetLocation(),
		EditedTransition->GetMaxSourceLocation(),
		EditedTransition->TargetPhysics,
		EditedTransition->TargetZone.Get(),
		EditedTransition->TargetCustomPhysics);
}

void FAdvKitTransitionComponentRectVisualizer::OnNewTargetZoneSelected(AActor* InActor)
{
	auto NewZone = Cast<AAdvKitZone>(InActor);
	if (!NewZone)
	{
		return;
	}

	auto EditedTransition = Cast<UAdvKitTransitionComponentRect>(GetEditedTransitionComponent());
	if (!EditedTransition)
	{
		return;
	}


	FVector NewMinTargetLocation = NewZone->ConstrainPositionToZone(EditedTransition->GetMinTargetLocation(), GetCharacterHalfExtent(EditedTransition->UseableBy, NewZone));
	FVector NewMaxTargetLocation = NewZone->ConstrainPositionToZone(EditedTransition->GetMaxTargetLocation(), GetCharacterHalfExtent(EditedTransition->UseableBy, NewZone));

	EditedTransition->Init(EditedTransition->UseableBy,
		EditedTransition->GetMinSourceLocation(),
		NewMinTargetLocation,
		EditedTransition->GetMaxSourceLocation(),
		NewMaxTargetLocation,
		EditedTransition->TargetPhysics,
		NewZone,
		EditedTransition->TargetCustomPhysics);
}

#undef LOCTEXT_NAMESPACE
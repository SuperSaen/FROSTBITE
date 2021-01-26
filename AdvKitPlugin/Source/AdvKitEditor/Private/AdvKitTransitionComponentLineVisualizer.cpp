// Copyright 2015 Pascal Krabbe

#include "AdvKitTransitionComponentLineVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentLine.h"
#include "Environment/AdvKitZone.h"
#include "Player/AdvKitCharacter.h"
#include "ActorPickerMode.h"
#include "Editor.h"

#define LOCTEXT_NAMESPACE "AdvKitTransitionComponentLineVisualizer" 

IMPLEMENT_HIT_PROXY(HTransitionLinePositionProxy, HTransitionVisProxy)

void FAdvKitTransitionComponentLineVisualizer::OnRegister()
{
	FAdvKitTransitionComponentVisualizer::OnRegister();
	SelectedPosition = ETransitionLinePosition::None;
}

void FAdvKitTransitionComponentLineVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	static const float ArrowDistanceUnits = 100.0f;

	auto VisComponent = Cast<const UAdvKitTransitionComponentLine>(Component);
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
	for (float Alpha = 0; Alpha <= 1; Alpha += Step)
	{
		FVector LerpSource = FMath::Lerp<FVector>(MinWorldSource, MaxWorldSource, Alpha);
		FVector LerpTarget = FMath::Lerp<FVector>(MinWorldTarget, MaxWorldTarget, Alpha);
		DrawArrow(Component, View, PDI, LerpSource, LerpTarget, LineColor);
	}
	DrawArrow(Component, View, PDI, MaxWorldSource, MaxWorldTarget, LineColor);

	if (bSelected)
	{
		FVector Center = FMath::Lerp<FVector>(MinWorldSource, MaxWorldSource, 0.5f);
		DrawArrow(Component, View, PDI, Center, Center + Component->GetOwner()->GetTransform().TransformVector(VisComponent->TransitionDirection) * 25, FColorList::Grey);

		DrawPosition(Component, View, PDI, MinWorldSource, ETransitionLinePosition::MinSource, LineColor);
		DrawPosition(Component, View, PDI, MaxWorldSource, ETransitionLinePosition::MaxSource, LineColor);
		DrawPosition(Component, View, PDI, MinWorldTarget, ETransitionLinePosition::MinTarget, LineColor);
		DrawPosition(Component, View, PDI, MaxWorldTarget, ETransitionLinePosition::MaxTarget, LineColor);
	}

	PDI->SetHitProxy(nullptr);
}

bool FAdvKitTransitionComponentLineVisualizer::VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click)
{
	auto PrevSelection = GetEditedTransitionComponent();
	if (!FAdvKitTransitionComponentVisualizer::VisProxyHandleClick(InViewportClient, VisProxy, Click))
	{
		SelectedPosition = ETransitionLinePosition::None;
		return false;
	}

	if (VisProxy && VisProxy->IsA(HTransitionLinePositionProxy::StaticGetType()))
	{
		auto Proxy = (HTransitionLinePositionProxy*)VisProxy;
		SelectedPosition = Proxy->Position;
	}
	else
	{
		SelectedPosition = ETransitionLinePosition::None;
	}

	return true;
}

bool FAdvKitTransitionComponentLineVisualizer::GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocaction) const
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentLine>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	switch (SelectedPosition)
	{
	case ETransitionLinePosition::None:
		return false;
	case ETransitionLinePosition::MinSource:
		OutLocaction = EditedTransition->GetMinSourceLocation();
		return true;
	case ETransitionLinePosition::MaxSource:
		OutLocaction = EditedTransition->GetMaxSourceLocation();
		return true;
	case ETransitionLinePosition::MinTarget:
		OutLocaction = EditedTransition->GetMinTargetLocation();
		return true;
	case ETransitionLinePosition::MaxTarget:
		OutLocaction = EditedTransition->GetMaxTargetLocation();
		return true;
	}

	return false;
}

bool FAdvKitTransitionComponentLineVisualizer::HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale)
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentLine>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	auto SourceZone = Cast<AAdvKitZone>(EditedTransition->GetOwner());
	auto TargetZone = EditedTransition->TargetZone.Get();
	auto CharacterClass = EditedTransition->UseableBy;

	switch (SelectedPosition)
	{
	case ETransitionLinePosition::None:
		return false;
	case ETransitionLinePosition::MinSource:
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
	case ETransitionLinePosition::MaxSource:
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
	case ETransitionLinePosition::MinTarget:
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
	case ETransitionLinePosition::MaxTarget:
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

void FAdvKitTransitionComponentLineVisualizer::EndEditing()
{
	FAdvKitTransitionComponentVisualizer::EndEditing();
	SelectedPosition = ETransitionLinePosition::None;
}

void FAdvKitTransitionComponentLineVisualizer::DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Location, const ETransitionLinePosition& Position, const FColor& Color)
{
	PDI->SetHitProxy(new HTransitionLinePositionProxy(Component, Position));
	PDI->DrawPoint(Location, Color, 20.f, SDPG_Foreground);
}

void FAdvKitTransitionComponentLineVisualizer::OnNewTargetZoneSelected(AActor* InActor)
{
	auto NewZone = Cast<AAdvKitZone>(InActor);
	if (!NewZone)
	{
		return;
	}

	auto EditedTransition = Cast<UAdvKitTransitionComponentLine>(GetEditedTransitionComponent());
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
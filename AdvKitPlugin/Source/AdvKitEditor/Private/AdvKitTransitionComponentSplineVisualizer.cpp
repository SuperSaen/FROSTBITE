// Copyright 2015 Pascal Krabbe

#include "AdvKitTransitionComponentSplineVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentSpline.h"
#include "Environment/Zones/AdvKitZoneSpline.h"
#include "Player/AdvKitCharacter.h"
#include "ActorPickerMode.h"
#include "Editor.h"

#define LOCTEXT_NAMESPACE "AdvKitTransitionComponentSplineVisualizer" 

IMPLEMENT_HIT_PROXY(HTransitionSplinePositionProxy, HTransitionVisProxy)

void FAdvKitTransitionComponentSplineVisualizer::OnRegister()
{
	FAdvKitTransitionComponentVisualizer::OnRegister();
	SelectedPosition = ETransitionSplinePosition::None;
}


void FAdvKitTransitionComponentSplineVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	static const float ArrowDistanceUnits = 100.0f;

	auto VisComponent = Cast<const UAdvKitTransitionComponentSpline>(Component);
	if (!VisComponent)
	{
		return;
	}

	bool bSelected = (Component == GetEditedTransitionComponent());

	auto SourceZone = Cast<AAdvKitZoneSpline>(VisComponent->GetOwner());
	auto TargetZone = Cast<AAdvKitZoneSpline>(VisComponent->TargetZone.Get());

	//if (!TargetZone)
	//{
	//	return;
	//}

	auto MinWorldSource = VisComponent->GetMinSourcePosition();
	auto MaxWorldSource = VisComponent->GetMaxSourcePosition();
	auto MinWorldTarget = VisComponent->GetMinTargetPosition();
	auto MaxWorldTarget = VisComponent->GetMaxTargetPosition();

	FColor LineColor = VisComponent->bIsDynamic ? FColorList::MandarianOrange : FColorList::Grey;
	if (bSelected)
	{
		FLinearColor Temp(LineColor);
		Temp *= 2.0f;
		LineColor = Temp.ToFColor(false);
	}


	const float Distance = MaxWorldSource.Distance-MinWorldSource.Distance;
	float ArrowCount = FPlatformMath::CeilToInt(Distance / ArrowDistanceUnits);
	float Step = 1.0f / ArrowCount;

	PDI->SetHitProxy(new HTransitionVisProxy(Component));
	for (float Alpha = 0; ; Alpha += Step)
	{
		float ClampedAlpha = FMath::Clamp<float>(Alpha,0.0f,1.0f);

		float SourceDistance = FMath::Lerp<float>(MinWorldSource.Distance, MaxWorldSource.Distance, ClampedAlpha);

		FVector LerpSource = FSplineTransitionPosition::Lerp(MinWorldSource, MaxWorldSource, ClampedAlpha);
		FVector LerpTarget = FSplineTransitionPosition::Lerp(MinWorldTarget, MaxWorldTarget, ClampedAlpha);

		//if (TargetZone) 
		//{
		//	LerpTarget = TargetZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(FMath::Lerp<float>(MinWorldTarget.Distance, MaxWorldTarget.Distance, ClampedAlpha), ESplineCoordinateSpace::World);
		//}
		//else
		//{
		//	//SourceZone->GetWorldLocationAtDistanceAlongSpline(LocalZoneLocation.X);
		//	auto RotationAtLocation = FRotationMatrix::MakeFromXY(
		//		SourceZone->GetZoneForwardVectorNew(FVector(SourceDistance, 0, 0)),
		//		SourceZone->GetZoneRightVectorNew(FVector(SourceDistance, 0, 0))
		//	).Rotator();

		//	LerpTarget = LerpSource + RotationAtLocation.RotateVector(VisComponent->TransitionDirection)*100;
		//}

		DrawArrow(Component, View, PDI, LerpSource, LerpTarget, LineColor);

		if (Alpha > 1.0f)
		{
			break;
		}
	}

	//DrawArrow(Component, View, PDI, 
	//	SourceZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(MaxWorldSource, ESplineCoordinateSpace::World),
	//	TargetZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(MaxWorldTarget, ESplineCoordinateSpace::World),
	//	LineColor);

	if (bSelected)
	{
		//FVector Center = FMath::Lerp<FVector>(MinWorldSource, MaxWorldSource, 0.5f);
		//DrawArrow(Component, View, PDI, Center, Center + Component->GetOwner()->GetTransform().TransformVector(VisComponent->TransitionDirection) * 25, FColorList::Grey);

		DrawPosition(Component, View, PDI, MinWorldSource, ETransitionSplinePosition::MinSource, LineColor);
		DrawPosition(Component, View, PDI, MaxWorldSource, ETransitionSplinePosition::MaxSource, LineColor);
		DrawPosition(Component, View, PDI, MinWorldTarget, ETransitionSplinePosition::MinTarget, LineColor);
		DrawPosition(Component, View, PDI, MaxWorldTarget, ETransitionSplinePosition::MaxTarget, LineColor);
	}

	PDI->SetHitProxy(nullptr);
}

bool FAdvKitTransitionComponentSplineVisualizer::VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click)
{
	if (!FAdvKitTransitionComponentVisualizer::VisProxyHandleClick(InViewportClient, VisProxy, Click))
	{
		SelectedPosition = ETransitionSplinePosition::None;
		return false;
	}

	if (VisProxy && VisProxy->IsA(HTransitionSplinePositionProxy::StaticGetType()))
	{
		auto Proxy = (HTransitionSplinePositionProxy*)VisProxy;
		SelectedPosition = Proxy->Position;
	}
	else
	{
		SelectedPosition = ETransitionSplinePosition::None;
	}

	return true;
}

bool FAdvKitTransitionComponentSplineVisualizer::GetWidgetLocation(const FEditorViewportClient* ViewportClient, FVector& OutLocaction) const
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentSpline>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	switch (SelectedPosition)
	{
	case ETransitionSplinePosition::None:
		return false;
	case ETransitionSplinePosition::MinSource:
		OutLocaction = EditedTransition->GetMinSourcePosition().GetWorldLocation();
		return true;
	case ETransitionSplinePosition::MaxSource:
		OutLocaction = EditedTransition->GetMaxSourcePosition().GetWorldLocation();
		return true;
	case ETransitionSplinePosition::MinTarget:
		OutLocaction = EditedTransition->GetMinTargetPosition().GetWorldLocation();
		return true;
	case ETransitionSplinePosition::MaxTarget:
		OutLocaction = EditedTransition->GetMaxTargetPosition().GetWorldLocation();
		return true;
	}

	return false;
}

void FAdvKitTransitionComponentSplineVisualizer::ApplyDeltaToSplineLocation(AAdvKitZone* Zone, FSplineTransitionPosition& TargetPosition, TSubclassOf<AAdvKitCharacter> CharacterClass, FVector DeltaTranslate)
{
	FVector NewLocation = GetNewLocation(
		Zone,
		TargetPosition.GetWorldLocation(),
		DeltaTranslate,
		CharacterClass);

	FVector ZoneLocation = Zone->ConstrainPositionToZone(NewLocation, FVector::ZeroVector);

	float Distance = Zone->GetZoneLocationLocal(ZoneLocation).X;

	TargetPosition.Set(Zone, NewLocation, Distance);
}

bool FAdvKitTransitionComponentSplineVisualizer::HandleInputDelta(FEditorViewportClient* ViewportClient, FViewport* Viewport, FVector& DeltaTranslate, FRotator& DeltaRotate, FVector& DeltaScale)
{
	auto EditedTransition = Cast<UAdvKitTransitionComponentSpline>(GetEditedTransitionComponent());
	if (!IsValid(EditedTransition))
	{
		return false;
	}

	auto SourceZone = Cast<AAdvKitZone>(EditedTransition->GetOwner());
	auto TargetZone = EditedTransition->TargetZone.IsValid() ? EditedTransition->TargetZone.Get() : SourceZone;
	auto CharacterClass = EditedTransition->UseableBy;

	//auto ActualZone = SourceZone;

	switch (SelectedPosition)
	{
	case ETransitionSplinePosition::None:
		return false;
	case ETransitionSplinePosition::MinSource:
		ApplyDeltaToSplineLocation(SourceZone, EditedTransition->MinSourcePosition, CharacterClass, DeltaTranslate);
		return true;
	case ETransitionSplinePosition::MaxSource:
		ApplyDeltaToSplineLocation(SourceZone, EditedTransition->MaxSourcePosition, CharacterClass, DeltaTranslate);
		return true;
	case ETransitionSplinePosition::MinTarget:
		ApplyDeltaToSplineLocation(TargetZone, EditedTransition->MinTargetPosition, CharacterClass, DeltaTranslate);
		return true;
	case ETransitionSplinePosition::MaxTarget:
		ApplyDeltaToSplineLocation(TargetZone, EditedTransition->MaxTargetPosition, CharacterClass, DeltaTranslate);
		return true;
	}
	
	return false;
}


void FAdvKitTransitionComponentSplineVisualizer::EndEditing()
{
	FAdvKitTransitionComponentVisualizer::EndEditing();
	SelectedPosition = ETransitionSplinePosition::None;
}

void FAdvKitTransitionComponentSplineVisualizer::DrawPosition(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FSplineTransitionPosition& Location, const ETransitionSplinePosition& Position, const FColor& Color)
{
	PDI->SetHitProxy(new HTransitionSplinePositionProxy(Component, Position));
	PDI->DrawPoint(Location.GetWorldLocation(), Color, 20.f, SDPG_Foreground);
}

void FAdvKitTransitionComponentSplineVisualizer::OnNewTargetZoneSelected(AActor* InActor)
{
	auto NewZone = Cast<AAdvKitZoneSpline>(InActor);
	if (!NewZone)
	{
		return;
	}

	auto EditedTransition = Cast<UAdvKitTransitionComponentSpline>(GetEditedTransitionComponent());
	if (!EditedTransition)
	{
		return;
	}

	auto SouceZone = Cast<AAdvKitZoneSpline>(EditedTransition->GetOwner());

	FVector NewMinTargetLocation = NewZone->ConstrainPositionToZone(EditedTransition->GetMinTargetPosition().GetWorldLocation(), GetCharacterHalfExtent(EditedTransition->UseableBy, NewZone));
	FVector MinZoneLocation = NewZone->GetZoneLocationLocal(NewMinTargetLocation);
	float NewMinTargetDistance = MinZoneLocation.X;

	FVector NewMaxTargetLocation = NewZone->ConstrainPositionToZone(EditedTransition->GetMaxTargetPosition().GetWorldLocation(), GetCharacterHalfExtent(EditedTransition->UseableBy, NewZone));
	FVector MaxZoneLocation = NewZone->GetZoneLocationLocal(NewMaxTargetLocation);
	float NewMaxTargetDistance = MaxZoneLocation.X;

	EditedTransition->Init(EditedTransition->UseableBy,
		EditedTransition->GetMinSourcePosition().Distance,
		EditedTransition->GetMinSourcePosition().GetWorldLocation(),

		NewMinTargetDistance,
		NewMinTargetLocation,

		EditedTransition->GetMaxSourcePosition().Distance,
		EditedTransition->GetMaxSourcePosition().GetWorldLocation(), 

		NewMaxTargetDistance,
		NewMaxTargetLocation,

		NewZone->GetPhysics(),
		NewZone,
		NewZone->GetCustomPhysics());
}

#undef LOCTEXT_NAMESPACE
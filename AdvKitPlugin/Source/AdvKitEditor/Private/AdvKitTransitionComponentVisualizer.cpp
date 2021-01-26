// Copyright 2015 Pascal Krabbe

#include "AdvKitTransitionComponentVisualizer.h"
#include "Environment/AdvKitTransitionComponent.h"
#include "Environment/AdvKitZone.h"
#include "Player/AdvKitCharacter.h"
#include "ActorPickerMode.h"
#include "Editor.h"
#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"
//#include "Framework/Commands/UIAction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "AdvKitTransitionComponentVisualizer" 

IMPLEMENT_HIT_PROXY(HTransitionVisProxy, HComponentVisProxy)

class FAdvKitTransitionComponentVisualizerCommands : public TCommands< FAdvKitTransitionComponentVisualizerCommands >
{
public:
	FAdvKitTransitionComponentVisualizerCommands() : TCommands <FAdvKitTransitionComponentVisualizerCommands>
		(
			"AdvKitTransitionComponentVisualizer",
			LOCTEXT("AdvKitTransitionComponentVisualizer", "Transition Component Visualizer"),
			NAME_None,
			FEditorStyle::GetStyleSetName()
			) {}

	virtual void RegisterCommands() override
	{
		UI_COMMAND(SwapDirections, "Swap transition direction", "Inverses the direciton of the transition.", EUserInterfaceActionType::Button, FInputGesture());
		UI_COMMAND(PickTargetZone, "Pick transition target", "Set a new target zone for the transition.", EUserInterfaceActionType::Button, FInputGesture());
	}

public:
	/** Change Target Zone */
	TSharedPtr<FUICommandInfo> PickTargetZone;

	/** swap direction of transition */
	TSharedPtr<FUICommandInfo> SwapDirections;

};

void FAdvKitTransitionComponentVisualizer::OnRegister()
{
	FAdvKitTransitionComponentVisualizerCommands::Register();
	VisualizerActions = MakeShareable(new FUICommandList);
	const auto& Commands = FAdvKitTransitionComponentVisualizerCommands::Get();

	VisualizerActions->MapAction(
		Commands.PickTargetZone,
		FExecuteAction::CreateSP(this, &FAdvKitTransitionComponentVisualizer::OnPickTargetZone));

	VisualizerActions->MapAction(
		Commands.SwapDirections,
		FExecuteAction::CreateSP(this, &FAdvKitTransitionComponentVisualizer::OnSwapDirection));

	bSnapEditedLocation = false;
}


bool FAdvKitTransitionComponentVisualizer::VisProxyHandleClick(FEditorViewportClient* InViewportClient, HComponentVisProxy* VisProxy, const FViewportClick& Click)
{
	if (VisProxy && VisProxy->Component.IsValid())
	{
		auto* TransitionComp = CastChecked<const UAdvKitTransitionComponent>(VisProxy->Component.Get());

		TransitionCompName = TransitionComp->GetName();

		if (TransitionCompName != "")
		{
			AActor* OldTransitionOwningActor = TransitionOwningActor.Get();
			TransitionOwningActor = TransitionComp->GetOwner();
			return true;
		}
	}

	return false;
}

bool FAdvKitTransitionComponentVisualizer::HandleInputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event)
{
	if (Key == EKeys::Escape)
	{
		CancelPickTarget();
		return true;
	}
	if (Key == EKeys::LeftShift || Key == EKeys::RightShift)
	{
		if (Event == EInputEvent::IE_Pressed)
		{
			bSnapEditedLocation = true;
			return true;
		}
		else if (Event == EInputEvent::IE_Released)
		{
			bSnapEditedLocation = false;
			return true;
		}
	}

	return false;
}

TSharedPtr<SWidget> FAdvKitTransitionComponentVisualizer::GenerateContextMenu() const
{
	FMenuBuilder MenuBuilder(true, VisualizerActions);
	{
		MenuBuilder.BeginSection("Transition Actions");
		{
			MenuBuilder.AddMenuEntry(FAdvKitTransitionComponentVisualizerCommands::Get().PickTargetZone);
			//MenuBuilder.AddMenuEntry(FAdvKitTransitionComponentVisualizerCommands::Get().SwapDirections);
		}
		MenuBuilder.EndSection();
	}

	TSharedPtr<SWidget> MenuWidget = MenuBuilder.MakeWidget();
	return MenuWidget;
}

void FAdvKitTransitionComponentVisualizer::EndEditing()
{
	TransitionOwningActor = nullptr;
	TransitionCompName = "";
}

UAdvKitTransitionComponent* FAdvKitTransitionComponentVisualizer::GetEditedTransitionComponent() const
{
	if (!TransitionOwningActor.IsValid())
	{
		return nullptr;
	}

	TInlineComponentArray<UAdvKitTransitionComponent*> Components(TransitionOwningActor.Get());
	for (auto Component : Components)
	{
		if (Component->GetName() == TransitionCompName)
		{
			return Cast<UAdvKitTransitionComponent>(Component);
		}
	}

	return nullptr;
}


void FAdvKitTransitionComponentVisualizer::DrawArrow(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI, const FVector& Source, const FVector& Target, const FColor& Color)
{
	static const float	ArrowLength = 8.0f;
	static const float LineThickness = 2;

	const FVector Forward = (Target - Source).GetSafeNormal();
	FVector Right, Up;
	Forward.FindBestAxisVectors(Right, Up);

	//Draw lines and arrow head
	PDI->DrawLine(Source, Target, Color, SDPG_World, LineThickness);
	PDI->DrawLine(Target, Target + (-Forward + Right).GetSafeNormal()*ArrowLength, Color, SDPG_World, LineThickness);
	PDI->DrawLine(Target, Target + (-Forward - Right).GetSafeNormal()*ArrowLength, Color, SDPG_World, LineThickness);
	PDI->DrawLine(Target, Target + (-Forward + Up).GetSafeNormal()*ArrowLength, Color, SDPG_World, LineThickness);
	PDI->DrawLine(Target, Target + (-Forward - Up).GetSafeNormal()*ArrowLength, Color, SDPG_World, LineThickness);
}

void FAdvKitTransitionComponentVisualizer::OnPickTargetZone()
{
	FActorPickerModeModule& ActorPickerMode = FModuleManager::Get().GetModuleChecked<FActorPickerModeModule>("ActorPickerMode");

	if (ActorPickerMode.IsInActorPickingMode())
	{
		ActorPickerMode.EndActorPickingMode();
	}
	else
	{
		ActorPickerMode.BeginActorPickingMode(
			FOnGetAllowedClasses::CreateSP(this, &FAdvKitTransitionComponentVisualizer::OnGetAllowedClasses),
			FOnShouldFilterActor::CreateSP(this, &FAdvKitTransitionComponentVisualizer::IsFilteredActor),
			FOnActorSelected::CreateSP(this, &FAdvKitTransitionComponentVisualizer::OnNewTargetZoneSelected)
			);
	}
}

void FAdvKitTransitionComponentVisualizer::CancelPickTarget()
{
	FActorPickerModeModule& ActorPickerMode = FModuleManager::Get().GetModuleChecked<FActorPickerModeModule>("ActorPickerMode");
	ActorPickerMode.EndActorPickingMode();
}

void FAdvKitTransitionComponentVisualizer::OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses)
{
	AllowedClasses.Add(AAdvKitZone::StaticClass());
}

void FAdvKitTransitionComponentVisualizer::OnNewTargetZoneSelected(AActor* InActor)
{
}

bool FAdvKitTransitionComponentVisualizer::IsFilteredActor(const AActor* const Actor) const
{
	return true;// Actor != TransitionOwningActor.Get();
}

void FAdvKitTransitionComponentVisualizer::OnSwapDirection()
{
}

FVector FAdvKitTransitionComponentVisualizer::GetNewLocation(AAdvKitZone* Zone, FVector Location, FVector Delta, TSubclassOf<AAdvKitCharacter> CharacterClass)
{
	FVector NewLocation = Location + Delta;
	if (!bSnapEditedLocation)
	{
		return NewLocation;
	}

	if (!Zone)
	{
		return NewLocation;
	}

	return Zone->ConstrainPositionToZone(
		NewLocation,
		GetCharacterHalfExtent(CharacterClass, Zone),
		Zone->GetActorRotation()
		);
}

const FVector FAdvKitTransitionComponentVisualizer::GetCharacterHalfExtent(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone) const
{
	if (!ForCharacterClass || !ForZone)
	{
		return FVector::ZeroVector;
	}

	//Not sure if this can ever happen, but I am a pessimist :P
	AAdvKitCharacter* DefaultCharacter = ForCharacterClass.GetDefaultObject();
	if (!DefaultCharacter)
	{
		return FVector::ZeroVector;
	}

	return DefaultCharacter->GetHalfExtentForZone(ForZone);
}
#undef LOCTEXT_NAMESPACE
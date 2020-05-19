// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitCharacter.h"
#include "Environment/AdvKitZone.h"
#include "Environment/Zones/AdvKitZoneLine.h"
#include "Environment/Zones/AdvKitZoneRectangle.h"
#include "Environment/Zones/AdvKitZoneSpline.h"
#include "Environment/AdvKitTransitionBuilderModule.h"
#include "Editor.h"
#include "CoreMinimal.h"
#include "EngineUtils.h"
#include "Framework/Commands/UIAction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "AdvKitEditorZoneContextTool"

void RebuildSelectedTransitions(TArray<AAdvKitZone*> SelectedZones);

void AddSupportedCharacterClass(TArray<AAdvKitZone*> SelectedZones, UClass* CharacterClass)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		Zone->AddCharacterClass(CharacterClass);
	}

	RebuildSelectedTransitions(SelectedZones);
}

void SetSupportedCharacterClass(TArray<AAdvKitZone*> SelectedZones, UClass* CharacterClass)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		Zone->SetCharacterClass(CharacterClass);
	}

	RebuildSelectedTransitions(SelectedZones);
}


void RemoveSupportedCharacterClass(TArray<AAdvKitZone*> SelectedZones, UClass* CharacterClass)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		Zone->RemoveCharacterClass(CharacterClass);
	}

	RebuildSelectedTransitions(SelectedZones);
}

void RebuildSelectedTransitions(TArray<AAdvKitZone*> SelectedZones)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		Zone->RerunConstructionScripts();
	}
}

void AddTransitionLine(TArray<AAdvKitZone*> SelectedZones)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		auto LineZone = Cast<AAdvKitZoneLine>(Zone);
		if (LineZone)
		{
			Zone->Modify(true);
			FVector Start = Zone->ConstrainPositionToZone(LineZone->GetZoneStartWorld(), FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());
			FVector End = Zone->ConstrainPositionToZone(LineZone->GetZoneEndWorld(), FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());
			UAdvKitTransitionBuilderModule::CreateTransitionLine(nullptr,"ManualLine",Zone,Start, Start + FVector::UpVector * 100, End, End + FVector::UpVector * 100, AAdvKitCharacter::StaticClass(), Zone->GetPhysics(), nullptr, Zone->GetCustomPhysics());
			continue;
		}

		auto RectZone = Cast<AAdvKitZoneRectangle>(Zone);
		if (RectZone)
		{
			Zone->Modify(true);
			FVector MinRect = RectZone->LocalRectMinBoundary;
			FVector MaxRect = RectZone->LocalRectMaxBoundary;

			float CenterZ = FMath::Lerp<float>(MinRect.Z, MaxRect.Z, 0.5f);

			FVector Start = RectZone->GetTransform().TransformPosition(FVector(MinRect.X, MinRect.Y, CenterZ));
			Start = Zone->ConstrainPositionToZone(Start, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());
			
			FVector End = RectZone->GetTransform().TransformPosition(FVector(MinRect.X, MaxRect.Y, CenterZ));
			End = Zone->ConstrainPositionToZone(End, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());

			UAdvKitTransitionBuilderModule::CreateTransitionLine(nullptr, "ManualLine", Zone, Start, Start + FVector::UpVector * 100, End, End + FVector::UpVector * 100, AAdvKitCharacter::StaticClass(), Zone->GetPhysics(), nullptr, Zone->GetCustomPhysics());
		}
	}
}

void AddTransitionRect(TArray<AAdvKitZone*> SelectedZones)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		auto RectZone = Cast<AAdvKitZoneRectangle>(Zone);
		if (RectZone)
		{
			Zone->Modify(true);
			FVector MinRect = RectZone->LocalRectMinBoundary;
			FVector MaxRect = RectZone->LocalRectMaxBoundary;

			float CenterZ = FMath::Lerp<float>(MinRect.Z, MaxRect.Z, 0.5f);

			FVector Start = RectZone->GetTransform().TransformPosition(MinRect);// FVector(MinRect.X, MinRect.Y, CenterZ));
			Start = Zone->ConstrainPositionToZone(Start, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());

			FVector End = RectZone->GetTransform().TransformPosition(MaxRect);// FVector(MinRect.X, MaxRect.Y, CenterZ));
			End = Zone->ConstrainPositionToZone(End, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());

			UAdvKitTransitionBuilderModule::CreateTransitionRect(
				nullptr, 
				"ManualRect", 
				Zone, 
				Start,
				Start + Zone->GetActorForwardVector() * 100,
				End, 
				End + Zone->GetActorForwardVector() * 100,
				AAdvKitCharacter::StaticClass(), 
				Zone->GetPhysics(), 
				nullptr, 
				Zone->GetCustomPhysics());
		}
	}
}

void AddTransitionPoint(TArray<AAdvKitZone*> SelectedZones)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		auto LineZone = Cast<AAdvKitZoneLine>(Zone);
		if (LineZone)
		{
			Zone->Modify(true);
			FVector Center = FMath::Lerp<FVector>(LineZone->GetZoneStartWorld(), LineZone->GetZoneEndWorld(),0.5f);
			Center = Zone->ConstrainPositionToZone(Center, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());
			UAdvKitTransitionBuilderModule::CreateTransitionPoint(nullptr, "ManualPoint", Zone, Center, Center + FVector::UpVector * 100, AAdvKitCharacter::StaticClass(), Zone->GetPhysics(), nullptr, Zone->GetCustomPhysics());
			continue;
		}

		auto RectZone = Cast<AAdvKitZoneRectangle>(Zone);
		if (RectZone)
		{
			Zone->Modify(true);
			FVector Center = FMath::Lerp<FVector>(RectZone->GetZoneRectMinWorld(), RectZone->GetZoneRectMaxWorld(), 0.5f);
			Center = Zone->ConstrainPositionToZone(Center, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());
			UAdvKitTransitionBuilderModule::CreateTransitionPoint(nullptr, "ManualPoint", Zone, Center, Center + FVector::UpVector * 100, AAdvKitCharacter::StaticClass(), Zone->GetPhysics(), nullptr, Zone->GetCustomPhysics());
		}

		auto SplineZone = Cast<AAdvKitZoneSpline>(Zone);
		if (SplineZone)
		{
			Zone->Modify(true);
			float CenterDistance = SplineZone->GetSplineComponent()->GetSplineLength() / 2.0f;
			FVector Center = SplineZone->GetSplineComponent()->GetLocationAtDistanceAlongSpline(CenterDistance,ESplineCoordinateSpace::World);
			Center = Zone->ConstrainPositionToZone(Center, FVector(42.0f, 42.0f, 96.0f), Zone->GetActorRotation());
			UAdvKitTransitionBuilderModule::CreateTransitionPoint(nullptr, "ManualPoint", Zone, Center, Center + FVector::UpVector * 100, AAdvKitCharacter::StaticClass(), Zone->GetPhysics(), nullptr, Zone->GetCustomPhysics());
		}
	}
}

void AddTransitionSpline(TArray<AAdvKitZone*> SelectedZones)
{
	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		auto SplineZone = Cast<AAdvKitZoneSpline>(Zone);
		if (SplineZone)
		{
			float SplineLength = SplineZone->GetSplineComponent()->GetSplineLength();
			SplineZone->Modify(true);

			UAdvKitTransitionBuilderModule::CreateTransitionSpline(
				nullptr,
				"ManualSpline",
				Zone,
				0,
				SplineZone->GetZoneLocationWorld(FVector::ZeroVector),

				0,
				SplineZone->GetZoneLocationWorld(FVector::ZeroVector) - SplineZone->GetZoneUpVectorNew(FVector::ZeroVector) * 100,

				SplineLength,
				SplineZone->GetZoneLocationWorld(FVector::ForwardVector*SplineLength),

				SplineZone->GetSplineComponent()->GetSplineLength(),
				SplineZone->GetZoneLocationWorld(FVector(SplineLength, 0, 0)) - SplineZone->GetZoneUpVectorNew(FVector::ForwardVector*SplineLength) * 100,

				AAdvKitCharacter::StaticClass(),
				EAdvKitMovementMode::Falling);

		}
	}
}

void RebuildAllTransitions()
{
	if (!GEditor)
	{
		UE_LOG(LogTemp, Error, TEXT("No GEditor!"));
		return;
	}

	auto World = GEditor->GetEditorWorldContext().World();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("No World!"));
		return;
	}

	uint32 ZoneCount = 0;
	for (TActorIterator<AAdvKitZone> ZoneItr(World); ZoneItr; ++ZoneItr)
	{
		auto Zone = *ZoneItr;
		if (!Zone)
		{
			continue;
		}

		ZoneCount++;
		Zone->GenerateTransitions_Implementation(true); //TODO finde out why calling GenerateTransitions does nothing
	}

	UE_LOG(LogTemp, Log, TEXT("Rebuild transitions for %d zones."), ZoneCount);
}

void FillAddCharacterClassMenu(FMenuBuilder& MenuBuilder, TArray<AAdvKitZone*> SelectedZones)
{
	TArray<UClass*> CharacterClasses;

	for (TObjectIterator<UClass> It; It; ++It)
	{
		if (It->IsChildOf(AAdvKitCharacter::StaticClass()))// && !It->HasAnyClassFlags(CLASS_Abstract))
		{
			CharacterClasses.Add(*It);
		}
	}

	for (auto CharacterClass : CharacterClasses)
	{
		if (CharacterClass->GetName().StartsWith("SKEL_") 
			|| CharacterClass->GetName().StartsWith("REINST_"))
		{
			continue;
		}

		FString ClassName = CharacterClass->GetName();
		ClassName.RemoveFromEnd("_C",ESearchCase::CaseSensitive);

		FUIAction UIAction;
		UIAction.ExecuteAction.BindStatic(&AddSupportedCharacterClass, SelectedZones, CharacterClass);
		MenuBuilder.AddMenuEntry(
			FText::FromString(ClassName),
			FText::FromString(ClassName),
			FSlateIcon(), UIAction);
	}
}

void FillSetCharacterClassMenu(FMenuBuilder& MenuBuilder, TArray<AAdvKitZone*> SelectedZones)
{
	TArray<UClass*> CharacterClasses;

	for (TObjectIterator<UClass> It; It; ++It)
	{
		if (It->IsChildOf(AAdvKitCharacter::StaticClass()))// && !It->HasAnyClassFlags(CLASS_Abstract))
		{
			CharacterClasses.Add(*It);
		}
	}

	for (auto CharacterClass : CharacterClasses)
	{
		if (CharacterClass->GetName().StartsWith("SKEL_")
			|| CharacterClass->GetName().StartsWith("REINST_"))
		{
			continue;
		}

		FString ClassName = CharacterClass->GetName();
		ClassName.RemoveFromEnd("_C", ESearchCase::CaseSensitive);

		FUIAction UIAction;
		UIAction.ExecuteAction.BindStatic(&SetSupportedCharacterClass, SelectedZones, CharacterClass);
		MenuBuilder.AddMenuEntry(
			FText::FromString(ClassName),
			FText::FromString(ClassName),
			FSlateIcon(), UIAction);
	}
}

void FillRemoveCharacterClassMenu(FMenuBuilder& MenuBuilder, TArray<AAdvKitZone*> SelectedZones)
{
	TArray<UClass*> CharacterClasses;

	for (auto Zone : SelectedZones)
	{
		if (!IsValid(Zone))
		{
			continue;
		}

		for (auto Module : Zone->BuildModules)
		{
			if (!IsValid(Module))
			{
				continue;
			}

			for (auto Class : Module->DefaultCharacterClasses)
			{
				CharacterClasses.AddUnique(Class);
			}
		}
	}

	//for (TObjectIterator<UClass> It; It; ++It)
	//{
	//	if (It->IsChildOf(AAdvKitCharacter::StaticClass()))// && !It->HasAnyClassFlags(CLASS_Abstract))
	//	{
	//		CharacterClasses.Add(*It);
	//	}
	//}

	for (auto CharacterClass : CharacterClasses)
	{
		FString ClassName = CharacterClass->GetName();
		ClassName.RemoveFromEnd("_C", ESearchCase::CaseSensitive);

		FUIAction UIAction;
		UIAction.ExecuteAction.BindStatic(&RemoveSupportedCharacterClass, SelectedZones, CharacterClass);
		MenuBuilder.AddMenuEntry(
			FText::FromString(ClassName),
			FText::FromString(ClassName),
			FSlateIcon(), UIAction);
	}
}

void AddAdvKitContextMenuCommands(FMenuBuilder& MenuBuilder, TArray<AAdvKitZone*> SelectedZones)
{
	if (SelectedZones.Num() == 0)
	{
		return;
	}

	MenuBuilder.BeginSection("Adventure Kit Context", FText::FromString("Adventure Kit"));
	{
		FUIAction UIActionAddTransitionPoint;
		UIActionAddTransitionPoint.ExecuteAction.BindStatic(&AddTransitionPoint, SelectedZones);
		MenuBuilder.AddMenuEntry(
			LOCTEXT("Add Transition Point", "Add Transition Point"),
			LOCTEXT("Add Transition Point Tooltip", "Adds a transition point to the zone."),
			FSlateIcon(), UIActionAddTransitionPoint);

		FUIAction UIActionAddTransitionLine;
		UIActionAddTransitionLine.ExecuteAction.BindStatic(&AddTransitionLine, SelectedZones);
		MenuBuilder.AddMenuEntry(
			LOCTEXT("Add Transition Line", "Add Transition Line"),
			LOCTEXT("Add Transition Line Tooltip", "Adds a transition Line to the zone."),
			FSlateIcon(), UIActionAddTransitionLine);

		FUIAction UIActionAddTransitionRect;
		UIActionAddTransitionRect.ExecuteAction.BindStatic(&AddTransitionRect, SelectedZones);
		MenuBuilder.AddMenuEntry(
			LOCTEXT("Add Transition Rect", "Add Transition Rect"),
			LOCTEXT("Add Transition Rect Tooltip", "Adds a transition Rect to the zone."),
			FSlateIcon(), UIActionAddTransitionRect);

		FUIAction UIActionAddTransitionSpline;
		UIActionAddTransitionSpline.ExecuteAction.BindStatic(&AddTransitionSpline, SelectedZones);
		MenuBuilder.AddMenuEntry(
			LOCTEXT("Add Transition Spline", "Add Transition Spline"),
			LOCTEXT("Add Transition Spline Tooltip", "Adds a transition spline to the zone."),
			FSlateIcon(), UIActionAddTransitionSpline);

		FUIAction UIActionRebuildSelectedTransitions;
		UIActionRebuildSelectedTransitions.ExecuteAction.BindStatic(&RebuildSelectedTransitions, SelectedZones);
		MenuBuilder.AddMenuEntry(
			LOCTEXT("Rebuild Transitions", "Rebuild Transitions"),
			LOCTEXT("Rebuild Transitions Tooltip", "Rebuild transitions of selected zones."),
			FSlateIcon(), UIActionRebuildSelectedTransitions);

		FUIAction UIActionRebuildAllTransitions;
		UIActionRebuildAllTransitions.ExecuteAction.BindStatic(&RebuildAllTransitions);
		MenuBuilder.AddMenuEntry(
			LOCTEXT("Rebuild All Transitions", "Rebuild All Transitions"),
			LOCTEXT("Rebuild All Transitions Tooltip", "Rebuild transitions of all zones in the level."),
			FSlateIcon(), UIActionRebuildAllTransitions);

		MenuBuilder.AddSubMenu(
			LOCTEXT("Add Character Class", "Add Transition Character"),
			LOCTEXT("Add Character Class Tooltip", "Adds a character class for all transition builders."),
			FNewMenuDelegate::CreateStatic(&FillAddCharacterClassMenu, SelectedZones)
			);

		MenuBuilder.AddSubMenu(
			LOCTEXT("Set Character Class", "Set Transition Character"),
			LOCTEXT("Set Character Class Tooltip", "Sets a character class for all transition builders and removes all others."),
			FNewMenuDelegate::CreateStatic(&FillSetCharacterClassMenu, SelectedZones)
			);

		
		MenuBuilder.AddSubMenu(
			LOCTEXT("Remove Character Class", "Remove Transition Character"),
			LOCTEXT("Remove Character Class Tooltip", "Removes a character class from all transition builders."),
			FNewMenuDelegate::CreateStatic(&FillRemoveCharacterClassMenu, SelectedZones)
			);
	}
	MenuBuilder.EndSection();
}

/**
* Extends the level viewport context menu with adventure kit-specific menu items
*/
TSharedRef<FExtender> ExtendLevelViewportContextMenuForAdvKit(const TSharedRef<FUICommandList> CommandList, TArray<AActor*> SelectedActors)
{
	TSharedPtr<FExtender> Extender = MakeShareable(new FExtender);

	TArray<AAdvKitZone*> SelectedZones;
	for (auto Actor : SelectedActors)
	{
		auto Zone = Cast<AAdvKitZone>(Actor);
		if (!IsValid(Zone))
		{
			continue;
		}

		SelectedZones.Add(Zone);
	}

	if (SelectedZones.Num() == 0)
	{
		return Extender.ToSharedRef();
	}

	Extender->AddMenuExtension("ActorControl", EExtensionHook::Before, CommandList,
		FMenuExtensionDelegate::CreateStatic(&AddAdvKitContextMenuCommands, SelectedZones));

	return Extender.ToSharedRef();
}

#undef LOCTEXT_NAMESPACE

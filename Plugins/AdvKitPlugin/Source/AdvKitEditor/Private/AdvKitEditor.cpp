// Copyright 2015 Pascal Krabbe

#include "AdvKitEditor.h"

#include "LevelEditor.h"

#include "AdvKitTraceComponentVisualizer.h"
#include "Player/AdvKitTraceUtilityComponent.h"

#include "AdvKitTransitionComponentPointVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentPoint.h"

#include "AdvKitTransitionComponentLineVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentLine.h"

#include "AdvKitTransitionComponentSplineVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentSpline.h"

#include "AdvKitTransitionComponentRectVisualizer.h"
#include "Environment/Transitions/AdvKitTransitionComponentRect.h"

#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"

#define LOCTEXT_NAMESPACE "AdvKitEditor"

TSharedRef<FExtender> ExtendLevelViewportContextMenuForAdvKit(const TSharedRef<FUICommandList> CommandList, TArray<AActor*> SelectedActors);

FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors LevelViewportContextMenuAdvKitExtender;

void FAdvKitEditorModule::StartupModule()
{
	CommandList = MakeShareable(new FUICommandList);
	RegisterVisualizer<FAdvKitTraceComponentVisualizer, UAdvKitTraceUtilityComponent>();
	RegisterVisualizer<FAdvKitTransitionComponentPointVisualizer, UAdvKitTransitionComponentPoint>();
	RegisterVisualizer<FAdvKitTransitionComponentLineVisualizer, UAdvKitTransitionComponentLine>();
	RegisterVisualizer<FAdvKitTransitionComponentSplineVisualizer, UAdvKitTransitionComponentSpline>();
	RegisterVisualizer<FAdvKitTransitionComponentRectVisualizer, UAdvKitTransitionComponentRect>();

	if (GIsEditor)
	{
		// Extend the level viewport context menu to handle zones
		LevelViewportContextMenuAdvKitExtender = FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors::CreateStatic(&ExtendLevelViewportContextMenuForAdvKit);
		FLevelEditorModule& LevelEditorModule = FModuleManager::Get().LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		auto& MenuExtenders = LevelEditorModule.GetAllLevelViewportContextMenuExtenders();
		MenuExtenders.Add(LevelViewportContextMenuAdvKitExtender);
		LevelViewportContextMenuAdvKitZoneExtenderDelegateHandle = MenuExtenders.Last().GetHandle();
	}


}


void FAdvKitEditorModule::ShutdownModule()
{
	if (GUnrealEd != NULL)
	{
		GUnrealEd->UnregisterComponentVisualizer(UAdvKitTraceUtilityComponent::StaticClass()->GetFName());
		GUnrealEd->UnregisterComponentVisualizer(UAdvKitTransitionComponentPoint::StaticClass()->GetFName());
		GUnrealEd->UnregisterComponentVisualizer(UAdvKitTransitionComponentLine::StaticClass()->GetFName());
		GUnrealEd->UnregisterComponentVisualizer(UAdvKitTransitionComponentSpline::StaticClass()->GetFName());
		GUnrealEd->UnregisterComponentVisualizer(UAdvKitTransitionComponentRect::StaticClass()->GetFName());
	}

	// Remove level viewport context menu extenders
	if (FModuleManager::Get().IsModuleLoaded("LevelEditor"))
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		LevelEditorModule.GetAllLevelViewportContextMenuExtenders().RemoveAll([&](const FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors& Delegate) {
			return Delegate.GetHandle() == LevelViewportContextMenuAdvKitZoneExtenderDelegateHandle;
		});
	}
}


template<typename TVis, typename TComp> 
void FAdvKitEditorModule::RegisterVisualizer()
{
	if (GUnrealEd != NULL)
	{
		TSharedPtr<FComponentVisualizer> Visualizer = MakeShareable(new TVis());
		if (Visualizer.IsValid())
		{
			GUnrealEd->RegisterComponentVisualizer(TComp::StaticClass()->GetFName(), Visualizer);
			Visualizer->OnRegister();
		}
	}
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAdvKitEditorModule, AdvKitEditor)

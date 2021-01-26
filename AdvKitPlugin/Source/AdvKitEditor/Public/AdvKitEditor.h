// Copyright 2015 Pascal Krabbe

#pragma once

#include "Modules/ModuleManager.h"

class FUICommandList;
class FDelegateHandle;

/**
 * @brief Editor module to register custom visualizer for UAdvKitTraceUtilityComponent.
 */
class FAdvKitEditorModule : public IModuleInterface
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	template<typename TVis, typename TComp> void RegisterVisualizer();

	TSharedPtr<FUICommandList> CommandList;

	/** Handle to a registered LevelViewportContextMenuAdvKitZoneExtender delegate */
	FDelegateHandle LevelViewportContextMenuAdvKitZoneExtenderDelegateHandle;
};
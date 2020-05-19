// Copyright Sean Neville, 2020

#include "VTMPEditor.h"
#include "VTMPEdMode.h"

#define LOCTEXT_NAMESPACE "FVTMPEditorModule"

void FVTMPEditorModule::StartupModule()
{
	FSlateIcon icon = FSlateIcon();
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FVTMPEdMode>(FVTMPEdMode::EM_VTMPEdModeId, LOCTEXT("VTMPEdModeName", "VTMPEdMode"), icon, true);

}
void FVTMPEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,	
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FVTMPEdMode::EM_VTMPEdModeId);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, VTMPEditor, "VTMPEditor");
// Copyright Sean Neville, 2020

#include "VTMP.h"


#define LOCTEXT_NAMESPACE "FVTMPModule"

void FVTMPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FVTMPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE


IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, VTMP, "VTMP");
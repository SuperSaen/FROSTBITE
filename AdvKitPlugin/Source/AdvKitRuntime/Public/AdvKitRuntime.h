#pragma once

#include "Modules/ModuleManager.h"

//void LogRole(ENetRole Role);
//void LogMovementMode(EAdvKitMovementMode Mode);
//
//FString GetRoleString(ENetRole Role);
//FString GetAdvMovementModeString(EAdvKitMovementMode Mode);

/** @brief Module to register runtime classes of the adventure kit. */
class FAdvKitRuntimeModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
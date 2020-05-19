// Copyright Sean Neville, 2020

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FVTMPModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
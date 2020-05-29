// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVKITRUNTIME_AdvKitTypes_generated_h
#error "AdvKitTypes.generated.h already included, missing '#pragma once' in AdvKitTypes.h"
#endif
#define ADVKITRUNTIME_AdvKitTypes_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_AdvKitTypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingTransition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FPendingTransition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_AdvKitTypes_h


#define FOREACH_ENUM_EADVKITMOVEMENTMODE(op) \
	op(EAdvKitMovementMode::None) \
	op(EAdvKitMovementMode::Walking) \
	op(EAdvKitMovementMode::NavWalking) \
	op(EAdvKitMovementMode::Falling) \
	op(EAdvKitMovementMode::Swimming) \
	op(EAdvKitMovementMode::Flying) \
	op(EAdvKitMovementMode::ClimbingWall) \
	op(EAdvKitMovementMode::ClimbingCeiling) \
	op(EAdvKitMovementMode::ClimbingLedge) \
	op(EAdvKitMovementMode::ClimbingLadder) \
	op(EAdvKitMovementMode::WalkingTightspace) \
	op(EAdvKitMovementMode::WalkingBalance) \
	op(EAdvKitMovementMode::CustomZone) \
	op(EAdvKitMovementMode::ActionDriven) \
	op(EAdvKitMovementMode::Custom) 

enum class EAdvKitMovementMode : uint8;
template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

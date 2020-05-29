// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FVector;
struct FRotator;
#ifdef ADVKITRUNTIME_AdvKitTraceUtilityComponent_generated_h
#error "AdvKitTraceUtilityComponent.generated.h already included, missing '#pragma once' in AdvKitTraceUtilityComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitTraceUtilityComponent_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjectsBlueprint); \
	DECLARE_FUNCTION(execBoxTraceMultiForObjectsBlueprint); \
	DECLARE_FUNCTION(execBoxTraceSingleForObjectsBlueprint); \
	DECLARE_FUNCTION(execSphereTraceMultiForObjectsBlueprint); \
	DECLARE_FUNCTION(execSphereTraceSingleForObjectBlueprints); \
	DECLARE_FUNCTION(execLineTraceMultiForObjectsBlueprint); \
	DECLARE_FUNCTION(execLineTraceSingleForObjectBlueprints); \
	DECLARE_FUNCTION(execCapsuleTraceMultiBlueprint); \
	DECLARE_FUNCTION(execCapsuleTraceSingleBlueprint); \
	DECLARE_FUNCTION(execBoxTraceMultiBlueprint); \
	DECLARE_FUNCTION(execBoxTraceSingleBlueprint); \
	DECLARE_FUNCTION(execSphereTraceMultiBlueprint); \
	DECLARE_FUNCTION(execSphereTraceSingleBlueprint); \
	DECLARE_FUNCTION(execLineTraceMultiBlueprint); \
	DECLARE_FUNCTION(execLineTraceSingleBlueprint); \
	DECLARE_FUNCTION(execDrawDebug); \
	DECLARE_FUNCTION(execGetEnd); \
	DECLARE_FUNCTION(execGetStart);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjectsBlueprint); \
	DECLARE_FUNCTION(execBoxTraceMultiForObjectsBlueprint); \
	DECLARE_FUNCTION(execBoxTraceSingleForObjectsBlueprint); \
	DECLARE_FUNCTION(execSphereTraceMultiForObjectsBlueprint); \
	DECLARE_FUNCTION(execSphereTraceSingleForObjectBlueprints); \
	DECLARE_FUNCTION(execLineTraceMultiForObjectsBlueprint); \
	DECLARE_FUNCTION(execLineTraceSingleForObjectBlueprints); \
	DECLARE_FUNCTION(execCapsuleTraceMultiBlueprint); \
	DECLARE_FUNCTION(execCapsuleTraceSingleBlueprint); \
	DECLARE_FUNCTION(execBoxTraceMultiBlueprint); \
	DECLARE_FUNCTION(execBoxTraceSingleBlueprint); \
	DECLARE_FUNCTION(execSphereTraceMultiBlueprint); \
	DECLARE_FUNCTION(execSphereTraceSingleBlueprint); \
	DECLARE_FUNCTION(execLineTraceMultiBlueprint); \
	DECLARE_FUNCTION(execLineTraceSingleBlueprint); \
	DECLARE_FUNCTION(execDrawDebug); \
	DECLARE_FUNCTION(execGetEnd); \
	DECLARE_FUNCTION(execGetStart);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitTraceUtilityComponent(); \
	friend struct Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTraceUtilityComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTraceUtilityComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitTraceUtilityComponent(); \
	friend struct Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTraceUtilityComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTraceUtilityComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitTraceUtilityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTraceUtilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTraceUtilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTraceUtilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTraceUtilityComponent(UAdvKitTraceUtilityComponent&&); \
	NO_API UAdvKitTraceUtilityComponent(const UAdvKitTraceUtilityComponent&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTraceUtilityComponent(UAdvKitTraceUtilityComponent&&); \
	NO_API UAdvKitTraceUtilityComponent(const UAdvKitTraceUtilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTraceUtilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTraceUtilityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTraceUtilityComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TraceLength() { return STRUCT_OFFSET(UAdvKitTraceUtilityComponent, TraceLength); } \
	FORCEINLINE static uint32 __PPO__DebugLineColor() { return STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineColor); } \
	FORCEINLINE static uint32 __PPO__DebugLineThickness() { return STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineThickness); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_17_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitTraceUtilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

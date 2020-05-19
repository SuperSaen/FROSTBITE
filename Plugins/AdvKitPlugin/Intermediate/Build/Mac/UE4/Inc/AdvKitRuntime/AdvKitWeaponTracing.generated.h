// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef ADVKITRUNTIME_AdvKitWeaponTracing_generated_h
#error "AdvKitWeaponTracing.generated.h already included, missing '#pragma once' in AdvKitWeaponTracing.h"
#endif
#define ADVKITRUNTIME_AdvKitWeaponTracing_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_RPC_WRAPPERS \
	virtual void ApplyDamageToHit_Implementation(FHitResult Hit); \
	virtual void OnTraceHit_Implementation(FHitResult Hit); \
 \
	DECLARE_FUNCTION(execApplyDamageToHit) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyDamageToHit_Implementation(Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTraceHit) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTraceHit_Implementation(Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopTracing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopTracing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTracing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTracing(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDamageToHit) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyDamageToHit_Implementation(Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTraceHit) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTraceHit_Implementation(Z_Param_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopTracing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopTracing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTracing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTracing(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_EVENT_PARMS \
	struct AdvKitWeaponTracing_eventApplyDamageToHit_Parms \
	{ \
		FHitResult Hit; \
	}; \
	struct AdvKitWeaponTracing_eventOnTraceHit_Parms \
	{ \
		FHitResult Hit; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitWeaponTracing(); \
	friend struct Z_Construct_UClass_AAdvKitWeaponTracing_Statics; \
public: \
	DECLARE_CLASS(AAdvKitWeaponTracing, AAdvKitWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitWeaponTracing)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitWeaponTracing(); \
	friend struct Z_Construct_UClass_AAdvKitWeaponTracing_Statics; \
public: \
	DECLARE_CLASS(AAdvKitWeaponTracing, AAdvKitWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitWeaponTracing)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitWeaponTracing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitWeaponTracing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitWeaponTracing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitWeaponTracing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitWeaponTracing(AAdvKitWeaponTracing&&); \
	NO_API AAdvKitWeaponTracing(const AAdvKitWeaponTracing&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitWeaponTracing(AAdvKitWeaponTracing&&); \
	NO_API AAdvKitWeaponTracing(const AAdvKitWeaponTracing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitWeaponTracing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitWeaponTracing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitWeaponTracing)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TraceComponent() { return STRUCT_OFFSET(AAdvKitWeaponTracing, TraceComponent); } \
	FORCEINLINE static uint32 __PPO__bIsTracing() { return STRUCT_OFFSET(AAdvKitWeaponTracing, bIsTracing); } \
	FORCEINLINE static uint32 __PPO__UnitsPerTrace() { return STRUCT_OFFSET(AAdvKitWeaponTracing, UnitsPerTrace); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_15_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeaponTracing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

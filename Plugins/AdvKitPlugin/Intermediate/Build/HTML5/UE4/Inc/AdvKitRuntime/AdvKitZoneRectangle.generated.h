// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef ADVKITRUNTIME_AdvKitZoneRectangle_generated_h
#error "AdvKitZoneRectangle.generated.h already included, missing '#pragma once' in AdvKitZoneRectangle.h"
#endif
#define ADVKITRUNTIME_AdvKitZoneRectangle_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProjectedHalfExtent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetProjectedHalfExtent(Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectedHalfExtent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetProjectedHalfExtent(Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitZoneRectangle(); \
	friend struct Z_Construct_UClass_AAdvKitZoneRectangle_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZoneRectangle, AAdvKitZone, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZoneRectangle)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitZoneRectangle(); \
	friend struct Z_Construct_UClass_AAdvKitZoneRectangle_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZoneRectangle, AAdvKitZone, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZoneRectangle)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitZoneRectangle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZoneRectangle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZoneRectangle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZoneRectangle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZoneRectangle(AAdvKitZoneRectangle&&); \
	NO_API AAdvKitZoneRectangle(const AAdvKitZoneRectangle&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZoneRectangle(AAdvKitZoneRectangle&&); \
	NO_API AAdvKitZoneRectangle(const AAdvKitZoneRectangle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZoneRectangle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZoneRectangle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZoneRectangle)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_12_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneRectangle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

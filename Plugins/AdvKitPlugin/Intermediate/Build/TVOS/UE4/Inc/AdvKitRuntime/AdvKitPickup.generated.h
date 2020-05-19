// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvKitCharacter;
class AAdvKitInventoryItem;
#ifdef ADVKITRUNTIME_AdvKitPickup_generated_h
#error "AdvKitPickup.generated.h already included, missing '#pragma once' in AdvKitPickup.h"
#endif
#define ADVKITRUNTIME_AdvKitPickup_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_RPC_WRAPPERS \
	virtual void PickedUpBy_Implementation(AAdvKitCharacter* Character, AAdvKitInventoryItem* WithItem); \
	virtual bool CanBePickedUpBy_Implementation(AAdvKitCharacter* Character); \
	virtual void Respawn_Implementation(); \
 \
	DECLARE_FUNCTION(execPickedUpBy) \
	{ \
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character); \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickedUpBy_Implementation(Z_Param_Character,Z_Param_WithItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBePickedUpBy) \
	{ \
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanBePickedUpBy_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Respawn_Implementation(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickedUpBy) \
	{ \
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character); \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickedUpBy_Implementation(Z_Param_Character,Z_Param_WithItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBePickedUpBy) \
	{ \
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanBePickedUpBy_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Respawn_Implementation(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_EVENT_PARMS \
	struct AdvKitPickup_eventCanBePickedUpBy_Parms \
	{ \
		AAdvKitCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitPickup_eventCanBePickedUpBy_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitPickup_eventPickedUpBy_Parms \
	{ \
		AAdvKitCharacter* Character; \
		AAdvKitInventoryItem* WithItem; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitPickup(); \
	friend struct Z_Construct_UClass_AAdvKitPickup_Statics; \
public: \
	DECLARE_CLASS(AAdvKitPickup, AAdvKitUsable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitPickup)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitPickup(); \
	friend struct Z_Construct_UClass_AAdvKitPickup_Statics; \
public: \
	DECLARE_CLASS(AAdvKitPickup, AAdvKitUsable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitPickup)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitPickup(AAdvKitPickup&&); \
	NO_API AAdvKitPickup(const AAdvKitPickup&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitPickup(AAdvKitPickup&&); \
	NO_API AAdvKitPickup(const AAdvKitPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitPickup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitPickup)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDestroyOnPickup() { return STRUCT_OFFSET(AAdvKitPickup, bDestroyOnPickup); } \
	FORCEINLINE static uint32 __PPO__bRespawnAfterPickup() { return STRUCT_OFFSET(AAdvKitPickup, bRespawnAfterPickup); } \
	FORCEINLINE static uint32 __PPO__RespawnTime() { return STRUCT_OFFSET(AAdvKitPickup, RespawnTime); } \
	FORCEINLINE static uint32 __PPO__bActive() { return STRUCT_OFFSET(AAdvKitPickup, bActive); } \
	FORCEINLINE static uint32 __PPO__bCanBePickedUpWithUse() { return STRUCT_OFFSET(AAdvKitPickup, bCanBePickedUpWithUse); } \
	FORCEINLINE static uint32 __PPO__bCanBePickedUpByOverlap() { return STRUCT_OFFSET(AAdvKitPickup, bCanBePickedUpByOverlap); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_11_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

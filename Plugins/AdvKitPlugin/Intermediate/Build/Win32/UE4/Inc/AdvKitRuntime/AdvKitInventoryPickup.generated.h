// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVKITRUNTIME_AdvKitInventoryPickup_generated_h
#error "AdvKitInventoryPickup.generated.h already included, missing '#pragma once' in AdvKitInventoryPickup.h"
#endif
#define ADVKITRUNTIME_AdvKitInventoryPickup_generated_h

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_SPARSE_DATA
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_RPC_WRAPPERS
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryPickup(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryPickup_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryPickup, AAdvKitPickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryPickup)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryPickup(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryPickup_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryPickup, AAdvKitPickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryPickup)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitInventoryPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryPickup(AAdvKitInventoryPickup&&); \
	NO_API AAdvKitInventoryPickup(const AAdvKitInventoryPickup&); \
public:


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryPickup(AAdvKitInventoryPickup&&); \
	NO_API AAdvKitInventoryPickup(const AAdvKitInventoryPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryPickup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryPickup)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnedInventoryClass() { return STRUCT_OFFSET(AAdvKitInventoryPickup, SpawnedInventoryClass); }


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_12_PROLOG
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_RPC_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_INCLASS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitInventoryPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FHitResult;
#ifdef ADVKITRUNTIME_AdvKitProjectile_generated_h
#error "AdvKitProjectile.generated.h already included, missing '#pragma once' in AdvKitProjectile.h"
#endif
#define ADVKITRUNTIME_AdvKitProjectile_generated_h

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_SPARSE_DATA
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_RPC_WRAPPERS \
	virtual void OnImpact_Implementation(FHitResult const& Impact); \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(Z_Param_Out_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnImpact) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Impact); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnImpact_Implementation(Z_Param_Out_Impact); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(Z_Param_Out_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnImpact) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Impact); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnImpact_Implementation(Z_Param_Out_Impact); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_EVENT_PARMS \
	struct AdvKitProjectile_eventOnImpact_Parms \
	{ \
		FHitResult Impact; \
	};


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_CALLBACK_WRAPPERS
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitProjectile(); \
	friend struct Z_Construct_UClass_AAdvKitProjectile_Statics; \
public: \
	DECLARE_CLASS(AAdvKitProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitProjectile)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitProjectile(); \
	friend struct Z_Construct_UClass_AAdvKitProjectile_Statics; \
public: \
	DECLARE_CLASS(AAdvKitProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitProjectile)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitProjectile(AAdvKitProjectile&&); \
	NO_API AAdvKitProjectile(const AAdvKitProjectile&); \
public:


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitProjectile(AAdvKitProjectile&&); \
	NO_API AAdvKitProjectile(const AAdvKitProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitProjectile)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDestroyOnStop() { return STRUCT_OFFSET(AAdvKitProjectile, bDestroyOnStop); } \
	FORCEINLINE static uint32 __PPO__DefaultRootComponent() { return STRUCT_OFFSET(AAdvKitProjectile, DefaultRootComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(AAdvKitProjectile, MovementComponent); }


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_12_PROLOG \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_EVENT_PARMS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_RPC_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_INCLASS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

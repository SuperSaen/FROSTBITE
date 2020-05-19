// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
#ifdef ADVKITRUNTIME_AdvKitFootstepComponent_generated_h
#error "AdvKitFootstepComponent.generated.h already included, missing '#pragma once' in AdvKitFootstepComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitFootstepComponent_generated_h

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootStepSound_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FFootStepSound>();

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_SPARSE_DATA
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_RPC_WRAPPERS \
	virtual UAudioComponent* PlayFootstepAttached_Implementation(int32 Foot); \
	virtual void PlayFootstep_Implementation(int32 Foot); \
 \
	DECLARE_FUNCTION(execPlayFootstepAttached) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Foot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayFootstepAttached_Implementation(Z_Param_Foot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFootstep) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Foot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFootstep_Implementation(Z_Param_Foot); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayFootstepAttached) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Foot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayFootstepAttached_Implementation(Z_Param_Foot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFootstep) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Foot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFootstep_Implementation(Z_Param_Foot); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_EVENT_PARMS \
	struct AdvKitFootstepComponent_eventPlayFootstep_Parms \
	{ \
		int32 Foot; \
	}; \
	struct AdvKitFootstepComponent_eventPlayFootstepAttached_Parms \
	{ \
		int32 Foot; \
		UAudioComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitFootstepComponent_eventPlayFootstepAttached_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_CALLBACK_WRAPPERS
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitFootstepComponent(); \
	friend struct Z_Construct_UClass_UAdvKitFootstepComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitFootstepComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitFootstepComponent)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitFootstepComponent(); \
	friend struct Z_Construct_UClass_UAdvKitFootstepComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitFootstepComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitFootstepComponent)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitFootstepComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitFootstepComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitFootstepComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitFootstepComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitFootstepComponent(UAdvKitFootstepComponent&&); \
	NO_API UAdvKitFootstepComponent(const UAdvKitFootstepComponent&); \
public:


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitFootstepComponent(UAdvKitFootstepComponent&&); \
	NO_API UAdvKitFootstepComponent(const UAdvKitFootstepComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitFootstepComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitFootstepComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitFootstepComponent)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FootStepSounds() { return STRUCT_OFFSET(UAdvKitFootstepComponent, FootStepSounds); } \
	FORCEINLINE static uint32 __PPO__FootSocketNames() { return STRUCT_OFFSET(UAdvKitFootstepComponent, FootSocketNames); } \
	FORCEINLINE static uint32 __PPO__FootStepTraceDistance() { return STRUCT_OFFSET(UAdvKitFootstepComponent, FootStepTraceDistance); }


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_33_PROLOG \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_EVENT_PARMS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_RPC_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_INCLASS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitFootstepComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitFootstepComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

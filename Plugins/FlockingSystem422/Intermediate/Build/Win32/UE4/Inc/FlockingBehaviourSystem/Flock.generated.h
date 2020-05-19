// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABoid;
#ifdef FLOCKINGBEHAVIOURSYSTEM_Flock_generated_h
#error "Flock.generated.h already included, missing '#pragma once' in Flock.h"
#endif
#define FLOCKINGBEHAVIOURSYSTEM_Flock_generated_h

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlockSettings_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FFlockSettings>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnSettings_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FSpawnSettings>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoidSettings_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FBoidSettings>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_SPARSE_DATA
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_RPC_WRAPPERS \
	virtual void AddBoid_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyFlockSettings) \
	{ \
		P_GET_OBJECT(ABoid,Z_Param_Boid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyFlockSettings(Z_Param_Boid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyBoidSettings) \
	{ \
		P_GET_OBJECT(ABoid,Z_Param_Boid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyBoidSettings(Z_Param_Boid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBoid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBoid_Implementation(); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyFlockSettings) \
	{ \
		P_GET_OBJECT(ABoid,Z_Param_Boid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyFlockSettings(Z_Param_Boid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyBoidSettings) \
	{ \
		P_GET_OBJECT(ABoid,Z_Param_Boid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyBoidSettings(Z_Param_Boid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBoid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBoid_Implementation(); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_EVENT_PARMS
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_CALLBACK_WRAPPERS
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlock(); \
	friend struct Z_Construct_UClass_AFlock_Statics; \
public: \
	DECLARE_CLASS(AFlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlockingBehaviourSystem"), NO_API) \
	DECLARE_SERIALIZER(AFlock)


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_INCLASS \
private: \
	static void StaticRegisterNativesAFlock(); \
	friend struct Z_Construct_UClass_AFlock_Statics; \
public: \
	DECLARE_CLASS(AFlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlockingBehaviourSystem"), NO_API) \
	DECLARE_SERIALIZER(AFlock)


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlock(AFlock&&); \
	NO_API AFlock(const AFlock&); \
public:


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlock(AFlock&&); \
	NO_API AFlock(const AFlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlock)


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(AFlock, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__BillboardComponent() { return STRUCT_OFFSET(AFlock, BillboardComponent); } \
	FORCEINLINE static uint32 __PPO__BoidSettings() { return STRUCT_OFFSET(AFlock, BoidSettings); } \
	FORCEINLINE static uint32 __PPO__SpawnSettings() { return STRUCT_OFFSET(AFlock, SpawnSettings); } \
	FORCEINLINE static uint32 __PPO__FlockSettings() { return STRUCT_OFFSET(AFlock, FlockSettings); }


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_102_PROLOG \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_EVENT_PARMS


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_SPARSE_DATA \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_RPC_WRAPPERS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_INCLASS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_SPARSE_DATA \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<class AFlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Flock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKINGBEHAVIOURSYSTEM_Boid_generated_h
#error "Boid.generated.h already included, missing '#pragma once' in Boid.h"
#endif
#define FLOCKINGBEHAVIOURSYSTEM_Boid_generated_h

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviors_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FBehaviors>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvoidance_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FAvoidance>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSeparation_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FSeparation>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCohesion_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FCohesion>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlignment_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FAlignment>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoalSeeking_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FGoalSeeking>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics; \
	FLOCKINGBEHAVIOURSYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<struct FDebugVariables_Boid>();

#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_SPARSE_DATA
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_RPC_WRAPPERS
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_RPC_WRAPPERS_NO_PURE_DECLS
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend struct Z_Construct_UClass_ABoid_Statics; \
public: \
	DECLARE_CLASS(ABoid, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlockingBehaviourSystem"), NO_API) \
	DECLARE_SERIALIZER(ABoid)


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_INCLASS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend struct Z_Construct_UClass_ABoid_Statics; \
public: \
	DECLARE_CLASS(ABoid, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlockingBehaviourSystem"), NO_API) \
	DECLARE_SERIALIZER(ABoid)


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public:


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoid)


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(ABoid, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__OwnedBy() { return STRUCT_OFFSET(ABoid, OwnedBy); }


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_101_PROLOG
#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_SPARSE_DATA \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_RPC_WRAPPERS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_INCLASS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_SPARSE_DATA \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<class ABoid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_FlockingSystem422_Source_FlockingBehaviourSystem_Public_Boid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

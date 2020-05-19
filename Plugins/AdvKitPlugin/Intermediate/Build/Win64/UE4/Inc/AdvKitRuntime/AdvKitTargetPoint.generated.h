// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVKITRUNTIME_AdvKitTargetPoint_generated_h
#error "AdvKitTargetPoint.generated.h already included, missing '#pragma once' in AdvKitTargetPoint.h"
#endif
#define ADVKITRUNTIME_AdvKitTargetPoint_generated_h

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetTargetedActor(); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetTargetedActor(); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitTargetPoint(); \
	friend struct Z_Construct_UClass_AAdvKitTargetPoint_Statics; \
public: \
	DECLARE_CLASS(AAdvKitTargetPoint, ATargetPoint, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitTargetPoint)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitTargetPoint(); \
	friend struct Z_Construct_UClass_AAdvKitTargetPoint_Statics; \
public: \
	DECLARE_CLASS(AAdvKitTargetPoint, ATargetPoint, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitTargetPoint)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitTargetPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitTargetPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitTargetPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitTargetPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitTargetPoint(AAdvKitTargetPoint&&); \
	NO_API AAdvKitTargetPoint(const AAdvKitTargetPoint&); \
public:


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitTargetPoint(AAdvKitTargetPoint&&); \
	NO_API AAdvKitTargetPoint(const AAdvKitTargetPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitTargetPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitTargetPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitTargetPoint)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_PRIVATE_PROPERTY_OFFSET
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_11_PROLOG
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_RPC_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_INCLASS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_INCLASS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitTargetPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTargetPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

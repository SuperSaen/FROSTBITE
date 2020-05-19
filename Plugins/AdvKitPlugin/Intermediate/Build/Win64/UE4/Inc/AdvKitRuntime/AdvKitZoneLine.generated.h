// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef ADVKITRUNTIME_AdvKitZoneLine_generated_h
#error "AdvKitZoneLine.generated.h already included, missing '#pragma once' in AdvKitZoneLine.h"
#endif
#define ADVKITRUNTIME_AdvKitZoneLine_generated_h

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProjectedHalfExtent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalDirection); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetProjectedHalfExtent(Z_Param_Out_LocalDirection,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectedHalfExtent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalDirection); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetProjectedHalfExtent(Z_Param_Out_LocalDirection,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitZoneLine(); \
	friend struct Z_Construct_UClass_AAdvKitZoneLine_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZoneLine, AAdvKitZone, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZoneLine)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitZoneLine(); \
	friend struct Z_Construct_UClass_AAdvKitZoneLine_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZoneLine, AAdvKitZone, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZoneLine)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitZoneLine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZoneLine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZoneLine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZoneLine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZoneLine(AAdvKitZoneLine&&); \
	NO_API AAdvKitZoneLine(const AAdvKitZoneLine&); \
public:


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZoneLine(AAdvKitZoneLine&&); \
	NO_API AAdvKitZoneLine(const AAdvKitZoneLine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZoneLine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZoneLine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZoneLine)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_PRIVATE_PROPERTY_OFFSET
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_13_PROLOG
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_RPC_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_INCLASS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_INCLASS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitZoneLine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneLine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

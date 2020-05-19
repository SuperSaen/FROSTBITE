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
#ifdef ADVKITRUNTIME_AdvKitZoneSpline_generated_h
#error "AdvKitZoneSpline.generated.h already included, missing '#pragma once' in AdvKitZoneSpline.h"
#endif
#define ADVKITRUNTIME_AdvKitZoneSpline_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_RPC_WRAPPERS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitZoneSpline(); \
	friend struct Z_Construct_UClass_AAdvKitZoneSpline_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZoneSpline, AAdvKitZone, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZoneSpline)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitZoneSpline(); \
	friend struct Z_Construct_UClass_AAdvKitZoneSpline_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZoneSpline, AAdvKitZone, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZoneSpline)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitZoneSpline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZoneSpline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZoneSpline); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZoneSpline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZoneSpline(AAdvKitZoneSpline&&); \
	NO_API AAdvKitZoneSpline(const AAdvKitZoneSpline&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZoneSpline(AAdvKitZoneSpline&&); \
	NO_API AAdvKitZoneSpline(const AAdvKitZoneSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZoneSpline); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZoneSpline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZoneSpline)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SplineComponent() { return STRUCT_OFFSET(AAdvKitZoneSpline, SplineComponent); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_14_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitZoneSpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_Zones_AdvKitZoneSpline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
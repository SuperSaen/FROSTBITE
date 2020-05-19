// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvKitCharacter;
struct FVector;
#ifdef ADVKITRUNTIME_AdvKitTransitionComponent_generated_h
#error "AdvKitTransitionComponent.generated.h already included, missing '#pragma once' in AdvKitTransitionComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitTransitionComponent_generated_h

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDynamicTransitionValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDynamicTransitionValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransition) \
	{ \
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransition(Z_Param_Character,Z_Param_Out_AtLocation,Z_Param_Out_InDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestTargetPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestTargetPosition(Z_Param_Out_ToWorldPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestSourcePosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestSourcePosition(Z_Param_Out_ToWorldPosition); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDynamicTransitionValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDynamicTransitionValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransition) \
	{ \
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransition(Z_Param_Character,Z_Param_Out_AtLocation,Z_Param_Out_InDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestTargetPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestTargetPosition(Z_Param_Out_ToWorldPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestSourcePosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestSourcePosition(Z_Param_Out_ToWorldPosition); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitTransitionComponent(); \
	friend struct Z_Construct_UClass_UAdvKitTransitionComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTransitionComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTransitionComponent)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitTransitionComponent(); \
	friend struct Z_Construct_UClass_UAdvKitTransitionComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTransitionComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTransitionComponent)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitTransitionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTransitionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTransitionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTransitionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTransitionComponent(UAdvKitTransitionComponent&&); \
	NO_API UAdvKitTransitionComponent(const UAdvKitTransitionComponent&); \
public:


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTransitionComponent(UAdvKitTransitionComponent&&); \
	NO_API UAdvKitTransitionComponent(const UAdvKitTransitionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTransitionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTransitionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTransitionComponent)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_15_PROLOG
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_RPC_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_INCLASS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_INCLASS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitTransitionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
#ifdef ADVKITRUNTIME_AdvKitGravityCharacterMovementComponent_generated_h
#error "AdvKitGravityCharacterMovementComponent.generated.h already included, missing '#pragma once' in AdvKitGravityCharacterMovementComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitGravityCharacterMovementComponent_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOrientationChanged) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OldOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOrientationChanged(Z_Param_Out_OldOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityDirection); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityOrigin); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityVector(Z_Param_Out_GravityDirection,Z_Param_Out_GravityOrigin,Z_Param_bForce); \
		P_NATIVE_END; \
	}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOrientationChanged) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OldOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOrientationChanged(Z_Param_Out_OldOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityDirection); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityOrigin); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityVector(Z_Param_Out_GravityDirection,Z_Param_Out_GravityOrigin,Z_Param_bForce); \
		P_NATIVE_END; \
	}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitGravityCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitGravityCharacterMovementComponent, UAdvKitCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitGravityCharacterMovementComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitGravityCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitGravityCharacterMovementComponent, UAdvKitCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitGravityCharacterMovementComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitGravityCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitGravityCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitGravityCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitGravityCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitGravityCharacterMovementComponent(UAdvKitGravityCharacterMovementComponent&&); \
	NO_API UAdvKitGravityCharacterMovementComponent(const UAdvKitGravityCharacterMovementComponent&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitGravityCharacterMovementComponent(UAdvKitGravityCharacterMovementComponent&&); \
	NO_API UAdvKitGravityCharacterMovementComponent(const UAdvKitGravityCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitGravityCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitGravityCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitGravityCharacterMovementComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_14_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitGravityCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

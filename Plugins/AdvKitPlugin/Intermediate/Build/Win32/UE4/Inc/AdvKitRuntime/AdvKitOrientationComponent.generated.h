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
struct FRotator;
#ifdef ADVKITRUNTIME_AdvKitOrientationComponent_generated_h
#error "AdvKitOrientationComponent.generated.h already included, missing '#pragma once' in AdvKitOrientationComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitOrientationComponent_generated_h

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_8_DELEGATE \
struct _Script_AdvKitRuntime_eventOrientationChanged_Parms \
{ \
	FTransform OldOrientation; \
}; \
static inline void FOrientationChanged_DelegateWrapper(const FMulticastScriptDelegate& OrientationChanged, FTransform const& OldOrientation) \
{ \
	_Script_AdvKitRuntime_eventOrientationChanged_Parms Parms; \
	Parms.OldOrientation=OldOrientation; \
	OrientationChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_SPARSE_DATA
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_UpNormal); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(Z_Param_Origin,Z_Param_UpNormal,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformRotationL2W) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformRotationL2W(Z_Param_Out_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformRotationW2L) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformRotationW2L(Z_Param_Out_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformPositionL2W) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformPositionL2W(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformPositionW2L) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformPositionW2L(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformDirectionL2W) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformDirectionL2W(Z_Param_Out_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformDirectionW2L) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformDirectionW2L(Z_Param_Out_Direction); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT(FVector,Z_Param_UpNormal); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(Z_Param_Origin,Z_Param_UpNormal,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformRotationL2W) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformRotationL2W(Z_Param_Out_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformRotationW2L) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformRotationW2L(Z_Param_Out_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformPositionL2W) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformPositionL2W(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformPositionW2L) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformPositionW2L(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformDirectionL2W) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformDirectionL2W(Z_Param_Out_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformDirectionW2L) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformDirectionW2L(Z_Param_Out_Direction); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitOrientationComponent(); \
	friend struct Z_Construct_UClass_UAdvKitOrientationComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitOrientationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitOrientationComponent)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitOrientationComponent(); \
	friend struct Z_Construct_UClass_UAdvKitOrientationComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitOrientationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitOrientationComponent)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitOrientationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitOrientationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitOrientationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitOrientationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitOrientationComponent(UAdvKitOrientationComponent&&); \
	NO_API UAdvKitOrientationComponent(const UAdvKitOrientationComponent&); \
public:


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitOrientationComponent(UAdvKitOrientationComponent&&); \
	NO_API UAdvKitOrientationComponent(const UAdvKitOrientationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitOrientationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitOrientationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitOrientationComponent)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocationLerpSpeed() { return STRUCT_OFFSET(UAdvKitOrientationComponent, LocationLerpSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationLerpSpeed() { return STRUCT_OFFSET(UAdvKitOrientationComponent, RotationLerpSpeed); }


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_17_PROLOG
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitOrientationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

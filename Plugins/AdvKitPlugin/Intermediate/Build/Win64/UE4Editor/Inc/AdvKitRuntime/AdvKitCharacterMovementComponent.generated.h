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
class AAdvKitZone;
enum class EAdvKitMovementMode : uint8;
#ifdef ADVKITRUNTIME_AdvKitCharacterMovementComponent_generated_h
#error "AdvKitCharacterMovementComponent.generated.h already included, missing '#pragma once' in AdvKitCharacterMovementComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitCharacterMovementComponent_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FAdvKitMovementProperties>();

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAccumulateRootMotion) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MovementDelta); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AccumulateRootMotion(Z_Param_MovementDelta,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysMoveInZone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GlobalAcceleration); \
		P_GET_STRUCT(FVector,Z_Param_WorldOffset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_UBOOL(Z_Param_bAutoTransition); \
		P_GET_UBOOL(Z_Param_ConstrainAcceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PhysMoveInZone(Z_Param_GlobalAcceleration,Z_Param_WorldOffset,Z_Param_DeltaSeconds,Z_Param_Out_HalfExtent,Z_Param_bAutoTransition,Z_Param_ConstrainAcceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLocationInZone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GlobalAcceleration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_UBOOL(Z_Param_bAutoTransition); \
		P_GET_UBOOL(Z_Param_ConstrainAcceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveLocationInZone(Z_Param_GlobalAcceleration,Z_Param_DeltaSeconds,Z_Param_Out_HalfExtent,Z_Param_bAutoTransition,Z_Param_ConstrainAcceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitZone**)Z_Param__Result=P_THIS->GetZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTargetBalance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTargetBalance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdvCustomMovementMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetAdvCustomMovementMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdvMovementMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAdvKitMovementMode*)Z_Param__Result=P_THIS->GetAdvMovementMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdvMovementMode) \
	{ \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAdvMovementMode(EAdvKitMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
		P_NATIVE_END; \
	}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAccumulateRootMotion) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MovementDelta); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AccumulateRootMotion(Z_Param_MovementDelta,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysMoveInZone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GlobalAcceleration); \
		P_GET_STRUCT(FVector,Z_Param_WorldOffset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_UBOOL(Z_Param_bAutoTransition); \
		P_GET_UBOOL(Z_Param_ConstrainAcceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PhysMoveInZone(Z_Param_GlobalAcceleration,Z_Param_WorldOffset,Z_Param_DeltaSeconds,Z_Param_Out_HalfExtent,Z_Param_bAutoTransition,Z_Param_ConstrainAcceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLocationInZone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GlobalAcceleration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_UBOOL(Z_Param_bAutoTransition); \
		P_GET_UBOOL(Z_Param_ConstrainAcceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveLocationInZone(Z_Param_GlobalAcceleration,Z_Param_DeltaSeconds,Z_Param_Out_HalfExtent,Z_Param_bAutoTransition,Z_Param_ConstrainAcceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitZone**)Z_Param__Result=P_THIS->GetZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTargetBalance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTargetBalance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdvCustomMovementMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetAdvCustomMovementMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdvMovementMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAdvKitMovementMode*)Z_Param__Result=P_THIS->GetAdvMovementMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdvMovementMode) \
	{ \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAdvMovementMode(EAdvKitMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
		P_NATIVE_END; \
	}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCharacterMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCharacterMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitCharacterMovementComponent(UAdvKitCharacterMovementComponent&&); \
	NO_API UAdvKitCharacterMovementComponent(const UAdvKitCharacterMovementComponent&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitCharacterMovementComponent(UAdvKitCharacterMovementComponent&&); \
	NO_API UAdvKitCharacterMovementComponent(const UAdvKitCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitCharacterMovementComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AdvKitCharacterOwner() { return STRUCT_OFFSET(UAdvKitCharacterMovementComponent, AdvKitCharacterOwner); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_93_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

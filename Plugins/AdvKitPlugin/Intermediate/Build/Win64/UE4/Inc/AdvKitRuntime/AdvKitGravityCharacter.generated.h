// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAdvKitGravityCharacterMovementComponent;
struct FVector;
struct FFindFloorResult;
#ifdef ADVKITRUNTIME_AdvKitGravityCharacter_generated_h
#error "AdvKitGravityCharacter.generated.h already included, missing '#pragma once' in AdvKitGravityCharacter.h"
#endif
#define ADVKITRUNTIME_AdvKitGravityCharacter_generated_h

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS \
	virtual bool SetNewOrientationServer_Validate(FVector , FVector , bool ); \
	virtual void SetNewOrientationServer_Implementation(FVector GravityUpVector, FVector Origin, bool bForce); \
	virtual bool CanWallWalkOn_Implementation(FFindFloorResult NewFloor); \
 \
	DECLARE_FUNCTION(execGetAdvGravityMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitGravityCharacterMovementComponent**)Z_Param__Result=P_THIS->GetAdvGravityMovementComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewOrientationServer) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GravityUpVector); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetNewOrientationServer_Validate(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce)) \
		{ \
			RPC_ValidateFailed(TEXT("SetNewOrientationServer_Validate")); \
			return; \
		} \
		P_THIS->SetNewOrientationServer_Implementation(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewOrientation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GravityUpVector); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewOrientation(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanWallWalkOn) \
	{ \
		P_GET_STRUCT(FFindFloorResult,Z_Param_NewFloor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanWallWalkOn_Implementation(Z_Param_NewFloor); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetNewOrientationServer_Validate(FVector , FVector , bool ); \
 \
	DECLARE_FUNCTION(execGetAdvGravityMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitGravityCharacterMovementComponent**)Z_Param__Result=P_THIS->GetAdvGravityMovementComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewOrientationServer) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GravityUpVector); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetNewOrientationServer_Validate(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce)) \
		{ \
			RPC_ValidateFailed(TEXT("SetNewOrientationServer_Validate")); \
			return; \
		} \
		P_THIS->SetNewOrientationServer_Implementation(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewOrientation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GravityUpVector); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewOrientation(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanWallWalkOn) \
	{ \
		P_GET_STRUCT(FFindFloorResult,Z_Param_NewFloor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanWallWalkOn_Implementation(Z_Param_NewFloor); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_EVENT_PARMS \
	struct AdvKitGravityCharacter_eventCanWallWalkOn_Parms \
	{ \
		FFindFloorResult NewFloor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitGravityCharacter_eventCanWallWalkOn_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitGravityCharacter_eventSetNewOrientationServer_Parms \
	{ \
		FVector GravityUpVector; \
		FVector Origin; \
		bool bForce; \
	};


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_CALLBACK_WRAPPERS
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitGravityCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitGravityCharacter, AAdvKitCharacter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitGravityCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitGravityCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitGravityCharacter, AAdvKitCharacter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitGravityCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitGravityCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitGravityCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitGravityCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitGravityCharacter(AAdvKitGravityCharacter&&); \
	NO_API AAdvKitGravityCharacter(const AAdvKitGravityCharacter&); \
public:


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitGravityCharacter(AAdvKitGravityCharacter&&); \
	NO_API AAdvKitGravityCharacter(const AAdvKitGravityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitGravityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitGravityCharacter)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_13_PROLOG \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_EVENT_PARMS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_CALLBACK_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_CALLBACK_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitGravityCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

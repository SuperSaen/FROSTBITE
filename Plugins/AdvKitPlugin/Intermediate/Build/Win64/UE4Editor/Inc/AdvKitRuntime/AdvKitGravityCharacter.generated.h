// Copyright Epic Games, Inc. All Rights Reserved.
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

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS \
	virtual bool SetNewOrientationServer_Validate(FVector , FVector , bool ); \
	virtual void SetNewOrientationServer_Implementation(FVector GravityUpVector, FVector Origin, bool bForce); \
	virtual bool CanWallWalkOn_Implementation(FFindFloorResult NewFloor); \
 \
	DECLARE_FUNCTION(execGetAdvGravityMovementComponent); \
	DECLARE_FUNCTION(execSetNewOrientationServer); \
	DECLARE_FUNCTION(execSetNewOrientation); \
	DECLARE_FUNCTION(execCanWallWalkOn);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetNewOrientationServer_Validate(FVector , FVector , bool ); \
 \
	DECLARE_FUNCTION(execGetAdvGravityMovementComponent); \
	DECLARE_FUNCTION(execSetNewOrientationServer); \
	DECLARE_FUNCTION(execSetNewOrientation); \
	DECLARE_FUNCTION(execCanWallWalkOn);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_EVENT_PARMS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitGravityCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitGravityCharacter, AAdvKitCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitGravityCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorldOrientationComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=WorldOrientationComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitGravityCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitGravityCharacter, AAdvKitCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitGravityCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorldOrientationComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=WorldOrientationComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_STANDARD_CONSTRUCTORS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitGravityCharacter(AAdvKitGravityCharacter&&); \
	NO_API AAdvKitGravityCharacter(const AAdvKitGravityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitGravityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitGravityCharacter)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_13_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitGravityCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitGravityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

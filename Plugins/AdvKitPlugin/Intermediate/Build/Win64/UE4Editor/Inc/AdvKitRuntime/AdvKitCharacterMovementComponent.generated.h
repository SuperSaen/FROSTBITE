// Copyright Epic Games, Inc. All Rights Reserved.
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
	DECLARE_FUNCTION(execAccumulateRootMotion); \
	DECLARE_FUNCTION(execPhysMoveInZone); \
	DECLARE_FUNCTION(execMoveLocationInZone); \
	DECLARE_FUNCTION(execGetZone); \
	DECLARE_FUNCTION(execChangeTargetBalance); \
	DECLARE_FUNCTION(execGetAdvCustomMovementMode); \
	DECLARE_FUNCTION(execGetAdvMovementMode); \
	DECLARE_FUNCTION(execSetAdvMovementMode);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAccumulateRootMotion); \
	DECLARE_FUNCTION(execPhysMoveInZone); \
	DECLARE_FUNCTION(execMoveLocationInZone); \
	DECLARE_FUNCTION(execGetZone); \
	DECLARE_FUNCTION(execChangeTargetBalance); \
	DECLARE_FUNCTION(execGetAdvCustomMovementMode); \
	DECLARE_FUNCTION(execGetAdvMovementMode); \
	DECLARE_FUNCTION(execSetAdvMovementMode);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCharacterMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LocalZoneLocation=NETFIELD_REP_START, \
		BalanceOffset, \
		CurrentBalance, \
		NETFIELD_REP_END=CurrentBalance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacterMovementComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCharacterMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LocalZoneLocation=NETFIELD_REP_START, \
		BalanceOffset, \
		CurrentBalance, \
		NETFIELD_REP_END=CurrentBalance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


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

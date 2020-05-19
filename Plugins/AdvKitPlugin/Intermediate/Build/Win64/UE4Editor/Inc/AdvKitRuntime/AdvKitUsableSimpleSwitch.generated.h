// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvKitCharacter;
class AAdvKitInventoryItem;
#ifdef ADVKITRUNTIME_AdvKitUsableSimpleSwitch_generated_h
#error "AdvKitUsableSimpleSwitch.generated.h already included, missing '#pragma once' in AdvKitUsableSimpleSwitch.h"
#endif
#define ADVKITRUNTIME_AdvKitUsableSimpleSwitch_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_9_DELEGATE \
struct _Script_AdvKitRuntime_eventSwitchDeactivatedBySignature_Parms \
{ \
	AAdvKitCharacter* ByCharacter; \
	AAdvKitInventoryItem* WithItem; \
}; \
static inline void FSwitchDeactivatedBySignature_DelegateWrapper(const FMulticastScriptDelegate& SwitchDeactivatedBySignature, AAdvKitCharacter* ByCharacter, AAdvKitInventoryItem* WithItem) \
{ \
	_Script_AdvKitRuntime_eventSwitchDeactivatedBySignature_Parms Parms; \
	Parms.ByCharacter=ByCharacter; \
	Parms.WithItem=WithItem; \
	SwitchDeactivatedBySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_8_DELEGATE \
struct _Script_AdvKitRuntime_eventSwitchActivatedBySignature_Parms \
{ \
	AAdvKitCharacter* ByCharacter; \
	AAdvKitInventoryItem* WithItem; \
}; \
static inline void FSwitchActivatedBySignature_DelegateWrapper(const FMulticastScriptDelegate& SwitchActivatedBySignature, AAdvKitCharacter* ByCharacter, AAdvKitInventoryItem* WithItem) \
{ \
	_Script_AdvKitRuntime_eventSwitchActivatedBySignature_Parms Parms; \
	Parms.ByCharacter=ByCharacter; \
	Parms.WithItem=WithItem; \
	SwitchActivatedBySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_RPC_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitUsableSimpleSwitch(); \
	friend struct Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics; \
public: \
	DECLARE_CLASS(AAdvKitUsableSimpleSwitch, AAdvKitUsable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitUsableSimpleSwitch) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitUsableSimpleSwitch(); \
	friend struct Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics; \
public: \
	DECLARE_CLASS(AAdvKitUsableSimpleSwitch, AAdvKitUsable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitUsableSimpleSwitch) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitUsableSimpleSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitUsableSimpleSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitUsableSimpleSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitUsableSimpleSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitUsableSimpleSwitch(AAdvKitUsableSimpleSwitch&&); \
	NO_API AAdvKitUsableSimpleSwitch(const AAdvKitUsableSimpleSwitch&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitUsableSimpleSwitch(AAdvKitUsableSimpleSwitch&&); \
	NO_API AAdvKitUsableSimpleSwitch(const AAdvKitUsableSimpleSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitUsableSimpleSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitUsableSimpleSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitUsableSimpleSwitch)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, Root); } \
	FORCEINLINE static uint32 __PPO__KeyClass() { return STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, KeyClass); } \
	FORCEINLINE static uint32 __PPO__bActive() { return STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, bActive); } \
	FORCEINLINE static uint32 __PPO__bCanBeActivated() { return STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, bCanBeActivated); } \
	FORCEINLINE static uint32 __PPO__bCanBeDeactivated() { return STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, bCanBeDeactivated); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_14_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitUsableSimpleSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsableSimpleSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

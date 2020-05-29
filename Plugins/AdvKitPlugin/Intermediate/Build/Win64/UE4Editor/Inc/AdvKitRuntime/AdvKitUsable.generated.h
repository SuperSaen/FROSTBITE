// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvKitCharacter;
class AAdvKitInventoryItem;
#ifdef ADVKITRUNTIME_AdvKitUsable_generated_h
#error "AdvKitUsable.generated.h already included, missing '#pragma once' in AdvKitUsable.h"
#endif
#define ADVKITRUNTIME_AdvKitUsable_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_8_DELEGATE \
struct _Script_AdvKitRuntime_eventUsedBySignature_Parms \
{ \
	AAdvKitCharacter* ByCharacter; \
	AAdvKitInventoryItem* WithItem; \
}; \
static inline void FUsedBySignature_DelegateWrapper(const FMulticastScriptDelegate& UsedBySignature, AAdvKitCharacter* ByCharacter, AAdvKitInventoryItem* WithItem) \
{ \
	_Script_AdvKitRuntime_eventUsedBySignature_Parms Parms; \
	Parms.ByCharacter=ByCharacter; \
	Parms.WithItem=WithItem; \
	UsedBySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_RPC_WRAPPERS \
	virtual bool CanBeUsedBy_Implementation(AAdvKitCharacter* Character, AAdvKitInventoryItem* WithItem); \
	virtual void UsedBy_Implementation(AAdvKitCharacter* Character, AAdvKitInventoryItem* WithItem); \
 \
	DECLARE_FUNCTION(execCanBeUsedBy); \
	DECLARE_FUNCTION(execUsedBy);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanBeUsedBy); \
	DECLARE_FUNCTION(execUsedBy);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_EVENT_PARMS \
	struct AdvKitUsable_eventCanBeUsedBy_Parms \
	{ \
		AAdvKitCharacter* Character; \
		AAdvKitInventoryItem* WithItem; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitUsable_eventCanBeUsedBy_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitUsable_eventUsedBy_Parms \
	{ \
		AAdvKitCharacter* Character; \
		AAdvKitInventoryItem* WithItem; \
	};


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitUsable(); \
	friend struct Z_Construct_UClass_AAdvKitUsable_Statics; \
public: \
	DECLARE_CLASS(AAdvKitUsable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitUsable)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitUsable(); \
	friend struct Z_Construct_UClass_AAdvKitUsable_Statics; \
public: \
	DECLARE_CLASS(AAdvKitUsable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitUsable)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitUsable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitUsable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitUsable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitUsable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitUsable(AAdvKitUsable&&); \
	NO_API AAdvKitUsable(const AAdvKitUsable&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitUsable(AAdvKitUsable&&); \
	NO_API AAdvKitUsable(const AAdvKitUsable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitUsable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitUsable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitUsable)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_PRIVATE_PROPERTY_OFFSET
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_13_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitUsable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitUsable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAdvKitTransitionBuilderModule;
class AAdvKitZone;
struct FVector;
class AAdvKitCharacter;
enum class EAdvKitMovementMode : uint8;
class UAdvKitTransitionComponentRect;
class UAdvKitTransitionComponentSpline;
class UAdvKitTransitionComponentLine;
class UAdvKitTransitionComponentPoint;
struct FAdvKitMovementProperties;
#ifdef ADVKITRUNTIME_AdvKitTransitionBuilderModule_generated_h
#error "AdvKitTransitionBuilderModule.generated.h already included, missing '#pragma once' in AdvKitTransitionBuilderModule.h"
#endif
#define ADVKITRUNTIME_AdvKitTransitionBuilderModule_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS \
	virtual bool CreateTransitionBetween_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* SourceZone, AAdvKitZone* TargetZone); \
	virtual bool GatherPotentialTargetZones_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone, TArray<AAdvKitZone*>& OutZones); \
	virtual void CreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone); \
	virtual bool CanCreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone); \
	virtual void CreateTransitions_Implementation(TArray<AAdvKitZone*>& OutAffectedZones); \
 \
	DECLARE_FUNCTION(execCreateTransitionRect); \
	DECLARE_FUNCTION(execCreateTransitionSpline); \
	DECLARE_FUNCTION(execCreateTransitionLine); \
	DECLARE_FUNCTION(execCreateTransitionPoint); \
	DECLARE_FUNCTION(execOverlapForCloseZones); \
	DECLARE_FUNCTION(execGetCharacterMovementProperties_BP); \
	DECLARE_FUNCTION(execGetCharacterHalfExtent); \
	DECLARE_FUNCTION(execCreateTransitionBetween); \
	DECLARE_FUNCTION(execGatherPotentialTargetZones); \
	DECLARE_FUNCTION(execCreateTransitionsFor); \
	DECLARE_FUNCTION(execCanCreateTransitionsFor); \
	DECLARE_FUNCTION(execGetOuterZone); \
	DECLARE_FUNCTION(execCreateTransitions);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTransitionRect); \
	DECLARE_FUNCTION(execCreateTransitionSpline); \
	DECLARE_FUNCTION(execCreateTransitionLine); \
	DECLARE_FUNCTION(execCreateTransitionPoint); \
	DECLARE_FUNCTION(execOverlapForCloseZones); \
	DECLARE_FUNCTION(execGetCharacterMovementProperties_BP); \
	DECLARE_FUNCTION(execGetCharacterHalfExtent); \
	DECLARE_FUNCTION(execCreateTransitionBetween); \
	DECLARE_FUNCTION(execGatherPotentialTargetZones); \
	DECLARE_FUNCTION(execCreateTransitionsFor); \
	DECLARE_FUNCTION(execCanCreateTransitionsFor); \
	DECLARE_FUNCTION(execGetOuterZone); \
	DECLARE_FUNCTION(execCreateTransitions);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_EVENT_PARMS \
	struct AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* ForZone; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* SourceZone; \
		AAdvKitZone* TargetZone; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitTransitionBuilderModule_eventCreateTransitions_Parms \
	{ \
		TArray<AAdvKitZone*> OutAffectedZones; \
	}; \
	struct AdvKitTransitionBuilderModule_eventCreateTransitionsFor_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* ForZone; \
	}; \
	struct AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* ForZone; \
		TArray<AAdvKitZone*> OutZones; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitTransitionBuilderModule(); \
	friend struct Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTransitionBuilderModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTransitionBuilderModule)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitTransitionBuilderModule(); \
	friend struct Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTransitionBuilderModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTransitionBuilderModule)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitTransitionBuilderModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTransitionBuilderModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTransitionBuilderModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTransitionBuilderModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTransitionBuilderModule(UAdvKitTransitionBuilderModule&&); \
	NO_API UAdvKitTransitionBuilderModule(const UAdvKitTransitionBuilderModule&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTransitionBuilderModule(UAdvKitTransitionBuilderModule&&); \
	NO_API UAdvKitTransitionBuilderModule(const UAdvKitTransitionBuilderModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTransitionBuilderModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTransitionBuilderModule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTransitionBuilderModule)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ErrorMarginPosition() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, ErrorMarginPosition); } \
	FORCEINLINE static uint32 __PPO__ErrorMarginDot() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, ErrorMarginDot); } \
	FORCEINLINE static uint32 __PPO__AffectedZones() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, AffectedZones); } \
	FORCEINLINE static uint32 __PPO__CreatedOrUpdatedTransitions() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, CreatedOrUpdatedTransitions); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_20_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitTransitionBuilderModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

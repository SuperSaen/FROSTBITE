// Copyright Epic Games, Inc. All Rights Reserved.
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

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_8_DELEGATE \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOrientation); \
	DECLARE_FUNCTION(execTransformRotationL2W); \
	DECLARE_FUNCTION(execTransformRotationW2L); \
	DECLARE_FUNCTION(execTransformPositionL2W); \
	DECLARE_FUNCTION(execTransformPositionW2L); \
	DECLARE_FUNCTION(execTransformDirectionL2W); \
	DECLARE_FUNCTION(execTransformDirectionW2L);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOrientation); \
	DECLARE_FUNCTION(execTransformRotationL2W); \
	DECLARE_FUNCTION(execTransformRotationW2L); \
	DECLARE_FUNCTION(execTransformPositionL2W); \
	DECLARE_FUNCTION(execTransformPositionW2L); \
	DECLARE_FUNCTION(execTransformDirectionL2W); \
	DECLARE_FUNCTION(execTransformDirectionW2L);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitOrientationComponent(); \
	friend struct Z_Construct_UClass_UAdvKitOrientationComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitOrientationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitOrientationComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitOrientationComponent(); \
	friend struct Z_Construct_UClass_UAdvKitOrientationComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitOrientationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitOrientationComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_STANDARD_CONSTRUCTORS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitOrientationComponent(UAdvKitOrientationComponent&&); \
	NO_API UAdvKitOrientationComponent(const UAdvKitOrientationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitOrientationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitOrientationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitOrientationComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocationLerpSpeed() { return STRUCT_OFFSET(UAdvKitOrientationComponent, LocationLerpSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationLerpSpeed() { return STRUCT_OFFSET(UAdvKitOrientationComponent, RotationLerpSpeed); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_17_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitOrientationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitOrientationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

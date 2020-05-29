// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
class UCameraComponent;
#ifdef ADVKITRUNTIME_AdvKitCameraController_generated_h
#error "AdvKitCameraController.generated.h already included, missing '#pragma once' in AdvKitCameraController.h"
#endif
#define ADVKITRUNTIME_AdvKitCameraController_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraConfig_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FCameraConfig>();

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS \
	virtual FRotator GetViewRotation_Implementation(FRotator const& OriginalRotation) const; \
	virtual FVector GetViewLocation_Implementation(FVector const& OriginalLocation) const; \
	virtual void RestrictViewRotation_Implementation(FRotator& DesiredRotation); \
	virtual bool SetActiveCameraComponent_Implementation(UCameraComponent* NewCameraComponent); \
	virtual bool ServerSetActiveConfig_Validate(int32 ); \
	virtual void ServerSetActiveConfig_Implementation(int32 Index); \
 \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execGetViewLocation); \
	DECLARE_FUNCTION(execRestrictViewRotation); \
	DECLARE_FUNCTION(execSetActiveCameraComponent); \
	DECLARE_FUNCTION(execSetActiveConfigByName); \
	DECLARE_FUNCTION(execOnRep_CurrentConfig); \
	DECLARE_FUNCTION(execServerSetActiveConfig); \
	DECLARE_FUNCTION(execSetActiveConfig); \
	DECLARE_FUNCTION(execPreviousCamera); \
	DECLARE_FUNCTION(execNextCamera);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetActiveConfig_Validate(int32 ); \
 \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execGetViewLocation); \
	DECLARE_FUNCTION(execRestrictViewRotation); \
	DECLARE_FUNCTION(execSetActiveCameraComponent); \
	DECLARE_FUNCTION(execSetActiveConfigByName); \
	DECLARE_FUNCTION(execOnRep_CurrentConfig); \
	DECLARE_FUNCTION(execServerSetActiveConfig); \
	DECLARE_FUNCTION(execSetActiveConfig); \
	DECLARE_FUNCTION(execPreviousCamera); \
	DECLARE_FUNCTION(execNextCamera);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_EVENT_PARMS \
	struct AdvKitCameraController_eventGetViewLocation_Parms \
	{ \
		FVector OriginalLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCameraController_eventGetViewLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCameraController_eventGetViewRotation_Parms \
	{ \
		FRotator OriginalRotation; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCameraController_eventGetViewRotation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCameraController_eventRestrictViewRotation_Parms \
	{ \
		FRotator DesiredRotation; \
	}; \
	struct AdvKitCameraController_eventServerSetActiveConfig_Parms \
	{ \
		int32 Index; \
	}; \
	struct AdvKitCameraController_eventSetActiveCameraComponent_Parms \
	{ \
		UCameraComponent* NewCameraComponent; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCameraController_eventSetActiveCameraComponent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitCameraController(); \
	friend struct Z_Construct_UClass_UAdvKitCameraController_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCameraController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCameraController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentConfig=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentConfig	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitCameraController(); \
	friend struct Z_Construct_UClass_UAdvKitCameraController_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCameraController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCameraController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentConfig=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentConfig	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitCameraController(UAdvKitCameraController&&); \
	NO_API UAdvKitCameraController(const UAdvKitCameraController&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitCameraController(UAdvKitCameraController&&); \
	NO_API UAdvKitCameraController(const UAdvKitCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitCameraController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitCameraController)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraConfigurations() { return STRUCT_OFFSET(UAdvKitCameraController, CameraConfigurations); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_112_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

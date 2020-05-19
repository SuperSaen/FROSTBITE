// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraConfig_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FCameraConfig>();

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS \
	virtual FRotator GetViewRotation_Implementation(FRotator const& OriginalRotation) const; \
	virtual FVector GetViewLocation_Implementation(FVector const& OriginalLocation) const; \
	virtual void RestrictViewRotation_Implementation(FRotator& DesiredRotation); \
	virtual bool SetActiveCameraComponent_Implementation(UCameraComponent* NewCameraComponent); \
	virtual bool ServerSetActiveConfig_Validate(int32 ); \
	virtual void ServerSetActiveConfig_Implementation(int32 Index); \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OriginalRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation_Implementation(Z_Param_Out_OriginalRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetViewLocation_Implementation(Z_Param_Out_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestrictViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DesiredRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestrictViewRotation_Implementation(Z_Param_Out_DesiredRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveCameraComponent) \
	{ \
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetActiveCameraComponent_Implementation(Z_Param_NewCameraComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveConfigByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewConfigName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveConfigByName(Z_Param_NewConfigName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CurrentConfig) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LastConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentConfig(Z_Param_LastConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetActiveConfig) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetActiveConfig_Validate(Z_Param_Index)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetActiveConfig_Validate")); \
			return; \
		} \
		P_THIS->ServerSetActiveConfig_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveConfig) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveConfig(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextCamera(); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetActiveConfig_Validate(int32 ); \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OriginalRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation_Implementation(Z_Param_Out_OriginalRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetViewLocation_Implementation(Z_Param_Out_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestrictViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DesiredRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestrictViewRotation_Implementation(Z_Param_Out_DesiredRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveCameraComponent) \
	{ \
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetActiveCameraComponent_Implementation(Z_Param_NewCameraComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveConfigByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewConfigName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveConfigByName(Z_Param_NewConfigName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CurrentConfig) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LastConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentConfig(Z_Param_LastConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetActiveConfig) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetActiveConfig_Validate(Z_Param_Index)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetActiveConfig_Validate")); \
			return; \
		} \
		P_THIS->ServerSetActiveConfig_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveConfig) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveConfig(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextCamera(); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_EVENT_PARMS \
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


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_CALLBACK_WRAPPERS
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitCameraController(); \
	friend struct Z_Construct_UClass_UAdvKitCameraController_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCameraController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCameraController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitCameraController(); \
	friend struct Z_Construct_UClass_UAdvKitCameraController_Statics; \
public: \
	DECLARE_CLASS(UAdvKitCameraController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitCameraController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_STANDARD_CONSTRUCTORS \
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


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitCameraController(UAdvKitCameraController&&); \
	NO_API UAdvKitCameraController(const UAdvKitCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitCameraController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitCameraController)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraConfigurations() { return STRUCT_OFFSET(UAdvKitCameraController, CameraConfigurations); }


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_112_PROLOG \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_EVENT_PARMS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_CALLBACK_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_CALLBACK_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_INCLASS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

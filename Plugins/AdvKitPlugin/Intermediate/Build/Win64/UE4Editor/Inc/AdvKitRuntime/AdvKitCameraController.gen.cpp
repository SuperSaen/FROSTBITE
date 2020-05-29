// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitCameraController() {}
// Cross Module References
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCameraConfig();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitCameraController_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitCameraController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FCameraConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FCameraConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraConfig, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("CameraConfig"), sizeof(FCameraConfig), Get_Z_Construct_UScriptStruct_FCameraConfig_Hash());
	}
	return Singleton;
}
template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<FCameraConfig>()
{
	return FCameraConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraConfig(FCameraConfig::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("CameraConfig"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFCameraConfig
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFCameraConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraConfig")),new UScriptStruct::TCppStructOps<FCameraConfig>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFCameraConfig;
	struct Z_Construct_UScriptStruct_FCameraConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[];
#endif
		static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationRoll_MetaData[];
#endif
		static void NewProp_bUseControllerRotationRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[];
#endif
		static void NewProp_bUseControllerRotationYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationPitch_MetaData[];
#endif
		static void NewProp_bUseControllerRotationPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampCameraRoll_MetaData[];
#endif
		static void NewProp_bClampCameraRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampCameraRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampCameraYaw_MetaData[];
#endif
		static void NewProp_bClampCameraYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampCameraYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampCameraPitch_MetaData[];
#endif
		static void NewProp_bClampCameraPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampToParentSocket_MetaData[];
#endif
		static void NewProp_bClampToParentSocket_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampToParentSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoredByCycle_MetaData[];
#endif
		static void NewProp_bIgnoredByCycle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoredByCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConfigName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Camera used when in target lock mode. Tag camera component with \"Target Lock\" auto assign this property. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Camera used when in target lock mode. Tag camera component with \"Target Lock\" auto assign this property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bOrientRotationToMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController. */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bUseControllerRotationRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll = { "bUseControllerRotationRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController. */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bUseControllerRotationYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw = { "bUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController. */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bUseControllerRotationPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch = { "bUseControllerRotationPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraRoll_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Maximum angle to clamp roll to in first person */" },
		{ "EditCondition", "bClampCameraRoll" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Maximum angle to clamp roll to in first person" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraRoll = { "MaxCameraRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, MaxCameraRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraRoll_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Minimum angle to clamp roll to in first person */" },
		{ "EditCondition", "bClampCameraRoll" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Minimum angle to clamp roll to in first person" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraRoll = { "MinCameraRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, MinCameraRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Restrict the camera roll to the head socket's orientation in first person view*/" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Restrict the camera roll to the head socket's orientation in first person view" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bClampCameraRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll = { "bClampCameraRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraYaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Maximum angle to clamp yaw to in first person */" },
		{ "EditCondition", "bClampCameraYaw" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Maximum angle to clamp yaw to in first person" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraYaw = { "MaxCameraYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, MaxCameraYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraYaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Minimum angle to clamp yaw to in first person */" },
		{ "EditCondition", "bClampCameraYaw" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Minimum angle to clamp yaw to in first person" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraYaw = { "MinCameraYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, MinCameraYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Restrict the camera yaw to the head socket's orientation in first person view*/" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Restrict the camera yaw to the head socket's orientation in first person view" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bClampCameraYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw = { "bClampCameraYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Maximum angle to clamp pitch to in first person */" },
		{ "EditCondition", "bClampCameraPitch" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Maximum angle to clamp pitch to in first person" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraPitch = { "MaxCameraPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, MaxCameraPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Minimum angle to clamp pitch to in this view */" },
		{ "EditCondition", "bClampCameraPitch" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Minimum angle to clamp pitch to in this view" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraPitch = { "MinCameraPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, MinCameraPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Restrict the camera pitch to the head socket's orientation in this view */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Restrict the camera pitch to the head socket's orientation in this view" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bClampCameraPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch = { "bClampCameraPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** When restricting the camera, use the attachment socket as the reference space (as opposed to the owning actor)*/" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "When restricting the camera, use the attachment socket as the reference space (as opposed to the owning actor)" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bClampToParentSocket = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket = { "bClampToParentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** True if this config should be skipped when doing an automatic Next/Prev camera call */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "True if this config should be skipped when doing an automatic Next/Prev camera call" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle_SetBit(void* Obj)
	{
		((FCameraConfig*)Obj)->bIgnoredByCycle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle = { "bIgnoredByCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraConfig), &Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CameraComponentName_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CameraComponentName = { "CameraComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, CameraComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CameraComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CameraComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraConfig, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_ConfigName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bOrientRotationToMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bUseControllerRotationPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bClampToParentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_bIgnoredByCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CameraComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_ConfigName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"CameraConfig",
		sizeof(FCameraConfig),
		alignof(FCameraConfig),
		Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraConfig"), sizeof(FCameraConfig), Get_Z_Construct_UScriptStruct_FCameraConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraConfig_Hash() { return 663975820U; }
	DEFINE_FUNCTION(UAdvKitCameraController::execGetViewRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OriginalRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation_Implementation(Z_Param_Out_OriginalRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execGetViewLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetViewLocation_Implementation(Z_Param_Out_OriginalLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execRestrictViewRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DesiredRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestrictViewRotation_Implementation(Z_Param_Out_DesiredRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execSetActiveCameraComponent)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActiveCameraComponent_Implementation(Z_Param_NewCameraComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execSetActiveConfigByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewConfigName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveConfigByName(Z_Param_NewConfigName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execOnRep_CurrentConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LastConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentConfig(Z_Param_LastConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execServerSetActiveConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetActiveConfig_Validate(Z_Param_Index))
		{
			RPC_ValidateFailed(TEXT("ServerSetActiveConfig_Validate"));
			return;
		}
		P_THIS->ServerSetActiveConfig_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execSetActiveConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveConfig(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execPreviousCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitCameraController::execNextCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextCamera();
		P_NATIVE_END;
	}
	static FName NAME_UAdvKitCameraController_GetViewLocation = FName(TEXT("GetViewLocation"));
	FVector UAdvKitCameraController::GetViewLocation(FVector const& OriginalLocation) const
	{
		AdvKitCameraController_eventGetViewLocation_Parms Parms;
		Parms.OriginalLocation=OriginalLocation;
		const_cast<UAdvKitCameraController*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdvKitCameraController_GetViewLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdvKitCameraController_GetViewRotation = FName(TEXT("GetViewRotation"));
	FRotator UAdvKitCameraController::GetViewRotation(FRotator const& OriginalRotation) const
	{
		AdvKitCameraController_eventGetViewRotation_Parms Parms;
		Parms.OriginalRotation=OriginalRotation;
		const_cast<UAdvKitCameraController*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAdvKitCameraController_GetViewRotation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAdvKitCameraController_RestrictViewRotation = FName(TEXT("RestrictViewRotation"));
	void UAdvKitCameraController::RestrictViewRotation(FRotator& DesiredRotation)
	{
		AdvKitCameraController_eventRestrictViewRotation_Parms Parms;
		Parms.DesiredRotation=DesiredRotation;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitCameraController_RestrictViewRotation),&Parms);
		DesiredRotation=Parms.DesiredRotation;
	}
	static FName NAME_UAdvKitCameraController_ServerSetActiveConfig = FName(TEXT("ServerSetActiveConfig"));
	void UAdvKitCameraController::ServerSetActiveConfig(int32 Index)
	{
		AdvKitCameraController_eventServerSetActiveConfig_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitCameraController_ServerSetActiveConfig),&Parms);
	}
	static FName NAME_UAdvKitCameraController_SetActiveCameraComponent = FName(TEXT("SetActiveCameraComponent"));
	bool UAdvKitCameraController::SetActiveCameraComponent(UCameraComponent* NewCameraComponent)
	{
		AdvKitCameraController_eventSetActiveCameraComponent_Parms Parms;
		Parms.NewCameraComponent=NewCameraComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitCameraController_SetActiveCameraComponent),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAdvKitCameraController::StaticRegisterNativesUAdvKitCameraController()
	{
		UClass* Class = UAdvKitCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetViewLocation", &UAdvKitCameraController::execGetViewLocation },
			{ "GetViewRotation", &UAdvKitCameraController::execGetViewRotation },
			{ "NextCamera", &UAdvKitCameraController::execNextCamera },
			{ "OnRep_CurrentConfig", &UAdvKitCameraController::execOnRep_CurrentConfig },
			{ "PreviousCamera", &UAdvKitCameraController::execPreviousCamera },
			{ "RestrictViewRotation", &UAdvKitCameraController::execRestrictViewRotation },
			{ "ServerSetActiveConfig", &UAdvKitCameraController::execServerSetActiveConfig },
			{ "SetActiveCameraComponent", &UAdvKitCameraController::execSetActiveCameraComponent },
			{ "SetActiveConfig", &UAdvKitCameraController::execSetActiveConfig },
			{ "SetActiveConfigByName", &UAdvKitCameraController::execSetActiveConfigByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventGetViewLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_OriginalLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_OriginalLocation = { "OriginalLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventGetViewLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_OriginalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_OriginalLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::NewProp_OriginalLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "GetViewLocation", nullptr, nullptr, sizeof(AdvKitCameraController_eventGetViewLocation_Parms), Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_OriginalRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_OriginalRotation = { "OriginalRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventGetViewRotation_Parms, OriginalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_OriginalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_OriginalRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::NewProp_OriginalRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "GetViewRotation", nullptr, nullptr, sizeof(AdvKitCameraController_eventGetViewRotation_Parms), Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_NextCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_NextCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * If the character has multiple cameras, switch to the next one\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "If the character has multiple cameras, switch to the next one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_NextCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "NextCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_NextCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_NextCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_NextCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_NextCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics
	{
		struct AdvKitCameraController_eventOnRep_CurrentConfig_Parms
		{
			int32 LastConfig;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::NewProp_LastConfig = { "LastConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventOnRep_CurrentConfig_Parms, LastConfig), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::NewProp_LastConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "OnRep_CurrentConfig", nullptr, nullptr, sizeof(AdvKitCameraController_eventOnRep_CurrentConfig_Parms), Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * If the character has multiple cameras, switch to the previous one\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "If the character has multiple cameras, switch to the previous one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "PreviousCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventRestrictViewRotation_Parms, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::NewProp_DesiredRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * Restricts the controller's view rotation. By default only used in first person to\n\x09 * restrict the camera if configured.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Restricts the controller's view rotation. By default only used in first person to\nrestrict the camera if configured." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "RestrictViewRotation", nullptr, nullptr, sizeof(AdvKitCameraController_eventRestrictViewRotation_Parms), Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventServerSetActiveConfig_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "ServerSetActiveConfig", nullptr, nullptr, sizeof(AdvKitCameraController_eventServerSetActiveConfig_Parms), Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitCameraController_eventSetActiveCameraComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCameraController_eventSetActiveCameraComponent_Parms), &Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_NewCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_NewCameraComponent = { "NewCameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventSetActiveCameraComponent_Parms, NewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_NewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_NewCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::NewProp_NewCameraComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * Set a specific camera mode to be the active camera\n\x09 * @param\x09NewCameraComponent component to activate\n\x09 * @return\x09True if activation was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Set a specific camera mode to be the active camera\n@param       NewCameraComponent component to activate\n@return      True if activation was successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "SetActiveCameraComponent", nullptr, nullptr, sizeof(AdvKitCameraController_eventSetActiveCameraComponent_Parms), Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics
	{
		struct AdvKitCameraController_eventSetActiveConfig_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventSetActiveConfig_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "SetActiveConfig", nullptr, nullptr, sizeof(AdvKitCameraController_eventSetActiveConfig_Parms), Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics
	{
		struct AdvKitCameraController_eventSetActiveConfigByName_Parms
		{
			FName NewConfigName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewConfigName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::NewProp_NewConfigName = { "NewConfigName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCameraController_eventSetActiveConfigByName_Parms, NewConfigName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::NewProp_NewConfigName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCameraController, nullptr, "SetActiveConfigByName", nullptr, nullptr, sizeof(AdvKitCameraController_eventSetActiveConfigByName_Parms), Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitCameraController_NoRegister()
	{
		return UAdvKitCameraController::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLerpExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLerpExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLerpAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLerpAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraConfigurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraConfigurations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraConfigurations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitCameraController_GetViewLocation, "GetViewLocation" }, // 2096329340
		{ &Z_Construct_UFunction_UAdvKitCameraController_GetViewRotation, "GetViewRotation" }, // 125939489
		{ &Z_Construct_UFunction_UAdvKitCameraController_NextCamera, "NextCamera" }, // 2410847912
		{ &Z_Construct_UFunction_UAdvKitCameraController_OnRep_CurrentConfig, "OnRep_CurrentConfig" }, // 2207615231
		{ &Z_Construct_UFunction_UAdvKitCameraController_PreviousCamera, "PreviousCamera" }, // 3545353887
		{ &Z_Construct_UFunction_UAdvKitCameraController_RestrictViewRotation, "RestrictViewRotation" }, // 1553793143
		{ &Z_Construct_UFunction_UAdvKitCameraController_ServerSetActiveConfig, "ServerSetActiveConfig" }, // 2065547805
		{ &Z_Construct_UFunction_UAdvKitCameraController_SetActiveCameraComponent, "SetActiveCameraComponent" }, // 1954772876
		{ &Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfig, "SetActiveConfig" }, // 2241246604
		{ &Z_Construct_UFunction_UAdvKitCameraController_SetActiveConfigByName, "SetActiveConfigByName" }, // 3410310771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Mobility LOD Events Collision Physics Rendering Rendering | Material TextureStreaming Input Lighting Base Activation" },
		{ "IncludePath", "Player/AdvKitCameraController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentConfig_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Currently active camera configuration */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Currently active camera configuration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentConfig = { "CurrentConfig", "OnRep_CurrentConfig", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, CurrentConfig), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentCameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Currently active camera component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Currently active camera component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentCameraComponent = { "CurrentCameraComponent", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, CurrentCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_LastCameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Previous camera component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Previous camera component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_LastCameraComponent = { "LastCameraComponent", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, LastCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_LastCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_LastCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpExponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Exponent of interpolation camera curve */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Exponent of interpolation camera curve" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpExponent = { "CameraLerpExponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, CameraLerpExponent), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpAlpha_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Current interpolation alpha of camera switch */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "Current interpolation alpha of camera switch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpAlpha = { "CameraLerpAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, CameraLerpAlpha), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** How fast to switch between cameras */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
		{ "ToolTip", "How fast to switch between cameras" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpSpeed = { "CameraLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, CameraLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations = { "CameraConfigurations", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCameraController, CameraConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations_Inner = { "CameraConfigurations", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCameraConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitCameraController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CurrentCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_LastCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCameraController_Statics::NewProp_CameraConfigurations_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitCameraController_Statics::ClassParams = {
		&UAdvKitCameraController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvKitCameraController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitCameraController, 2623692104);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitCameraController>()
	{
		return UAdvKitCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitCameraController(Z_Construct_UClass_UAdvKitCameraController, &UAdvKitCameraController::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitCameraController"), false, nullptr, nullptr, nullptr);

	void UAdvKitCameraController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentConfig(TEXT("CurrentConfig"));

		const bool bIsValid = true
			&& Name_CurrentConfig == ClassReps[(int32)ENetFields_Private::CurrentConfig].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAdvKitCameraController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Ledge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Ledge() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Ledge::StaticRegisterNativesUAdvKitBuildModule_Ledge()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_NoRegister()
	{
		return UAdvKitBuildModule_Ledge::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateTransitionToFloor_MetaData[];
#endif
		static void NewProp_bCreateTransitionToFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateTransitionToFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateTransitionToPlatform_MetaData[];
#endif
		static void NewProp_bCreateTransitionToPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateTransitionToPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSidewaysTransitionRequiresJump_MetaData[];
#endif
		static void NewProp_bSidewaysTransitionRequiresJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSidewaysTransitionRequiresJump;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Ledge Enter, Exit,  Corners and Jumps" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Ledge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions for ledge zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_FloorTraceDistance_MetaData[] = {
		{ "Category", "Config" },
		{ "EditCondition", "bCreateTransitionToFloor" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge.h" },
		{ "ToolTip", "The maximum trace distance down to find the floor when creating an exit transition" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_FloorTraceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FloorTraceDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAdvKitBuildModule_Ledge, FloorTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_FloorTraceDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_FloorTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge.h" },
		{ "ToolTip", "Whether or not to create an exit transition to the floor below the ledge" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ledge*)Obj)->bCreateTransitionToFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateTransitionToFloor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Ledge), &Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge.h" },
		{ "ToolTip", "Whether or not to create an exit transition to the platform above the ledge" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ledge*)Obj)->bCreateTransitionToPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateTransitionToPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Ledge), &Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge.h" },
		{ "ToolTip", "Whether or not transitions to the side require jumps" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ledge*)Obj)->bSidewaysTransitionRequiresJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump = { UE4CodeGen_Private::EPropertyClass::Bool, "bSidewaysTransitionRequiresJump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Ledge), &Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_FloorTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bCreateTransitionToPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::NewProp_bSidewaysTransitionRequiresJump,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Ledge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::ClassParams = {
		&UAdvKitBuildModule_Ledge::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009030A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Ledge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Ledge, 4051095608);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Ledge(Z_Construct_UClass_UAdvKitBuildModule_Ledge, &UAdvKitBuildModule_Ledge::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Ledge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Ledge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

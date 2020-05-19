// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Ladder() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Ladder::StaticRegisterNativesUAdvKitBuildModule_Ladder()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder_NoRegister()
	{
		return UAdvKitBuildModule_Ladder::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Ladder Enter and Exit" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions for ladder zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "Whether or not to create an exit transition at bottom of the ladder" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ladder*)Obj)->bCreateTransitionToFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateTransitionToFloor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Ladder), &Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "Whether or not to create an exit transition at the top of the ladder" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ladder*)Obj)->bCreateTransitionToPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateTransitionToPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Ladder), &Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "Whether or not transitions to the side require jumps" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ladder*)Obj)->bSidewaysTransitionRequiresJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump = { UE4CodeGen_Private::EPropertyClass::Bool, "bSidewaysTransitionRequiresJump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Ladder), &Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Ladder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::ClassParams = {
		&UAdvKitBuildModule_Ladder::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009030A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Ladder, 389891087);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Ladder(Z_Construct_UClass_UAdvKitBuildModule_Ladder, &UAdvKitBuildModule_Ladder::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Ladder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Ladder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

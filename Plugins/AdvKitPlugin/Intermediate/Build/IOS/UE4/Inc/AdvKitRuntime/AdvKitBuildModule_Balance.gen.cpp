// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Balance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Balance() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Balance_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Balance();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Balance::StaticRegisterNativesUAdvKitBuildModule_Balance()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Balance_NoRegister()
	{
		return UAdvKitBuildModule_Balance::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateEndTransition_MetaData[];
#endif
		static void NewProp_bCreateEndTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateEndTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateStartTransition_MetaData[];
#endif
		static void NewProp_bCreateStartTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateStartTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Balance Enter and Exit" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Balance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Balance.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions for balance zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Balance.h" },
		{ "ToolTip", "Whether or not to create an exit transition at the end point" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Balance*)Obj)->bCreateEndTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateEndTransition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Balance), &Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Balance.h" },
		{ "ToolTip", "Whether or not to create an exit transition at the start point" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Balance*)Obj)->bCreateStartTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateStartTransition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitBuildModule_Balance), &Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateEndTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::NewProp_bCreateStartTransition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Balance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::ClassParams = {
		&UAdvKitBuildModule_Balance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009030A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Balance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Balance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Balance, 4081931002);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Balance(Z_Construct_UClass_UAdvKitBuildModule_Balance, &UAdvKitBuildModule_Balance::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Balance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Balance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

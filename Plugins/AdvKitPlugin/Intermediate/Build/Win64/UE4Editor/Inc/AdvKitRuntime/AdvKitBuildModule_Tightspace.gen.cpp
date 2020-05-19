// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Tightspace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Tightspace() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Tightspace_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Tightspace();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Tightspace::StaticRegisterNativesUAdvKitBuildModule_Tightspace()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Tightspace_NoRegister()
	{
		return UAdvKitBuildModule_Tightspace::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics
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
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Implementation of a transition builder module to create transitions for tight space zones\n */" },
		{ "DisplayName", "Tight Space Enter and Exit" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Tightspace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Tightspace.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions for tight space zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether or not to create an exit transition at the end point */" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Tightspace.h" },
		{ "ToolTip", "Whether or not to create an exit transition at the end point" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Tightspace*)Obj)->bCreateEndTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition = { "bCreateEndTransition", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Tightspace), &Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether or not to create an exit transition at the start point */" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Tightspace.h" },
		{ "ToolTip", "Whether or not to create an exit transition at the start point" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Tightspace*)Obj)->bCreateStartTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition = { "bCreateStartTransition", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Tightspace), &Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateEndTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::NewProp_bCreateStartTransition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Tightspace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::ClassParams = {
		&UAdvKitBuildModule_Tightspace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Tightspace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Tightspace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Tightspace, 4027524901);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitBuildModule_Tightspace>()
	{
		return UAdvKitBuildModule_Tightspace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Tightspace(Z_Construct_UClass_UAdvKitBuildModule_Tightspace, &UAdvKitBuildModule_Tightspace::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Tightspace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Tightspace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

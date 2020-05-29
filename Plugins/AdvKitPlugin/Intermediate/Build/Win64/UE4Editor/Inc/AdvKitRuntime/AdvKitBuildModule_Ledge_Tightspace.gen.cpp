// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Ledge_Tightspace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Ledge_Tightspace() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Ledge_Tightspace::StaticRegisterNativesUAdvKitBuildModule_Ledge_Tightspace()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_NoRegister()
	{
		return UAdvKitBuildModule_Ledge_Tightspace::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Implementation of a transition builder module to create transitions between ledge and tight space zones\n */" },
		{ "DisplayName", "Transitions between Ledge and Tight Space" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Ledge_Tightspace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge_Tightspace.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions between ledge and tight space zones" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Ledge_Tightspace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::ClassParams = {
		&UAdvKitBuildModule_Ledge_Tightspace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Ledge_Tightspace, 1392264718);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitBuildModule_Ledge_Tightspace>()
	{
		return UAdvKitBuildModule_Ledge_Tightspace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Ledge_Tightspace(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Tightspace, &UAdvKitBuildModule_Ledge_Tightspace::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Ledge_Tightspace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Ledge_Tightspace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

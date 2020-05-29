// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Wall_Ceiling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Wall_Ceiling() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Wall_Ceiling::StaticRegisterNativesUAdvKitBuildModule_Wall_Ceiling()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_NoRegister()
	{
		return UAdvKitBuildModule_Wall_Ceiling::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Implementation of a transition builder module to create transitions between wall and ceiling zones\n */" },
		{ "DisplayName", "Transitions between Wall and Ceiling" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Wall_Ceiling.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Wall_Ceiling.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions between wall and ceiling zones" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Wall_Ceiling>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::ClassParams = {
		&UAdvKitBuildModule_Wall_Ceiling::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Wall_Ceiling, 1413933309);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitBuildModule_Wall_Ceiling>()
	{
		return UAdvKitBuildModule_Wall_Ceiling::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Wall_Ceiling(Z_Construct_UClass_UAdvKitBuildModule_Wall_Ceiling, &UAdvKitBuildModule_Wall_Ceiling::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Wall_Ceiling"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Wall_Ceiling);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

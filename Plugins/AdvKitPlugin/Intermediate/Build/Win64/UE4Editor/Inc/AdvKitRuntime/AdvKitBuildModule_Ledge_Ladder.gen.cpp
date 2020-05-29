// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Ledge_Ladder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Ledge_Ladder() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Ledge_Ladder::StaticRegisterNativesUAdvKitBuildModule_Ledge_Ladder()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_NoRegister()
	{
		return UAdvKitBuildModule_Ledge_Ladder::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderZOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Implementation of a transition builder module to create transitions between ledge and ladder zones\n */" },
		{ "DisplayName", "Jumps between Ledge and Ladder" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Ledge_Ladder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge_Ladder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions between ledge and ladder zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::NewProp_LadderZOffset_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** An offset to add when finding the closest location on the ladder */" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ledge_Ladder.h" },
		{ "ToolTip", "An offset to add when finding the closest location on the ladder" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::NewProp_LadderZOffset = { "LadderZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitBuildModule_Ledge_Ladder, LadderZOffset), METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::NewProp_LadderZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::NewProp_LadderZOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::NewProp_LadderZOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Ledge_Ladder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::ClassParams = {
		&UAdvKitBuildModule_Ledge_Ladder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Ledge_Ladder, 998292654);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitBuildModule_Ledge_Ladder>()
	{
		return UAdvKitBuildModule_Ledge_Ladder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Ledge_Ladder(Z_Construct_UClass_UAdvKitBuildModule_Ledge_Ladder, &UAdvKitBuildModule_Ledge_Ladder::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Ledge_Ladder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Ledge_Ladder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

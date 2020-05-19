// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitPlayerController() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPlayerController_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void AAdvKitPlayerController::StaticRegisterNativesAAdvKitPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAdvKitPlayerController_NoRegister()
	{
		return AAdvKitPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/AdvKitPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitPlayerController.h" },
		{ "ToolTip", "@brief This is a slightly modified version of the default player controller and lets\nthe character restrict the view rotation.\n\nThis is useful for first person, when\nthe player cannot turn their head beyond what the skeleton allows for." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitPlayerController_Statics::ClassParams = {
		&AAdvKitPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitPlayerController, 2822000515);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitPlayerController(Z_Construct_UClass_AAdvKitPlayerController, &AAdvKitPlayerController::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

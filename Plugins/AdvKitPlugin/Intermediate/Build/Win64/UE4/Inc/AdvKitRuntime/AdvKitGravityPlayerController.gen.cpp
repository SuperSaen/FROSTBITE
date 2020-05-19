// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitGravityPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitGravityPlayerController() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitGravityPlayerController_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitGravityPlayerController();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPlayerController();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void AAdvKitGravityPlayerController::StaticRegisterNativesAAdvKitGravityPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAdvKitGravityPlayerController_NoRegister()
	{
		return AAdvKitGravityPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitGravityPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/AdvKitGravityPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityPlayerController.h" },
		{ "ToolTip", "@brief Player controller class for the gravity character." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitGravityPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::ClassParams = {
		&AAdvKitGravityPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitGravityPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitGravityPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitGravityPlayerController, 3716540206);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitGravityPlayerController>()
	{
		return AAdvKitGravityPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitGravityPlayerController(Z_Construct_UClass_AAdvKitGravityPlayerController, &AAdvKitGravityPlayerController::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitGravityPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitGravityPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

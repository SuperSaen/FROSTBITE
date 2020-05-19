// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlockingBehaviourSystem/Public/BoidController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidController() {}
// Cross Module References
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_ABoidController_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_ABoidController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_FlockingBehaviourSystem();
// End Cross Module References
	void ABoidController::StaticRegisterNativesABoidController()
	{
	}
	UClass* Z_Construct_UClass_ABoidController_NoRegister()
	{
		return ABoidController::StaticClass();
	}
	struct Z_Construct_UClass_ABoidController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoidController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The controller that will possess the boid\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BoidController.h" },
		{ "ModuleRelativePath", "Public/BoidController.h" },
		{ "ToolTip", "The controller that will possess the boid" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoidController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoidController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoidController_Statics::ClassParams = {
		&ABoidController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoidController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoidController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoidController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoidController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoidController, 3073014156);
	template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<ABoidController>()
	{
		return ABoidController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoidController(Z_Construct_UClass_ABoidController, &ABoidController::StaticClass, TEXT("/Script/FlockingBehaviourSystem"), TEXT("ABoidController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

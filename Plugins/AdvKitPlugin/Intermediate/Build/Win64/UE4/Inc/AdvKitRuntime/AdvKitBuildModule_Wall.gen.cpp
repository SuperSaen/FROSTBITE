// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Wall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Wall() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Wall::StaticRegisterNativesUAdvKitBuildModule_Wall()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall_NoRegister()
	{
		return UAdvKitBuildModule_Wall::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Wall Enter, Exit and Corners" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Wall.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Wall.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions for wall zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Wall.h" },
		{ "ToolTip", "Whether or not to create an exit transition to the floor below the wall" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Wall*)Obj)->bCreateTransitionToFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor = { "bCreateTransitionToFloor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Wall), &Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Wall.h" },
		{ "ToolTip", "Whether or not to create an exit transition to the platform above the wall" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Wall*)Obj)->bCreateTransitionToPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform = { "bCreateTransitionToPlatform", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Wall), &Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::NewProp_bCreateTransitionToPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Wall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::ClassParams = {
		&UAdvKitBuildModule_Wall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Wall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Wall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Wall, 211993889);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitBuildModule_Wall>()
	{
		return UAdvKitBuildModule_Wall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Wall(Z_Construct_UClass_UAdvKitBuildModule_Wall, &UAdvKitBuildModule_Wall::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Wall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Wall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

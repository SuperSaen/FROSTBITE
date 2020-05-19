// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitInventorySimpleCombinable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitInventorySimpleCombinable() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventorySimpleCombinable_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventorySimpleCombinable();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
// End Cross Module References
	void AAdvKitInventorySimpleCombinable::StaticRegisterNativesAAdvKitInventorySimpleCombinable()
	{
	}
	UClass* Z_Construct_UClass_AAdvKitInventorySimpleCombinable_NoRegister()
	{
		return AAdvKitInventorySimpleCombinable::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinationResultClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CombinationResultClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinableWithClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CombinableWithClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/AdvKitInventorySimpleCombinable.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventorySimpleCombinable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Simple class for combination of two items. If successful both items are destroyed and a new item will be spawned." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventorySimpleCombinable.h" },
		{ "ToolTip", "Result of a successful combination of items." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass = { UE4CodeGen_Private::EPropertyClass::Class, "CombinationResultClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000015, 1, nullptr, STRUCT_OFFSET(AAdvKitInventorySimpleCombinable, CombinationResultClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventorySimpleCombinable.h" },
		{ "ToolTip", "Class of another item that this item can be combined with." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass = { UE4CodeGen_Private::EPropertyClass::Class, "CombinableWithClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000015, 1, nullptr, STRUCT_OFFSET(AAdvKitInventorySimpleCombinable, CombinableWithClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitInventorySimpleCombinable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::ClassParams = {
		&AAdvKitInventorySimpleCombinable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		nullptr, 0,
		Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitInventorySimpleCombinable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitInventorySimpleCombinable, 797042795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitInventorySimpleCombinable(Z_Construct_UClass_AAdvKitInventorySimpleCombinable, &AAdvKitInventorySimpleCombinable::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitInventorySimpleCombinable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitInventorySimpleCombinable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

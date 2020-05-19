// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
		{ "Comment", "/**\n * @brief Simple class for combination of two items. If successful both items are destroyed and a new item will be spawned.\n */" },
		{ "IncludePath", "Items/AdvKitInventorySimpleCombinable.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventorySimpleCombinable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Simple class for combination of two items. If successful both items are destroyed and a new item will be spawned." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Result of a successful combination of items. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventorySimpleCombinable.h" },
		{ "ToolTip", "Result of a successful combination of items." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass = { "CombinationResultClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventorySimpleCombinable, CombinationResultClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Class of another item that this item can be combined with. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventorySimpleCombinable.h" },
		{ "ToolTip", "Class of another item that this item can be combined with." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass = { "CombinableWithClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventorySimpleCombinable, CombinableWithClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinationResultClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::NewProp_CombinableWithClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitInventorySimpleCombinable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::ClassParams = {
		&AAdvKitInventorySimpleCombinable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventorySimpleCombinable_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(AAdvKitInventorySimpleCombinable, 3088489105);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitInventorySimpleCombinable>()
	{
		return AAdvKitInventorySimpleCombinable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitInventorySimpleCombinable(Z_Construct_UClass_AAdvKitInventorySimpleCombinable, &AAdvKitInventorySimpleCombinable::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitInventorySimpleCombinable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitInventorySimpleCombinable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

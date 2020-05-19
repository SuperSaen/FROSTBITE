// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotify_SetItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_SetItem() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_SetItem_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_SetItem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
// End Cross Module References
	void UAnimNotify_SetItem::StaticRegisterNativesUAnimNotify_SetItem()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_SetItem_NoRegister()
	{
		return UAnimNotify_SetItem::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_SetItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstant_MetaData[];
#endif
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_SetItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetItem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Set Item" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotify_SetItem.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_NewItem_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditCondition", "bSetLocation" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetItem.h" },
		{ "ToolTip", "Item to change to" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_NewItem = { UE4CodeGen_Private::EPropertyClass::Class, "NewItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_SetItem, NewItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_NewItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_NewItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetItem.h" },
		{ "ToolTip", "Change to the new item instantly" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((UAnimNotify_SetItem*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimNotify_SetItem), &Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_SetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_NewItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetItem_Statics::NewProp_bInstant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_SetItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_SetItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_SetItem_Statics::ClassParams = {
		&UAnimNotify_SetItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000120A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimNotify_SetItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_SetItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_SetItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_SetItem, 2555388441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_SetItem(Z_Construct_UClass_UAnimNotify_SetItem, &UAnimNotify_SetItem::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotify_SetItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_SetItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

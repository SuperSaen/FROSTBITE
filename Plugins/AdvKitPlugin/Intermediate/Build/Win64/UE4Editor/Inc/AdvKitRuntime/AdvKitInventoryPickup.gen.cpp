// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitInventoryPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitInventoryPickup() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryPickup_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryPickup();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPickup();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
// End Cross Module References
	void AAdvKitInventoryPickup::StaticRegisterNativesAAdvKitInventoryPickup()
	{
	}
	UClass* Z_Construct_UClass_AAdvKitInventoryPickup_NoRegister()
	{
		return AAdvKitInventoryPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitInventoryPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedInventoryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnedInventoryClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitInventoryPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Inventory pickups spawn items when overlapped or used by the character and add it to \n * the character's inventory.\n */" },
		{ "IncludePath", "Items/AdvKitInventoryPickup.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryPickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Inventory pickups spawn items when overlapped or used by the character and add it to\nthe character's inventory." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryPickup_Statics::NewProp_SpawnedInventoryClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The item that is spawned for the character on pickup. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryPickup.h" },
		{ "ToolTip", "The item that is spawned for the character on pickup." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitInventoryPickup_Statics::NewProp_SpawnedInventoryClass = { "SpawnedInventoryClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryPickup, SpawnedInventoryClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryPickup_Statics::NewProp_SpawnedInventoryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryPickup_Statics::NewProp_SpawnedInventoryClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitInventoryPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryPickup_Statics::NewProp_SpawnedInventoryClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitInventoryPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitInventoryPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitInventoryPickup_Statics::ClassParams = {
		&AAdvKitInventoryPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvKitInventoryPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitInventoryPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitInventoryPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitInventoryPickup, 2090553777);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitInventoryPickup>()
	{
		return AAdvKitInventoryPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitInventoryPickup(Z_Construct_UClass_AAdvKitInventoryPickup, &AAdvKitInventoryPickup::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitInventoryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitInventoryPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

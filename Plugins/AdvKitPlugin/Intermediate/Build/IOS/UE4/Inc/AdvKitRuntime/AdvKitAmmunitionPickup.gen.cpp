// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitAmmunitionPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitAmmunitionPickup() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitAmmunitionPickup_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitAmmunitionPickup();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPickup();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AAdvKitAmmunitionPickup::StaticRegisterNativesAAdvKitAmmunitionPickup()
	{
	}
	UClass* Z_Construct_UClass_AAdvKitAmmunitionPickup_NoRegister()
	{
		return AAdvKitAmmunitionPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammunition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammunition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmuntionForWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AmmuntionForWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/AdvKitAmmunitionPickup.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitAmmunitionPickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Pickup class that provides ammunition for a specified weapon class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/AdvKitAmmunitionPickup.h" },
		{ "ToolTip", "How much ammunition the pickup gives." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition = { UE4CodeGen_Private::EPropertyClass::Int, "Ammunition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AAdvKitAmmunitionPickup, Ammunition), METADATA_PARAMS(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/AdvKitAmmunitionPickup.h" },
		{ "ToolTip", "The weapon this supply is for." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon = { UE4CodeGen_Private::EPropertyClass::Class, "AmmuntionForWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000015, 1, nullptr, STRUCT_OFFSET(AAdvKitAmmunitionPickup, AmmuntionForWeapon), Z_Construct_UClass_AAdvKitWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitAmmunitionPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::ClassParams = {
		&AAdvKitAmmunitionPickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitAmmunitionPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitAmmunitionPickup, 1231149784);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitAmmunitionPickup(Z_Construct_UClass_AAdvKitAmmunitionPickup, &AAdvKitAmmunitionPickup::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitAmmunitionPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitAmmunitionPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
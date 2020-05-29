// Copyright Epic Games, Inc. All Rights Reserved.
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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitWeapon_NoRegister();
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
		{ "Comment", "/**\n * @brief Pickup class that provides ammunition for a specified weapon class.\n */" },
		{ "IncludePath", "Items/AdvKitAmmunitionPickup.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitAmmunitionPickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Pickup class that provides ammunition for a specified weapon class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** How much ammunition the pickup gives. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitAmmunitionPickup.h" },
		{ "ToolTip", "How much ammunition the pickup gives." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition = { "Ammunition", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitAmmunitionPickup, Ammunition), METADATA_PARAMS(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The weapon this supply is for. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitAmmunitionPickup.h" },
		{ "ToolTip", "The weapon this supply is for." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon = { "AmmuntionForWeapon", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitAmmunitionPickup, AmmuntionForWeapon), Z_Construct_UClass_AAdvKitWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_Ammunition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::NewProp_AmmuntionForWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitAmmunitionPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::ClassParams = {
		&AAdvKitAmmunitionPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitAmmunitionPickup_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(AAdvKitAmmunitionPickup, 2929222994);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitAmmunitionPickup>()
	{
		return AAdvKitAmmunitionPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitAmmunitionPickup(Z_Construct_UClass_AAdvKitAmmunitionPickup, &AAdvKitAmmunitionPickup::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitAmmunitionPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitAmmunitionPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

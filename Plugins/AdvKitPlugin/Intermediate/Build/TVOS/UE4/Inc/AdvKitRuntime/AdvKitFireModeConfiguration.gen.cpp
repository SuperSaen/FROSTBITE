// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitFireModeConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitFireModeConfiguration() {}
// Cross Module References
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitRifleFireType();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitFireModeConfiguration_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitFireModeConfiguration();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* EAdvKitRifleFireType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvKitRuntime_EAdvKitRifleFireType, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("EAdvKitRifleFireType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdvKitRifleFireType(EAdvKitRifleFireType_StaticEnum, TEXT("/Script/AdvKitRuntime"), TEXT("EAdvKitRifleFireType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvKitRuntime_EAdvKitRifleFireType_CRC() { return 1116989727U; }
	UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitRifleFireType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdvKitRifleFireType"), 0, Get_Z_Construct_UEnum_AdvKitRuntime_EAdvKitRifleFireType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdvKitRifleFireType::InstantHit", (int64)EAdvKitRifleFireType::InstantHit },
				{ "EAdvKitRifleFireType::Projectile", (int64)EAdvKitRifleFireType::Projectile },
				{ "EAdvKitRifleFireType::Custom", (int64)EAdvKitRifleFireType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
				{ "ToolTip", "@brief Types of firing that are handled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAdvKitRifleFireType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAdvKitRifleFireType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAdvKitFireModeConfiguration::StaticRegisterNativesUAdvKitFireModeConfiguration()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitFireModeConfiguration_NoRegister()
	{
		return UAdvKitFireModeConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantDamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InstantDamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstantDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefireTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefireTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRefire_MetaData[];
#endif
		static void NewProp_bShouldRefire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRefire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToFire_MetaData[];
#endif
		static void NewProp_bWantsToFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireOnStop_MetaData[];
#endif
		static void NewProp_bFireOnStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireOnStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmunitionPerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmunitionPerShot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/AdvKitFireModeConfiguration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Configuration to hold values for firing @see AAdvKitWeapon." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Which fire type this mode is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType = { UE4CodeGen_Private::EPropertyClass::Enum, "FireType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, FireType), Z_Construct_UEnum_AdvKitRuntime_EAdvKitRifleFireType, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamageTypeClass_MetaData[] = {
		{ "Category", "Fire | Instant" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "The type of damage to apply for instant hits" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamageTypeClass = { UE4CodeGen_Private::EPropertyClass::Class, "InstantDamageTypeClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, InstantDamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamageTypeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamage_MetaData[] = {
		{ "Category", "Fire | Instant" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "How much damage is caused per instant hit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamage = { UE4CodeGen_Private::EPropertyClass::Float, "InstantDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, InstantDamage), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Fire | Instant" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Trace length for projectile and instant hit mode" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_TraceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TraceDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_TraceDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Fire | Projectile" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Montage to play on the character that is firing the weapon" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, ProjectileClass), Z_Construct_UClass_AAdvKitProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_CharacterFireMontage_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Montage to play on the character that is firing the weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_CharacterFireMontage = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterFireMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, CharacterFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_CharacterFireMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_CharacterFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_RefireTime_MetaData[] = {
		{ "Category", "State" },
		{ "EditCondition", "!bFireOnStop" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "How long to wait between firing (in Seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_RefireTime = { UE4CodeGen_Private::EPropertyClass::Float, "RefireTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, RefireTime), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_RefireTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_RefireTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire_MetaData[] = {
		{ "Category", "State" },
		{ "EditCondition", "!bFireOnStop" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Can this weapon refire?" },
	};
#endif
	void Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire_SetBit(void* Obj)
	{
		((UAdvKitFireModeConfiguration*)Obj)->bShouldRefire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldRefire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitFireModeConfiguration), &Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Does this mode want to fire, even if it cannot yet?" },
	};
#endif
	void Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire_SetBit(void* Obj)
	{
		((UAdvKitFireModeConfiguration*)Obj)->bWantsToFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsToFire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020815, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitFireModeConfiguration), &Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "Only fire for this mode when the trigger is released" },
	};
#endif
	void Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop_SetBit(void* Obj)
	{
		((UAdvKitFireModeConfiguration*)Obj)->bFireOnStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireOnStop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvKitFireModeConfiguration), &Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Ammunition" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "How much to spread (in degrees) when shooting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_Spread = { UE4CodeGen_Private::EPropertyClass::Float, "Spread", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, Spread), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_Spread_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_AmmunitionPerShot_MetaData[] = {
		{ "Category", "Ammunition" },
		{ "ModuleRelativePath", "Public/Items/AdvKitFireModeConfiguration.h" },
		{ "ToolTip", "How much ammunition is consumed per shot" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_AmmunitionPerShot = { UE4CodeGen_Private::EPropertyClass::Int, "AmmunitionPerShot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAdvKitFireModeConfiguration, AmmunitionPerShot), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_AmmunitionPerShot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_AmmunitionPerShot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_FireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_InstantDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_CharacterFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_RefireTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bShouldRefire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bWantsToFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_bFireOnStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::NewProp_AmmunitionPerShot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitFireModeConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::ClassParams = {
		&UAdvKitFireModeConfiguration::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitFireModeConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitFireModeConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitFireModeConfiguration, 1960246038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitFireModeConfiguration(Z_Construct_UClass_UAdvKitFireModeConfiguration, &UAdvKitFireModeConfiguration::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitFireModeConfiguration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitFireModeConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
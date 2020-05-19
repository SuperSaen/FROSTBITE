// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotifyState_AdvKitDodge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_AdvKitDodge() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotifyState_AdvKitDodge();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UAnimNotifyState_AdvKitDodge::StaticRegisterNativesUAnimNotifyState_AdvKitDodge()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_NoRegister()
	{
		return UAnimNotifyState_AdvKitDodge::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DodgeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DodgeSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Dodge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeed_MetaData[] = {
		{ "Category", "Dodge" },
		{ "Comment", "/** How fast to dodge (gets multiplied by the dodge speed curve) */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ToolTip", "How fast to dodge (gets multiplied by the dodge speed curve)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeed = { "DodgeSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_AdvKitDodge, DodgeSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeAlpha_MetaData[] = {
		{ "Category", "Dodge" },
		{ "Comment", "/** Current progress of the dodging */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ToolTip", "Current progress of the dodging" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeAlpha = { "DodgeAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_AdvKitDodge, DodgeAlpha), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDuration_MetaData[] = {
		{ "Category", "Dodge" },
		{ "Comment", "/** How long to dodge in seconds */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ToolTip", "How long to dodge in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDuration = { "DodgeDuration", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_AdvKitDodge, DodgeDuration), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDirection_MetaData[] = {
		{ "Category", "Dodge" },
		{ "Comment", "/** Direction in which to dodge */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ToolTip", "Direction in which to dodge" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDirection = { "DodgeDirection", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_AdvKitDodge, DodgeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeedCurve_MetaData[] = {
		{ "Category", "Dodge" },
		{ "Comment", "/** This curve handles the percentage of dodge speed at which to dodge at a given time */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_AdvKitDodge.h" },
		{ "ToolTip", "This curve handles the percentage of dodge speed at which to dodge at a given time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeedCurve = { "DodgeSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_AdvKitDodge, DodgeSpeedCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::NewProp_DodgeSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_AdvKitDodge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::ClassParams = {
		&UAnimNotifyState_AdvKitDodge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_AdvKitDodge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_AdvKitDodge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_AdvKitDodge, 3138356703);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAnimNotifyState_AdvKitDodge>()
	{
		return UAnimNotifyState_AdvKitDodge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_AdvKitDodge(Z_Construct_UClass_UAnimNotifyState_AdvKitDodge, &UAnimNotifyState_AdvKitDodge::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotifyState_AdvKitDodge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_AdvKitDodge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

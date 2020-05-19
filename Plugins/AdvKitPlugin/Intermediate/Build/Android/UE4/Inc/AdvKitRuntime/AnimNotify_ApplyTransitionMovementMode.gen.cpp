// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotify_ApplyTransitionMovementMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ApplyTransitionMovementMode() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
// End Cross Module References
	void UAnimNotify_ApplyTransitionMovementMode::StaticRegisterNativesUAnimNotify_ApplyTransitionMovementMode()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_NoRegister()
	{
		return UAnimNotify_ApplyTransitionMovementMode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackCustomMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FallbackCustomMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FallbackMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FallbackMovementMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Apply Transition Movement Mode" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotify_ApplyTransitionMovementMode.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_ApplyTransitionMovementMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackCustomMovementMode_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_ApplyTransitionMovementMode.h" },
		{ "ToolTip", "Fall back to this custom mode in case there is no transition" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackCustomMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "FallbackCustomMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_ApplyTransitionMovementMode, FallbackCustomMovementMode), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackCustomMovementMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackCustomMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_ApplyTransitionMovementMode.h" },
		{ "ToolTip", "Fall back to this mode in case there is no transition" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "FallbackMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_ApplyTransitionMovementMode, FallbackMovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackCustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::NewProp_FallbackMovementMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ApplyTransitionMovementMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::ClassParams = {
		&UAnimNotify_ApplyTransitionMovementMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000120A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_ApplyTransitionMovementMode, 36773746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_ApplyTransitionMovementMode(Z_Construct_UClass_UAnimNotify_ApplyTransitionMovementMode, &UAnimNotify_ApplyTransitionMovementMode::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotify_ApplyTransitionMovementMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ApplyTransitionMovementMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

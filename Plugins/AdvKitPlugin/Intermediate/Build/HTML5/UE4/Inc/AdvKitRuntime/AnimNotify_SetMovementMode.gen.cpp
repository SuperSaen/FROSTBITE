// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotify_SetMovementMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_SetMovementMode() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_SetMovementMode_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_SetMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
// End Cross Module References
	void UAnimNotify_SetMovementMode::StaticRegisterNativesUAnimNotify_SetMovementMode()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_SetMovementMode_NoRegister()
	{
		return UAnimNotify_SetMovementMode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Set Movement Mode" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotify_SetMovementMode.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetMovementMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_CustomMovementMode_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetMovementMode.h" },
		{ "ToolTip", "The new custom movement mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_CustomMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_SetMovementMode, CustomMovementMode), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_CustomMovementMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_CustomMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetMovementMode.h" },
		{ "ToolTip", "The new movement mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_SetMovementMode, MovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_CustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::NewProp_MovementMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_SetMovementMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::ClassParams = {
		&UAnimNotify_SetMovementMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000120A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_SetMovementMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_SetMovementMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_SetMovementMode, 3397047181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_SetMovementMode(Z_Construct_UClass_UAnimNotify_SetMovementMode, &UAnimNotify_SetMovementMode::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotify_SetMovementMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_SetMovementMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
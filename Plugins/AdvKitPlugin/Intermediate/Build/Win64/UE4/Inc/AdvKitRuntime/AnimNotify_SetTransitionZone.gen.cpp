// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotify_SetTransitionZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_SetTransitionZone() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_SetTransitionZone_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_SetTransitionZone();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAnimNotify_SetTransitionZone::StaticRegisterNativesUAnimNotify_SetTransitionZone()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_SetTransitionZone_NoRegister()
	{
		return UAnimNotify_SetTransitionZone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearPendingTransition_MetaData[];
#endif
		static void NewProp_bClearPendingTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearPendingTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyMovementMode_MetaData[];
#endif
		static void NewProp_bApplyMovementMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToZone_MetaData[];
#endif
		static void NewProp_bSnapToZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Set Zone" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotify_SetTransitionZone.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetTransitionZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetTransitionZone.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition_SetBit(void* Obj)
	{
		((UAnimNotify_SetTransitionZone*)Obj)->bClearPendingTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition = { "bClearPendingTransition", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_SetTransitionZone), &Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetTransitionZone.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode_SetBit(void* Obj)
	{
		((UAnimNotify_SetTransitionZone*)Obj)->bApplyMovementMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode = { "bApplyMovementMode", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_SetTransitionZone), &Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_SetTransitionZone.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone_SetBit(void* Obj)
	{
		((UAnimNotify_SetTransitionZone*)Obj)->bSnapToZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone = { "bSnapToZone", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_SetTransitionZone), &Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bClearPendingTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bApplyMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::NewProp_bSnapToZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_SetTransitionZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::ClassParams = {
		&UAnimNotify_SetTransitionZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_SetTransitionZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_SetTransitionZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_SetTransitionZone, 3196836316);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAnimNotify_SetTransitionZone>()
	{
		return UAnimNotify_SetTransitionZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_SetTransitionZone(Z_Construct_UClass_UAnimNotify_SetTransitionZone, &UAnimNotify_SetTransitionZone::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotify_SetTransitionZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_SetTransitionZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

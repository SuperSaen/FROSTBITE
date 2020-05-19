// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotify_OrientToZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_OrientToZone() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_OrientToZone_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_OrientToZone();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UAnimNotify_OrientToZone::StaticRegisterNativesUAnimNotify_OrientToZone()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_OrientToZone_NoRegister()
	{
		return UAnimNotify_OrientToZone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_OrientToZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetRotation_MetaData[];
#endif
		static void NewProp_bSetRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetLocation_MetaData[];
#endif
		static void NewProp_bSetLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Orient To Zone" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotify_OrientToZone.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_OrientToZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditCondition", "bSetRotation" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_OrientToZone.h" },
		{ "ToolTip", "Relative rotation to set" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_OrientToZone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_OrientToZone.h" },
		{ "ToolTip", "Whether to set a relative rotation" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation_SetBit(void* Obj)
	{
		((UAnimNotify_OrientToZone*)Obj)->bSetRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation = { "bSetRotation", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_OrientToZone), &Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditCondition", "bSetLocation" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_OrientToZone.h" },
		{ "ToolTip", "Relative location to set" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_OrientToZone, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotify_OrientToZone.h" },
		{ "ToolTip", "Whether to set a relative location" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation_SetBit(void* Obj)
	{
		((UAnimNotify_OrientToZone*)Obj)->bSetLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation = { "bSetLocation", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_OrientToZone), &Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::NewProp_bSetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_OrientToZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::ClassParams = {
		&UAnimNotify_OrientToZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_OrientToZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_OrientToZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_OrientToZone, 368583175);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAnimNotify_OrientToZone>()
	{
		return UAnimNotify_OrientToZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_OrientToZone(Z_Construct_UClass_UAnimNotify_OrientToZone, &UAnimNotify_OrientToZone::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotify_OrientToZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_OrientToZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

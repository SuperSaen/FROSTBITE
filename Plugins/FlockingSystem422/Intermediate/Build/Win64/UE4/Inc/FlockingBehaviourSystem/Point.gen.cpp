// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlockingBehaviourSystem/Public/Point.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoint() {}
// Cross Module References
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_APoint_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_APoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FlockingBehaviourSystem();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APoint::StaticRegisterNativesAPoint()
	{
	}
	UClass* Z_Construct_UClass_APoint_NoRegister()
	{
		return APoint::StaticClass();
	}
	struct Z_Construct_UClass_APoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Input Actor LOD Cooking Replication Collision" },
		{ "IncludePath", "Point.h" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Point.h" },
		{ "ToolTip", "Show the billboard in editor?" },
	};
#endif
	void Z_Construct_UClass_APoint_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((APoint*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APoint), &Z_Construct_UClass_APoint_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_bVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_OwningGoal_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Owned By" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_OwningGoal = { "OwningGoal", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoint, OwningGoal), Z_Construct_UClass_AGoal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_OwningGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_OwningGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoint, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_BillboardComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoint, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_bVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_OwningGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APoint_Statics::ClassParams = {
		&APoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APoint, 3834465484);
	template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<APoint>()
	{
		return APoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APoint(Z_Construct_UClass_APoint, &APoint::StaticClass, TEXT("/Script/FlockingBehaviourSystem"), TEXT("APoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

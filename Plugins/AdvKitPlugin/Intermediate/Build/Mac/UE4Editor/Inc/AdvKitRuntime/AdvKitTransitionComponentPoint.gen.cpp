// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/Transitions/AdvKitTransitionComponentPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTransitionComponentPoint() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentPoint_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentPoint();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBasedPosition();
// End Cross Module References
	void UAdvKitTransitionComponentPoint::StaticRegisterNativesUAdvKitTransitionComponentPoint()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentPoint_NoRegister()
	{
		return UAdvKitTransitionComponentPoint::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Component Activation" },
		{ "IncludePath", "Environment/Transitions/AdvKitTransitionComponentPoint.h" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentPoint.h" },
		{ "ToolTip", "@brief Transition that is a straight line defined by a start and end point." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_SourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentPoint.h" },
		{ "ToolTip", "Based position on the start zone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_SourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentPoint, SourcePosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_SourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_SourcePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentPoint.h" },
		{ "ToolTip", "Based position on the target zone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_TargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentPoint, TargetPosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_TargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_TargetPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_SourcePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::NewProp_TargetPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTransitionComponentPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::ClassParams = {
		&UAdvKitTransitionComponentPoint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTransitionComponentPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTransitionComponentPoint, 2033416792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTransitionComponentPoint(Z_Construct_UClass_UAdvKitTransitionComponentPoint, &UAdvKitTransitionComponentPoint::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTransitionComponentPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTransitionComponentPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

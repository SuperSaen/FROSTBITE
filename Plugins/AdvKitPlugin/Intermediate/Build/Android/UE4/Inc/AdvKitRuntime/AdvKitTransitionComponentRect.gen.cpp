// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/Transitions/AdvKitTransitionComponentRect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTransitionComponentRect() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentRect_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentRect();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBasedPosition();
// End Cross Module References
	void UAdvKitTransitionComponentRect::StaticRegisterNativesUAdvKitTransitionComponentRect()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentRect_NoRegister()
	{
		return UAdvKitTransitionComponentRect::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxTargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSourcePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxSourcePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinTargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSourcePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinSourcePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Component Activation" },
		{ "IncludePath", "Environment/Transitions/AdvKitTransitionComponentRect.h" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentRect.h" },
		{ "ToolTip", "@brief Transition that is an area between two defined lines on the source and target zone." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxTargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentRect.h" },
		{ "ToolTip", "Right end of the transition (inside of the target zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxTargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentRect, MaxTargetPosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxTargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxSourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentRect.h" },
		{ "ToolTip", "Right start of the transition (inside the source zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxSourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxSourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentRect, MaxSourcePosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxSourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxSourcePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinTargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentRect.h" },
		{ "ToolTip", "Left end of the transition line (inside of the target zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinTargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MinTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentRect, MinTargetPosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinTargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinSourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentRect.h" },
		{ "ToolTip", "Left start of the transition line(inside the source zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinSourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MinSourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentRect, MinSourcePosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinSourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinSourcePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MaxSourcePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::NewProp_MinSourcePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTransitionComponentRect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::ClassParams = {
		&UAdvKitTransitionComponentRect::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentRect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTransitionComponentRect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTransitionComponentRect, 1090831267);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTransitionComponentRect(Z_Construct_UClass_UAdvKitTransitionComponentRect, &UAdvKitTransitionComponentRect::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTransitionComponentRect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTransitionComponentRect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

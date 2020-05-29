// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/Transitions/AdvKitTransitionComponentLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTransitionComponentLine() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentLine_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentLine();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBasedPosition();
// End Cross Module References
	void UAdvKitTransitionComponentLine::StaticRegisterNativesUAdvKitTransitionComponentLine()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentLine_NoRegister()
	{
		return UAdvKitTransitionComponentLine::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics
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
	UObject* (*const Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Transition that is an area between two defined lines on the source and target zone. \n */" },
		{ "HideCategories", "Component Activation" },
		{ "IncludePath", "Environment/Transitions/AdvKitTransitionComponentLine.h" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentLine.h" },
		{ "ToolTip", "@brief Transition that is an area between two defined lines on the source and target zone." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxTargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Right end of the transition (inside of the target zone) */" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentLine.h" },
		{ "ToolTip", "Right end of the transition (inside of the target zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxTargetPosition = { "MaxTargetPosition", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponentLine, MaxTargetPosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxTargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxSourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Right start of the transition (inside the source zone) */" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentLine.h" },
		{ "ToolTip", "Right start of the transition (inside the source zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxSourcePosition = { "MaxSourcePosition", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponentLine, MaxSourcePosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxSourcePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxSourcePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinTargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Left end of the transition line (inside of the target zone) */" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentLine.h" },
		{ "ToolTip", "Left end of the transition line (inside of the target zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinTargetPosition = { "MinTargetPosition", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponentLine, MinTargetPosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinTargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinSourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Left start of the transition line(inside the source zone) */" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentLine.h" },
		{ "ToolTip", "Left start of the transition line(inside the source zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinSourcePosition = { "MinSourcePosition", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponentLine, MinSourcePosition), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinSourcePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinSourcePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MaxSourcePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::NewProp_MinSourcePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTransitionComponentLine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::ClassParams = {
		&UAdvKitTransitionComponentLine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTransitionComponentLine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTransitionComponentLine, 157832355);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitTransitionComponentLine>()
	{
		return UAdvKitTransitionComponentLine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTransitionComponentLine(Z_Construct_UClass_UAdvKitTransitionComponentLine, &UAdvKitTransitionComponentLine::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTransitionComponentLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTransitionComponentLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

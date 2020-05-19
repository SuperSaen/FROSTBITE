// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/Zones/AdvKitZoneRectangle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitZoneRectangle() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZoneRectangle_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZoneRectangle();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AAdvKitZoneRectangle::StaticRegisterNativesAAdvKitZoneRectangle()
	{
		UClass* Class = AAdvKitZoneRectangle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectedHalfExtent", &AAdvKitZoneRectangle::execGetProjectedHalfExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics
	{
		struct AdvKitZoneRectangle_eventGetProjectedHalfExtent_Parms
		{
			FVector HalfExtent;
			FRotator ExtentWorldRotation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneRectangle_eventGetProjectedHalfExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneRectangle_eventGetProjectedHalfExtent_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneRectangle_eventGetProjectedHalfExtent_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_HalfExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::NewProp_HalfExtent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Projects a given character extent onto the rectangle plane.\n\x09 * @param\x09HalfExtent \x09The extent of the character to project\n\x09 * @param\x09""ExtentWorldRotation \x09World rotation of the character.\n\x09 * @return\x09The projected half extent.\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneRectangle.h" },
		{ "ToolTip", "Projects a given character extent onto the rectangle plane.\n@param       HalfExtent      The extent of the character to project\n@param       ExtentWorldRotation     World rotation of the character.\n@return      The projected half extent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZoneRectangle, nullptr, "GetProjectedHalfExtent", nullptr, nullptr, sizeof(AdvKitZoneRectangle_eventGetProjectedHalfExtent_Parms), Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitZoneRectangle_NoRegister()
	{
		return AAdvKitZoneRectangle::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitZoneRectangle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRectMaxBoundary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRectMaxBoundary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRectMinBoundary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRectMinBoundary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitZoneRectangle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitZone,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitZoneRectangle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitZoneRectangle_GetProjectedHalfExtent, "GetProjectedHalfExtent" }, // 4195025522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneRectangle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Implementation of a zone that provides the character with a rectangle defined movement.\n */" },
		{ "IncludePath", "Environment/Zones/AdvKitZoneRectangle.h" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneRectangle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Implementation of a zone that provides the character with a rectangle defined movement." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMaxBoundary_MetaData[] = {
		{ "Category", "Rect" },
		{ "Comment", "/** \"Upper Right\" corner of the rectangle */" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneRectangle.h" },
		{ "ToolTip", "\"Upper Right\" corner of the rectangle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMaxBoundary = { "LocalRectMaxBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitZoneRectangle, LocalRectMaxBoundary), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMaxBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMaxBoundary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMinBoundary_MetaData[] = {
		{ "Category", "Rect" },
		{ "Comment", "/** \"Lower Left\" corner of the rectangle */" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneRectangle.h" },
		{ "ToolTip", "\"Lower Left\" corner of the rectangle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMinBoundary = { "LocalRectMinBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitZoneRectangle, LocalRectMinBoundary), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMinBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMinBoundary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitZoneRectangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMaxBoundary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZoneRectangle_Statics::NewProp_LocalRectMinBoundary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitZoneRectangle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitZoneRectangle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitZoneRectangle_Statics::ClassParams = {
		&AAdvKitZoneRectangle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitZoneRectangle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneRectangle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitZoneRectangle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitZoneRectangle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitZoneRectangle, 1771233888);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitZoneRectangle>()
	{
		return AAdvKitZoneRectangle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitZoneRectangle(Z_Construct_UClass_AAdvKitZoneRectangle, &AAdvKitZoneRectangle::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitZoneRectangle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitZoneRectangle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

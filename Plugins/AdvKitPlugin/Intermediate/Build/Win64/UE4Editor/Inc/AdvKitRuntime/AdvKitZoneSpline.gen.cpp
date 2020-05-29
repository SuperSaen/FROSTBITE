// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/Zones/AdvKitZoneSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitZoneSpline() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZoneSpline_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZoneSpline();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAdvKitZoneSpline::execGetProjectedHalfExtent)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalDirection);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetProjectedHalfExtent(Z_Param_Out_LocalDirection,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation);
		P_NATIVE_END;
	}
	void AAdvKitZoneSpline::StaticRegisterNativesAAdvKitZoneSpline()
	{
		UClass* Class = AAdvKitZoneSpline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectedHalfExtent", &AAdvKitZoneSpline::execGetProjectedHalfExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics
	{
		struct AdvKitZoneSpline_eventGetProjectedHalfExtent_Parms
		{
			FVector LocalDirection;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneSpline_eventGetProjectedHalfExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneSpline_eventGetProjectedHalfExtent_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneSpline_eventGetProjectedHalfExtent_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_LocalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_LocalDirection = { "LocalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZoneSpline_eventGetProjectedHalfExtent_Parms, LocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_LocalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_LocalDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::NewProp_LocalDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Projects a given character extent onto a line defined by direction.\n\x09 * @param\x09LocalDirection \x09The line's direction to project onto in local space\n\x09 * @param\x09HalfExtent \x09The extent of the character to project\n\x09 * @param\x09""ExtentWorldRotation \x09World rotation of the character.\n\x09 * @return\x09The projected half extent.\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneSpline.h" },
		{ "ToolTip", "Projects a given character extent onto a line defined by direction.\n@param       LocalDirection  The line's direction to project onto in local space\n@param       HalfExtent      The extent of the character to project\n@param       ExtentWorldRotation     World rotation of the character.\n@return      The projected half extent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZoneSpline, nullptr, "GetProjectedHalfExtent", nullptr, nullptr, sizeof(AdvKitZoneSpline_eventGetProjectedHalfExtent_Parms), Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitZoneSpline_NoRegister()
	{
		return AAdvKitZoneSpline::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitZoneSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSplineUpVector_MetaData[];
#endif
		static void NewProp_bUseSplineUpVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSplineUpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainExtentAtEnd_MetaData[];
#endif
		static void NewProp_bConstrainExtentAtEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainExtentAtEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainExtentAtStart_MetaData[];
#endif
		static void NewProp_bConstrainExtentAtStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainExtentAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitZoneSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitZone,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitZoneSpline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitZoneSpline_GetProjectedHalfExtent, "GetProjectedHalfExtent" }, // 3548048330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneSpline_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Implementation of a zone that consists of a straight line defined by a beginning and end point.\n * The character can only move in two directions along the line.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Environment/Zones/AdvKitZoneSpline.h" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Implementation of a zone that consists of a straight line defined by a beginning and end point.\nThe character can only move in two directions along the line." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneSpline.h" },
	};
#endif
	void Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector_SetBit(void* Obj)
	{
		((AAdvKitZoneSpline*)Obj)->bUseSplineUpVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector = { "bUseSplineUpVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitZoneSpline), &Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Whether or not the end of the line is clamped by the character's extent (think it as being a wall). */" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneSpline.h" },
		{ "ToolTip", "Whether or not the end of the line is clamped by the character's extent (think it as being a wall)." },
	};
#endif
	void Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd_SetBit(void* Obj)
	{
		((AAdvKitZoneSpline*)Obj)->bConstrainExtentAtEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd = { "bConstrainExtentAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitZoneSpline), &Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Whether or not the start of the line is clamped by the character's extent (think it as being a wall). */" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneSpline.h" },
		{ "ToolTip", "Whether or not the start of the line is clamped by the character's extent (think it as being a wall)." },
	};
#endif
	void Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart_SetBit(void* Obj)
	{
		((AAdvKitZoneSpline*)Obj)->bConstrainExtentAtStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart = { "bConstrainExtentAtStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitZoneSpline), &Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/* Spline component defining the path the character can use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Environment/Zones/AdvKitZoneSpline.h" },
		{ "ToolTip", "Spline component defining the path the character can use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitZoneSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitZoneSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bUseSplineUpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_bConstrainExtentAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZoneSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitZoneSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitZoneSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitZoneSpline_Statics::ClassParams = {
		&AAdvKitZoneSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitZoneSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneSpline_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitZoneSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZoneSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitZoneSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitZoneSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitZoneSpline, 1988434158);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitZoneSpline>()
	{
		return AAdvKitZoneSpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitZoneSpline(Z_Construct_UClass_AAdvKitZoneSpline, &AAdvKitZoneSpline::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitZoneSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitZoneSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

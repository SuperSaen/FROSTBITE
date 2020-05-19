// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/Transitions/AdvKitTransitionComponentSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTransitionComponentSpline() {}
// Cross Module References
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineTransitionPosition();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBasedPosition();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentSpline_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentSpline();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent();
// End Cross Module References
class UScriptStruct* FSplineTransitionPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSplineTransitionPosition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineTransitionPosition, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("SplineTransitionPosition"), sizeof(FSplineTransitionPosition), Get_Z_Construct_UScriptStruct_FSplineTransitionPosition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineTransitionPosition(FSplineTransitionPosition::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("SplineTransitionPosition"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFSplineTransitionPosition
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFSplineTransitionPosition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineTransitionPosition")),new UScriptStruct::TCppStructOps<FSplineTransitionPosition>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFSplineTransitionPosition;
	struct Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ToolTip", "CollapseCategories)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineTransitionPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSplineTransitionPosition, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_LocalOffset_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_LocalOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSplineTransitionPosition, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_LocalOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_LocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSplineTransitionPosition, Position), Z_Construct_UScriptStruct_FBasedPosition, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_LocalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"SplineTransitionPosition",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSplineTransitionPosition),
		alignof(FSplineTransitionPosition),
		Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineTransitionPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineTransitionPosition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineTransitionPosition"), sizeof(FSplineTransitionPosition), Get_Z_Construct_UScriptStruct_FSplineTransitionPosition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineTransitionPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineTransitionPosition_CRC() { return 103711198U; }
	void UAdvKitTransitionComponentSpline::StaticRegisterNativesUAdvKitTransitionComponentSpline()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentSpline_NoRegister()
	{
		return UAdvKitTransitionComponentSpline::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics
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
	UObject* (*const Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Component Activation" },
		{ "IncludePath", "Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ToolTip", "@brief Transition that is an area between two defined parts of splines on the source and target zone." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxTargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ToolTip", "Right end of the transition (inside of the target zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxTargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000815, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentSpline, MaxTargetPosition), Z_Construct_UScriptStruct_FSplineTransitionPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxTargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxSourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ToolTip", "Right start of the transition (inside the source zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxSourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxSourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000815, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentSpline, MaxSourcePosition), Z_Construct_UScriptStruct_FSplineTransitionPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxSourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxSourcePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinTargetPosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ToolTip", "Left end of the transition line (inside of the target zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinTargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MinTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000815, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentSpline, MinTargetPosition), Z_Construct_UScriptStruct_FSplineTransitionPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinTargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinSourcePosition_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/Environment/Transitions/AdvKitTransitionComponentSpline.h" },
		{ "ToolTip", "Left start of the transition line(inside the source zone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinSourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MinSourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000815, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionComponentSpline, MinSourcePosition), Z_Construct_UScriptStruct_FSplineTransitionPosition, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinSourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinSourcePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MaxSourcePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::NewProp_MinSourcePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTransitionComponentSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::ClassParams = {
		&UAdvKitTransitionComponentSpline::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTransitionComponentSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTransitionComponentSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTransitionComponentSpline, 3331264787);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTransitionComponentSpline(Z_Construct_UClass_UAdvKitTransitionComponentSpline, &UAdvKitTransitionComponentSpline::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTransitionComponentSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTransitionComponentSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

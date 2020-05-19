// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitTraceUtilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTraceUtilityComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTraceUtilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UAdvKitTraceUtilityComponent::StaticRegisterNativesUAdvKitTraceUtilityComponent()
	{
		UClass* Class = UAdvKitTraceUtilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoxTraceMultiBlueprint", &UAdvKitTraceUtilityComponent::execBoxTraceMultiBlueprint },
			{ "BoxTraceMultiForObjectsBlueprint", &UAdvKitTraceUtilityComponent::execBoxTraceMultiForObjectsBlueprint },
			{ "BoxTraceSingleBlueprint", &UAdvKitTraceUtilityComponent::execBoxTraceSingleBlueprint },
			{ "BoxTraceSingleForObjectsBlueprint", &UAdvKitTraceUtilityComponent::execBoxTraceSingleForObjectsBlueprint },
			{ "CapsuleTraceMultiBlueprint", &UAdvKitTraceUtilityComponent::execCapsuleTraceMultiBlueprint },
			{ "CapsuleTraceMultiForObjects", &UAdvKitTraceUtilityComponent::execCapsuleTraceMultiForObjects },
			{ "CapsuleTraceSingleBlueprint", &UAdvKitTraceUtilityComponent::execCapsuleTraceSingleBlueprint },
			{ "CapsuleTraceSingleForObjectsBlueprint", &UAdvKitTraceUtilityComponent::execCapsuleTraceSingleForObjectsBlueprint },
			{ "DrawDebug", &UAdvKitTraceUtilityComponent::execDrawDebug },
			{ "GetEnd", &UAdvKitTraceUtilityComponent::execGetEnd },
			{ "GetStart", &UAdvKitTraceUtilityComponent::execGetStart },
			{ "LineTraceMultiBlueprint", &UAdvKitTraceUtilityComponent::execLineTraceMultiBlueprint },
			{ "LineTraceMultiForObjectsBlueprint", &UAdvKitTraceUtilityComponent::execLineTraceMultiForObjectsBlueprint },
			{ "LineTraceSingleBlueprint", &UAdvKitTraceUtilityComponent::execLineTraceSingleBlueprint },
			{ "LineTraceSingleForObjectBlueprints", &UAdvKitTraceUtilityComponent::execLineTraceSingleForObjectBlueprints },
			{ "SphereTraceMultiBlueprint", &UAdvKitTraceUtilityComponent::execSphereTraceMultiBlueprint },
			{ "SphereTraceMultiForObjectsBlueprint", &UAdvKitTraceUtilityComponent::execSphereTraceMultiForObjectsBlueprint },
			{ "SphereTraceSingleBlueprint", &UAdvKitTraceUtilityComponent::execSphereTraceSingleBlueprint },
			{ "SphereTraceSingleForObjectBlueprints", &UAdvKitTraceUtilityComponent::execSphereTraceSingleForObjectBlueprints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms
		{
			FVector HalfSize;
			FRotator Orientation;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_HalfSize = { UE4CodeGen_Private::EPropertyClass::Struct, "HalfSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_HalfSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiBoxTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns all hits encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param HalfSize           Distance from the center of box along each axis\n@param Orientation    Orientation of the box\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish. The blocking hit will be the last hit, if there was one.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "BoxTraceMultiBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms
		{
			FVector HalfSize;
			FRotator Orientation;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize = { UE4CodeGen_Private::EPropertyClass::Struct, "HalfSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiBoxTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Orientation\n@param HalfSize               Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "BoxTraceMultiForObjectsBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms
		{
			FVector HalfSize;
			FRotator Orientation;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize = { UE4CodeGen_Private::EPropertyClass::Struct, "HalfSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "BoxTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param HalfSize           Distance from the center of box along each axis\n@param Orientation    Orientation of the box\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit                 Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "BoxTraceSingleBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms
		{
			FVector HalfSize;
			FRotator Orientation;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize = { UE4CodeGen_Private::EPropertyClass::Struct, "HalfSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "BoxTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Orientation\n@param HalfSize               Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit                 Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "BoxTraceSingleForObjectsBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms
		{
			float Radius;
			float HalfHeight;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiCapsuleTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns all hits encountered up to and including the first blocking hit.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param Radius         Radius of the capsule to sweep\n@param HalfHeight     Distance from center of capsule to tip of hemisphere endcap.\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "CapsuleTraceMultiBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics
	{
		struct AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms
		{
			float Radius;
			float HalfHeight;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Collision" },
		{ "DisplayName", "MultiCapsuleTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius                Radius of the capsule to sweep\n@param HalfHeight    Distance from center of capsule to tip of hemisphere endcap.\n@param ObjectTypes   Array of Object Types to trace\n@param bTraceComplex True to test against complex collision, false to test against simplified collision.\n@param OutHits               A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                              True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "CapsuleTraceMultiForObjects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms
		{
			float Radius;
			float HalfHeight;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "CapsuleTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param Radius         Radius of the capsule to sweep\n@param HalfHeight     Distance from center of capsule to tip of hemisphere endcap.\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "CapsuleTraceSingleBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms
		{
			float Radius;
			float HalfHeight;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "CapsuleTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius         Radius of the capsule to sweep\n@param HalfHeight     Distance from center of capsule to tip of hemisphere endcap.\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "CapsuleTraceSingleForObjectsBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Draw a debug line to visualize the trace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "DrawDebug", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics
	{
		struct AdvKitTraceUtilityComponent_eventGetEnd_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventGetEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Get the location of the trace end in world space\n@return Trace end location in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "GetEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(AdvKitTraceUtilityComponent_eventGetEnd_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics
	{
		struct AdvKitTraceUtilityComponent_eventGetStart_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventGetStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Get the location of the trace start in world space\n@return Trace start location in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "GetStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(AdvKitTraceUtilityComponent_eventGetStart_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms
		{
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_TraceChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiLineTraceByChannel" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns all hits encountered up to and including the first blocking hit.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param TraceChannel   The channel to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                Properties of the trace hits.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "LineTraceMultiBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms
		{
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiLineTraceForObjects" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "LineTraceMultiForObjectsBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms
		{
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_TraceChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "LineTraceByChannel" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "LineTraceSingleBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics
	{
		struct AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms
		{
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "LineTraceForObjects" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "LineTraceSingleForObjectBlueprints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms
		{
			float Radius;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiSphereTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns all hits encountered up to and including the first blocking hit.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param Radius         Radius of the sphere to sweep\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "SphereTraceMultiBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms
		{
			float Radius;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits = { UE4CodeGen_Private::EPropertyClass::Array, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "MultiSphereTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius         Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "SphereTraceMultiForObjectsBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics
	{
		struct AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms
		{
			float Radius;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "SphereTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param Radius         Radius of the sphere to sweep\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "SphereTraceSingleBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics
	{
		struct AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms
		{
			float Radius;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_OutHit = { UE4CodeGen_Private::EPropertyClass::Struct, "OutHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Trace" },
		{ "DisplayName", "SphereTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius         Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, "SphereTraceSingleForObjectBlueprints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister()
	{
		return UAdvKitTraceUtilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint, "BoxTraceMultiBlueprint" }, // 3089361433
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint, "BoxTraceMultiForObjectsBlueprint" }, // 1813088216
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint, "BoxTraceSingleBlueprint" }, // 2811979533
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint, "BoxTraceSingleForObjectsBlueprint" }, // 3590121888
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint, "CapsuleTraceMultiBlueprint" }, // 3882257009
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects, "CapsuleTraceMultiForObjects" }, // 291186849
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint, "CapsuleTraceSingleBlueprint" }, // 774482299
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint, "CapsuleTraceSingleForObjectsBlueprint" }, // 2027094466
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug, "DrawDebug" }, // 2613479029
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd, "GetEnd" }, // 3996711400
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart, "GetStart" }, // 1015522586
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint, "LineTraceMultiBlueprint" }, // 1195652129
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint, "LineTraceMultiForObjectsBlueprint" }, // 319376782
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint, "LineTraceSingleBlueprint" }, // 3442754782
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints, "LineTraceSingleForObjectBlueprints" }, // 551898636
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint, "SphereTraceMultiBlueprint" }, // 2323767654
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint, "SphereTraceMultiForObjectsBlueprint" }, // 3876747122
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint, "SphereTraceSingleBlueprint" }, // 2906910315
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints, "SphereTraceSingleForObjectBlueprints" }, // 3435446189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Mobility LOD Events Collision Physics Rendering Rendering | Material TextureStreaming Input Lighting Base Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Player/AdvKitTraceUtilityComponent.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief A Utility component to make traces with that are configurable from the editor.\n\nThis component will use it's transformation to do a trace along its X-Axis with the\nlength defined by its TraceLength property." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Thickness when rendering the debug line for the trace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness = { UE4CodeGen_Private::EPropertyClass::Float, "DebugLineThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineThickness), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Color when rendering the debug line for the trace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugLineColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Trace Length for this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength = { UE4CodeGen_Private::EPropertyClass::Float, "TraceLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UAdvKitTraceUtilityComponent, TraceLength), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTraceUtilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::ClassParams = {
		&UAdvKitTraceUtilityComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTraceUtilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTraceUtilityComponent, 696332799);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTraceUtilityComponent(Z_Construct_UClass_UAdvKitTraceUtilityComponent, &UAdvKitTraceUtilityComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTraceUtilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTraceUtilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

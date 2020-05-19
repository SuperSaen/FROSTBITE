// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_Orientation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a box along the given line and returns all hits encountered.\n\x09* This trace finds the objects that RESPONDS to the given TraceChannel\n\x09*\n\x09* @param HalfSize\x09    Distance from the center of box along each axis\n\x09* @param Orientation\x09Orientation of the box\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09""A list of hits, sorted along the trace from start to finish. The blocking hit will be the last hit, if there was one.\n\x09* @return\x09\x09\x09\x09True if there was a blocking hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiBoxTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns all hits encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param HalfSize           Distance from the center of box along each axis\n@param Orientation    Orientation of the box\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish. The blocking hit will be the last hit, if there was one.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "BoxTraceMultiBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData)) };
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
		{ "Comment", "/**\n\x09* Sweeps a box along the given line and returns all hits encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param Orientation\n\x09* @param HalfSize\x09\x09Radius of the sphere to sweep\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09""A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiBoxTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Orientation\n@param HalfSize               Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "BoxTraceMultiForObjectsBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceMultiForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::NewProp_HalfSize_MetaData)) };
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
		{ "Comment", "/**\n\x09* Sweeps a box along the given line and returns the first blocking hit encountered.\n\x09* This trace finds the objects that RESPONDS to the given TraceChannel\n\x09*\n\x09* @param HalfSize\x09    Distance from the center of box along each axis\n\x09* @param Orientation\x09Orientation of the box\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "BoxTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param HalfSize           Distance from the center of box along each axis\n@param Orientation    Orientation of the box\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit                 Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "BoxTraceSingleBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::NewProp_HalfSize_MetaData)) };
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
		{ "Comment", "/**\n\x09* Sweeps a box along the given line and returns the first hit encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param Orientation\n\x09* @param HalfSize\x09\x09Radius of the sphere to sweep\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "BoxTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a box along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Orientation\n@param HalfSize               Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit                 Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "BoxTraceSingleForObjectsBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventBoxTraceSingleForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a capsule along the given line and returns all hits encountered up to and including the first blocking hit.\n\x09* This trace finds the objects that RESPOND to the given TraceChannel\n\x09*\n\x09* @param Radius\x09\x09Radius of the capsule to sweep\n\x09* @param HalfHeight\x09""Distance from center of capsule to tip of hemisphere endcap.\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09""A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n\x09* @return\x09\x09\x09\x09True if there was a blocking hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiCapsuleTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns all hits encountered up to and including the first blocking hit.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param Radius         Radius of the capsule to sweep\n@param HalfHeight     Distance from center of capsule to tip of hemisphere endcap.\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "CapsuleTraceMultiBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09 * Sweeps a capsule along the given line and returns all hits encountered.\n\x09 * This only finds objects that are of a type specified by ObjectTypes.\n\x09 * \n\x09 * @param Radius\x09\x09Radius of the capsule to sweep\n\x09 * @param HalfHeight\x09""Distance from center of capsule to tip of hemisphere endcap.\n\x09 * @param ObjectTypes\x09""Array of Object Types to trace \n\x09 * @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09 * @param OutHits\x09\x09""A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n\x09 * @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09 */" },
		{ "DisplayName", "MultiCapsuleTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius                Radius of the capsule to sweep\n@param HalfHeight    Distance from center of capsule to tip of hemisphere endcap.\n@param ObjectTypes   Array of Object Types to trace\n@param bTraceComplex True to test against complex collision, false to test against simplified collision.\n@param OutHits               A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                              True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "CapsuleTraceMultiForObjects", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceMultiForObjects_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a capsule along the given line and returns the first blocking hit encountered.\n\x09* This trace finds the objects that RESPOND to the given TraceChannel\n\x09*\n\x09* @param Radius\x09\x09Radius of the capsule to sweep\n\x09* @param HalfHeight\x09""Distance from center of capsule to tip of hemisphere endcap.\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "CapsuleTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param Radius         Radius of the capsule to sweep\n@param HalfHeight     Distance from center of capsule to tip of hemisphere endcap.\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "CapsuleTraceSingleBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a capsule along the given line and returns the first hit encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param Radius\x09\x09Radius of the capsule to sweep\n\x09* @param HalfHeight\x09""Distance from center of capsule to tip of hemisphere endcap.\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "CapsuleTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a capsule along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius         Radius of the capsule to sweep\n@param HalfHeight     Distance from center of capsule to tip of hemisphere endcap.\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "CapsuleTraceSingleForObjectsBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventCapsuleTraceSingleForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint_Statics::Function_MetaDataParams)) };
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
		{ "Comment", "/**\n\x09 * Draw a debug line to visualize the trace\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Draw a debug line to visualize the trace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "DrawDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventGetEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace" },
		{ "Comment", "/**\n\x09 * Get the location of the trace end in world space\n\x09 * @return Trace end location in world space\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Get the location of the trace end in world space\n@return Trace end location in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "GetEnd", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventGetEnd_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventGetStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trace" },
		{ "Comment", "/**\n\x09 * Get the location of the trace start in world space\n\x09 * @return Trace start location in world space\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Get the location of the trace start in world space\n@return Trace start location in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "GetStart", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventGetStart_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Does a collision trace along the given line and returns all hits encountered up to and including the first blocking hit.\n\x09* This trace finds the objects that RESPOND to the given TraceChannel\n\x09*\n\x09* @param TraceChannel\x09The channel to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09Properties of the trace hits.\n\x09* @return\x09\x09\x09\x09True if there was a blocking hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiLineTraceByChannel" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns all hits encountered up to and including the first blocking hit.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param TraceChannel   The channel to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                Properties of the trace hits.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "LineTraceMultiBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Does a collision trace along the given line and returns all hits encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiLineTraceForObjects" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "LineTraceMultiForObjectsBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventLineTraceMultiForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Does a collision trace along the given line and returns the first blocking hit encountered.\n\x09* This trace finds the objects that RESPONDS to the given TraceChannel\n\x09*\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "LineTraceByChannel" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "LineTraceSingleBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Does a collision trace along the given line and returns the first hit encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "LineTraceForObjects" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "LineTraceSingleForObjectBlueprints", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventLineTraceSingleForObjectBlueprints_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a sphere along the given line and returns all hits encountered up to and including the first blocking hit.\n\x09* This trace finds the objects that RESPOND to the given TraceChannel\n\x09*\n\x09* @param Radius\x09\x09Radius of the sphere to sweep\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09""A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n\x09* @return\x09\x09\x09\x09True if there was a blocking hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiSphereTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns all hits encountered up to and including the first blocking hit.\nThis trace finds the objects that RESPOND to the given TraceChannel\n\n@param Radius         Radius of the sphere to sweep\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a blocking hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "SphereTraceMultiBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, OutHits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a sphere along the given line and returns all hits encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param Radius\x09\x09Radius of the sphere to sweep\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHits\x09\x09""A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "MultiSphereTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns all hits encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius         Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHits                A list of hits, sorted along the trace from start to finish.  The blocking hit will be the last hit, if there was one.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "SphereTraceMultiForObjectsBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceMultiForObjectsBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a sphere along the given line and returns the first blocking hit encountered.\n\x09* This trace finds the objects that RESPONDS to the given TraceChannel\n\x09*\n\x09* @param Radius\x09\x09Radius of the sphere to sweep\n\x09* @param TraceChannel\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "SphereTraceByChannel" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns the first blocking hit encountered.\nThis trace finds the objects that RESPONDS to the given TraceChannel\n\n@param Radius         Radius of the sphere to sweep\n@param TraceChannel\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "SphereTraceSingleBlueprint", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleBlueprint_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, ObjectTypes), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
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
		{ "Comment", "/**\n\x09* Sweeps a sphere along the given line and returns the first hit encountered.\n\x09* This only finds objects that are of a type specified by ObjectTypes.\n\x09*\n\x09* @param Radius\x09\x09Radius of the sphere to sweep\n\x09* @param ObjectTypes\x09""Array of Object Types to trace\n\x09* @param bTraceComplex\x09True to test against complex collision, false to test against simplified collision.\n\x09* @param OutHit\x09\x09Properties of the trace hit.\n\x09* @return\x09\x09\x09\x09True if there was a hit, false otherwise.\n\x09*/" },
		{ "DisplayName", "SphereTraceForObjects" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Sweeps a sphere along the given line and returns the first hit encountered.\nThis only finds objects that are of a type specified by ObjectTypes.\n\n@param Radius         Radius of the sphere to sweep\n@param ObjectTypes    Array of Object Types to trace\n@param bTraceComplex  True to test against complex collision, false to test against simplified collision.\n@param OutHit         Properties of the trace hit.\n@return                               True if there was a hit, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTraceUtilityComponent, nullptr, "SphereTraceSingleForObjectBlueprints", nullptr, nullptr, sizeof(AdvKitTraceUtilityComponent_eventSphereTraceSingleForObjectBlueprints_Parms), Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiBlueprint, "BoxTraceMultiBlueprint" }, // 4146361712
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceMultiForObjectsBlueprint, "BoxTraceMultiForObjectsBlueprint" }, // 1033843756
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleBlueprint, "BoxTraceSingleBlueprint" }, // 3738263456
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_BoxTraceSingleForObjectsBlueprint, "BoxTraceSingleForObjectsBlueprint" }, // 2788140026
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiBlueprint, "CapsuleTraceMultiBlueprint" }, // 88602856
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceMultiForObjects, "CapsuleTraceMultiForObjects" }, // 2685630479
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleBlueprint, "CapsuleTraceSingleBlueprint" }, // 1274400818
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_CapsuleTraceSingleForObjectsBlueprint, "CapsuleTraceSingleForObjectsBlueprint" }, // 2958134587
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_DrawDebug, "DrawDebug" }, // 1414389291
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetEnd, "GetEnd" }, // 1442684685
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_GetStart, "GetStart" }, // 2486208056
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiBlueprint, "LineTraceMultiBlueprint" }, // 1536649014
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceMultiForObjectsBlueprint, "LineTraceMultiForObjectsBlueprint" }, // 99008422
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleBlueprint, "LineTraceSingleBlueprint" }, // 2547593462
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_LineTraceSingleForObjectBlueprints, "LineTraceSingleForObjectBlueprints" }, // 2836934411
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiBlueprint, "SphereTraceMultiBlueprint" }, // 3784762240
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceMultiForObjectsBlueprint, "SphereTraceMultiForObjectsBlueprint" }, // 2734871008
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleBlueprint, "SphereTraceSingleBlueprint" }, // 331723000
		{ &Z_Construct_UFunction_UAdvKitTraceUtilityComponent_SphereTraceSingleForObjectBlueprints, "SphereTraceSingleForObjectBlueprints" }, // 2870060799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * @brief A Utility component to make traces with that are configurable from the editor.\n *\n * This component will use it's transformation to do a trace along its X-Axis with the \n * length defined by its TraceLength property.\n */" },
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
		{ "Comment", "/** Thickness when rendering the debug line for the trace*/" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Thickness when rendering the debug line for the trace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness = { "DebugLineThickness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineThickness), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Color when rendering the debug line for the trace*/" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Color when rendering the debug line for the trace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor = { "DebugLineColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_DebugLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Trace Length for this component */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTraceUtilityComponent.h" },
		{ "ToolTip", "Trace Length for this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTraceUtilityComponent, TraceLength), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::NewProp_TraceLength_MetaData)) };
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
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UAdvKitTraceUtilityComponent, 1647457858);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitTraceUtilityComponent>()
	{
		return UAdvKitTraceUtilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTraceUtilityComponent(Z_Construct_UClass_UAdvKitTraceUtilityComponent, &UAdvKitTraceUtilityComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTraceUtilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTraceUtilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

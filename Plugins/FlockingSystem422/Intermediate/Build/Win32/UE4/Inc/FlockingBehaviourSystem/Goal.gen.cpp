// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlockingBehaviourSystem/Public/Goal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoal() {}
// Cross Module References
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGoalSettings();
	UPackage* Z_Construct_UPackage__Script_FlockingBehaviourSystem();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_APoint_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDebugVariables_Goal();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AGoal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FGoalSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FGoalSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoalSettings, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("GoalSettings"), sizeof(FGoalSettings), Get_Z_Construct_UScriptStruct_FGoalSettings_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FGoalSettings>()
{
	return FGoalSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoalSettings(FGoalSettings::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("GoalSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFGoalSettings
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFGoalSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoalSettings")),new UScriptStruct::TCppStructOps<FGoalSettings>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFGoalSettings;
	struct Z_Construct_UScriptStruct_FGoalSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoalLocations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnNewPointWhenAddingToArray_MetaData[];
#endif
		static void NewProp_bSpawnNewPointWhenAddingToArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnNewPointWhenAddingToArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAtCustomLocation_MetaData[];
#endif
		static void NewProp_bStartAtCustomLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAtCustomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomlyGenerateGoalLocations_MetaData[];
#endif
		static void NewProp_bRandomlyGenerateGoalLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomlyGenerateGoalLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Goal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoalSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoalSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bRandomlyGenerateGoalLocations" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "A list of pre-determined goal locations for the boid to move to. (Will return to first index when completed)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations = { "GoalLocations", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoalSettings, GoalLocations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations_Inner = { "GoalLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bRandomlyGenerateGoalLocations" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Should we spawn a new Point actor when creating a new element of the array?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray_SetBit(void* Obj)
	{
		((FGoalSettings*)Obj)->bSpawnNewPointWhenAddingToArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray = { "bSpawnNewPointWhenAddingToArray", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoalSettings), &Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bStartAtCustomLocation" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "The custom location the goal should start at in world space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoalSettings, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bRandomlyGenerateGoalLocations" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Should we start at a custom location in world space?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation_SetBit(void* Obj)
	{
		((FGoalSettings*)Obj)->bStartAtCustomLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation = { "bStartAtCustomLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoalSettings), &Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bRandomlyGenerateGoalLocations" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Goal locations will generate within the bounds of this box" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoalSettings, Range), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "When boid has reached the goal, should we randomly generate a new location?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations_SetBit(void* Obj)
	{
		((FGoalSettings*)Obj)->bRandomlyGenerateGoalLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations = { "bRandomlyGenerateGoalLocations", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoalSettings), &Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "5.000000" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "The radius in which the boid will accept that it has reached the goal location." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoalSettings, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_AcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_AcceptanceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_GoalLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bSpawnNewPointWhenAddingToArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bStartAtCustomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_bRandomlyGenerateGoalLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSettings_Statics::NewProp_AcceptanceRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoalSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"GoalSettings",
		sizeof(FGoalSettings),
		alignof(FGoalSettings),
		Z_Construct_UScriptStruct_FGoalSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoalSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoalSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoalSettings"), sizeof(FGoalSettings), Get_Z_Construct_UScriptStruct_FGoalSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoalSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoalSettings_Hash() { return 2347477128U; }
class UScriptStruct* FDebugVariables_Goal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDebugVariables_Goal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugVariables_Goal, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("DebugVariables_Goal"), sizeof(FDebugVariables_Goal), Get_Z_Construct_UScriptStruct_FDebugVariables_Goal_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FDebugVariables_Goal>()
{
	return FDebugVariables_Goal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugVariables_Goal(FDebugVariables_Goal::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("DebugVariables_Goal"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFDebugVariables_Goal
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFDebugVariables_Goal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugVariables_Goal")),new UScriptStruct::TCppStructOps<FDebugVariables_Goal>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFDebugVariables_Goal;
	struct Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressRandomPointGeneration_MetaData[];
#endif
		static void NewProp_bSuppressRandomPointGeneration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressRandomPointGeneration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAllPoints_MetaData[];
#endif
		static void NewProp_bShowAllPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAllPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRangeExtent_MetaData[];
#endif
		static void NewProp_bShowRangeExtent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRangeExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPath_MetaData[];
#endif
		static void NewProp_bShowPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAcceptanceRadius_MetaData[];
#endif
		static void NewProp_bShowAcceptanceRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAcceptanceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Goal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugVariables_Goal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Display all points connected to this goal?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration_SetBit(void* Obj)
	{
		((FDebugVariables_Goal*)Obj)->bSuppressRandomPointGeneration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration = { "bSuppressRandomPointGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Goal), &Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Display all points connected to this goal?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints_SetBit(void* Obj)
	{
		((FDebugVariables_Goal*)Obj)->bShowAllPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints = { "bShowAllPoints", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Goal), &Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Display the max range the goal can pick from?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent_SetBit(void* Obj)
	{
		((FDebugVariables_Goal*)Obj)->bShowRangeExtent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent = { "bShowRangeExtent", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Goal), &Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Display the path between points?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath_SetBit(void* Obj)
	{
		((FDebugVariables_Goal*)Obj)->bShowPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath = { "bShowPath", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Goal), &Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Display the acceptance sphere?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius_SetBit(void* Obj)
	{
		((FDebugVariables_Goal*)Obj)->bShowAcceptanceRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius = { "bShowAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Goal), &Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bSuppressRandomPointGeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAllPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowRangeExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::NewProp_bShowAcceptanceRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"DebugVariables_Goal",
		sizeof(FDebugVariables_Goal),
		alignof(FDebugVariables_Goal),
		Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugVariables_Goal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugVariables_Goal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugVariables_Goal"), sizeof(FDebugVariables_Goal), Get_Z_Construct_UScriptStruct_FDebugVariables_Goal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugVariables_Goal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugVariables_Goal_Hash() { return 715239724U; }
	void AGoal::StaticRegisterNativesAGoal()
	{
	}
	UClass* Z_Construct_UClass_AGoal_NoRegister()
	{
		return AGoal::StaticClass();
	}
	struct Z_Construct_UClass_AGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
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
	UObject* (*const Z_Construct_UClass_AGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Input Actor LOD Cooking Replication Collision" },
		{ "IncludePath", "Goal.h" },
		{ "ModuleRelativePath", "Public/Goal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Visualize debug information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoal, Debug), Z_Construct_UScriptStruct_FDebugVariables_Goal, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_Debug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "Adjust goal settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoal, Settings), Z_Construct_UScriptStruct_FGoalSettings, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Goal.h" },
		{ "ToolTip", "The location that the boid will seek towards" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoal, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoal, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoal, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoal_Statics::ClassParams = {
		&AGoal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGoal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoal, 1659181479);
	template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<AGoal>()
	{
		return AGoal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoal(Z_Construct_UClass_AGoal, &AGoal::StaticClass, TEXT("/Script/FlockingBehaviourSystem"), TEXT("AGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

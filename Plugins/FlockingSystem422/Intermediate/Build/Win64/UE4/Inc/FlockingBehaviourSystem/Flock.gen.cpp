// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlockingBehaviourSystem/Public/Flock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlock() {}
// Cross Module References
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFlockSettings();
	UPackage* Z_Construct_UPackage__Script_FlockingBehaviourSystem();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnSettings();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBoidSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AFlock_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AFlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FLOCKINGBEHAVIOURSYSTEM_API UFunction* Z_Construct_UFunction_AFlock_AddBoid();
	FLOCKINGBEHAVIOURSYSTEM_API UFunction* Z_Construct_UFunction_AFlock_ApplyBoidSettings();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UFunction* Z_Construct_UFunction_AFlock_ApplyFlockSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FFlockSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FFlockSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlockSettings, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("FlockSettings"), sizeof(FFlockSettings), Get_Z_Construct_UScriptStruct_FFlockSettings_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FFlockSettings>()
{
	return FFlockSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlockSettings(FFlockSettings::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("FlockSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFFlockSettings
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFFlockSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FlockSettings")),new UScriptStruct::TCppStructOps<FFlockSettings>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFFlockSettings;
	struct Z_Construct_UScriptStruct_FFlockSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalSeekingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GoalSeekingForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGoalSeeking_MetaData[];
#endif
		static void NewProp_bEnableGoalSeeking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGoalSeeking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CohesionForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CohesionForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignmentForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomForces_MetaData[];
#endif
		static void NewProp_bRandomForces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomForces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlockSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlockSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_GoalSeekingForce_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableGoalSeeking" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How strong is the goal seeking force?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_GoalSeekingForce = { "GoalSeekingForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlockSettings, GoalSeekingForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_GoalSeekingForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_GoalSeekingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "DisplayName", "Goal Actor" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The goal actor in the scene that this flock will seek toward." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlockSettings, Goal), Z_Construct_UClass_AGoal_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "DisplayName", "Enable Goal Seeking?" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Enable/Disable the goal seeking behavior?" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking_SetBit(void* Obj)
	{
		((FFlockSettings*)Obj)->bEnableGoalSeeking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking = { "bEnableGoalSeeking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlockSettings), &Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AvoidanceForce_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "3.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "!bRandomForces" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How strong is the obstacle avoidance force? (How easy is it to avoid obstacles?)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AvoidanceForce = { "AvoidanceForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlockSettings, AvoidanceForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AvoidanceForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AvoidanceForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_SeparationForce_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "!bRandomForces" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How strong is the separation force? (How easy is it to separate from other boids?)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_SeparationForce = { "SeparationForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlockSettings, SeparationForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_SeparationForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_SeparationForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_CohesionForce_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "!bRandomForces" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How strong is the cohesion force? (How easy is it to cohere with other boids?)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_CohesionForce = { "CohesionForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlockSettings, CohesionForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_CohesionForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_CohesionForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AlignmentForce_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "!bRandomForces" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How strong is the alignment force? (How easy is it to align with other boids)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AlignmentForce = { "AlignmentForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlockSettings, AlignmentForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AlignmentForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AlignmentForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "DisplayName", "Randomize Forces?" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Randomise all forces at begin play?" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces_SetBit(void* Obj)
	{
		((FFlockSettings*)Obj)->bRandomForces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces = { "bRandomForces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlockSettings), &Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlockSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_GoalSeekingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bEnableGoalSeeking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AvoidanceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_SeparationForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_CohesionForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_AlignmentForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlockSettings_Statics::NewProp_bRandomForces,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlockSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"FlockSettings",
		sizeof(FFlockSettings),
		alignof(FFlockSettings),
		Z_Construct_UScriptStruct_FFlockSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlockSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFlockSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlockSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlockSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlockSettings"), sizeof(FFlockSettings), Get_Z_Construct_UScriptStruct_FFlockSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlockSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlockSettings_Hash() { return 1349813849U; }
class UScriptStruct* FSpawnSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSpawnSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnSettings, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("SpawnSettings"), sizeof(FSpawnSettings), Get_Z_Construct_UScriptStruct_FSpawnSettings_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FSpawnSettings>()
{
	return FSpawnSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnSettings(FSpawnSettings::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("SpawnSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFSpawnSettings
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFSpawnSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnSettings")),new UScriptStruct::TCppStructOps<FSpawnSettings>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFSpawnSettings;
	struct Z_Construct_UScriptStruct_FSpawnSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBoids_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBoids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "2000.000000" },
		{ "ClampMin", "100.000000" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The spawning area that each boid will be randomly placed in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnSettings, SpawnRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_SpawnRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_SpawnRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_NumberOfBoids_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "400" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The amount of boids to spawn for this flock" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_NumberOfBoids = { "NumberOfBoids", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnSettings, NumberOfBoids), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_NumberOfBoids_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_NumberOfBoids_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_SpawnRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSettings_Statics::NewProp_NumberOfBoids,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"SpawnSettings",
		sizeof(FSpawnSettings),
		alignof(FSpawnSettings),
		Z_Construct_UScriptStruct_FSpawnSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnSettings"), sizeof(FSpawnSettings), Get_Z_Construct_UScriptStruct_FSpawnSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnSettings_Hash() { return 1240913918U; }
class UScriptStruct* FBoidSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FBoidSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoidSettings, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("BoidSettings"), sizeof(FBoidSettings), Get_Z_Construct_UScriptStruct_FBoidSettings_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FBoidSettings>()
{
	return FBoidSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoidSettings(FBoidSettings::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("BoidSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFBoidSettings
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFBoidSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoidSettings")),new UScriptStruct::TCppStructOps<FBoidSettings>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFBoidSettings;
	struct Z_Construct_UScriptStruct_FBoidSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneConstraintAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneConstraintAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainToPlane_MetaData[];
#endif
		static void NewProp_bConstrainToPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainToPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WanderDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WanderDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomSpeed_MetaData[];
#endif
		static void NewProp_bRandomSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoidMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoidMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoidMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoidMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoidSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoidSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "EditCondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Restrict movement to a specific axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis = { "PlaneConstraintAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, PlaneConstraintAxis), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Constraint movement to a plane?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane_SetBit(void* Obj)
	{
		((FBoidSettings*)Obj)->bConstrainToPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane = { "bConstrainToPlane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoidSettings), &Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_WanderDistance_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "100000.000000" },
		{ "ClampMin", "1000.000000" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The distance from the spawn location in Unreal units (cm)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_WanderDistance = { "WanderDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, WanderDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_WanderDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_WanderDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "40.000000" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How fast can each boid turn?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, TurnSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_TurnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PerceptionRadius_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "1000.000000" },
		{ "ClampMin", "100.000000" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "How far can each boid see?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PerceptionRadius = { "PerceptionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, PerceptionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PerceptionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PerceptionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "1000.000000" },
		{ "EditCondition", "bRandomSpeed" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The maximum range, when RandomSpeed is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "1000.000000" },
		{ "ClampMin", "100.000000" },
		{ "EditCondition", "bRandomSpeed" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The minimum range, when RandomSpeed is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MinSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "10.000000" },
		{ "EditCondition", "!bRandomSpeed" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The maximum movement speed of each boid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Randomize the speed of each boid?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed_SetBit(void* Obj)
	{
		((FBoidSettings*)Obj)->bRandomSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed = { "bRandomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoidSettings), &Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The default rotation of the mesh (You will need to experiment which way your mesh should face)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ClampMax", "1000.000000" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Scale the mesh by the multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_ScaleMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "The material/s that matches the boid mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials = { "BoidMaterials", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, BoidMaterials), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials_Inner = { "BoidMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMesh_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "DisplayName", "Mesh" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Bitch Lasaga" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMesh = { "BoidMesh", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoidSettings, BoidMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PlaneConstraintAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bConstrainToPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_WanderDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_PerceptionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_bRandomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_ScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BoidMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoidSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"BoidSettings",
		sizeof(FBoidSettings),
		alignof(FBoidSettings),
		Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoidSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoidSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoidSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoidSettings"), sizeof(FBoidSettings), Get_Z_Construct_UScriptStruct_FBoidSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoidSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoidSettings_Hash() { return 510227183U; }
	static FName NAME_AFlock_AddBoid = FName(TEXT("AddBoid"));
	void AFlock::AddBoid()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFlock_AddBoid),NULL);
	}
	void AFlock::StaticRegisterNativesAFlock()
	{
		UClass* Class = AFlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBoid", &AFlock::execAddBoid },
			{ "ApplyBoidSettings", &AFlock::execApplyBoidSettings },
			{ "ApplyFlockSettings", &AFlock::execApplyFlockSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlock_AddBoid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlock_AddBoid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlock_AddBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlock, nullptr, "AddBoid", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlock_AddBoid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFlock_AddBoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlock_AddBoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlock_AddBoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics
	{
		struct Flock_eventApplyBoidSettings_Parms
		{
			ABoid* Boid;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flock_eventApplyBoidSettings_Parms, Boid), Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::NewProp_Boid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlock, nullptr, "ApplyBoidSettings", sizeof(Flock_eventApplyBoidSettings_Parms), Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlock_ApplyBoidSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlock_ApplyBoidSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics
	{
		struct Flock_eventApplyFlockSettings_Parms
		{
			ABoid* Boid;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flock_eventApplyFlockSettings_Parms, Boid), Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::NewProp_Boid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlock, nullptr, "ApplyFlockSettings", sizeof(Flock_eventApplyFlockSettings_Parms), Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlock_ApplyFlockSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlock_ApplyFlockSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlock_NoRegister()
	{
		return AFlock::StaticClass();
	}
	struct Z_Construct_UClass_AFlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlockSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlockSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoidSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoidSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Boids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boids_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlock_AddBoid, "AddBoid" }, // 246366984
		{ &Z_Construct_UFunction_AFlock_ApplyBoidSettings, "ApplyBoidSettings" }, // 1213210827
		{ &Z_Construct_UFunction_AFlock_ApplyFlockSettings, "ApplyFlockSettings" }, // 2458911613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Input Actor LOD Cooking Replication Collision" },
		{ "IncludePath", "Flock.h" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "A flock is an actor that contains 2 or more boids and will flock with each other when they can see one another." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::NewProp_FlockSettings_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Customize the flocking behavior rules" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_FlockSettings = { "FlockSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlock, FlockSettings), Z_Construct_UScriptStruct_FFlockSettings, METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::NewProp_FlockSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::NewProp_FlockSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::NewProp_SpawnSettings_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Specify the spawning rules" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_SpawnSettings = { "SpawnSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlock, SpawnSettings), Z_Construct_UScriptStruct_FSpawnSettings, METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::NewProp_SpawnSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::NewProp_SpawnSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::NewProp_BoidSettings_MetaData[] = {
		{ "Category", "Flock Properties" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Customize boid attributes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_BoidSettings = { "BoidSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlock, BoidSettings), Z_Construct_UScriptStruct_FBoidSettings, METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::NewProp_BoidSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::NewProp_BoidSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlock, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::NewProp_BillboardComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlock, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlock_Statics::NewProp_Boids_MetaData[] = {
		{ "Category", "Boids" },
		{ "ModuleRelativePath", "Public/Flock.h" },
		{ "ToolTip", "Boid Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_Boids = { "Boids", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlock, Boids), METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::NewProp_Boids_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::NewProp_Boids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlock_Statics::NewProp_Boids_Inner = { "Boids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_FlockSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_SpawnSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_BoidSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_Boids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlock_Statics::NewProp_Boids_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlock_Statics::ClassParams = {
		&AFlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlock_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlock, 117999924);
	template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<AFlock>()
	{
		return AFlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlock(Z_Construct_UClass_AFlock, &AFlock::StaticClass, TEXT("/Script/FlockingBehaviourSystem"), TEXT("AFlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

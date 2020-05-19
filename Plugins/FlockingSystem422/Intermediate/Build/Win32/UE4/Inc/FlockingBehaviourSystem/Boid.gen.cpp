// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlockingBehaviourSystem/Public/Boid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoid() {}
// Cross Module References
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviors();
	UPackage* Z_Construct_UPackage__Script_FlockingBehaviourSystem();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAvoidance();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSeparation();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCohesion();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAlignment();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGoalSeeking();
	FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDebugVariables_Boid();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_ABoid();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_AFlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_UBoidMovementComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FBehaviors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FBehaviors_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviors, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("Behaviors"), sizeof(FBehaviors), Get_Z_Construct_UScriptStruct_FBehaviors_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FBehaviors>()
{
	return FBehaviors::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBehaviors(FBehaviors::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("Behaviors"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFBehaviors
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFBehaviors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Behaviors")),new UScriptStruct::TCppStructOps<FBehaviors>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFBehaviors;
	struct Z_Construct_UScriptStruct_FBehaviors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviors_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviors>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"Behaviors",
		sizeof(FBehaviors),
		alignof(FBehaviors),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBehaviors_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Behaviors"), sizeof(FBehaviors), Get_Z_Construct_UScriptStruct_FBehaviors_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBehaviors_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBehaviors_Hash() { return 1148283359U; }
class UScriptStruct* FAvoidance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAvoidance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvoidance, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("Avoidance"), sizeof(FAvoidance), Get_Z_Construct_UScriptStruct_FAvoidance_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FAvoidance>()
{
	return FAvoidance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAvoidance(FAvoidance::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("Avoidance"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFAvoidance
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFAvoidance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Avoidance")),new UScriptStruct::TCppStructOps<FAvoidance>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFAvoidance;
	struct Z_Construct_UScriptStruct_FAvoidance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvoidance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvoidance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvoidance>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvoidance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"Avoidance",
		sizeof(FAvoidance),
		alignof(FAvoidance),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvoidance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvoidance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvoidance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAvoidance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Avoidance"), sizeof(FAvoidance), Get_Z_Construct_UScriptStruct_FAvoidance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAvoidance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAvoidance_Hash() { return 1959717622U; }
class UScriptStruct* FSeparation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSeparation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeparation, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("Separation"), sizeof(FSeparation), Get_Z_Construct_UScriptStruct_FSeparation_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FSeparation>()
{
	return FSeparation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSeparation(FSeparation::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("Separation"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFSeparation
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFSeparation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Separation")),new UScriptStruct::TCppStructOps<FSeparation>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFSeparation;
	struct Z_Construct_UScriptStruct_FSeparation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeparation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSeparation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeparation>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeparation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"Separation",
		sizeof(FSeparation),
		alignof(FSeparation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSeparation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeparation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSeparation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSeparation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Separation"), sizeof(FSeparation), Get_Z_Construct_UScriptStruct_FSeparation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSeparation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSeparation_Hash() { return 1249890690U; }
class UScriptStruct* FCohesion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCohesion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCohesion, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("Cohesion"), sizeof(FCohesion), Get_Z_Construct_UScriptStruct_FCohesion_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FCohesion>()
{
	return FCohesion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCohesion(FCohesion::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("Cohesion"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFCohesion
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFCohesion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Cohesion")),new UScriptStruct::TCppStructOps<FCohesion>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFCohesion;
	struct Z_Construct_UScriptStruct_FCohesion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCohesion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCohesion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCohesion>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCohesion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"Cohesion",
		sizeof(FCohesion),
		alignof(FCohesion),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCohesion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCohesion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCohesion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCohesion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Cohesion"), sizeof(FCohesion), Get_Z_Construct_UScriptStruct_FCohesion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCohesion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCohesion_Hash() { return 4245442722U; }
class UScriptStruct* FAlignment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAlignment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlignment, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("Alignment"), sizeof(FAlignment), Get_Z_Construct_UScriptStruct_FAlignment_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FAlignment>()
{
	return FAlignment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAlignment(FAlignment::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("Alignment"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFAlignment
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFAlignment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Alignment")),new UScriptStruct::TCppStructOps<FAlignment>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFAlignment;
	struct Z_Construct_UScriptStruct_FAlignment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlignment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlignment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlignment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlignment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"Alignment",
		sizeof(FAlignment),
		alignof(FAlignment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlignment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlignment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlignment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAlignment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Alignment"), sizeof(FAlignment), Get_Z_Construct_UScriptStruct_FAlignment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAlignment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAlignment_Hash() { return 4232833963U; }
class UScriptStruct* FGoalSeeking::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FGoalSeeking_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoalSeeking, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("GoalSeeking"), sizeof(FGoalSeeking), Get_Z_Construct_UScriptStruct_FGoalSeeking_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FGoalSeeking>()
{
	return FGoalSeeking::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoalSeeking(FGoalSeeking::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("GoalSeeking"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFGoalSeeking
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFGoalSeeking()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoalSeeking")),new UScriptStruct::TCppStructOps<FGoalSeeking>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFGoalSeeking;
	struct Z_Construct_UScriptStruct_FGoalSeeking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSeeking_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoalSeeking_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoalSeeking>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoalSeeking_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"GoalSeeking",
		sizeof(FGoalSeeking),
		alignof(FGoalSeeking),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSeeking_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSeeking_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoalSeeking()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoalSeeking_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoalSeeking"), sizeof(FGoalSeeking), Get_Z_Construct_UScriptStruct_FGoalSeeking_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoalSeeking_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoalSeeking_Hash() { return 2379646902U; }
class UScriptStruct* FDebugVariables_Boid::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOCKINGBEHAVIOURSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDebugVariables_Boid_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugVariables_Boid, Z_Construct_UPackage__Script_FlockingBehaviourSystem(), TEXT("DebugVariables_Boid"), sizeof(FDebugVariables_Boid), Get_Z_Construct_UScriptStruct_FDebugVariables_Boid_Hash());
	}
	return Singleton;
}
template<> FLOCKINGBEHAVIOURSYSTEM_API UScriptStruct* StaticStruct<FDebugVariables_Boid>()
{
	return FDebugVariables_Boid::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugVariables_Boid(FDebugVariables_Boid::StaticStruct, TEXT("/Script/FlockingBehaviourSystem"), TEXT("DebugVariables_Boid"), false, nullptr, nullptr);
static struct FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFDebugVariables_Boid
{
	FScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFDebugVariables_Boid()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugVariables_Boid")),new UScriptStruct::TCppStructOps<FDebugVariables_Boid>);
	}
} ScriptStruct_FlockingBehaviourSystem_StaticRegisterNativesFDebugVariables_Boid;
	struct Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSteeringVector_MetaData[];
#endif
		static void NewProp_bShowSteeringVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSteeringVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDesiredVelocityVector_MetaData[];
#endif
		static void NewProp_bShowDesiredVelocityVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDesiredVelocityVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowVelocityVector_MetaData[];
#endif
		static void NewProp_bShowVelocityVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowVelocityVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMovementTrail_MetaData[];
#endif
		static void NewProp_bShowMovementTrail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMovementTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWanderInfo_MetaData[];
#endif
		static void NewProp_bShowWanderInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWanderInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFoundBoid_MetaData[];
#endif
		static void NewProp_bShowFoundBoid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFoundBoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPerceptionRadius_MetaData[];
#endif
		static void NewProp_bShowPerceptionRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPerceptionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugVariables_Boid>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the steering vector?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowSteeringVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector = { "bShowSteeringVector", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the desired velocity vector?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowDesiredVelocityVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector = { "bShowDesiredVelocityVector", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the velocity vector?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowVelocityVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector = { "bShowVelocityVector", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the movement path?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowMovementTrail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail = { "bShowMovementTrail", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the wander behavior?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowWanderInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo = { "bShowWanderInfo", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the found boid?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowFoundBoid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid = { "bShowFoundBoid", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Visualize the boid's perception radius?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius_SetBit(void* Obj)
	{
		((FDebugVariables_Boid*)Obj)->bShowPerceptionRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius = { "bShowPerceptionRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugVariables_Boid), &Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowSteeringVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowDesiredVelocityVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowVelocityVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowMovementTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowWanderInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowFoundBoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::NewProp_bShowPerceptionRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
		nullptr,
		&NewStructOps,
		"DebugVariables_Boid",
		sizeof(FDebugVariables_Boid),
		alignof(FDebugVariables_Boid),
		Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugVariables_Boid()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugVariables_Boid_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlockingBehaviourSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugVariables_Boid"), sizeof(FDebugVariables_Boid), Get_Z_Construct_UScriptStruct_FDebugVariables_Boid_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugVariables_Boid_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugVariables_Boid_Hash() { return 2979941381U; }
	void ABoid::StaticRegisterNativesABoid()
	{
	}
	UClass* Z_Construct_UClass_ABoid_NoRegister()
	{
		return ABoid::StaticClass();
	}
	struct Z_Construct_UClass_ABoid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoidMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoidMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Cooking LOD Input Pawn Camera Replication Collision Navigation" },
		{ "IncludePath", "Boid.h" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_OwnedBy_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_OwnedBy = { "OwnedBy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, OwnedBy), Z_Construct_UClass_AFlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_OwnedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_OwnedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_BoidMovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_BoidMovementComponent = { "BoidMovementComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, BoidMovementComponent), Z_Construct_UClass_UBoidMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_BoidMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_BoidMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_OwnedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_BoidMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoid_Statics::ClassParams = {
		&ABoid::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoid, 2678542658);
	template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<ABoid>()
	{
		return ABoid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoid(Z_Construct_UClass_ABoid, &ABoid::StaticClass, TEXT("/Script/FlockingBehaviourSystem"), TEXT("ABoid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

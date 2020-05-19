// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitCharacterMovementComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAdvKitMovementProperties();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitCharacterMovementComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode();
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FAdvKitMovementProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAdvKitMovementProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvKitMovementProperties, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("AdvKitMovementProperties"), sizeof(FAdvKitMovementProperties), Get_Z_Construct_UScriptStruct_FAdvKitMovementProperties_Hash());
	}
	return Singleton;
}
template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<FAdvKitMovementProperties>()
{
	return FAdvKitMovementProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdvKitMovementProperties(FAdvKitMovementProperties::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("AdvKitMovementProperties"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFAdvKitMovementProperties
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFAdvKitMovementProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdvKitMovementProperties")),new UScriptStruct::TCppStructOps<FAdvKitMovementProperties>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFAdvKitMovementProperties;
	struct Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanClimbLadder_MetaData[];
#endif
		static void NewProp_bCanClimbLadder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanClimbLadder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanClimbLedge_MetaData[];
#endif
		static void NewProp_bCanClimbLedge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanClimbLedge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanClimbWall_MetaData[];
#endif
		static void NewProp_bCanClimbWall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanClimbWall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanClimbCeiling_MetaData[];
#endif
		static void NewProp_bCanClimbCeiling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanClimbCeiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanWalkBalance_MetaData[];
#endif
		static void NewProp_bCanWalkBalance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanWalkBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanWalkTightSpace_MetaData[];
#endif
		static void NewProp_bCanWalkTightSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanWalkTightSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "@brief Movement properties of the adventure kit" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvKitMovementProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder_MetaData[] = {
		{ "Category", "AdvKitMovementProperties" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Can the character use ladders" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder_SetBit(void* Obj)
	{
		((FAdvKitMovementProperties*)Obj)->bCanClimbLadder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder = { "bCanClimbLadder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAdvKitMovementProperties), &Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge_MetaData[] = {
		{ "Category", "AdvKitMovementProperties" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Can the character climb on ledges" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge_SetBit(void* Obj)
	{
		((FAdvKitMovementProperties*)Obj)->bCanClimbLedge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge = { "bCanClimbLedge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAdvKitMovementProperties), &Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall_MetaData[] = {
		{ "Category", "AdvKitMovementProperties" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Can the character climb on walls" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall_SetBit(void* Obj)
	{
		((FAdvKitMovementProperties*)Obj)->bCanClimbWall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall = { "bCanClimbWall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAdvKitMovementProperties), &Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling_MetaData[] = {
		{ "Category", "AdvKitMovementProperties" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Can the character climb on ceilings" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling_SetBit(void* Obj)
	{
		((FAdvKitMovementProperties*)Obj)->bCanClimbCeiling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling = { "bCanClimbCeiling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAdvKitMovementProperties), &Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance_MetaData[] = {
		{ "Category", "AdvKitMovementProperties" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Can the character use balancing zones" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance_SetBit(void* Obj)
	{
		((FAdvKitMovementProperties*)Obj)->bCanWalkBalance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance = { "bCanWalkBalance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAdvKitMovementProperties), &Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace_MetaData[] = {
		{ "Category", "AdvKitMovementProperties" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Can the character use tight spaces" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace_SetBit(void* Obj)
	{
		((FAdvKitMovementProperties*)Obj)->bCanWalkTightSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace = { "bCanWalkTightSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAdvKitMovementProperties), &Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLadder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbLedge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanClimbCeiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::NewProp_bCanWalkTightSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"AdvKitMovementProperties",
		sizeof(FAdvKitMovementProperties),
		alignof(FAdvKitMovementProperties),
		Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvKitMovementProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdvKitMovementProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdvKitMovementProperties"), sizeof(FAdvKitMovementProperties), Get_Z_Construct_UScriptStruct_FAdvKitMovementProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdvKitMovementProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdvKitMovementProperties_Hash() { return 2371015448U; }
	void UAdvKitCharacterMovementComponent::StaticRegisterNativesUAdvKitCharacterMovementComponent()
	{
		UClass* Class = UAdvKitCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccumulateRootMotion", &UAdvKitCharacterMovementComponent::execAccumulateRootMotion },
			{ "ChangeTargetBalance", &UAdvKitCharacterMovementComponent::execChangeTargetBalance },
			{ "GetAdvCustomMovementMode", &UAdvKitCharacterMovementComponent::execGetAdvCustomMovementMode },
			{ "GetAdvMovementMode", &UAdvKitCharacterMovementComponent::execGetAdvMovementMode },
			{ "GetZone", &UAdvKitCharacterMovementComponent::execGetZone },
			{ "MoveLocationInZone", &UAdvKitCharacterMovementComponent::execMoveLocationInZone },
			{ "PhysMoveInZone", &UAdvKitCharacterMovementComponent::execPhysMoveInZone },
			{ "SetAdvMovementMode", &UAdvKitCharacterMovementComponent::execSetAdvMovementMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics
	{
		struct AdvKitCharacterMovementComponent_eventAccumulateRootMotion_Parms
		{
			FVector MovementDelta;
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventAccumulateRootMotion_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::NewProp_MovementDelta = { "MovementDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventAccumulateRootMotion_Parms, MovementDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::NewProp_MovementDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Adds root motion to the owning character.\n@param       MovementDelta   Translation to be added to the character.\n@param       NewRotation             New rotation the character should have." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "AccumulateRootMotion", sizeof(AdvKitCharacterMovementComponent_eventAccumulateRootMotion_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Timer callback to change target balance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "ChangeTargetBalance", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics
	{
		struct AdvKitCharacterMovementComponent_eventGetAdvCustomMovementMode_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventGetAdvCustomMovementMode_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Get the current custom movement mode\n@return      Current custom movement mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "GetAdvCustomMovementMode", sizeof(AdvKitCharacterMovementComponent_eventGetAdvCustomMovementMode_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics
	{
		struct AdvKitCharacterMovementComponent_eventGetAdvMovementMode_Parms
		{
			EAdvKitMovementMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventGetAdvMovementMode_Parms, ReturnValue), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Get the current movement mode\n@return      Current movement mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "GetAdvMovementMode", sizeof(AdvKitCharacterMovementComponent_eventGetAdvMovementMode_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics
	{
		struct AdvKitCharacterMovementComponent_eventGetZone_Parms
		{
			AAdvKitZone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventGetZone_Parms, ReturnValue), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Query the current zone of the character\n@return      Zone the character is currently in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "GetZone", sizeof(AdvKitCharacterMovementComponent_eventGetZone_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics
	{
		struct AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms
		{
			FVector GlobalAcceleration;
			float DeltaSeconds;
			FVector HalfExtent;
			bool bAutoTransition;
			bool ConstrainAcceleration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_ConstrainAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConstrainAcceleration;
		static void NewProp_bAutoTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms), &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ConstrainAcceleration_SetBit(void* Obj)
	{
		((AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms*)Obj)->ConstrainAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ConstrainAcceleration = { "ConstrainAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms), &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ConstrainAcceleration_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_bAutoTransition_SetBit(void* Obj)
	{
		((AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms*)Obj)->bAutoTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_bAutoTransition = { "bAutoTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms), &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_bAutoTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_HalfExtent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_HalfExtent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_GlobalAcceleration = { "GlobalAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms, GlobalAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_ConstrainAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_bAutoTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::NewProp_GlobalAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_bAutoTransition", "true" },
		{ "CPP_Default_ConstrainAcceleration", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Moves the character's zone location object with the given parameters\n@param       GlobalAcceleration      Acceleration to use for the intended moving direction\n@param       DeltaSeconds            Delta time since last tick\n@param       HalfExtent                      Size of the character in the zone (e.g. FVector(Radius,Radius,HalfHeight))\n@param       bAutoTransition         True to try to transition if the character cannot move\n@param       ConstrainAcceleration   True to restrict the acceleration vector to the zone\n@return      True if location was moved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "MoveLocationInZone", sizeof(AdvKitCharacterMovementComponent_eventMoveLocationInZone_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics
	{
		struct AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms
		{
			FVector GlobalAcceleration;
			FVector WorldOffset;
			float DeltaSeconds;
			FVector HalfExtent;
			bool bAutoTransition;
			bool ConstrainAcceleration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_ConstrainAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConstrainAcceleration;
		static void NewProp_bAutoTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms), &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ConstrainAcceleration_SetBit(void* Obj)
	{
		((AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms*)Obj)->ConstrainAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ConstrainAcceleration = { "ConstrainAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms), &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ConstrainAcceleration_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_bAutoTransition_SetBit(void* Obj)
	{
		((AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms*)Obj)->bAutoTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_bAutoTransition = { "bAutoTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms), &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_bAutoTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_HalfExtent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_HalfExtent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms, WorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_GlobalAcceleration = { "GlobalAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms, GlobalAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_ConstrainAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_bAutoTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::NewProp_GlobalAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_bAutoTransition", "true" },
		{ "CPP_Default_ConstrainAcceleration", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Moves the character inside the current zone with the given parameters\n@param       GlobalAcceleration      Acceleration to use for the intended moving direction\n@param       DeltaSeconds            Delta time since last tick\n@param       HalfExtent                      Size of the character in the zone (e.g. FVector(Radius,Radius,HalfHeight))\n@param       bAutoTransition         True to try to transition if the character cannot move\n@param       ConstrainAcceleration   True to restrict the acceleration vector to the zone\n@return      True if location was moved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "PhysMoveInZone", sizeof(AdvKitCharacterMovementComponent_eventPhysMoveInZone_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics
	{
		struct AdvKitCharacterMovementComponent_eventSetAdvMovementMode_Parms
		{
			EAdvKitMovementMode NewMovementMode;
			uint8 NewCustomMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCustomMode;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::NewProp_NewCustomMode = { "NewCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventSetAdvMovementMode_Parms, NewCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitCharacterMovementComponent_eventSetAdvMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::NewProp_NewMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::NewProp_NewCustomMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::NewProp_NewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::NewProp_NewMovementMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_NewCustomMode", "0" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Set a new movement mode\n@param       NewMovementMode The new movement mode to set\n@param       NewCustomMode   A custom movement mode to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent, nullptr, "SetAdvMovementMode", sizeof(AdvKitCharacterMovementComponent_eventSetAdvMovementMode_Parms), Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitCharacterMovementComponent_NoRegister()
	{
		return UAdvKitCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvKitCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdvKitCharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUprightSwimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUprightSwimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivingToSwimmingImmersionDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DivingToSwimmingImmersionDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimmingSurfaceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimmingSurfaceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimmingImmersionDepthUpright_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimmingImmersionDepthUpright;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimmingImmersionDepthFlat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimmingImmersionDepthFlat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalanceChangeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BalanceChangeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBalanceChangePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBalanceChangePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBalanceChangePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBalanceChangePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalanceChangePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BalanceChangePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBalanceTurnAroundDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBalanceTurnAroundDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCounterBalanceDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCounterBalanceDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterBalanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterBalanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalanceRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BalanceRotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BalanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBalanceWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBalanceWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTightSpaceWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTightSpaceWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TightSpaceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TightSpaceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CeilingMinTransitionDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CeilingMinTransitionDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CeilingOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CeilingOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCeilingClimbSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCeilingClimbSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWallClimbSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWallClimbSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LadderOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLadderClimbSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLadderClimbSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderJumpDistanceBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderJumpDistanceBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderJumpDistanceHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderJumpDistanceHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLedgeClimbSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLedgeClimbSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeJumpDistanceBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LedgeJumpDistanceBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeJumpDistanceHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LedgeJumpDistanceHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeJumpDistanceVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LedgeJumpDistanceVertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpDistanceLedgeLadderHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpDistanceLedgeLadderHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvMovementProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvMovementProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalZoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_AccumulateRootMotion, "AccumulateRootMotion" }, // 554550596
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_ChangeTargetBalance, "ChangeTargetBalance" }, // 4070295262
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvCustomMovementMode, "GetAdvCustomMovementMode" }, // 2285265127
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetAdvMovementMode, "GetAdvMovementMode" }, // 2415268052
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_GetZone, "GetZone" }, // 4041829866
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_MoveLocationInZone, "MoveLocationInZone" }, // 908824610
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_PhysMoveInZone, "PhysMoveInZone" }, // 3049593136
		{ &Z_Construct_UFunction_UAdvKitCharacterMovementComponent_SetAdvMovementMode, "SetAdvMovementMode" }, // 2076156231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/AdvKitCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Default movement component for the @see AAdvKitCharacter. This handles zone movement and target locking." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvKitCharacterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "AdvKitCharacter movement component belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvKitCharacterOwner = { "AdvKitCharacterOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, AdvKitCharacterOwner), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvKitCharacterOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvKitCharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxUprightSwimSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Swimming" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Amount of speed the character can swim before it will tilt forward" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxUprightSwimSpeed = { "MaxUprightSwimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxUprightSwimSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxUprightSwimSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxUprightSwimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_DivingToSwimmingImmersionDepth_MetaData[] = {
		{ "Category", "Adv Character Movement: Swimming" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "The depth the character has to be below the surface to start diving" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_DivingToSwimmingImmersionDepth = { "DivingToSwimmingImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, DivingToSwimmingImmersionDepth), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_DivingToSwimmingImmersionDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_DivingToSwimmingImmersionDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingSurfaceMultiplier_MetaData[] = {
		{ "Category", "Adv Character Movement: Swimming" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character will surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingSurfaceMultiplier = { "SwimmingSurfaceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, SwimmingSurfaceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingSurfaceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingSurfaceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthUpright_MetaData[] = {
		{ "Category", "Adv Character Movement: Swimming" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character will sink below the surface when swimming idle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthUpright = { "SwimmingImmersionDepthUpright", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, SwimmingImmersionDepthUpright), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthUpright_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthUpright_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthFlat_MetaData[] = {
		{ "Category", "Adv Character Movement: Swimming" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character will sink below the surface when swimming straight" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthFlat = { "SwimmingImmersionDepthFlat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, SwimmingImmersionDepthFlat), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthFlat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthFlat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangeTime_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast to change the target balance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangeTime = { "BalanceChangeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, BalanceChangeTime), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalance_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Max balance, if Abs(Balance) is bigger or equals to this the character falls off" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalance = { "MaxBalance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxBalance), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceChangePerSecond_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast to change the balance to the target balance at maximum" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceChangePerSecond = { "MaxBalanceChangePerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxBalanceChangePerSecond), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceChangePerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceChangePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinBalanceChangePerSecond_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast to change the balance to the target balance at minimum" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinBalanceChangePerSecond = { "MinBalanceChangePerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MinBalanceChangePerSecond), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinBalanceChangePerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinBalanceChangePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangePerSecond_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast to change the balance to the target balance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangePerSecond = { "BalanceChangePerSecond", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, BalanceChangePerSecond), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangePerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceTurnAroundDot_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How much the current forward and input directions need to differ in order for the character to turn around" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceTurnAroundDot = { "MaxBalanceTurnAroundDot", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxBalanceTurnAroundDot), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceTurnAroundDot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceTurnAroundDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinCounterBalanceDot_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "If input does not align correctly with balance direction, this is the min dot required for input to count as counter balance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinCounterBalanceDot = { "MinCounterBalanceDot", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MinCounterBalanceDot), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinCounterBalanceDot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinCounterBalanceDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CounterBalanceMultiplier_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Scale to apply to player input trying to restore balance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CounterBalanceMultiplier = { "CounterBalanceMultiplier", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, CounterBalanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CounterBalanceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CounterBalanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CurrentBalance_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "The balance the character has when in a balancing zone" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CurrentBalance = { "CurrentBalance", nullptr, (EPropertyFlags)0x0010000000022825, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, CurrentBalance), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CurrentBalance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CurrentBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceRotationRate_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character turns inside a balance zone in degrees per second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceRotationRate = { "BalanceRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, BalanceRotationRate), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceRotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceOffset_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "What offset to keep from a balance zone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceOffset = { "BalanceOffset", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, BalanceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceWalkSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Balance" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character moves when balancing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceWalkSpeed = { "MaxBalanceWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxBalanceWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxTightSpaceWalkSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Tight Space" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character moves inside a tight space" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxTightSpaceWalkSpeed = { "MaxTightSpaceWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxTightSpaceWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxTightSpaceWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxTightSpaceWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_TightSpaceOffset_MetaData[] = {
		{ "Category", "Adv Character Movement: Tight Space" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "What offset to keep from it when in a tight space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_TightSpaceOffset = { "TightSpaceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, TightSpaceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_TightSpaceOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_TightSpaceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingMinTransitionDot_MetaData[] = {
		{ "Category", "Adv Character Movement: Ceiling" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "The minimum orientation difference betweeen the character and a wall to start transitioning" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingMinTransitionDot = { "CeilingMinTransitionDot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, CeilingMinTransitionDot), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingMinTransitionDot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingMinTransitionDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingOffset_MetaData[] = {
		{ "Category", "Adv Character Movement: Ceiling" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "What offset to keep from the ceiling if the character is climbing on it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingOffset = { "CeilingOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, CeilingOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxCeilingClimbSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Ceiling" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character can climb on a ceiling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxCeilingClimbSpeed = { "MaxCeilingClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxCeilingClimbSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxCeilingClimbSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxCeilingClimbSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxWallClimbSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Wall" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character can climb on a wall" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxWallClimbSpeed = { "MaxWallClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxWallClimbSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxWallClimbSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxWallClimbSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_WallOffset_MetaData[] = {
		{ "Category", "Adv Character Movement: Wall" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "What offset to keep from it when climbing a wall" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_WallOffset = { "WallOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, WallOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_WallOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_WallOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderOffset_MetaData[] = {
		{ "Category", "Adv Character Movement: Ladder" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "What offset to have from the ladder the character is climbing on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderOffset = { "LadderOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LadderOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLadderClimbSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Ladder" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character climbs a ladder" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLadderClimbSpeed = { "MaxLadderClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxLadderClimbSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLadderClimbSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLadderClimbSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceBack_MetaData[] = {
		{ "Category", "Adv Character Movement: Ladder" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character can jump back from a ladder to another" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceBack = { "LadderJumpDistanceBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LadderJumpDistanceBack), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceHorizontal_MetaData[] = {
		{ "Category", "Adv Character Movement: Ladder" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character can jump horizontally from a ladder" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceHorizontal = { "LadderJumpDistanceHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LadderJumpDistanceHorizontal), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceHorizontal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeOffset_MetaData[] = {
		{ "Category", "Adv Character Movement: Ledge" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "What local offset to keep from a ledge while climbing it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeOffset = { "LedgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LedgeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLedgeClimbSpeed_MetaData[] = {
		{ "Category", "Adv Character Movement: Ledge" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character can climb on a ledge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLedgeClimbSpeed = { "MaxLedgeClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, MaxLedgeClimbSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLedgeClimbSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLedgeClimbSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceBack_MetaData[] = {
		{ "Category", "Adv Character Movement: Ledge" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character can jump back from a ledge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceBack = { "LedgeJumpDistanceBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LedgeJumpDistanceBack), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceHorizontal_MetaData[] = {
		{ "Category", "Adv Character Movement: Ledge" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character can jump horizontally from a ledge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceHorizontal = { "LedgeJumpDistanceHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LedgeJumpDistanceHorizontal), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceHorizontal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceVertical_MetaData[] = {
		{ "Category", "Adv Character Movement: Ledge" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character can jump vertically from a ledge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceVertical = { "LedgeJumpDistanceVertical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LedgeJumpDistanceVertical), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceVertical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceVertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_JumpDistanceLedgeLadderHorizontal_MetaData[] = {
		{ "Category", "Adv Character Movement: Transitions" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "How far the character can jump horizontally between ladder and ledge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_JumpDistanceLedgeLadderHorizontal = { "JumpDistanceLedgeLadderHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, JumpDistanceLedgeLadderHorizontal), METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_JumpDistanceLedgeLadderHorizontal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_JumpDistanceLedgeLadderHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvMovementProps_MetaData[] = {
		{ "Category", "Movement Capabilities" },
		{ "DisplayName", "Adv Movement Capabilities" },
		{ "Keywords", "Nav Agent" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
		{ "ToolTip", "Movement properties for the adventure kit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvMovementProps = { "AdvMovementProps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, AdvMovementProps), Z_Construct_UScriptStruct_FAdvKitMovementProperties, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvMovementProps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvMovementProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000000020825, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitCharacterMovementComponent, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LocalZoneLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LocalZoneLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvKitCharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxUprightSwimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_DivingToSwimmingImmersionDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingSurfaceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthUpright,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_SwimmingImmersionDepthFlat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceChangePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinBalanceChangePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceChangePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceTurnAroundDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MinCounterBalanceDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CounterBalanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CurrentBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_BalanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxBalanceWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxTightSpaceWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_TightSpaceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingMinTransitionDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_CeilingOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxCeilingClimbSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxWallClimbSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_WallOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLadderClimbSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LadderJumpDistanceHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_MaxLedgeClimbSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LedgeJumpDistanceVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_JumpDistanceLedgeLadderHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_AdvMovementProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::NewProp_LocalZoneLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::ClassParams = {
		&UAdvKitCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitCharacterMovementComponent, 2518611759);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitCharacterMovementComponent>()
	{
		return UAdvKitCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitCharacterMovementComponent(Z_Construct_UClass_UAdvKitCharacterMovementComponent, &UAdvKitCharacterMovementComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

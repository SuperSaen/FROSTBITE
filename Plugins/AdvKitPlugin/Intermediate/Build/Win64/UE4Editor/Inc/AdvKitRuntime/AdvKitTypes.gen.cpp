// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/AdvKitTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTypes() {}
// Cross Module References
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingTransition();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister();
// End Cross Module References
	static UEnum* EAdvKitMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("EAdvKitMovementMode"));
		}
		return Singleton;
	}
	template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitMovementMode>()
	{
		return EAdvKitMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdvKitMovementMode(EAdvKitMovementMode_StaticEnum, TEXT("/Script/AdvKitRuntime"), TEXT("EAdvKitMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode_Hash() { return 3950210987U; }
	UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdvKitMovementMode"), 0, Get_Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdvKitMovementMode::None", (int64)EAdvKitMovementMode::None },
				{ "EAdvKitMovementMode::Walking", (int64)EAdvKitMovementMode::Walking },
				{ "EAdvKitMovementMode::NavWalking", (int64)EAdvKitMovementMode::NavWalking },
				{ "EAdvKitMovementMode::Falling", (int64)EAdvKitMovementMode::Falling },
				{ "EAdvKitMovementMode::Swimming", (int64)EAdvKitMovementMode::Swimming },
				{ "EAdvKitMovementMode::Flying", (int64)EAdvKitMovementMode::Flying },
				{ "EAdvKitMovementMode::ClimbingWall", (int64)EAdvKitMovementMode::ClimbingWall },
				{ "EAdvKitMovementMode::ClimbingCeiling", (int64)EAdvKitMovementMode::ClimbingCeiling },
				{ "EAdvKitMovementMode::ClimbingLedge", (int64)EAdvKitMovementMode::ClimbingLedge },
				{ "EAdvKitMovementMode::ClimbingLadder", (int64)EAdvKitMovementMode::ClimbingLadder },
				{ "EAdvKitMovementMode::WalkingTightspace", (int64)EAdvKitMovementMode::WalkingTightspace },
				{ "EAdvKitMovementMode::WalkingBalance", (int64)EAdvKitMovementMode::WalkingBalance },
				{ "EAdvKitMovementMode::CustomZone", (int64)EAdvKitMovementMode::CustomZone },
				{ "EAdvKitMovementMode::ActionDriven", (int64)EAdvKitMovementMode::ActionDriven },
				{ "EAdvKitMovementMode::Custom", (int64)EAdvKitMovementMode::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionDriven.DisplayName", "Action Driven" },
				{ "ActionDriven.Name", "EAdvKitMovementMode::ActionDriven" },
				{ "BlueprintType", "true" },
				{ "ClimbingCeiling.DisplayName", "Ceiling Climbing" },
				{ "ClimbingCeiling.Name", "EAdvKitMovementMode::ClimbingCeiling" },
				{ "ClimbingLadder.DisplayName", "Ladder Climbing" },
				{ "ClimbingLadder.Name", "EAdvKitMovementMode::ClimbingLadder" },
				{ "ClimbingLedge.DisplayName", "Ledge Climbing" },
				{ "ClimbingLedge.Name", "EAdvKitMovementMode::ClimbingLedge" },
				{ "ClimbingWall.Comment", "//Enums above to preserve casting conversion from MovementMode to AdvMovementMode\n" },
				{ "ClimbingWall.DisplayName", "Wall Climbing" },
				{ "ClimbingWall.Name", "EAdvKitMovementMode::ClimbingWall" },
				{ "ClimbingWall.ToolTip", "Enums above to preserve casting conversion from MovementMode to AdvMovementMode" },
				{ "Comment", "/**\n * @brief Enumeration for movement mode of the @see UAdvKitMovementComponent\n */" },
				{ "Custom.DisplayName", "Custom" },
				{ "Custom.Name", "EAdvKitMovementMode::Custom" },
				{ "CustomZone.DisplayName", "Custom Zone" },
				{ "CustomZone.Name", "EAdvKitMovementMode::CustomZone" },
				{ "Falling.DisplayName", "Falling" },
				{ "Falling.Name", "EAdvKitMovementMode::Falling" },
				{ "Flying.DisplayName", "Flying" },
				{ "Flying.Name", "EAdvKitMovementMode::Flying" },
				{ "ModuleRelativePath", "Public/AdvKitTypes.h" },
				{ "NavWalking.DisplayName", "Navmesh Walking" },
				{ "NavWalking.Name", "EAdvKitMovementMode::NavWalking" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EAdvKitMovementMode::None" },
				{ "Swimming.DisplayName", "Swimming" },
				{ "Swimming.Name", "EAdvKitMovementMode::Swimming" },
				{ "ToolTip", "@brief Enumeration for movement mode of the @see UAdvKitMovementComponent" },
				{ "Walking.DisplayName", "Walking" },
				{ "Walking.Name", "EAdvKitMovementMode::Walking" },
				{ "WalkingBalance.DisplayName", "Balance Walking" },
				{ "WalkingBalance.Name", "EAdvKitMovementMode::WalkingBalance" },
				{ "WalkingTightspace.DisplayName", "Tight Space Walking" },
				{ "WalkingTightspace.Name", "EAdvKitMovementMode::WalkingTightspace" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime,
				nullptr,
				"EAdvKitMovementMode",
				"EAdvKitMovementMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPendingTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPendingTransition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingTransition, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("PendingTransition"), sizeof(FPendingTransition), Get_Z_Construct_UScriptStruct_FPendingTransition_Hash());
	}
	return Singleton;
}
template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<FPendingTransition>()
{
	return FPendingTransition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingTransition(FPendingTransition::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("PendingTransition"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFPendingTransition
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFPendingTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PendingTransition")),new UScriptStruct::TCppStructOps<FPendingTransition>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFPendingTransition;
	struct Z_Construct_UScriptStruct_FPendingTransition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Zone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Transition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTransition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdvKitTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingTransition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/AdvKitTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FPendingTransition*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPendingTransition), &Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Zone_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/AdvKitTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingTransition, Zone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Zone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Transition_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AdvKitTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingTransition, Transition), Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Transition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Transition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Zone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingTransition_Statics::NewProp_Transition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"PendingTransition",
		sizeof(FPendingTransition),
		alignof(FPendingTransition),
		Z_Construct_UScriptStruct_FPendingTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTransition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingTransition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingTransition"), sizeof(FPendingTransition), Get_Z_Construct_UScriptStruct_FPendingTransition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingTransition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingTransition_Hash() { return 1650879078U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

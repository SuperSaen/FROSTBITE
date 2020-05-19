// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitInventoryItem() {}
// Cross Module References
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRepAdvKitInventoryState();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_Drop();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_Equip();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPickup_NoRegister();
// End Cross Module References
	static UEnum* EAdvKitInventoryState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("EAdvKitInventoryState"));
		}
		return Singleton;
	}
	template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitInventoryState>()
	{
		return EAdvKitInventoryState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdvKitInventoryState(EAdvKitInventoryState_StaticEnum, TEXT("/Script/AdvKitRuntime"), TEXT("EAdvKitInventoryState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState_Hash() { return 543414921U; }
	UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdvKitInventoryState"), 0, Get_Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdvKitInventoryState::Inactive", (int64)EAdvKitInventoryState::Inactive },
				{ "EAdvKitInventoryState::Equipping", (int64)EAdvKitInventoryState::Equipping },
				{ "EAdvKitInventoryState::Active", (int64)EAdvKitInventoryState::Active },
				{ "EAdvKitInventoryState::Uneqiupping", (int64)EAdvKitInventoryState::Uneqiupping },
				{ "EAdvKitInventoryState::Unknown", (int64)EAdvKitInventoryState::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "EAdvKitInventoryState::Active" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * @brief Enumeration to specify state of item\n */" },
				{ "Equipping.Name", "EAdvKitInventoryState::Equipping" },
				{ "Inactive.Name", "EAdvKitInventoryState::Inactive" },
				{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
				{ "ToolTip", "@brief Enumeration to specify state of item" },
				{ "Uneqiupping.Name", "EAdvKitInventoryState::Uneqiupping" },
				{ "Unknown.Name", "EAdvKitInventoryState::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime,
				nullptr,
				"EAdvKitInventoryState",
				"EAdvKitInventoryState",
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
class UScriptStruct* FRepAdvKitInventoryState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepAdvKitInventoryState, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("RepAdvKitInventoryState"), sizeof(FRepAdvKitInventoryState), Get_Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Hash());
	}
	return Singleton;
}
template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<FRepAdvKitInventoryState>()
{
	return FRepAdvKitInventoryState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepAdvKitInventoryState(FRepAdvKitInventoryState::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("RepAdvKitInventoryState"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFRepAdvKitInventoryState
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFRepAdvKitInventoryState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RepAdvKitInventoryState")),new UScriptStruct::TCppStructOps<FRepAdvKitInventoryState>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFRepAdvKitInventoryState;
	struct Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToUnequip_MetaData[];
#endif
		static void NewProp_bWantsToUnequip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToUnequip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToEquip_MetaData[];
#endif
		static void NewProp_bWantsToEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstantChange_MetaData[];
#endif
		static void NewProp_bInstantChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstantChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Struct to handle all replicated state variables of an item.\n */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "@brief Struct to handle all replicated state variables of an item." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepAdvKitInventoryState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip_MetaData[] = {
		{ "Comment", "/** Item should be unequipped as soon as possible */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Item should be unequipped as soon as possible" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip_SetBit(void* Obj)
	{
		((FRepAdvKitInventoryState*)Obj)->bWantsToUnequip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip = { "bWantsToUnequip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRepAdvKitInventoryState), &Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip_MetaData[] = {
		{ "Comment", "/** Item should be equipped as soon as possible */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Item should be equipped as soon as possible" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip_SetBit(void* Obj)
	{
		((FRepAdvKitInventoryState*)Obj)->bWantsToEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip = { "bWantsToEquip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRepAdvKitInventoryState), &Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange_MetaData[] = {
		{ "Comment", "/** Whether or not the state change is instant */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Whether or not the state change is instant" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange_SetBit(void* Obj)
	{
		((FRepAdvKitInventoryState*)Obj)->bInstantChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange = { "bInstantChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRepAdvKitInventoryState), &Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** Current state of the item */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Current state of the item" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepAdvKitInventoryState, State), Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToUnequip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bWantsToEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_bInstantChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::NewProp_State_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"RepAdvKitInventoryState",
		sizeof(FRepAdvKitInventoryState),
		alignof(FRepAdvKitInventoryState),
		Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepAdvKitInventoryState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepAdvKitInventoryState"), sizeof(FRepAdvKitInventoryState), Get_Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Hash() { return 2789347175U; }
	static FName NAME_AAdvKitInventoryItem_AttachToCharacter = FName(TEXT("AttachToCharacter"));
	void AAdvKitInventoryItem::AttachToCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_AttachToCharacter),NULL);
	}
	static FName NAME_AAdvKitInventoryItem_CanBeCombinedWith = FName(TEXT("CanBeCombinedWith"));
	bool AAdvKitInventoryItem::CanBeCombinedWith(AAdvKitInventoryItem* With)
	{
		AdvKitInventoryItem_eventCanBeCombinedWith_Parms Parms;
		Parms.With=With;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_CanBeCombinedWith),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitInventoryItem_CanEquip = FName(TEXT("CanEquip"));
	bool AAdvKitInventoryItem::CanEquip(bool bInstant)
	{
		AdvKitInventoryItem_eventCanEquip_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_CanEquip),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitInventoryItem_CanUneqiup = FName(TEXT("CanUneqiup"));
	bool AAdvKitInventoryItem::CanUneqiup(bool bInstant)
	{
		AdvKitInventoryItem_eventCanUneqiup_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_CanUneqiup),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitInventoryItem_CombinedWith = FName(TEXT("CombinedWith"));
	AAdvKitInventoryItem* AAdvKitInventoryItem::CombinedWith(AAdvKitInventoryItem* With)
	{
		AdvKitInventoryItem_eventCombinedWith_Parms Parms;
		Parms.With=With;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_CombinedWith),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitInventoryItem_DetachFromCharacter = FName(TEXT("DetachFromCharacter"));
	void AAdvKitInventoryItem::DetachFromCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_DetachFromCharacter),NULL);
	}
	static FName NAME_AAdvKitInventoryItem_Drop = FName(TEXT("Drop"));
	void AAdvKitInventoryItem::Drop(FVector Velocity)
	{
		AdvKitInventoryItem_eventDrop_Parms Parms;
		Parms.Velocity=Velocity;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_Drop),&Parms);
	}
	static FName NAME_AAdvKitInventoryItem_EquipServer = FName(TEXT("EquipServer"));
	void AAdvKitInventoryItem::EquipServer(bool bInstant)
	{
		AdvKitInventoryItem_eventEquipServer_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_EquipServer),&Parms);
	}
	static FName NAME_AAdvKitInventoryItem_OnEquip = FName(TEXT("OnEquip"));
	void AAdvKitInventoryItem::OnEquip(bool bInstant)
	{
		AdvKitInventoryItem_eventOnEquip_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_OnEquip),&Parms);
	}
	static FName NAME_AAdvKitInventoryItem_OnEquipped = FName(TEXT("OnEquipped"));
	void AAdvKitInventoryItem::OnEquipped(bool bInstant)
	{
		AdvKitInventoryItem_eventOnEquipped_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_OnEquipped),&Parms);
	}
	static FName NAME_AAdvKitInventoryItem_OnUneqiup = FName(TEXT("OnUneqiup"));
	void AAdvKitInventoryItem::OnUneqiup(bool bInstant)
	{
		AdvKitInventoryItem_eventOnUneqiup_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_OnUneqiup),&Parms);
	}
	static FName NAME_AAdvKitInventoryItem_OnUneqiupped = FName(TEXT("OnUneqiupped"));
	void AAdvKitInventoryItem::OnUneqiupped(bool bInstant)
	{
		AdvKitInventoryItem_eventOnUneqiupped_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_OnUneqiupped),&Parms);
	}
	static FName NAME_AAdvKitInventoryItem_OwnerDied = FName(TEXT("OwnerDied"));
	void AAdvKitInventoryItem::OwnerDied()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_OwnerDied),NULL);
	}
	static FName NAME_AAdvKitInventoryItem_UneqiupServer = FName(TEXT("UneqiupServer"));
	void AAdvKitInventoryItem::UneqiupServer(bool bInstant)
	{
		AdvKitInventoryItem_eventUneqiupServer_Parms Parms;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryItem_UneqiupServer),&Parms);
	}
	void AAdvKitInventoryItem::StaticRegisterNativesAAdvKitInventoryItem()
	{
		UClass* Class = AAdvKitInventoryItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToCharacter", &AAdvKitInventoryItem::execAttachToCharacter },
			{ "CanBeCombinedWith", &AAdvKitInventoryItem::execCanBeCombinedWith },
			{ "CanEquip", &AAdvKitInventoryItem::execCanEquip },
			{ "CanUneqiup", &AAdvKitInventoryItem::execCanUneqiup },
			{ "CombinedWith", &AAdvKitInventoryItem::execCombinedWith },
			{ "DetachFromCharacter", &AAdvKitInventoryItem::execDetachFromCharacter },
			{ "Drop", &AAdvKitInventoryItem::execDrop },
			{ "Equip", &AAdvKitInventoryItem::execEquip },
			{ "EquipServer", &AAdvKitInventoryItem::execEquipServer },
			{ "GetInventoryIconTexture", &AAdvKitInventoryItem::execGetInventoryIconTexture },
			{ "GetItemState", &AAdvKitInventoryItem::execGetItemState },
			{ "OnEquip", &AAdvKitInventoryItem::execOnEquip },
			{ "OnEquipped", &AAdvKitInventoryItem::execOnEquipped },
			{ "OnRep_ItemState", &AAdvKitInventoryItem::execOnRep_ItemState },
			{ "OnUneqiup", &AAdvKitInventoryItem::execOnUneqiup },
			{ "OnUneqiupped", &AAdvKitInventoryItem::execOnUneqiupped },
			{ "OwnerDied", &AAdvKitInventoryItem::execOwnerDied },
			{ "Uneqiup", &AAdvKitInventoryItem::execUneqiup },
			{ "UneqiupServer", &AAdvKitInventoryItem::execUneqiupServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Attaches this item to the character (e.g. a weapon to the hand).\n\x09 * Called when item is being equipped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Attaches this item to the character (e.g. a weapon to the hand).\nCalled when item is being equipped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "AttachToCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_With;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventCanBeCombinedWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventCanBeCombinedWith_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::NewProp_With = { "With", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventCanBeCombinedWith_Parms, With), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::NewProp_With,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Can this item be combined with another?\n\x09 *\n\x09 * @param\x09With\x09The other item to combine with.\n\x09 * @return\x09\x09\x09True if combinable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Can this item be combined with another?\n\n@param       With    The other item to combine with.\n@return                      True if combinable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "CanBeCombinedWith", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventCanBeCombinedWith_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventCanEquip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventCanEquip_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventCanEquip_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventCanEquip_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Check if the item can be equipped.\n\x09 * @param\x09""bInstant\x09""Can it be equipped instantly.\n\x09 * @return\x09True if item can be equipped.\n\x09 */" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Check if the item can be equipped.\n@param       bInstant        Can it be equipped instantly.\n@return      True if item can be equipped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "CanEquip", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventCanEquip_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventCanUneqiup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventCanUneqiup_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventCanUneqiup_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventCanUneqiup_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Check if the item can be unequipped.\n\x09 * @param\x09""bInstant\x09""Can it be unequipped instantly.\n\x09 * @return\x09True if item can be unequipped.\n\x09 */" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Check if the item can be unequipped.\n@param       bInstant        Can it be unequipped instantly.\n@return      True if item can be unequipped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "CanUneqiup", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventCanUneqiup_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_With;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventCombinedWith_Parms, ReturnValue), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::NewProp_With = { "With", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventCombinedWith_Parms, With), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::NewProp_With,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Combine this item with another.\n\x09 *\n\x09 * @param\x09With\x09The other item to combine with.\n\x09 * @return\x09\x09\x09The result of the combination.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Combine this item with another.\n\n@param       With    The other item to combine with.\n@return                      The result of the combination." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "CombinedWith", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventCombinedWith_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Detaches this item from the character (e.g. a weapon frmo the hand).\n\x09 * Called when item is being unequipped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Detaches this item from the character (e.g. a weapon frmo the hand).\nCalled when item is being unequipped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "DetachFromCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventDrop_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Drop this item (spawns pickup if configured).\n\x09 * @param\x09Velocity\x09In which direction to drop the pickup.\n\x09 */" },
		{ "CPP_Default_Velocity", "" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Drop this item (spawns pickup if configured).\n@param       Velocity        In which direction to drop the pickup." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "Drop", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventDrop_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics
	{
		struct AdvKitInventoryItem_eventEquip_Parms
		{
			bool bInstant;
		};
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventEquip_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventEquip_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Tell the item to equip.\n\x09 * @param\x09""bInstant \x09True to equip instantly, otherwise regular equipment time and animations\n\x09 */" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Tell the item to equip.\n@param       bInstant        True to equip instantly, otherwise regular equipment time and animations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "Equip", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventEquip_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventEquipServer_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventEquipServer_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Server callback to tell the item to equip.\n\x09 * @param\x09""bInstant \x09True to equip instantly, otherwise regular equipment time and animations\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Server callback to tell the item to equip.\n@param       bInstant        True to equip instantly, otherwise regular equipment time and animations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "EquipServer", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventEquipServer_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics
	{
		struct AdvKitInventoryItem_eventGetInventoryIconTexture_Parms
		{
			TSubclassOf<AAdvKitInventoryItem>  InventoryClass;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventGetInventoryIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::NewProp_InventoryClass = { "InventoryClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventGetInventoryIconTexture_Parms, InventoryClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::NewProp_InventoryClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Get the icon texture of an inventory item class without the need to instantiate it.\n\x09 *\n\x09 * @param\x09InventoryClass\x09""Class of the inventory item to get the icon from.\n\x09 * @return\x09\x09\x09\x09\x09Icon texture of the inventory item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Get the icon texture of an inventory item class without the need to instantiate it.\n\n@param       InventoryClass  Class of the inventory item to get the icon from.\n@return                                      Icon texture of the inventory item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "GetInventoryIconTexture", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventGetInventoryIconTexture_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics
	{
		struct AdvKitInventoryItem_eventGetItemState_Parms
		{
			EAdvKitInventoryState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventGetItemState_Parms, ReturnValue), Z_Construct_UEnum_AdvKitRuntime_EAdvKitInventoryState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Getter for the inventory item state.\n\x09 * @return\x09State struct of the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Getter for the inventory item state.\n@return      State struct of the item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "GetItemState", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventGetItemState_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventOnEquip_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventOnEquip_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Event called when item starts to equip.\n\x09 * @param\x09""bInstant\x09Whether equipping is instant or not\n\x09 */" },
		{ "DisplayName", "On Equip Begin" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Event called when item starts to equip.\n@param       bInstant        Whether equipping is instant or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "OnEquip", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventOnEquip_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventOnEquipped_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventOnEquipped_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Event called when item finished equipping.\n\x09 * @param\x09""bInstant\x09Whether equipping was instant or not\n\x09 */" },
		{ "DisplayName", "On Equip Finished" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Event called when item finished equipping.\n@param       bInstant        Whether equipping was instant or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "OnEquipped", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventOnEquipped_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics
	{
		struct AdvKitInventoryItem_eventOnRep_ItemState_Parms
		{
			FRepAdvKitInventoryState PreviousRepItemState;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousRepItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::NewProp_PreviousRepItemState = { "PreviousRepItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitInventoryItem_eventOnRep_ItemState_Parms, PreviousRepItemState), Z_Construct_UScriptStruct_FRepAdvKitInventoryState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::NewProp_PreviousRepItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback when item state changed remotely. \n\x09 * @param\x09PreviousRepItemState\x09State value before the change.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Callback when item state changed remotely.\n@param       PreviousRepItemState    State value before the change." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "OnRep_ItemState", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventOnRep_ItemState_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventOnUneqiup_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventOnUneqiup_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Event called when item starts to unequip.\n\x09 * @param\x09""bInstant\x09Whether unequipping is instant or not\n\x09 */" },
		{ "DisplayName", "On Uneqiup Begin" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Event called when item starts to unequip.\n@param       bInstant        Whether unequipping is instant or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "OnUneqiup", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventOnUneqiup_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventOnUneqiupped_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventOnUneqiupped_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Event called when item finished unequipping.\n\x09 * @param\x09""bInstant\x09Whether unequipping was instant or not\n\x09 */" },
		{ "DisplayName", "On Uneqiup Finished" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Event called when item finished unequipping.\n@param       bInstant        Whether unequipping was instant or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "OnUneqiupped", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventOnUneqiupped_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Event called when the owning character died.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Event called when the owning character died." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "OwnerDied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics
	{
		struct AdvKitInventoryItem_eventUneqiup_Parms
		{
			bool bInstant;
		};
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventUneqiup_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventUneqiup_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Tell the item to unequip.\n\x09 * @param\x09""bInstant \x09True to unequip instantly, otherwise regular unequipment time and animations\n\x09 */" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Tell the item to unequip.\n@param       bInstant        True to unequip instantly, otherwise regular unequipment time and animations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "Uneqiup", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventUneqiup_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryItem_eventUneqiupServer_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::NewProp_bInstant = { "bInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitInventoryItem_eventUneqiupServer_Parms), &Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::NewProp_bInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Server callback to tell the item to unequip.\n\x09 * @param\x09""bInstant \x09True to equip instantly, otherwise regular unequipment time and animations\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Server callback to tell the item to unequip.\n@param       bInstant        True to equip instantly, otherwise regular unequipment time and animations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryItem, nullptr, "UneqiupServer", nullptr, nullptr, sizeof(AdvKitInventoryItem_eventUneqiupServer_Parms), Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister()
	{
		return AAdvKitInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepItemState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachmentSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UneqiupMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UneqiupMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UneqiupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UneqiupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAimOffset_MetaData[];
#endif
		static void NewProp_bUseAimOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropOnDeath_MetaData[];
#endif
		static void NewProp_bDropOnDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedPickupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DroppedPickupClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitInventoryItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_AttachToCharacter, "AttachToCharacter" }, // 900586605
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_CanBeCombinedWith, "CanBeCombinedWith" }, // 1253103376
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_CanEquip, "CanEquip" }, // 4097073535
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_CanUneqiup, "CanUneqiup" }, // 3266630713
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_CombinedWith, "CombinedWith" }, // 3746588180
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_DetachFromCharacter, "DetachFromCharacter" }, // 1657428591
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_Drop, "Drop" }, // 937813418
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_Equip, "Equip" }, // 1087218912
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_EquipServer, "EquipServer" }, // 267745068
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_GetInventoryIconTexture, "GetInventoryIconTexture" }, // 1941022231
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_GetItemState, "GetItemState" }, // 2737422879
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_OnEquip, "OnEquip" }, // 2935769592
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_OnEquipped, "OnEquipped" }, // 4137564746
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_OnRep_ItemState, "OnRep_ItemState" }, // 789861523
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiup, "OnUneqiup" }, // 1660074043
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_OnUneqiupped, "OnUneqiupped" }, // 3430905558
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_OwnerDied, "OwnerDied" }, // 2434654831
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_Uneqiup, "Uneqiup" }, // 2955108531
		{ &Z_Construct_UFunction_AAdvKitInventoryItem_UneqiupServer, "UneqiupServer" }, // 1356750759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Base item class that defines objects that the character can use\n * and store in its inventory. Items can be equipped and unequipped.\n */" },
		{ "IncludePath", "Items/AdvKitInventoryItem.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base item class that defines objects that the character can use\nand store in its inventory. Items can be equipped and unequipped." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_RepItemState_MetaData[] = {
		{ "Comment", "/** Replicated state of the item. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Replicated state of the item." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_RepItemState = { "RepItemState", "OnRep_ItemState", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, RepItemState), Z_Construct_UScriptStruct_FRepAdvKitInventoryState, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_RepItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_RepItemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_AttachmentSocketName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Name of the socket on the character mesh to attach the inventory to when equipping. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Name of the socket on the character mesh to attach the inventory to when equipping." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_AttachmentSocketName = { "AttachmentSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, AttachmentSocketName), METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_AttachmentSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_AttachmentSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupMontage_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Montage to play on the character when unequipping this item. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Montage to play on the character when unequipping this item." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupMontage = { "UneqiupMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, UneqiupMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupTime_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** How long does it take to unequip this item (in Seconds) */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "How long does it take to unequip this item (in Seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupTime = { "UneqiupTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, UneqiupTime), METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Montage to play on the character when equipping this item. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Montage to play on the character when equipping this item." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipTime_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** How long does it equip this item (in Seconds)*/" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "How long does it equip this item (in Seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipTime = { "EquipTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, EquipTime), METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Whether or not this item needs aim offsets (e.g. guns for targeting) */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Whether or not this item needs aim offsets (e.g. guns for targeting)" },
	};
#endif
	void Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset_SetBit(void* Obj)
	{
		((AAdvKitInventoryItem*)Obj)->bUseAimOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset = { "bUseAimOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitInventoryItem), &Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Flag to drop item when owner died */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Flag to drop item when owner died" },
	};
#endif
	void Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath_SetBit(void* Obj)
	{
		((AAdvKitInventoryItem*)Obj)->bDropOnDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath = { "bDropOnDeath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitInventoryItem), &Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_DroppedPickupClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Pickup that is dropped when this item is dropped by the owning character. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Pickup that is dropped when this item is dropped by the owning character." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_DroppedPickupClass = { "DroppedPickupClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, DroppedPickupClass), Z_Construct_UClass_AAdvKitPickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_DroppedPickupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_DroppedPickupClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Icon to draw for this inventory item. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Icon to draw for this inventory item." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Flavor text for the item. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Flavor text for the item." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Name of this inventory item. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitInventoryItem.h" },
		{ "ToolTip", "Name of this inventory item." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitInventoryItem, ItemName), METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_RepItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_AttachmentSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_UneqiupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_EquipTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bUseAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_bDropOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_DroppedPickupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryItem_Statics::NewProp_ItemName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitInventoryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitInventoryItem_Statics::ClassParams = {
		&AAdvKitInventoryItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitInventoryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitInventoryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitInventoryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitInventoryItem, 1222123699);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitInventoryItem>()
	{
		return AAdvKitInventoryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitInventoryItem(Z_Construct_UClass_AAdvKitInventoryItem, &AAdvKitInventoryItem::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitInventoryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitInventoryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitPickup() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPickup_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitPickup();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitUsable();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitPickup_PickedUpBy();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitPickup_Respawn();
// End Cross Module References
	static FName NAME_AAdvKitPickup_CanBePickedUpBy = FName(TEXT("CanBePickedUpBy"));
	bool AAdvKitPickup::CanBePickedUpBy(AAdvKitCharacter* Character)
	{
		AdvKitPickup_eventCanBePickedUpBy_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitPickup_CanBePickedUpBy),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitPickup_PickedUpBy = FName(TEXT("PickedUpBy"));
	void AAdvKitPickup::PickedUpBy(AAdvKitCharacter* Character, AAdvKitInventoryItem* WithItem)
	{
		AdvKitPickup_eventPickedUpBy_Parms Parms;
		Parms.Character=Character;
		Parms.WithItem=WithItem;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitPickup_PickedUpBy),&Parms);
	}
	static FName NAME_AAdvKitPickup_Respawn = FName(TEXT("Respawn"));
	void AAdvKitPickup::Respawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitPickup_Respawn),NULL);
	}
	void AAdvKitPickup::StaticRegisterNativesAAdvKitPickup()
	{
		UClass* Class = AAdvKitPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBePickedUpBy", &AAdvKitPickup::execCanBePickedUpBy },
			{ "PickedUpBy", &AAdvKitPickup::execPickedUpBy },
			{ "Respawn", &AAdvKitPickup::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitPickup_eventCanBePickedUpBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitPickup_eventCanBePickedUpBy_Parms), &Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitPickup_eventCanBePickedUpBy_Parms, Character), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Can a character pick this pickup up? (what a question indeed...)\n\n@param       Character       The character that wants to pick up this object.\n@return                              True if character can pick up the object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitPickup, "CanBePickedUpBy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitPickup_eventCanBePickedUpBy_Parms), Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WithItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::NewProp_WithItem = { UE4CodeGen_Private::EPropertyClass::Object, "WithItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitPickup_eventPickedUpBy_Parms, WithItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitPickup_eventPickedUpBy_Parms, Character), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::NewProp_WithItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Picked up by a character (should only be called when CanBePickedUpBy returns true)\n\n@param       Character       The character that picked up this object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitPickup, "PickedUpBy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(AdvKitPickup_eventPickedUpBy_Parms), Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitPickup_PickedUpBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitPickup_PickedUpBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitPickup_Respawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitPickup_Respawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Called by a timer after RespawnTime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitPickup_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitPickup, "Respawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitPickup_Respawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitPickup_Respawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitPickup_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitPickup_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitPickup_NoRegister()
	{
		return AAdvKitPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBePickedUpByOverlap_MetaData[];
#endif
		static void NewProp_bCanBePickedUpByOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBePickedUpByOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBePickedUpWithUse_MetaData[];
#endif
		static void NewProp_bCanBePickedUpWithUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBePickedUpWithUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRespawnAfterPickup_MetaData[];
#endif
		static void NewProp_bRespawnAfterPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRespawnAfterPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnPickup_MetaData[];
#endif
		static void NewProp_bDestroyOnPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitUsable,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitPickup_CanBePickedUpBy, "CanBePickedUpBy" }, // 512254175
		{ &Z_Construct_UFunction_AAdvKitPickup_PickedUpBy, "PickedUpBy" }, // 3032186589
		{ &Z_Construct_UFunction_AAdvKitPickup_Respawn, "Respawn" }, // 1759947549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/AdvKitPickup.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Pickup objects can act when the player overlaps them or uses them." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Can this be picked up by the character overlapping it?" },
	};
#endif
	void Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap_SetBit(void* Obj)
	{
		((AAdvKitPickup*)Obj)->bCanBePickedUpByOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBePickedUpByOverlap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitPickup), &Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Can this be picked up with the UsedBy function?" },
	};
#endif
	void Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse_SetBit(void* Obj)
	{
		((AAdvKitPickup*)Obj)->bCanBePickedUpWithUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBePickedUpWithUse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitPickup), &Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Whether this pickup is currently active (and visible etc...)." },
	};
#endif
	void Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((AAdvKitPickup*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitPickup), &Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditCondition", "bRespawnAfterPickup" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "How long to wait until respawning." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_RespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "RespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AAdvKitPickup, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_RespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditCondition", "!bDestroyOnPickup" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Respawn after being picked up." },
	};
#endif
	void Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup_SetBit(void* Obj)
	{
		((AAdvKitPickup*)Obj)->bRespawnAfterPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup = { UE4CodeGen_Private::EPropertyClass::Bool, "bRespawnAfterPickup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitPickup), &Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/AdvKitPickup.h" },
		{ "ToolTip", "Destroy this pickup actor after being picked up by a character." },
	};
#endif
	void Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup_SetBit(void* Obj)
	{
		((AAdvKitPickup*)Obj)->bDestroyOnPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup = { UE4CodeGen_Private::EPropertyClass::Bool, "bDestroyOnPickup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitPickup), &Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpByOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bCanBePickedUpWithUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_RespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bRespawnAfterPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitPickup_Statics::NewProp_bDestroyOnPickup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitPickup_Statics::ClassParams = {
		&AAdvKitPickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAdvKitPickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitPickup, 3473976357);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitPickup(Z_Construct_UClass_AAdvKitPickup, &AAdvKitPickup::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

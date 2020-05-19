// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitInventoryManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitInventoryManager() {}
// Cross Module References
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryManager_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_NextItem();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventInventoryItemsChanged_Parms
		{
			AAdvKitInventoryManager* InInventory;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::NewProp_InInventory = { UE4CodeGen_Private::EPropertyClass::Object, "InInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventInventoryItemsChanged_Parms, InInventory), Z_Construct_UClass_AAdvKitInventoryManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, "InventoryItemsChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvKitRuntime_eventInventoryItemsChanged_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventActiveItemChanged_Parms
		{
			AAdvKitInventoryManager* InInventory;
			AAdvKitInventoryItem* NewItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::NewProp_NewItem = { UE4CodeGen_Private::EPropertyClass::Object, "NewItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventActiveItemChanged_Parms, NewItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::NewProp_InInventory = { UE4CodeGen_Private::EPropertyClass::Object, "InInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventActiveItemChanged_Parms, InInventory), Z_Construct_UClass_AAdvKitInventoryManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::NewProp_NewItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, "ActiveItemChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvKitRuntime_eventActiveItemChanged_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventItemRemovedSignature_Parms
		{
			AAdvKitInventoryManager* FromInventory;
			AAdvKitInventoryItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventItemRemovedSignature_Parms, Item), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::NewProp_FromInventory = { UE4CodeGen_Private::EPropertyClass::Object, "FromInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventItemRemovedSignature_Parms, FromInventory), Z_Construct_UClass_AAdvKitInventoryManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::NewProp_FromInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, "ItemRemovedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvKitRuntime_eventItemRemovedSignature_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventItemAddedSignature_Parms
		{
			AAdvKitInventoryManager* ToInventory;
			AAdvKitInventoryItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventItemAddedSignature_Parms, Item), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::NewProp_ToInventory = { UE4CodeGen_Private::EPropertyClass::Object, "ToInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventItemAddedSignature_Parms, ToInventory), Z_Construct_UClass_AAdvKitInventoryManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::NewProp_ToInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, "ItemAddedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvKitRuntime_eventItemAddedSignature_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AAdvKitInventoryManager_AddInventory = FName(TEXT("AddInventory"));
	void AAdvKitInventoryManager::AddInventory(AAdvKitInventoryItem* NewInventory, bool bEquip)
	{
		AdvKitInventoryManager_eventAddInventory_Parms Parms;
		Parms.NewInventory=NewInventory;
		Parms.bEquip=bEquip ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryManager_AddInventory),&Parms);
	}
	static FName NAME_AAdvKitInventoryManager_CanEquipInventory = FName(TEXT("CanEquipInventory"));
	bool AAdvKitInventoryManager::CanEquipInventory(AAdvKitInventoryItem* NewInventory, bool bInstant)
	{
		AdvKitInventoryManager_eventCanEquipInventory_Parms Parms;
		Parms.NewInventory=NewInventory;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryManager_CanEquipInventory),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitInventoryManager_RemoveInventory = FName(TEXT("RemoveInventory"));
	void AAdvKitInventoryManager::RemoveInventory(AAdvKitInventoryItem* RemovedInventory)
	{
		AdvKitInventoryManager_eventRemoveInventory_Parms Parms;
		Parms.RemovedInventory=RemovedInventory;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryManager_RemoveInventory),&Parms);
	}
	static FName NAME_AAdvKitInventoryManager_SetNewInventoryServer = FName(TEXT("SetNewInventoryServer"));
	void AAdvKitInventoryManager::SetNewInventoryServer(AAdvKitInventoryItem* NewInventory, bool bInstant)
	{
		AdvKitInventoryManager_eventSetNewInventoryServer_Parms Parms;
		Parms.NewInventory=NewInventory;
		Parms.bInstant=bInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitInventoryManager_SetNewInventoryServer),&Parms);
	}
	void AAdvKitInventoryManager::StaticRegisterNativesAAdvKitInventoryManager()
	{
		UClass* Class = AAdvKitInventoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInventory", &AAdvKitInventoryManager::execAddInventory },
			{ "CanEquipInventory", &AAdvKitInventoryManager::execCanEquipInventory },
			{ "GetCurrentInventory", &AAdvKitInventoryManager::execGetCurrentInventory },
			{ "GetInventoryByClass", &AAdvKitInventoryManager::execGetInventoryByClass },
			{ "GetPendingInventory", &AAdvKitInventoryManager::execGetPendingInventory },
			{ "NextItem", &AAdvKitInventoryManager::execNextItem },
			{ "OnRep_InventoryArray", &AAdvKitInventoryManager::execOnRep_InventoryArray },
			{ "PreviousItem", &AAdvKitInventoryManager::execPreviousItem },
			{ "RemoveInventory", &AAdvKitInventoryManager::execRemoveInventory },
			{ "SetNewInventory", &AAdvKitInventoryManager::execSetNewInventory },
			{ "SetNewInventoryByClass", &AAdvKitInventoryManager::execSetNewInventoryByClass },
			{ "SetNewInventoryServer", &AAdvKitInventoryManager::execSetNewInventoryServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics
	{
		static void NewProp_bEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquip;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::NewProp_bEquip_SetBit(void* Obj)
	{
		((AdvKitInventoryManager_eventAddInventory_Parms*)Obj)->bEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::NewProp_bEquip = { UE4CodeGen_Private::EPropertyClass::Bool, "bEquip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitInventoryManager_eventAddInventory_Parms), &Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::NewProp_bEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::NewProp_NewInventory = { UE4CodeGen_Private::EPropertyClass::Object, "NewInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventAddInventory_Parms, NewInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::NewProp_bEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::NewProp_NewInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_bEquip", "false" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Add a new item to the inventory e.g. when the character picks up a weapon.\n@param       NewInventory    New item to add\n@param       bEquip                  Whether or not to equip the new item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "AddInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitInventoryManager_eventAddInventory_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitInventoryManager_eventCanEquipInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitInventoryManager_eventCanEquipInventory_Parms), &Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryManager_eventCanEquipInventory_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_bInstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitInventoryManager_eventCanEquipInventory_Parms), &Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_NewInventory = { UE4CodeGen_Private::EPropertyClass::Object, "NewInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventCanEquipInventory_Parms, NewInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_bInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::NewProp_NewInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Check to see if an item can be equipped\n@param       NewInventory    The item to equip\n@param       bInstant                False to play un-/equip animation, true to equip without delay\n@return True if it can be equipped, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "CanEquipInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitInventoryManager_eventCanEquipInventory_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics
	{
		struct AdvKitInventoryManager_eventGetCurrentInventory_Parms
		{
			AAdvKitInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventGetCurrentInventory_Parms, ReturnValue), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Getter for the currently equipped item.\n@return Current item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "GetCurrentInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AdvKitInventoryManager_eventGetCurrentInventory_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics
	{
		struct AdvKitInventoryManager_eventGetInventoryByClass_Parms
		{
			TSubclassOf<AAdvKitInventoryItem>  InventoryClass;
			AAdvKitInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventGetInventoryByClass_Parms, ReturnValue), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::NewProp_InventoryClass = { UE4CodeGen_Private::EPropertyClass::Class, "InventoryClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventGetInventoryByClass_Parms, InventoryClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::NewProp_InventoryClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Get the first inventory item that is of the given class.\n@param       InventoryClass  Class of item to find\n@return      Item that matches class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "GetInventoryByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AdvKitInventoryManager_eventGetInventoryByClass_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics
	{
		struct AdvKitInventoryManager_eventGetPendingInventory_Parms
		{
			AAdvKitInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventGetPendingInventory_Parms, ReturnValue), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Getter for the pending inventory item that will be equipped next.\n@return Pending item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "GetPendingInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AdvKitInventoryManager_eventGetPendingInventory_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics
	{
		struct AdvKitInventoryManager_eventNextItem_Parms
		{
			AAdvKitInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventNextItem_Parms, ReturnValue), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Cycle through the inventory array and equip the next item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "NextItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AdvKitInventoryManager_eventNextItem_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_NextItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_NextItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Callback when the inventory array changed remotely." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "OnRep_InventoryArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics
	{
		struct AdvKitInventoryManager_eventPreviousItem_Parms
		{
			AAdvKitInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventPreviousItem_Parms, ReturnValue), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Cycle through the inventory array and equip the previous item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "PreviousItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AdvKitInventoryManager_eventPreviousItem_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovedInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::NewProp_RemovedInventory = { UE4CodeGen_Private::EPropertyClass::Object, "RemovedInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventRemoveInventory_Parms, RemovedInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::NewProp_RemovedInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Remove an item from the inventory e.g. when the character drops a weapon.\n@param       RemovedInventory        Item to remove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "RemoveInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitInventoryManager_eventRemoveInventory_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics
	{
		struct AdvKitInventoryManager_eventSetNewInventory_Parms
		{
			AAdvKitInventoryItem* NewInventory;
			bool bInstant;
		};
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryManager_eventSetNewInventory_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::NewProp_bInstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitInventoryManager_eventSetNewInventory_Parms), &Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::NewProp_NewInventory = { UE4CodeGen_Private::EPropertyClass::Object, "NewInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventSetNewInventory_Parms, NewInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::NewProp_bInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::NewProp_NewInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Equip an item\n@param       NewInventory    The item to equip\n@param       bInstant                False to play un-/equip animation, true to equip without delay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "SetNewInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AdvKitInventoryManager_eventSetNewInventory_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics
	{
		struct AdvKitInventoryManager_eventSetNewInventoryByClass_Parms
		{
			TSubclassOf<AAdvKitInventoryItem>  NewInventoryClass;
			bool bInstant;
		};
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewInventoryClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryManager_eventSetNewInventoryByClass_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::NewProp_bInstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitInventoryManager_eventSetNewInventoryByClass_Parms), &Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::NewProp_NewInventoryClass = { UE4CodeGen_Private::EPropertyClass::Class, "NewInventoryClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventSetNewInventoryByClass_Parms, NewInventoryClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::NewProp_bInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::NewProp_NewInventoryClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_bInstant", "false" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Equip an item that is of the specified class\n@param       NewInventoryClass       The class of the item to equip\n@param       bInstant                False to play un-/equip animation, true to equip without delay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "SetNewInventoryByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AdvKitInventoryManager_eventSetNewInventoryByClass_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics
	{
		static void NewProp_bInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstant;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::NewProp_bInstant_SetBit(void* Obj)
	{
		((AdvKitInventoryManager_eventSetNewInventoryServer_Parms*)Obj)->bInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::NewProp_bInstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitInventoryManager_eventSetNewInventoryServer_Parms), &Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::NewProp_bInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::NewProp_NewInventory = { UE4CodeGen_Private::EPropertyClass::Object, "NewInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitInventoryManager_eventSetNewInventoryServer_Parms, NewInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::NewProp_bInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::NewProp_NewInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Server call to equip an item that is of the specified class\n@param       NewInventory    The class of the item to equip\n@param       bInstant                False to play un-/equip animation, true to equip without delay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitInventoryManager, "SetNewInventoryServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(AdvKitInventoryManager_eventSetNewInventoryServer_Parms), Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitInventoryManager_NoRegister()
	{
		return AAdvKitInventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitInventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInventoryItemsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryItemsChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveItemChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveItemChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitInventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitInventoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_AddInventory, "AddInventory" }, // 3121749688
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_CanEquipInventory, "CanEquipInventory" }, // 2360592811
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_GetCurrentInventory, "GetCurrentInventory" }, // 3741977891
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_GetInventoryByClass, "GetInventoryByClass" }, // 1713282255
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_GetPendingInventory, "GetPendingInventory" }, // 17282321
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_NextItem, "NextItem" }, // 3789958521
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_OnRep_InventoryArray, "OnRep_InventoryArray" }, // 3628155834
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_PreviousItem, "PreviousItem" }, // 3850277793
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_RemoveInventory, "RemoveInventory" }, // 2651443671
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventory, "SetNewInventory" }, // 2783944999
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryByClass, "SetNewInventoryByClass" }, // 486296880
		{ &Z_Construct_UFunction_AAdvKitInventoryManager_SetNewInventoryServer, "SetNewInventoryServer" }, // 2253690668
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/AdvKitInventoryManager.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Within = AdvKitCharacter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnInventoryItemsChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Delegate that is called when a new item was added or removed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnInventoryItemsChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInventoryItemsChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AAdvKitInventoryManager, OnInventoryItemsChanged), Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnInventoryItemsChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnInventoryItemsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnActiveItemChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Delegate that is called when a new item was equipped" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnActiveItemChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActiveItemChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AAdvKitInventoryManager, OnActiveItemChanged), Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnActiveItemChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnActiveItemChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_CurrentInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Item that is currently equipped" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_CurrentInventory = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020035, 1, nullptr, STRUCT_OFFSET(AAdvKitInventoryManager, CurrentInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_CurrentInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_CurrentInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_PendingInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "Item the player wants to equip next" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_PendingInventory = { UE4CodeGen_Private::EPropertyClass::Object, "PendingInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020035, 1, nullptr, STRUCT_OFFSET(AAdvKitInventoryManager, PendingInventory), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_PendingInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_PendingInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/AdvKitInventoryManager.h" },
		{ "ToolTip", "All items currently in the inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory = { UE4CodeGen_Private::EPropertyClass::Array, "Inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100020035, 1, "OnRep_InventoryArray", STRUCT_OFFSET(AAdvKitInventoryManager, Inventory), METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitInventoryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnInventoryItemsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_OnActiveItemChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_CurrentInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_PendingInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitInventoryManager_Statics::NewProp_Inventory_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitInventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitInventoryManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitInventoryManager_Statics::ClassParams = {
		&AAdvKitInventoryManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAdvKitInventoryManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitInventoryManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitInventoryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitInventoryManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitInventoryManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitInventoryManager, 1560483924);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitInventoryManager(Z_Construct_UClass_AAdvKitInventoryManager, &AAdvKitInventoryManager::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitInventoryManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitInventoryManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

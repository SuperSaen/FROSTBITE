// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitRuntime_init() {}
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_AdvKitCharacterDied__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_AdvKitCharacterDied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_ItemAddedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_ItemRemovedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_ActiveItemChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvKitRuntime_InventoryItemsChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvKitRuntime",
				PKG_CompiledIn | 0x00000000,
				0xDADB81FB,
				0x288681BD,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

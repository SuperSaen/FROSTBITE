// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitUsableSimpleSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitUsableSimpleSwitch() {}
// Cross Module References
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitUsableSimpleSwitch_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitUsableSimpleSwitch();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitUsable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventSwitchDeactivatedBySignature_Parms
		{
			AAdvKitCharacter* ByCharacter;
			AAdvKitInventoryItem* WithItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WithItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::NewProp_WithItem = { UE4CodeGen_Private::EPropertyClass::Object, "WithItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventSwitchDeactivatedBySignature_Parms, WithItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::NewProp_ByCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "ByCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventSwitchDeactivatedBySignature_Parms, ByCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::NewProp_WithItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::NewProp_ByCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, "SwitchDeactivatedBySignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvKitRuntime_eventSwitchDeactivatedBySignature_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventSwitchActivatedBySignature_Parms
		{
			AAdvKitCharacter* ByCharacter;
			AAdvKitInventoryItem* WithItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WithItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::NewProp_WithItem = { UE4CodeGen_Private::EPropertyClass::Object, "WithItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventSwitchActivatedBySignature_Parms, WithItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::NewProp_ByCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "ByCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AdvKitRuntime_eventSwitchActivatedBySignature_Parms, ByCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::NewProp_WithItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::NewProp_ByCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, "SwitchActivatedBySignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvKitRuntime_eventSwitchActivatedBySignature_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AAdvKitUsableSimpleSwitch::StaticRegisterNativesAAdvKitUsableSimpleSwitch()
	{
	}
	UClass* Z_Construct_UClass_AAdvKitUsableSimpleSwitch_NoRegister()
	{
		return AAdvKitUsableSimpleSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeactivatedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeactivatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeDeactivated_MetaData[];
#endif
		static void NewProp_bCanBeDeactivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeActivated_MetaData[];
#endif
		static void NewProp_bCanBeActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KeyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitUsable,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/AdvKitUsableSimpleSwitch.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base class for a simple switch that can be activated with an item (e.g. a key)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnDeactivatedBy_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Delegate that is called when the switch was deactivated." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnDeactivatedBy = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDeactivatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010100010080000, 1, nullptr, STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, OnDeactivatedBy), Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchDeactivatedBySignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnDeactivatedBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnDeactivatedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnActivatedBy_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Delegate that is called when the switch was activated." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnActivatedBy = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActivatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010100010080000, 1, nullptr, STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, OnActivatedBy), Z_Construct_UDelegateFunction_AdvKitRuntime_SwitchActivatedBySignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnActivatedBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnActivatedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated_MetaData[] = {
		{ "Category", "Switch" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Can this switch be deactivated?" },
	};
#endif
	void Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated_SetBit(void* Obj)
	{
		((AAdvKitUsableSimpleSwitch*)Obj)->bCanBeDeactivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitUsableSimpleSwitch), &Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated_MetaData[] = {
		{ "Category", "Switch" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Can this switch be activated?" },
	};
#endif
	void Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated_SetBit(void* Obj)
	{
		((AAdvKitUsableSimpleSwitch*)Obj)->bCanBeActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitUsableSimpleSwitch), &Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Switch" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Is this switch currently active?" },
	};
#endif
	void Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((AAdvKitUsableSimpleSwitch*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitUsableSimpleSwitch), &Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_KeyClass_MetaData[] = {
		{ "Category", "Switch" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Class of another item that this switch needs to be activated (if any)." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_KeyClass = { UE4CodeGen_Private::EPropertyClass::Class, "KeyClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, KeyClass), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_KeyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_KeyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsableSimpleSwitch.h" },
		{ "ToolTip", "Root component for useable actors." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AAdvKitUsableSimpleSwitch, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnDeactivatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_OnActivatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bCanBeActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_KeyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitUsableSimpleSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::ClassParams = {
		&AAdvKitUsableSimpleSwitch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		nullptr, 0,
		Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitUsableSimpleSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitUsableSimpleSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitUsableSimpleSwitch, 610163836);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitUsableSimpleSwitch(Z_Construct_UClass_AAdvKitUsableSimpleSwitch, &AAdvKitUsableSimpleSwitch::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitUsableSimpleSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitUsableSimpleSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

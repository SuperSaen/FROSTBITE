// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitUsable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitUsable() {}
// Cross Module References
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitInventoryItem_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitUsable_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitUsable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventUsedBySignature_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::NewProp_WithItem = { "WithItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvKitRuntime_eventUsedBySignature_Parms, WithItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::NewProp_ByCharacter = { "ByCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvKitRuntime_eventUsedBySignature_Parms, ByCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::NewProp_WithItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::NewProp_ByCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/AdvKitUsable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, nullptr, "UsedBySignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvKitRuntime_eventUsedBySignature_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AAdvKitUsable::execCanBeUsedBy)
	{
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character);
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeUsedBy_Implementation(Z_Param_Character,Z_Param_WithItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdvKitUsable::execUsedBy)
	{
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character);
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UsedBy_Implementation(Z_Param_Character,Z_Param_WithItem);
		P_NATIVE_END;
	}
	static FName NAME_AAdvKitUsable_CanBeUsedBy = FName(TEXT("CanBeUsedBy"));
	bool AAdvKitUsable::CanBeUsedBy(AAdvKitCharacter* Character, AAdvKitInventoryItem* WithItem)
	{
		AdvKitUsable_eventCanBeUsedBy_Parms Parms;
		Parms.Character=Character;
		Parms.WithItem=WithItem;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitUsable_CanBeUsedBy),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitUsable_UsedBy = FName(TEXT("UsedBy"));
	void AAdvKitUsable::UsedBy(AAdvKitCharacter* Character, AAdvKitInventoryItem* WithItem)
	{
		AdvKitUsable_eventUsedBy_Parms Parms;
		Parms.Character=Character;
		Parms.WithItem=WithItem;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitUsable_UsedBy),&Parms);
	}
	void AAdvKitUsable::StaticRegisterNativesAAdvKitUsable()
	{
		UClass* Class = AAdvKitUsable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeUsedBy", &AAdvKitUsable::execCanBeUsedBy },
			{ "UsedBy", &AAdvKitUsable::execUsedBy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WithItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitUsable_eventCanBeUsedBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitUsable_eventCanBeUsedBy_Parms), &Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_WithItem = { "WithItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitUsable_eventCanBeUsedBy_Parms, WithItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitUsable_eventCanBeUsedBy_Parms, Character), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_WithItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Called before UsedBy to check whether or not a character can use this object.\n\x09 *\n\x09 * @param\x09""Character\x09The using character.\n\x09 * @param\x09WithItem\x09Optional item the character used with this object (e.g. a key).\n\x09 * @return\x09true if usable\n\x09 */" },
		{ "CPP_Default_WithItem", "None" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsable.h" },
		{ "ToolTip", "Called before UsedBy to check whether or not a character can use this object.\n\n@param       Character       The using character.\n@param       WithItem        Optional item the character used with this object (e.g. a key).\n@return      true if usable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitUsable, nullptr, "CanBeUsedBy", nullptr, nullptr, sizeof(AdvKitUsable_eventCanBeUsedBy_Parms), Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WithItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::NewProp_WithItem = { "WithItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitUsable_eventUsedBy_Parms, WithItem), Z_Construct_UClass_AAdvKitInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitUsable_eventUsedBy_Parms, Character), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::NewProp_WithItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** \n\x09 * Called when a character uses this object.\n\x09 * \n\x09 * @param\x09""Character\x09The using character.\n\x09 * @param\x09WithItem\x09Optional item the character used with this object (e.g. a key).\n\x09 */" },
		{ "CPP_Default_WithItem", "None" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsable.h" },
		{ "ToolTip", "Called when a character uses this object.\n\n@param       Character       The using character.\n@param       WithItem        Optional item the character used with this object (e.g. a key)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitUsable, nullptr, "UsedBy", nullptr, nullptr, sizeof(AdvKitUsable_eventUsedBy_Parms), Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitUsable_UsedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitUsable_UsedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitUsable_NoRegister()
	{
		return AAdvKitUsable::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitUsable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUsedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitUsable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitUsable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitUsable_CanBeUsedBy, "CanBeUsedBy" }, // 2510721530
		{ &Z_Construct_UFunction_AAdvKitUsable_UsedBy, "UsedBy" }, // 3818652665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Base class for all sorts of usable scene actors (like levers or buttons).\n */" },
		{ "IncludePath", "Items/AdvKitUsable.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base class for all sorts of usable scene actors (like levers or buttons)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitUsable_Statics::NewProp_OnUsedBy_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Delegate that is called when this actor was used. */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitUsable.h" },
		{ "ToolTip", "Delegate that is called when this actor was used." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAdvKitUsable_Statics::NewProp_OnUsedBy = { "OnUsedBy", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitUsable, OnUsedBy), Z_Construct_UDelegateFunction_AdvKitRuntime_UsedBySignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsable_Statics::NewProp_OnUsedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsable_Statics::NewProp_OnUsedBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitUsable_Statics::NewProp_OnUsedBy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitUsable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitUsable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitUsable_Statics::ClassParams = {
		&AAdvKitUsable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitUsable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitUsable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitUsable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitUsable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitUsable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitUsable, 2792371633);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitUsable>()
	{
		return AAdvKitUsable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitUsable(Z_Construct_UClass_AAdvKitUsable, &AAdvKitUsable::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitUsable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitUsable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

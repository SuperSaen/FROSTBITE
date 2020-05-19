// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitWeaponTracing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitWeaponTracing() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitWeaponTracing_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitWeaponTracing();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitWeapon();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAdvKitWeaponTracing_ApplyDamageToHit = FName(TEXT("ApplyDamageToHit"));
	void AAdvKitWeaponTracing::ApplyDamageToHit(FHitResult Hit)
	{
		AdvKitWeaponTracing_eventApplyDamageToHit_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitWeaponTracing_ApplyDamageToHit),&Parms);
	}
	static FName NAME_AAdvKitWeaponTracing_OnTraceHit = FName(TEXT("OnTraceHit"));
	void AAdvKitWeaponTracing::OnTraceHit(FHitResult Hit)
	{
		AdvKitWeaponTracing_eventOnTraceHit_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitWeaponTracing_OnTraceHit),&Parms);
	}
	void AAdvKitWeaponTracing::StaticRegisterNativesAAdvKitWeaponTracing()
	{
		UClass* Class = AAdvKitWeaponTracing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamageToHit", &AAdvKitWeaponTracing::execApplyDamageToHit },
			{ "OnTraceHit", &AAdvKitWeaponTracing::execOnTraceHit },
			{ "StartTracing", &AAdvKitWeaponTracing::execStartTracing },
			{ "StopTracing", &AAdvKitWeaponTracing::execStopTracing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitWeaponTracing_eventApplyDamageToHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Applys damage to a trace hit. All hits given to the method are guaranteed to not \n\x09 * have been hit during a previous tick, unless the tracing component has already left\n\x09 * the actor previously\n\x09 * @param\x09Hit \x09The hit to apply damage to\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Applys damage to a trace hit. All hits given to the method are guaranteed to not\nhave been hit during a previous tick, unless the tracing component has already left\nthe actor previously\n@param       Hit     The hit to apply damage to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, nullptr, "ApplyDamageToHit", nullptr, nullptr, sizeof(AdvKitWeaponTracing_eventApplyDamageToHit_Parms), Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitWeaponTracing_eventOnTraceHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Callback when the weapon hit anything. Called for each hit.\n\x09 * @param\x09Hit \x09The hit of the trace\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Callback when the weapon hit anything. Called for each hit.\n@param       Hit     The hit of the trace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, nullptr, "OnTraceHit", nullptr, nullptr, sizeof(AdvKitWeaponTracing_eventOnTraceHit_Parms), Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Enable tracing updates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Enable tracing updates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, nullptr, "StartTracing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Disable tracing updates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Disable tracing updates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, nullptr, "StopTracing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitWeaponTracing_NoRegister()
	{
		return AAdvKitWeaponTracing::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitWeaponTracing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitsPerTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnitsPerTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTracing_MetaData[];
#endif
		static void NewProp_bIsTracing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitWeaponTracing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitWeaponTracing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit, "ApplyDamageToHit" }, // 3120149007
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit, "OnTraceHit" }, // 1953535517
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing, "StartTracing" }, // 1750729508
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing, "StopTracing" }, // 1871775124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Base class for sword like weapons. \n *\n * This weapon class has a defined line that will hurt anything that intersects it. \n * When the weapon is moved it will try to hit anything that crossed the path of the \n * trace line during the move.\n */" },
		{ "IncludePath", "Items/AdvKitWeaponTracing.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base class for sword like weapons.\n\nThis weapon class has a defined line that will hurt anything that intersects it.\nWhen the weapon is moved it will try to hit anything that crossed the path of the\ntrace line during the move." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** The number of sub traces when the weapon moved is Distance/UnitsPerTrace */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "The number of sub traces when the weapon moved is Distance/UnitsPerTrace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace = { "UnitsPerTrace", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitWeaponTracing, UnitsPerTrace), METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Flag to enable tracing updates */" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Flag to enable tracing updates" },
	};
#endif
	void Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_SetBit(void* Obj)
	{
		((AAdvKitWeaponTracing*)Obj)->bIsTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing = { "bIsTracing", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitWeaponTracing), &Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Component responsible for handling the tracing. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Component responsible for handling the tracing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent = { "TraceComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitWeaponTracing, TraceComponent), Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitWeaponTracing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitWeaponTracing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitWeaponTracing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::ClassParams = {
		&AAdvKitWeaponTracing::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitWeaponTracing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitWeaponTracing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitWeaponTracing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitWeaponTracing, 1651305308);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitWeaponTracing>()
	{
		return AAdvKitWeaponTracing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitWeaponTracing(Z_Construct_UClass_AAdvKitWeaponTracing, &AAdvKitWeaponTracing::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitWeaponTracing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitWeaponTracing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

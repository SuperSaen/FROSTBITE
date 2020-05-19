// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(AdvKitWeaponTracing_eventApplyDamageToHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Applys damage to a trace hit. All hits given to the method are guaranteed to not\nhave been hit during a previous tick, unless the tracing component has already left\nthe actor previously\n@param       Hit     The hit to apply damage to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, "ApplyDamageToHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(AdvKitWeaponTracing_eventApplyDamageToHit_Parms), Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(AdvKitWeaponTracing_eventOnTraceHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Callback when the weapon hit anything. Called for each hit.\n@param       Hit     The hit of the trace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, "OnTraceHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(AdvKitWeaponTracing_eventOnTraceHit_Parms), Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Enable tracing updates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, "StartTracing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Disable tracing updates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitWeaponTracing, "StopTracing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_ApplyDamageToHit, "ApplyDamageToHit" }, // 947991314
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_OnTraceHit, "OnTraceHit" }, // 69673657
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_StartTracing, "StartTracing" }, // 45823682
		{ &Z_Construct_UFunction_AAdvKitWeaponTracing_StopTracing, "StopTracing" }, // 4241698655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/AdvKitWeaponTracing.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base class for sword like weapons.\n\nThis weapon class has a defined line that will hurt anything that intersects it.\nWhen the weapon is moved it will try to hit anything that crossed the path of the\ntrace line during the move." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "The number of sub traces when the weapon moved is Distance/UnitsPerTrace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace = { UE4CodeGen_Private::EPropertyClass::Float, "UnitsPerTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AAdvKitWeaponTracing, UnitsPerTrace), METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_UnitsPerTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Flag to enable tracing updates" },
	};
#endif
	void Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_SetBit(void* Obj)
	{
		((AAdvKitWeaponTracing*)Obj)->bIsTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTracing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvKitWeaponTracing), &Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_bIsTracing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/AdvKitWeaponTracing.h" },
		{ "ToolTip", "Component responsible for handling the tracing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TraceComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AAdvKitWeaponTracing, TraceComponent), Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::NewProp_TraceComponent_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAdvKitWeaponTracing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitWeaponTracing_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(AAdvKitWeaponTracing, 1058737014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitWeaponTracing(Z_Construct_UClass_AAdvKitWeaponTracing, &AAdvKitWeaponTracing::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitWeaponTracing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitWeaponTracing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

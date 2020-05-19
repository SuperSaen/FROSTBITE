// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Items/AdvKitProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitProjectile() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitProjectile_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitProjectile_Init();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitProjectile_OnImpact();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAdvKitProjectile_OnImpact = FName(TEXT("OnImpact"));
	void AAdvKitProjectile::OnImpact(FHitResult const& Impact)
	{
		AdvKitProjectile_eventOnImpact_Parms Parms;
		Parms.Impact=Impact;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitProjectile_OnImpact),&Parms);
	}
	void AAdvKitProjectile::StaticRegisterNativesAAdvKitProjectile()
	{
		UClass* Class = AAdvKitProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AAdvKitProjectile::execInit },
			{ "OnImpact", &AAdvKitProjectile::execOnImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitProjectile_Init_Statics
	{
		struct AdvKitProjectile_eventInit_Parms
		{
			FVector Direction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitProjectile_eventInit_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitProjectile.h" },
		{ "ToolTip", "Initializes the projectile movement into a specified direction.\n@param       Direction       Direction the projectile should fly in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitProjectile, nullptr, "Init", sizeof(AdvKitProjectile_eventInit_Parms), Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitProjectile_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitProjectile_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitProjectile_eventOnImpact_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::NewProp_Impact_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::NewProp_Impact_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::NewProp_Impact,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Items/AdvKitProjectile.h" },
		{ "ToolTip", "Callback when projectile hit something.\n@param       Impact  Hit that triggered the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitProjectile, nullptr, "OnImpact", sizeof(AdvKitProjectile_eventOnImpact_Parms), Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitProjectile_OnImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitProjectile_OnImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitProjectile_NoRegister()
	{
		return AAdvKitProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnStop_MetaData[];
#endif
		static void NewProp_bDestroyOnStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitProjectile_Init, "Init" }, // 2548837625
		{ &Z_Construct_UFunction_AAdvKitProjectile_OnImpact, "OnImpact" }, // 3242304429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitProjectile_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "IncludePath", "Items/AdvKitProjectile.h" },
		{ "ModuleRelativePath", "Public/Items/AdvKitProjectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Simple projectile class with a sphere root and projectile movement component with\ncallbacks for projectile death." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/AdvKitProjectile.h" },
		{ "ToolTip", "Movement component for the projectile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitProjectile, MovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_MovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_DefaultRootComponent_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/AdvKitProjectile.h" },
		{ "ToolTip", "Root component for collision handling" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_DefaultRootComponent = { "DefaultRootComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitProjectile, DefaultRootComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_DefaultRootComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_DefaultRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Items/AdvKitProjectile.h" },
		{ "ToolTip", "Destroy the particle if movement stops" },
	};
#endif
	void Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop_SetBit(void* Obj)
	{
		((AAdvKitProjectile*)Obj)->bDestroyOnStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop = { "bDestroyOnStop", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitProjectile), &Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_DefaultRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitProjectile_Statics::NewProp_bDestroyOnStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitProjectile_Statics::ClassParams = {
		&AAdvKitProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAdvKitProjectile_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitProjectile, 1779473541);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitProjectile>()
	{
		return AAdvKitProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitProjectile(Z_Construct_UClass_AAdvKitProjectile, &AAdvKitProjectile::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

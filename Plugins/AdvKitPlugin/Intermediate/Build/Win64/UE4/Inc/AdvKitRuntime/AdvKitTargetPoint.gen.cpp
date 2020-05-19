// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitTargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTargetPoint() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitTargetPoint_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget();
// End Cross Module References
	void AAdvKitTargetPoint::StaticRegisterNativesAAdvKitTargetPoint()
	{
		UClass* Class = AAdvKitTargetPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetedActor", &AAdvKitTargetPoint::execGetTargetedActor },
			{ "IsValidTarget", &AAdvKitTargetPoint::execIsValidTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics
	{
		struct AdvKitTargetPoint_eventGetTargetedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTargetPoint_eventGetTargetedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetPoint.h" },
		{ "ToolTip", "Gets the actor that is targeted by this point.\n@return The actual target of this point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitTargetPoint, nullptr, "GetTargetedActor", sizeof(AdvKitTargetPoint_eventGetTargetedActor_Parms), Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics
	{
		struct AdvKitTargetPoint_eventIsValidTarget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTargetPoint_eventIsValidTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTargetPoint_eventIsValidTarget_Parms), &Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetPoint.h" },
		{ "ToolTip", "@return True if this point is currently able to be targeted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitTargetPoint, nullptr, "IsValidTarget", sizeof(AdvKitTargetPoint_eventIsValidTarget_Parms), Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitTargetPoint_NoRegister()
	{
		return AAdvKitTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeTargeted_MetaData[];
#endif
		static void NewProp_bCanBeTargeted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeTargeted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitTargetPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitTargetPoint_GetTargetedActor, "GetTargetedActor" }, // 3902715289
		{ &Z_Construct_UFunction_AAdvKitTargetPoint_IsValidTarget, "IsValidTarget" }, // 2701617565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/AdvKitTargetPoint.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief This actor defines a point that can be targeted by characters or weapons." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetPoint.h" },
		{ "ToolTip", "True if the target point is currently active" },
	};
#endif
	void Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted_SetBit(void* Obj)
	{
		((AAdvKitTargetPoint*)Obj)->bCanBeTargeted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted = { "bCanBeTargeted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvKitTargetPoint), &Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitTargetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitTargetPoint_Statics::NewProp_bCanBeTargeted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitTargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitTargetPoint_Statics::ClassParams = {
		&AAdvKitTargetPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitTargetPoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAdvKitTargetPoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitTargetPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAdvKitTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitTargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitTargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitTargetPoint, 1899193252);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitTargetPoint>()
	{
		return AAdvKitTargetPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitTargetPoint(Z_Construct_UClass_AAdvKitTargetPoint, &AAdvKitTargetPoint::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitTargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitTargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

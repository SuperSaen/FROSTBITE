// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitGravityCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitGravityCharacterMovementComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UAdvKitGravityCharacterMovementComponent::StaticRegisterNativesUAdvKitGravityCharacterMovementComponent()
	{
		UClass* Class = UAdvKitGravityCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOrientationChanged", &UAdvKitGravityCharacterMovementComponent::execOnOrientationChanged },
			{ "SetGravityVector", &UAdvKitGravityCharacterMovementComponent::execSetGravityVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics
	{
		struct AdvKitGravityCharacterMovementComponent_eventOnOrientationChanged_Parms
		{
			FTransform OldOrientation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::NewProp_OldOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::NewProp_OldOrientation = { "OldOrientation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacterMovementComponent_eventOnOrientationChanged_Parms, OldOrientation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::NewProp_OldOrientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::NewProp_OldOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::NewProp_OldOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent, nullptr, "OnOrientationChanged", sizeof(AdvKitGravityCharacterMovementComponent_eventOnOrientationChanged_Parms), Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics
	{
		struct AdvKitGravityCharacterMovementComponent_eventSetGravityVector_Parms
		{
			FVector GravityDirection;
			FVector GravityOrigin;
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((AdvKitGravityCharacterMovementComponent_eventSetGravityVector_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitGravityCharacterMovementComponent_eventSetGravityVector_Parms), &Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityOrigin = { "GravityOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacterMovementComponent_eventSetGravityVector_Parms, GravityOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityOrigin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacterMovementComponent_eventSetGravityVector_Parms, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityDirection_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::NewProp_GravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_GravityOrigin", "" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacterMovementComponent.h" },
		{ "ToolTip", "Checks if a hit result is a valid floor for wall walking\n@param       GravityDirection        New direction of gravity\n@param       GravityOrigin           New origin of gravity\n@param       bForce                          Set new gravity immediately, false to interpolate slowly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent, nullptr, "SetGravityVector", sizeof(AdvKitGravityCharacterMovementComponent_eventSetGravityVector_Parms), Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_NoRegister()
	{
		return UAdvKitGravityCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetOrientationWhenFalling_MetaData[];
#endif
		static void NewProp_bResetOrientationWhenFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetOrientationWhenFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateWorldOrientationByFloorResult_MetaData[];
#endif
		static void NewProp_bUpdateWorldOrientationByFloorResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateWorldOrientationByFloorResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateWorldOrientationByTracing_MetaData[];
#endif
		static void NewProp_bUpdateWorldOrientationByTracing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateWorldOrientationByTracing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_OnOrientationChanged, "OnOrientationChanged" }, // 2575210426
		{ &Z_Construct_UFunction_UAdvKitGravityCharacterMovementComponent_SetGravityVector, "SetGravityVector" }, // 2686051502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/AdvKitGravityCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Movement component that handles gravity set by the character's orientation component." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacterMovementComponent.h" },
		{ "ToolTip", "Reset gravity orientation when the character is falling (useful for things like magnetic boots)" },
	};
#endif
	void Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling_SetBit(void* Obj)
	{
		((UAdvKitGravityCharacterMovementComponent*)Obj)->bResetOrientationWhenFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling = { "bResetOrientationWhenFalling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitGravityCharacterMovementComponent), &Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacterMovementComponent.h" },
		{ "ToolTip", "Update the gravity orientation with the floor the character is walking on" },
	};
#endif
	void Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult_SetBit(void* Obj)
	{
		((UAdvKitGravityCharacterMovementComponent*)Obj)->bUpdateWorldOrientationByFloorResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult = { "bUpdateWorldOrientationByFloorResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitGravityCharacterMovementComponent), &Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacterMovementComponent.h" },
		{ "ToolTip", "Update the gravity orientation with the floor that is hit by the character's tracing component" },
	};
#endif
	void Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing_SetBit(void* Obj)
	{
		((UAdvKitGravityCharacterMovementComponent*)Obj)->bUpdateWorldOrientationByTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing = { "bUpdateWorldOrientationByTracing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitGravityCharacterMovementComponent), &Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bResetOrientationWhenFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByFloorResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::NewProp_bUpdateWorldOrientationByTracing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitGravityCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::ClassParams = {
		&UAdvKitGravityCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitGravityCharacterMovementComponent, 2452356275);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitGravityCharacterMovementComponent>()
	{
		return UAdvKitGravityCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitGravityCharacterMovementComponent(Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent, &UAdvKitGravityCharacterMovementComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitGravityCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitGravityCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

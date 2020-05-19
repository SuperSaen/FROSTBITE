// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitOrientationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitOrientationComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitOrientationComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitOrientationComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics
	{
		struct _Script_AdvKitRuntime_eventOrientationChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::NewProp_OldOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::NewProp_OldOrientation = { "OldOrientation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvKitRuntime_eventOrientationChanged_Parms, OldOrientation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::NewProp_OldOrientation_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::NewProp_OldOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::NewProp_OldOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvKitRuntime, nullptr, "OrientationChanged__DelegateSignature", sizeof(_Script_AdvKitRuntime_eventOrientationChanged_Parms), Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAdvKitOrientationComponent::StaticRegisterNativesUAdvKitOrientationComponent()
	{
		UClass* Class = UAdvKitOrientationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOrientation", &UAdvKitOrientationComponent::execSetOrientation },
			{ "TransformDirectionL2W", &UAdvKitOrientationComponent::execTransformDirectionL2W },
			{ "TransformDirectionW2L", &UAdvKitOrientationComponent::execTransformDirectionW2L },
			{ "TransformPositionL2W", &UAdvKitOrientationComponent::execTransformPositionL2W },
			{ "TransformPositionW2L", &UAdvKitOrientationComponent::execTransformPositionW2L },
			{ "TransformRotationL2W", &UAdvKitOrientationComponent::execTransformRotationL2W },
			{ "TransformRotationW2L", &UAdvKitOrientationComponent::execTransformRotationW2L },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics
	{
		struct AdvKitOrientationComponent_eventSetOrientation_Parms
		{
			FVector Origin;
			FVector UpNormal;
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((AdvKitOrientationComponent_eventSetOrientation_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitOrientationComponent_eventSetOrientation_Parms), &Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_UpNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_UpNormal = { "UpNormal", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventSetOrientation_Parms, UpNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_UpNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_UpNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventSetOrientation_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_UpNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Sets a new orientation from an origin location and normal in\nworld space. Input is interpolated with current transform, using\nLocation- and RotationLerpSpeed.\n\n@param       Origin          Center of the new orientation\n@param       UpNormal        Up vector of the new orientation (in world space)\n@param       bForce          Ignore interpolation, hard set values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "SetOrientation", sizeof(AdvKitOrientationComponent_eventSetOrientation_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics
	{
		struct AdvKitOrientationComponent_eventTransformDirectionL2W_Parms
		{
			FVector Direction;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformDirectionL2W_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformDirectionL2W_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "Transform Direction (Local To World)" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Transforms given direction from local space to world space\n@param       Direction       Local direction\n@return Direction transformed to world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "TransformDirectionL2W", sizeof(AdvKitOrientationComponent_eventTransformDirectionL2W_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics
	{
		struct AdvKitOrientationComponent_eventTransformDirectionW2L_Parms
		{
			FVector Direction;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformDirectionW2L_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformDirectionW2L_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "Inverse Transform Direction (World To Local)" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Transforms given direction from world space to local space\n@param       Direction       World direction\n@return Direction transformed to local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "TransformDirectionW2L", sizeof(AdvKitOrientationComponent_eventTransformDirectionW2L_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics
	{
		struct AdvKitOrientationComponent_eventTransformPositionL2W_Parms
		{
			FVector Position;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformPositionL2W_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformPositionL2W_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "Transform Location (Local To World)" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Transforms given position from local space to world space\n@param       Position        Local position\n@return      Position transformed to world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "TransformPositionL2W", sizeof(AdvKitOrientationComponent_eventTransformPositionL2W_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics
	{
		struct AdvKitOrientationComponent_eventTransformPositionW2L_Parms
		{
			FVector Position;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformPositionW2L_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformPositionW2L_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "Inverse Transform Location (World To Local)" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Transforms given position from world space to local space\n@param       Position        World position\n@return Position transformed to local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "TransformPositionW2L", sizeof(AdvKitOrientationComponent_eventTransformPositionW2L_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics
	{
		struct AdvKitOrientationComponent_eventTransformRotationL2W_Parms
		{
			FRotator Rotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformRotationL2W_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformRotationL2W_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "Transform Rotation (Local To World)" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Transforms given rotation from local space to world space\n@param       Rotation Local rotation\n@return      Rotation transformed to world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "TransformRotationL2W", sizeof(AdvKitOrientationComponent_eventTransformRotationL2W_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics
	{
		struct AdvKitOrientationComponent_eventTransformRotationW2L_Parms
		{
			FRotator Rotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformRotationW2L_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitOrientationComponent_eventTransformRotationW2L_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "Inverse Transform Rotation (World To Local)" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Transforms given rotation from world space to local space\n@param       Rotation World rotation\n@return      Rotation transformed to local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitOrientationComponent, nullptr, "TransformRotationW2L", sizeof(AdvKitOrientationComponent_eventTransformRotationW2L_Parms), Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitOrientationComponent_NoRegister()
	{
		return UAdvKitOrientationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitOrientationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOrientationChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOrientationChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationLerpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitOrientationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitOrientationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_SetOrientation, "SetOrientation" }, // 22337130
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionL2W, "TransformDirectionL2W" }, // 3185783849
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_TransformDirectionW2L, "TransformDirectionW2L" }, // 2892133938
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionL2W, "TransformPositionL2W" }, // 1660533073
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_TransformPositionW2L, "TransformPositionW2L" }, // 1341039352
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationL2W, "TransformRotationL2W" }, // 1161585716
		{ &Z_Construct_UFunction_UAdvKitOrientationComponent_TransformRotationW2L, "TransformRotationW2L" }, // 3776414583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitOrientationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Player/AdvKitOrientationComponent.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Component to provide transformation coordinate methods.\n\nOne of the core classes of the arbitrary gravity system. This component's transform provides\na separate coordinate system aligning with the custom gravity vector as Z. It has several methods\nto easily convert vectors and rotators between world and local space." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_OnOrientationChanged_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Callback when the orientation of this component changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_OnOrientationChanged = { "OnOrientationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitOrientationComponent, OnOrientationChanged), Z_Construct_UDelegateFunction_AdvKitRuntime_OrientationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_OnOrientationChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_OnOrientationChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_RotationLerpSpeed_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Setting a new orientation will not immediately change it, but rather interpolate\nto it using this value multiplied with DeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_RotationLerpSpeed = { "RotationLerpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitOrientationComponent, RotationLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_RotationLerpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_RotationLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_LocationLerpSpeed_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitOrientationComponent.h" },
		{ "ToolTip", "Setting a new orientation location will not immediately change it, but rather interpolate\nto it using this value multiplied with DeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_LocationLerpSpeed = { "LocationLerpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitOrientationComponent, LocationLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_LocationLerpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_LocationLerpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitOrientationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_OnOrientationChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_RotationLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitOrientationComponent_Statics::NewProp_LocationLerpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitOrientationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitOrientationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitOrientationComponent_Statics::ClassParams = {
		&UAdvKitOrientationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvKitOrientationComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitOrientationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitOrientationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitOrientationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitOrientationComponent, 683073831);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitOrientationComponent>()
	{
		return UAdvKitOrientationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitOrientationComponent(Z_Construct_UClass_UAdvKitOrientationComponent, &UAdvKitOrientationComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitOrientationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitOrientationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

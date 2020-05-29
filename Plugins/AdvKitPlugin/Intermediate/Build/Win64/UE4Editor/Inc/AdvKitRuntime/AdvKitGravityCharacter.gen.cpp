// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitGravityCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitGravityCharacter() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitGravityCharacter_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitGravityCharacter();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitOrientationComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAdvKitGravityCharacter::execGetAdvGravityMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAdvKitGravityCharacterMovementComponent**)Z_Param__Result=P_THIS->GetAdvGravityMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdvKitGravityCharacter::execSetNewOrientationServer)
	{
		P_GET_STRUCT(FVector,Z_Param_GravityUpVector);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetNewOrientationServer_Validate(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce))
		{
			RPC_ValidateFailed(TEXT("SetNewOrientationServer_Validate"));
			return;
		}
		P_THIS->SetNewOrientationServer_Implementation(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdvKitGravityCharacter::execSetNewOrientation)
	{
		P_GET_STRUCT(FVector,Z_Param_GravityUpVector);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewOrientation(Z_Param_GravityUpVector,Z_Param_Origin,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdvKitGravityCharacter::execCanWallWalkOn)
	{
		P_GET_STRUCT(FFindFloorResult,Z_Param_NewFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanWallWalkOn_Implementation(Z_Param_NewFloor);
		P_NATIVE_END;
	}
	static FName NAME_AAdvKitGravityCharacter_CanWallWalkOn = FName(TEXT("CanWallWalkOn"));
	bool AAdvKitGravityCharacter::CanWallWalkOn(FFindFloorResult NewFloor)
	{
		AdvKitGravityCharacter_eventCanWallWalkOn_Parms Parms;
		Parms.NewFloor=NewFloor;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitGravityCharacter_CanWallWalkOn),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAdvKitGravityCharacter_SetNewOrientationServer = FName(TEXT("SetNewOrientationServer"));
	void AAdvKitGravityCharacter::SetNewOrientationServer(FVector GravityUpVector, FVector Origin, bool bForce)
	{
		AdvKitGravityCharacter_eventSetNewOrientationServer_Parms Parms;
		Parms.GravityUpVector=GravityUpVector;
		Parms.Origin=Origin;
		Parms.bForce=bForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitGravityCharacter_SetNewOrientationServer),&Parms);
	}
	void AAdvKitGravityCharacter::StaticRegisterNativesAAdvKitGravityCharacter()
	{
		UClass* Class = AAdvKitGravityCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanWallWalkOn", &AAdvKitGravityCharacter::execCanWallWalkOn },
			{ "GetAdvGravityMovementComponent", &AAdvKitGravityCharacter::execGetAdvGravityMovementComponent },
			{ "SetNewOrientation", &AAdvKitGravityCharacter::execSetNewOrientation },
			{ "SetNewOrientationServer", &AAdvKitGravityCharacter::execSetNewOrientationServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFloor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitGravityCharacter_eventCanWallWalkOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitGravityCharacter_eventCanWallWalkOn_Parms), &Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::NewProp_NewFloor = { "NewFloor", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacter_eventCanWallWalkOn_Parms, NewFloor), Z_Construct_UScriptStruct_FFindFloorResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::NewProp_NewFloor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Checks if a hit result is a valid floor for wall walking\n\x09 * @param\x09NewFloor \x09The floor to test\n\x09 * @return\x09True if it is valid for wall walking\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ToolTip", "Checks if a hit result is a valid floor for wall walking\n@param       NewFloor        The floor to test\n@return      True if it is valid for wall walking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitGravityCharacter, nullptr, "CanWallWalkOn", nullptr, nullptr, sizeof(AdvKitGravityCharacter_eventCanWallWalkOn_Parms), Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics
	{
		struct AdvKitGravityCharacter_eventGetAdvGravityMovementComponent_Parms
		{
			UAdvKitGravityCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacter_eventGetAdvGravityMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UAdvKitGravityCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Get the gravity movement component of the character.\n\x09 * @return\x09The gravity movement component of the character.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ToolTip", "Get the gravity movement component of the character.\n@return      The gravity movement component of the character." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitGravityCharacter, nullptr, "GetAdvGravityMovementComponent", nullptr, nullptr, sizeof(AdvKitGravityCharacter_eventGetAdvGravityMovementComponent_Parms), Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics
	{
		struct AdvKitGravityCharacter_eventSetNewOrientation_Parms
		{
			FVector GravityUpVector;
			FVector Origin;
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityUpVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((AdvKitGravityCharacter_eventSetNewOrientation_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitGravityCharacter_eventSetNewOrientation_Parms), &Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacter_eventSetNewOrientation_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_GravityUpVector = { "GravityUpVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacter_eventSetNewOrientation_Parms, GravityUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::NewProp_GravityUpVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Set a new gravity orientation on the orientation component\n\x09 * @param\x09GravityUpVector \x09New Up vector for the gravity\n\x09 * @param\x09Origin\x09Origin of the gravitational pull\n\x09 * @param\x09""bForce \x09Hard set new gravity instead of interpolating\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_Origin", "" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ToolTip", "Set a new gravity orientation on the orientation component\n@param       GravityUpVector         New Up vector for the gravity\n@param       Origin  Origin of the gravitational pull\n@param       bForce  Hard set new gravity instead of interpolating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitGravityCharacter, nullptr, "SetNewOrientation", nullptr, nullptr, sizeof(AdvKitGravityCharacter_eventSetNewOrientation_Parms), Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics
	{
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityUpVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((AdvKitGravityCharacter_eventSetNewOrientationServer_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitGravityCharacter_eventSetNewOrientationServer_Parms), &Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacter_eventSetNewOrientationServer_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_GravityUpVector = { "GravityUpVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitGravityCharacter_eventSetNewOrientationServer_Parms, GravityUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::NewProp_GravityUpVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Server callback to set a new gravity orientation on the orientation component\n\x09 * @param\x09GravityUpVector \x09New Up vector for the gravity\n\x09 * @param\x09Origin\x09Origin of the gravitational pull\n\x09 * @param\x09""bForce \x09Hard set new gravity instead of interpolating\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ToolTip", "Server callback to set a new gravity orientation on the orientation component\n@param       GravityUpVector         New Up vector for the gravity\n@param       Origin  Origin of the gravitational pull\n@param       bForce  Hard set new gravity instead of interpolating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitGravityCharacter, nullptr, "SetNewOrientationServer", nullptr, nullptr, sizeof(AdvKitGravityCharacter_eventSetNewOrientationServer_Parms), Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitGravityCharacter_NoRegister()
	{
		return AAdvKitGravityCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitGravityCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceWorldOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceWorldOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOrientationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldOrientationComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitGravityCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvKitCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitGravityCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitGravityCharacter_CanWallWalkOn, "CanWallWalkOn" }, // 3775305381
		{ &Z_Construct_UFunction_AAdvKitGravityCharacter_GetAdvGravityMovementComponent, "GetAdvGravityMovementComponent" }, // 1118189838
		{ &Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientation, "SetNewOrientation" }, // 2194039900
		{ &Z_Construct_UFunction_AAdvKitGravityCharacter_SetNewOrientationServer, "SetNewOrientationServer" }, // 3900615565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitGravityCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Character class that supports arbitrary gravity provided by an orientation component.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/AdvKitGravityCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Character class that supports arbitrary gravity provided by an orientation component." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_TraceWorldOrientation_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Component that traces down when orientation should be updated by trace */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ToolTip", "Component that traces down when orientation should be updated by trace" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_TraceWorldOrientation = { "TraceWorldOrientation", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitGravityCharacter, TraceWorldOrientation), Z_Construct_UClass_UAdvKitTraceUtilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_TraceWorldOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_TraceWorldOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_WorldOrientationComponent_MetaData[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/** Orientation component that provides gravity methods */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitGravityCharacter.h" },
		{ "ToolTip", "Orientation component that provides gravity methods" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_WorldOrientationComponent = { "WorldOrientationComponent", nullptr, (EPropertyFlags)0x00100000000a083d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitGravityCharacter, WorldOrientationComponent), Z_Construct_UClass_UAdvKitOrientationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_WorldOrientationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_WorldOrientationComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitGravityCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_TraceWorldOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitGravityCharacter_Statics::NewProp_WorldOrientationComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitGravityCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitGravityCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitGravityCharacter_Statics::ClassParams = {
		&AAdvKitGravityCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitGravityCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitGravityCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitGravityCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitGravityCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitGravityCharacter, 4289062414);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitGravityCharacter>()
	{
		return AAdvKitGravityCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitGravityCharacter(Z_Construct_UClass_AAdvKitGravityCharacter, &AAdvKitGravityCharacter::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitGravityCharacter"), false, nullptr, nullptr, nullptr);

	void AAdvKitGravityCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WorldOrientationComponent(TEXT("WorldOrientationComponent"));

		const bool bIsValid = true
			&& Name_WorldOrientationComponent == ClassReps[(int32)ENetFields_Private::WorldOrientationComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAdvKitGravityCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitGravityCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

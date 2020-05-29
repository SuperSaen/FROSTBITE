// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/AdvKitTransitionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTransitionComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAdvKitTransitionComponent::execIsDynamicTransitionValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamicTransitionValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitTransitionComponent::execCanTransition)
	{
		P_GET_OBJECT(AAdvKitCharacter,Z_Param_Character);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDirection);
		P_GET_UBOOL(Z_Param_bIsJump);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTransition(Z_Param_Character,Z_Param_Out_AtLocation,Z_Param_Out_InDirection,Z_Param_bIsJump);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitTransitionComponent::execGetClosestTargetPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClosestTargetPosition(Z_Param_Out_ToWorldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvKitTransitionComponent::execGetClosestSourcePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClosestSourcePosition(Z_Param_Out_ToWorldPosition);
		P_NATIVE_END;
	}
	void UAdvKitTransitionComponent::StaticRegisterNativesUAdvKitTransitionComponent()
	{
		UClass* Class = UAdvKitTransitionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTransition", &UAdvKitTransitionComponent::execCanTransition },
			{ "GetClosestSourcePosition", &UAdvKitTransitionComponent::execGetClosestSourcePosition },
			{ "GetClosestTargetPosition", &UAdvKitTransitionComponent::execGetClosestTargetPosition },
			{ "IsDynamicTransitionValid", &UAdvKitTransitionComponent::execIsDynamicTransitionValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics
	{
		struct AdvKitTransitionComponent_eventCanTransition_Parms
		{
			AAdvKitCharacter* Character;
			FVector AtLocation;
			FVector InDirection;
			bool bIsJump;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIsJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTransitionComponent_eventCanTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTransitionComponent_eventCanTransition_Parms), &Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_bIsJump_SetBit(void* Obj)
	{
		((AdvKitTransitionComponent_eventCanTransition_Parms*)Obj)->bIsJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_bIsJump = { "bIsJump", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTransitionComponent_eventCanTransition_Parms), &Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_bIsJump_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventCanTransition_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_InDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_InDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_AtLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_AtLocation = { "AtLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventCanTransition_Parms, AtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_AtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_AtLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventCanTransition_Parms, Character), Z_Construct_UClass_AAdvKitCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_bIsJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_InDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_AtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Check if the transition can be used.\n\x09 * @param\x09""Character \x09""Character that wants to transition\n\x09 * @param\x09""AtLocation \x09World location from where to start the transition if possible\n\x09 * @param\x09InDirection\x09""Direction in world space where to transition to\n\x09 * @param\x09""bIsJump\x09Whether or not the transition is done with a jump\n\x09 * @return True if transition can be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Check if the transition can be used.\n@param       Character       Character that wants to transition\n@param       AtLocation      World location from where to start the transition if possible\n@param       InDirection     Direction in world space where to transition to\n@param       bIsJump Whether or not the transition is done with a jump\n@return True if transition can be used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionComponent, nullptr, "CanTransition", nullptr, nullptr, sizeof(AdvKitTransitionComponent_eventCanTransition_Parms), Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics
	{
		struct AdvKitTransitionComponent_eventGetClosestSourcePosition_Parms
		{
			FVector ToWorldPosition;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventGetClosestSourcePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ToWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ToWorldPosition = { "ToWorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventGetClosestSourcePosition_Parms, ToWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ToWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ToWorldPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::NewProp_ToWorldPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Query to get the closest location where a transition can start in relation to another location.\n\x09 * @param\x09ToWorldPosition \x09Location in world space to find reference point to.\n\x09 * @return Closest location in world space to start the transition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Query to get the closest location where a transition can start in relation to another location.\n@param       ToWorldPosition         Location in world space to find reference point to.\n@return Closest location in world space to start the transition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionComponent, nullptr, "GetClosestSourcePosition", nullptr, nullptr, sizeof(AdvKitTransitionComponent_eventGetClosestSourcePosition_Parms), Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics
	{
		struct AdvKitTransitionComponent_eventGetClosestTargetPosition_Parms
		{
			FVector ToWorldPosition;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventGetClosestTargetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ToWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ToWorldPosition = { "ToWorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitTransitionComponent_eventGetClosestTargetPosition_Parms, ToWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ToWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ToWorldPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::NewProp_ToWorldPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Query to get the closest location where a transition will end in relation to another location.\n\x09 * @param\x09ToWorldPosition \x09Location in world space to find reference point to.\n\x09 * @return Closest location in world space to end the transition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Query to get the closest location where a transition will end in relation to another location.\n@param       ToWorldPosition         Location in world space to find reference point to.\n@return Closest location in world space to end the transition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionComponent, nullptr, "GetClosestTargetPosition", nullptr, nullptr, sizeof(AdvKitTransitionComponent_eventGetClosestTargetPosition_Parms), Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics
	{
		struct AdvKitTransitionComponent_eventIsDynamicTransitionValid_Parms
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
	void Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTransitionComponent_eventIsDynamicTransitionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitTransitionComponent_eventIsDynamicTransitionValid_Parms), &Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Dynamic transitions can be invalid (e.g. a transition point is too far off) and not be \n\x09 * used during this time (think moving platforms).\n\x09 * @return True if the dynamic transition can be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Dynamic transitions can be invalid (e.g. a transition point is too far off) and not be\nused during this time (think moving platforms).\n@return True if the dynamic transition can be used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionComponent, nullptr, "IsDynamicTransitionValid", nullptr, nullptr, sizeof(AdvKitTransitionComponent_eventIsDynamicTransitionValid_Parms), Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister()
	{
		return UAdvKitTransitionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTransitionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCustomPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetCustomPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetPhysics;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetPhysics_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseableBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UseableBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLocationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinLocationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDirectionNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDirectionNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsJump_MetaData[];
#endif
		static void NewProp_bNeedsJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamicTransitionActive_MetaData[];
#endif
		static void NewProp_bDynamicTransitionActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamicTransitionActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDynamic_MetaData[];
#endif
		static void NewProp_bIsDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransitionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedByBuildModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedByBuildModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitTransitionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitTransitionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitTransitionComponent_CanTransition, "CanTransition" }, // 44943570
		{ &Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestSourcePosition, "GetClosestSourcePosition" }, // 3498367592
		{ &Z_Construct_UFunction_UAdvKitTransitionComponent_GetClosestTargetPosition, "GetClosestTargetPosition" }, // 1550195976
		{ &Z_Construct_UFunction_UAdvKitTransitionComponent_IsDynamicTransitionValid, "IsDynamicTransitionValid" }, // 1805230239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Base class for transitions between zones.\n */" },
		{ "HideCategories", "Component Activation" },
		{ "IncludePath", "Environment/AdvKitTransitionComponent.h" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base class for transitions between zones." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetCustomPhysics_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Custom movement mode the character will have after this transition */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Custom movement mode the character will have after this transition" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetCustomPhysics = { "TargetCustomPhysics", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, TargetCustomPhysics), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetCustomPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetCustomPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Movement mode the character will have after this transition */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Movement mode the character will have after this transition" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics = { "TargetPhysics", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, TargetPhysics), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetZone_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/*DuplicateTransient, */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "DuplicateTransient," },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetZone = { "TargetZone", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, TargetZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_UseableBy_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Which kind of character can use the transition */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Which kind of character can use the transition" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_UseableBy = { "UseableBy", nullptr, (EPropertyFlags)0x0014000000000805, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, UseableBy), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_UseableBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_UseableBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinLocationRadius_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Character's location offset from the transition can differ this much from the closest transition source. */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Character's location offset from the transition can differ this much from the closest transition source." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinLocationRadius = { "MinLocationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, MinLocationRadius), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinLocationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinLocationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinDirectionNormal_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Character's direction can differ this much from the required direction. */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Character's direction can differ this much from the required direction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinDirectionNormal = { "MinDirectionNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, MinDirectionNormal), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinDirectionNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinDirectionNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionDirection_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Character needs to go this direction */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Character needs to go this direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionDirection = { "TransitionDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, TransitionDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Character needs to jump */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Character needs to jump" },
	};
#endif
	void Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump_SetBit(void* Obj)
	{
		((UAdvKitTransitionComponent*)Obj)->bNeedsJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump = { "bNeedsJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAdvKitTransitionComponent), &Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Flag that indicates this transition is dynamic. */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Flag that indicates this transition is dynamic." },
	};
#endif
	void Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive_SetBit(void* Obj)
	{
		((UAdvKitTransitionComponent*)Obj)->bDynamicTransitionActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive = { "bDynamicTransitionActive", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitTransitionComponent), &Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Flag that indicates this transition is dynamic. */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Flag that indicates this transition is dynamic." },
	};
#endif
	void Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic_SetBit(void* Obj)
	{
		((UAdvKitTransitionComponent*)Obj)->bIsDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic = { "bIsDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitTransitionComponent), &Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionId_MetaData[] = {
		{ "Comment", "/** Identifier given by the build module responsible for creating this transitions, used to update */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Identifier given by the build module responsible for creating this transitions, used to update" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionId = { "TransitionId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, TransitionId), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_CreatedByBuildModule_MetaData[] = {
		{ "Comment", "/** Class of build module responsible for creating this transitions, used to update */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionComponent.h" },
		{ "ToolTip", "Class of build module responsible for creating this transitions, used to update" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_CreatedByBuildModule = { "CreatedByBuildModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTransitionComponent, CreatedByBuildModule), Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_CreatedByBuildModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_CreatedByBuildModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTransitionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetCustomPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetPhysics_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TargetZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_UseableBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinLocationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_MinDirectionNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bNeedsJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bDynamicTransitionActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_bIsDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_TransitionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionComponent_Statics::NewProp_CreatedByBuildModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTransitionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTransitionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTransitionComponent_Statics::ClassParams = {
		&UAdvKitTransitionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvKitTransitionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTransitionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTransitionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTransitionComponent, 2772549013);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitTransitionComponent>()
	{
		return UAdvKitTransitionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTransitionComponent(Z_Construct_UClass_UAdvKitTransitionComponent, &UAdvKitTransitionComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTransitionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTransitionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

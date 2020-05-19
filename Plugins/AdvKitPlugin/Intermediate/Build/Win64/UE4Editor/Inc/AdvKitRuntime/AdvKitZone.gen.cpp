// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/AdvKitZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitZone() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_AddTransition();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GenerateTransitions();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetPhysics();
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitZoneLocation_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_HasPhysics();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister();
// End Cross Module References
	static FName NAME_AAdvKitZone_ConstrainDirectionToZone = FName(TEXT("ConstrainDirectionToZone"));
	FVector AAdvKitZone::ConstrainDirectionToZone(FVector const& WorldDirection, FVector const& AtWorldLocation) const
	{
		AdvKitZone_eventConstrainDirectionToZone_Parms Parms;
		Parms.WorldDirection=WorldDirection;
		Parms.AtWorldLocation=AtWorldLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_ConstrainDirectionToZone),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_ConstrainPositionToZone = FName(TEXT("ConstrainPositionToZone"));
	FVector AAdvKitZone::ConstrainPositionToZone(FVector const& WorldPosition, FVector const& HalfExtent, FRotator const& ExtentWorldRotation) const
	{
		AdvKitZone_eventConstrainPositionToZone_Parms Parms;
		Parms.WorldPosition=WorldPosition;
		Parms.HalfExtent=HalfExtent;
		Parms.ExtentWorldRotation=ExtentWorldRotation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_ConstrainPositionToZone),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GenerateTransitions = FName(TEXT("GenerateTransitions"));
	void AAdvKitZone::GenerateTransitions(bool bZoneMoved)
	{
		AdvKitZone_eventGenerateTransitions_Parms Parms;
		Parms.bZoneMoved=bZoneMoved ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GenerateTransitions),&Parms);
	}
	static FName NAME_AAdvKitZone_GetClosestZoneForwardVector = FName(TEXT("GetClosestZoneForwardVector"));
	FVector AAdvKitZone::GetClosestZoneForwardVector(FVector const& ToWorldLocation) const
	{
		AdvKitZone_eventGetClosestZoneForwardVector_Parms Parms;
		Parms.ToWorldLocation=ToWorldLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetClosestZoneForwardVector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetClosestZoneLocationNew = FName(TEXT("GetClosestZoneLocationNew"));
	FVector AAdvKitZone::GetClosestZoneLocationNew(FVector const& WorldLocation, FVector const& HalfExtent, FRotator const& ExtentWorldRotation) const
	{
		AdvKitZone_eventGetClosestZoneLocationNew_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.HalfExtent=HalfExtent;
		Parms.ExtentWorldRotation=ExtentWorldRotation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetClosestZoneLocationNew),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetClosestZoneRightVector = FName(TEXT("GetClosestZoneRightVector"));
	FVector AAdvKitZone::GetClosestZoneRightVector(FVector const& ToWorldLocation) const
	{
		AdvKitZone_eventGetClosestZoneRightVector_Parms Parms;
		Parms.ToWorldLocation=ToWorldLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetClosestZoneRightVector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetClosestZoneUpVector = FName(TEXT("GetClosestZoneUpVector"));
	FVector AAdvKitZone::GetClosestZoneUpVector(FVector const& ToWorldLocation) const
	{
		AdvKitZone_eventGetClosestZoneUpVector_Parms Parms;
		Parms.ToWorldLocation=ToWorldLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetClosestZoneUpVector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetPositionInDirection = FName(TEXT("GetPositionInDirection"));
	FVector AAdvKitZone::GetPositionInDirection(FVector const& FromWorldPosition, FVector const& WorldDesiredDelta, bool bClamp, FVector const& HalfExtent, FRotator const& ExtentWorldRotation)
	{
		AdvKitZone_eventGetPositionInDirection_Parms Parms;
		Parms.FromWorldPosition=FromWorldPosition;
		Parms.WorldDesiredDelta=WorldDesiredDelta;
		Parms.bClamp=bClamp ? true : false;
		Parms.HalfExtent=HalfExtent;
		Parms.ExtentWorldRotation=ExtentWorldRotation;
		ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetPositionInDirection),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetZoneForwardVectorNew = FName(TEXT("GetZoneForwardVectorNew"));
	FVector AAdvKitZone::GetZoneForwardVectorNew(FVector const& LocalZoneLocation) const
	{
		AdvKitZone_eventGetZoneForwardVectorNew_Parms Parms;
		Parms.LocalZoneLocation=LocalZoneLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetZoneForwardVectorNew),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetZoneRightVectorNew = FName(TEXT("GetZoneRightVectorNew"));
	FVector AAdvKitZone::GetZoneRightVectorNew(FVector const& LocalZoneLocation) const
	{
		AdvKitZone_eventGetZoneRightVectorNew_Parms Parms;
		Parms.LocalZoneLocation=LocalZoneLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetZoneRightVectorNew),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAdvKitZone_GetZoneUpVectorNew = FName(TEXT("GetZoneUpVectorNew"));
	FVector AAdvKitZone::GetZoneUpVectorNew(FVector const& LocalZoneLocation) const
	{
		AdvKitZone_eventGetZoneUpVectorNew_Parms Parms;
		Parms.LocalZoneLocation=LocalZoneLocation;
		const_cast<AAdvKitZone*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAdvKitZone_GetZoneUpVectorNew),&Parms);
		return Parms.ReturnValue;
	}
	void AAdvKitZone::StaticRegisterNativesAAdvKitZone()
	{
		UClass* Class = AAdvKitZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTransition", &AAdvKitZone::execAddTransition },
			{ "ConstrainDirectionToZone", &AAdvKitZone::execConstrainDirectionToZone },
			{ "ConstrainPositionToZone", &AAdvKitZone::execConstrainPositionToZone },
			{ "GenerateTransitions", &AAdvKitZone::execGenerateTransitions },
			{ "GetClosestZoneForwardVector", &AAdvKitZone::execGetClosestZoneForwardVector },
			{ "GetClosestZoneLocationNew", &AAdvKitZone::execGetClosestZoneLocationNew },
			{ "GetClosestZoneRightVector", &AAdvKitZone::execGetClosestZoneRightVector },
			{ "GetClosestZoneTransform", &AAdvKitZone::execGetClosestZoneTransform },
			{ "GetClosestZoneUpVector", &AAdvKitZone::execGetClosestZoneUpVector },
			{ "GetCustomPhysics", &AAdvKitZone::execGetCustomPhysics },
			{ "GetPhysics", &AAdvKitZone::execGetPhysics },
			{ "GetPositionInDirection", &AAdvKitZone::execGetPositionInDirection },
			{ "GetZoneForwardVector", &AAdvKitZone::execGetZoneForwardVector },
			{ "GetZoneForwardVectorNew", &AAdvKitZone::execGetZoneForwardVectorNew },
			{ "GetZoneLocationLocal", &AAdvKitZone::execGetZoneLocationLocal },
			{ "GetZoneLocationWorld", &AAdvKitZone::execGetZoneLocationWorld },
			{ "GetZoneRightVector", &AAdvKitZone::execGetZoneRightVector },
			{ "GetZoneRightVectorNew", &AAdvKitZone::execGetZoneRightVectorNew },
			{ "GetZoneUpVector", &AAdvKitZone::execGetZoneUpVector },
			{ "GetZoneUpVectorNew", &AAdvKitZone::execGetZoneUpVectorNew },
			{ "HasCustomPhysics", &AAdvKitZone::execHasCustomPhysics },
			{ "HasPhysics", &AAdvKitZone::execHasPhysics },
			{ "MoveLocationInDirection", &AAdvKitZone::execMoveLocationInDirection },
			{ "MoveLocationInDirectionNew", &AAdvKitZone::execMoveLocationInDirectionNew },
			{ "RemoveExistingTransitionsTo", &AAdvKitZone::execRemoveExistingTransitionsTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics
	{
		struct AdvKitZone_eventAddTransition_Parms
		{
			TSubclassOf<AAdvKitCharacter>  For;
			UAdvKitTransitionComponent* Transition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Transition;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_For;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_Transition_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventAddTransition_Parms, Transition), Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_Transition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_Transition_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_For = { "For", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventAddTransition_Parms, For), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_Transition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::NewProp_For,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Add an existing transition to the transitions list\n\x09 * @param\x09""For\x09\x09""Character class that can use the transition\n\x09 * @param\x09Transition\x09The transition to add\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Add an existing transition to the transitions list\n@param       For             Character class that can use the transition\n@param       Transition      The transition to add" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "AddTransition", nullptr, nullptr, sizeof(AdvKitZone_eventAddTransition_Parms), Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_AddTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_AddTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainDirectionToZone_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_AtWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_AtWorldLocation = { "AtWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainDirectionToZone_Parms, AtWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_AtWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_AtWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainDirectionToZone_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_WorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_WorldDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_AtWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::NewProp_WorldDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Restricts a desired direction to match zone.\n\x09 * @param\x09WorldDirection\x09""Direction to restrict.\n\x09 * @param\x09""AtWorldLocation\x09Location at which the direction should be constrained. (Since zones may be splines a constrained direction can differ based on location).\n\x09 * @return\x09""Direction restricted to zone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Restricts a desired direction to match zone.\n@param       WorldDirection  Direction to restrict.\n@param       AtWorldLocation Location at which the direction should be constrained. (Since zones may be splines a constrained direction can differ based on location).\n@return      Direction restricted to zone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "ConstrainDirectionToZone", nullptr, nullptr, sizeof(AdvKitZone_eventConstrainDirectionToZone_Parms), Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainPositionToZone_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainPositionToZone_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainPositionToZone_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventConstrainPositionToZone_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_WorldPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::NewProp_WorldPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Clamps a given location so it is inside the zone.\n\x09 * @param\x09WorldPosition\x09Location to clamp.\n\x09 * @param\x09HalfExtent \x09Half size of the character, describing its capsule (e.g. capsule radius and half height)\n\x09 * @param\x09""ExtentWorldRotation \x09Rotation of the character.\n\x09 * @return\x09Location inside zone.\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Clamps a given location so it is inside the zone.\n@param       WorldPosition   Location to clamp.\n@param       HalfExtent      Half size of the character, describing its capsule (e.g. capsule radius and half height)\n@param       ExtentWorldRotation     Rotation of the character.\n@return      Location inside zone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "ConstrainPositionToZone", nullptr, nullptr, sizeof(AdvKitZone_eventConstrainPositionToZone_Parms), Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics
	{
		static void NewProp_bZoneMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZoneMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::NewProp_bZoneMoved_SetBit(void* Obj)
	{
		((AdvKitZone_eventGenerateTransitions_Parms*)Obj)->bZoneMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::NewProp_bZoneMoved = { "bZoneMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitZone_eventGenerateTransitions_Parms), &Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::NewProp_bZoneMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::NewProp_bZoneMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Creates all transitions for this zone. Called either manually or by a transition builder if an \n\x09 * adjacent zone triggers it.\n\x09 * @param\x09""bZoneMoved\x09True if this zone was moved, false if it not\n\x09 */" },
		{ "CPP_Default_bZoneMoved", "true" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Creates all transitions for this zone. Called either manually or by a transition builder if an\nadjacent zone triggers it.\n@param       bZoneMoved      True if this zone was moved, false if it not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GenerateTransitions", nullptr, nullptr, sizeof(AdvKitZone_eventGenerateTransitions_Parms), Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GenerateTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GenerateTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ToWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ToWorldLocation = { "ToWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneForwardVector_Parms, ToWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ToWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ToWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::NewProp_ToWorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's forward vector closest to a specified point.\n\x09 * @param\x09ToWorldLocation\x09Location to query the vector at.\n\x09 * @return\x09""Forward vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's forward vector closest to a specified point.\n@param       ToWorldLocation Location to query the vector at.\n@return      Forward vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetClosestZoneForwardVector", nullptr, nullptr, sizeof(AdvKitZone_eventGetClosestZoneForwardVector_Parms), Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneLocationNew_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneLocationNew_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneLocationNew_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneLocationNew_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Creates a new zone location as close to a given location as possible\n\x09 * @param\x09WorldLocation\x09Location the zone location would ideally be at.\n\x09 * @param\x09HalfExtent \x09Half size of the character, describing its capsule (e.g. capsule radius and half height)\n\x09 * @param\x09""ExtentWorldRotation \x09Rotation of the character.\n\x09 * @return\x09Zone Location inside zone.\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Creates a new zone location as close to a given location as possible\n@param       WorldLocation   Location the zone location would ideally be at.\n@param       HalfExtent      Half size of the character, describing its capsule (e.g. capsule radius and half height)\n@param       ExtentWorldRotation     Rotation of the character.\n@return      Zone Location inside zone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetClosestZoneLocationNew", nullptr, nullptr, sizeof(AdvKitZone_eventGetClosestZoneLocationNew_Parms), Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ToWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ToWorldLocation = { "ToWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneRightVector_Parms, ToWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ToWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ToWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::NewProp_ToWorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's right vector closest to a specified point.\n\x09 * @param\x09ToWorldLocation\x09Location to query the vector at.\n\x09 * @return\x09Right vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's right vector closest to a specified point.\n@param       ToWorldLocation Location to query the vector at.\n@return      Right vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetClosestZoneRightVector", nullptr, nullptr, sizeof(AdvKitZone_eventGetClosestZoneRightVector_Parms), Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics
	{
		struct AdvKitZone_eventGetClosestZoneTransform_Parms
		{
			FVector ToWorldLocation;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ToWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ToWorldLocation = { "ToWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneTransform_Parms, ToWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ToWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ToWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::NewProp_ToWorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's transform closest to a specified point.\n\x09 * @param\x09ToWorldLocation\x09Location to query the vector at.\n\x09 * @return\x09Transform closest to the given location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's transform closest to a specified point.\n@param       ToWorldLocation Location to query the vector at.\n@return      Transform closest to the given location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetClosestZoneTransform", nullptr, nullptr, sizeof(AdvKitZone_eventGetClosestZoneTransform_Parms), Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ToWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ToWorldLocation = { "ToWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetClosestZoneUpVector_Parms, ToWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ToWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ToWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::NewProp_ToWorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's up vector closest to a specified point.\n\x09 * @param\x09ToWorldLocation\x09Location to query the vector at.\n\x09 * @return\x09Up vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's up vector closest to a specified point.\n@param       ToWorldLocation Location to query the vector at.\n@return      Up vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetClosestZoneUpVector", nullptr, nullptr, sizeof(AdvKitZone_eventGetClosestZoneUpVector_Parms), Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics
	{
		struct AdvKitZone_eventGetCustomPhysics_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetCustomPhysics_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Get custom movement mode of this zone.\n\x09 * @return Custom movement mode inside the zone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Get custom movement mode of this zone.\n@return Custom movement mode inside the zone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetCustomPhysics", nullptr, nullptr, sizeof(AdvKitZone_eventGetCustomPhysics_Parms), Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics
	{
		struct AdvKitZone_eventGetPhysics_Parms
		{
			EAdvKitMovementMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetPhysics_Parms, ReturnValue), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Get movement mode of this zone.\n\x09 * @return Movement mode inside the zone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Get movement mode of this zone.\n@return Movement mode inside the zone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetPhysics", nullptr, nullptr, sizeof(AdvKitZone_eventGetPhysics_Parms), Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
		static void NewProp_bClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDesiredDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDesiredDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromWorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromWorldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetPositionInDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetPositionInDirection_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetPositionInDirection_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_HalfExtent_MetaData)) };
	void Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_bClamp_SetBit(void* Obj)
	{
		((AdvKitZone_eventGetPositionInDirection_Parms*)Obj)->bClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitZone_eventGetPositionInDirection_Parms), &Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_bClamp_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_WorldDesiredDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_WorldDesiredDelta = { "WorldDesiredDelta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetPositionInDirection_Parms, WorldDesiredDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_WorldDesiredDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_WorldDesiredDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_FromWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_FromWorldPosition = { "FromWorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetPositionInDirection_Parms, FromWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_FromWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_FromWorldPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_bClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_WorldDesiredDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::NewProp_FromWorldPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Get the next position in this zone in a certain direction. Since zones restrict movement the character can not always\n\x09 * move as it desires, but has to adhere to a direction given by the zone.\n\x09 * @param\x09""FromWorldPosition \x09Where the movement starts\n\x09 * @param\x09WorldDesiredDelta \x09The intended direction of the movement\n\x09 * @param\x09""bClamp \x09Whether or not to restrict the resulting location to the zone as well\n\x09 * @param\x09HalfExtent \x09Half size of the character, describing its capsule (e.g. capsule radius and half height)\n\x09 * @param\x09""ExtentWorldRotation \x09Rotation of the character.\n\x09 * @return The resulting location after the move was restricted to the zone.\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Get the next position in this zone in a certain direction. Since zones restrict movement the character can not always\nmove as it desires, but has to adhere to a direction given by the zone.\n@param       FromWorldPosition       Where the movement starts\n@param       WorldDesiredDelta       The intended direction of the movement\n@param       bClamp  Whether or not to restrict the resulting location to the zone as well\n@param       HalfExtent      Half size of the character, describing its capsule (e.g. capsule radius and half height)\n@param       ExtentWorldRotation     Rotation of the character.\n@return The resulting location after the move was restricted to the zone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetPositionInDirection", nullptr, nullptr, sizeof(AdvKitZone_eventGetPositionInDirection_Parms), Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics
	{
		struct AdvKitZone_eventGetZoneForwardVector_Parms
		{
			const UAdvKitZoneLocation* AtLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_AtLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_AtLocation = { "AtLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneForwardVector_Parms, AtLocation), Z_Construct_UClass_UAdvKitZoneLocation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_AtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_AtLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::NewProp_AtLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's forward vector at a specified point.\n\x09 * @param\x09""AtLocation\x09Location to query the vector at.\n\x09 * @return\x09""Forward vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's forward vector at a specified point.\n@param       AtLocation      Location to query the vector at.\n@return      Forward vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneForwardVector", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneForwardVector_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalZoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneForwardVectorNew_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneForwardVectorNew_Parms, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_LocalZoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_LocalZoneLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::NewProp_LocalZoneLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's forward vector at a specified point.\n\x09 * @param\x09LocalZoneLocation\x09Location to query the vector at.\n\x09 * @return\x09""Forward vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's forward vector at a specified point.\n@param       LocalZoneLocation       Location to query the vector at.\n@return      Forward vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneForwardVectorNew", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneForwardVectorNew_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics
	{
		struct AdvKitZone_eventGetZoneLocationLocal_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneLocationLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneLocationLocal_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneLocationLocal", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneLocationLocal_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics
	{
		struct AdvKitZone_eventGetZoneLocationWorld_Parms
		{
			FVector LocalZoneLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalZoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneLocationWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneLocationWorld_Parms, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_LocalZoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_LocalZoneLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::NewProp_LocalZoneLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneLocationWorld", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneLocationWorld_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics
	{
		struct AdvKitZone_eventGetZoneRightVector_Parms
		{
			const UAdvKitZoneLocation* AtLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_AtLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_AtLocation = { "AtLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneRightVector_Parms, AtLocation), Z_Construct_UClass_UAdvKitZoneLocation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_AtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_AtLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::NewProp_AtLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's right vector at a specified point.\n\x09 * @param\x09""AtLocation\x09Location to query the vector at.\n\x09 * @return\x09Right vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's right vector at a specified point.\n@param       AtLocation      Location to query the vector at.\n@return      Right vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneRightVector", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneRightVector_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalZoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneRightVectorNew_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneRightVectorNew_Parms, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_LocalZoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_LocalZoneLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::NewProp_LocalZoneLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's right vector at a specified point.\n\x09 * @param\x09LocalZoneLocation\x09Location to query the vector at.\n\x09 * @return\x09Right vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's right vector at a specified point.\n@param       LocalZoneLocation       Location to query the vector at.\n@return      Right vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneRightVectorNew", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneRightVectorNew_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics
	{
		struct AdvKitZone_eventGetZoneUpVector_Parms
		{
			const UAdvKitZoneLocation* AtLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_AtLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_AtLocation = { "AtLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneUpVector_Parms, AtLocation), Z_Construct_UClass_UAdvKitZoneLocation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_AtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_AtLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::NewProp_AtLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's up vector at a specified point.\n\x09 * @param\x09""AtLocation\x09Location to query the vector at.\n\x09 * @return\x09Up vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's up vector at a specified point.\n@param       AtLocation      Location to query the vector at.\n@return      Up vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneUpVector", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneUpVector_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalZoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneUpVectorNew_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventGetZoneUpVectorNew_Parms, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_LocalZoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_LocalZoneLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::NewProp_LocalZoneLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Gets the zone's up vector at a specified point.\n\x09 * @param\x09LocalZoneLocation\x09Location to query the vector at.\n\x09 * @return\x09Up vector in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Gets the zone's up vector at a specified point.\n@param       LocalZoneLocation       Location to query the vector at.\n@return      Up vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "GetZoneUpVectorNew", nullptr, nullptr, sizeof(AdvKitZone_eventGetZoneUpVectorNew_Parms), Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics
	{
		struct AdvKitZone_eventHasCustomPhysics_Parms
		{
			uint8 QueryPhysics;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryPhysics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitZone_eventHasCustomPhysics_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitZone_eventHasCustomPhysics_Parms), &Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::NewProp_QueryPhysics = { "QueryPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventHasCustomPhysics_Parms, QueryPhysics), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::NewProp_QueryPhysics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Check if the zone has a specific custom movement mode.\n\x09 * @param QueryPhysics\x09The mode to check for.\n\x09 * @return\x09True if zone has this mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Check if the zone has a specific custom movement mode.\n@param QueryPhysics  The mode to check for.\n@return      True if zone has this mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "HasCustomPhysics", nullptr, nullptr, sizeof(AdvKitZone_eventHasCustomPhysics_Parms), Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics
	{
		struct AdvKitZone_eventHasPhysics_Parms
		{
			EAdvKitMovementMode QueryPhysics;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryPhysics;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryPhysics_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitZone_eventHasPhysics_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitZone_eventHasPhysics_Parms), &Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_QueryPhysics = { "QueryPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventHasPhysics_Parms, QueryPhysics), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_QueryPhysics_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_QueryPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::NewProp_QueryPhysics_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Check if the zone has a specific movement mode.\n\x09 * @param QueryPhysics\x09The mode to check for.\n\x09 * @return\x09True if zone has this mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Check if the zone has a specific movement mode.\n@param QueryPhysics  The mode to check for.\n@return      True if zone has this mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "HasPhysics", nullptr, nullptr, sizeof(AdvKitZone_eventHasPhysics_Parms), Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_HasPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_HasPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics
	{
		struct AdvKitZone_eventMoveLocationInDirection_Parms
		{
			UAdvKitZoneLocation* LocationToMove;
			FVector WorldDesiredDelta;
			FVector HalfExtent;
			FRotator ExtentWorldRotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDesiredDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDesiredDelta;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocationToMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitZone_eventMoveLocationInDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitZone_eventMoveLocationInDirection_Parms), &Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirection_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirection_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_WorldDesiredDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_WorldDesiredDelta = { "WorldDesiredDelta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirection_Parms, WorldDesiredDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_WorldDesiredDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_WorldDesiredDelta_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_LocationToMove = { "LocationToMove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirection_Parms, LocationToMove), Z_Construct_UClass_UAdvKitZoneLocation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_WorldDesiredDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::NewProp_LocationToMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Moves a zone location along the zone while keeping it inside the zone.\n\x09 * @param\x09LocationToMove \x09The location object to move\n\x09 * @param\x09WorldDesiredDelta \x09The intended direction of the movement\n\x09 * @param\x09HalfExtent \x09Half size of the character, describing its capsule (e.g. capsule radius and half height)\n\x09 * @param\x09""ExtentWorldRotation \x09Rotation of the character.\n\x09 * @return True if location was moved, false otherwise\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Moves a zone location along the zone while keeping it inside the zone.\n@param       LocationToMove  The location object to move\n@param       WorldDesiredDelta       The intended direction of the movement\n@param       HalfExtent      Half size of the character, describing its capsule (e.g. capsule radius and half height)\n@param       ExtentWorldRotation     Rotation of the character.\n@return True if location was moved, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "MoveLocationInDirection", nullptr, nullptr, sizeof(AdvKitZone_eventMoveLocationInDirection_Parms), Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics
	{
		struct AdvKitZone_eventMoveLocationInDirectionNew_Parms
		{
			FVector LocalZoneLocation;
			FVector WorldDesiredDelta;
			FVector HalfExtent;
			FRotator ExtentWorldRotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDesiredDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDesiredDelta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitZone_eventMoveLocationInDirectionNew_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvKitZone_eventMoveLocationInDirectionNew_Parms), &Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ExtentWorldRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ExtentWorldRotation = { "ExtentWorldRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirectionNew_Parms, ExtentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ExtentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ExtentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirectionNew_Parms, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_WorldDesiredDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_WorldDesiredDelta = { "WorldDesiredDelta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirectionNew_Parms, WorldDesiredDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_WorldDesiredDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_WorldDesiredDelta_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventMoveLocationInDirectionNew_Parms, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_ExtentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_WorldDesiredDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::NewProp_LocalZoneLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Moves a zone location along the zone while keeping it inside the zone.\n\x09 * @param\x09LocalZoneLocation \x09The location object to move\n\x09 * @param\x09WorldDesiredDelta \x09The intended direction of the movement\n\x09 * @param\x09HalfExtent \x09Half size of the character, describing its capsule (e.g. capsule radius and half height)\n\x09 * @param\x09""ExtentWorldRotation \x09Rotation of the character.\n\x09 * @return True if location was moved, false otherwise\n\x09 */" },
		{ "CPP_Default_ExtentWorldRotation", "" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Moves a zone location along the zone while keeping it inside the zone.\n@param       LocalZoneLocation       The location object to move\n@param       WorldDesiredDelta       The intended direction of the movement\n@param       HalfExtent      Half size of the character, describing its capsule (e.g. capsule radius and half height)\n@param       ExtentWorldRotation     Rotation of the character.\n@return True if location was moved, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "MoveLocationInDirectionNew", nullptr, nullptr, sizeof(AdvKitZone_eventMoveLocationInDirectionNew_Parms), Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics
	{
		struct AdvKitZone_eventRemoveExistingTransitionsTo_Parms
		{
			AAdvKitZone* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvKitZone_eventRemoveExistingTransitionsTo_Parms, Other), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "Comment", "/**\n\x09 * Removes all transitions that target a specified zone\n\x09 * @param\x09Other\x09The zone that transitions target\n\x09 */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Removes all transitions that target a specified zone\n@param       Other   The zone that transitions target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvKitZone, nullptr, "RemoveExistingTransitionsTo", nullptr, nullptr, sizeof(AdvKitZone_eventRemoveExistingTransitionsTo_Parms), Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdvKitZone_NoRegister()
	{
		return AAdvKitZone::StaticClass();
	}
	struct Z_Construct_UClass_AAdvKitZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildModules_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomZonePhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomZonePhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZonePhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZonePhysics;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZonePhysics_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvKitZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvKitZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvKitZone_AddTransition, "AddTransition" }, // 1783288936
		{ &Z_Construct_UFunction_AAdvKitZone_ConstrainDirectionToZone, "ConstrainDirectionToZone" }, // 2123930630
		{ &Z_Construct_UFunction_AAdvKitZone_ConstrainPositionToZone, "ConstrainPositionToZone" }, // 3709603060
		{ &Z_Construct_UFunction_AAdvKitZone_GenerateTransitions, "GenerateTransitions" }, // 273558111
		{ &Z_Construct_UFunction_AAdvKitZone_GetClosestZoneForwardVector, "GetClosestZoneForwardVector" }, // 1151712433
		{ &Z_Construct_UFunction_AAdvKitZone_GetClosestZoneLocationNew, "GetClosestZoneLocationNew" }, // 2106423094
		{ &Z_Construct_UFunction_AAdvKitZone_GetClosestZoneRightVector, "GetClosestZoneRightVector" }, // 2931999733
		{ &Z_Construct_UFunction_AAdvKitZone_GetClosestZoneTransform, "GetClosestZoneTransform" }, // 911217948
		{ &Z_Construct_UFunction_AAdvKitZone_GetClosestZoneUpVector, "GetClosestZoneUpVector" }, // 2726262380
		{ &Z_Construct_UFunction_AAdvKitZone_GetCustomPhysics, "GetCustomPhysics" }, // 2981347049
		{ &Z_Construct_UFunction_AAdvKitZone_GetPhysics, "GetPhysics" }, // 102223643
		{ &Z_Construct_UFunction_AAdvKitZone_GetPositionInDirection, "GetPositionInDirection" }, // 1098764901
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVector, "GetZoneForwardVector" }, // 595083995
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneForwardVectorNew, "GetZoneForwardVectorNew" }, // 612423854
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneLocationLocal, "GetZoneLocationLocal" }, // 2517984743
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneLocationWorld, "GetZoneLocationWorld" }, // 1145683597
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneRightVector, "GetZoneRightVector" }, // 2315777946
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneRightVectorNew, "GetZoneRightVectorNew" }, // 1477107025
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneUpVector, "GetZoneUpVector" }, // 2767140764
		{ &Z_Construct_UFunction_AAdvKitZone_GetZoneUpVectorNew, "GetZoneUpVectorNew" }, // 4112462935
		{ &Z_Construct_UFunction_AAdvKitZone_HasCustomPhysics, "HasCustomPhysics" }, // 2680497628
		{ &Z_Construct_UFunction_AAdvKitZone_HasPhysics, "HasPhysics" }, // 3066840504
		{ &Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirection, "MoveLocationInDirection" }, // 170087937
		{ &Z_Construct_UFunction_AAdvKitZone_MoveLocationInDirectionNew, "MoveLocationInDirectionNew" }, // 1595479866
		{ &Z_Construct_UFunction_AAdvKitZone_RemoveExistingTransitionsTo, "RemoveExistingTransitionsTo" }, // 3552136086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Zones are special movement objects that a character can use for specific movement modes. \n * \n * A zone always restricts movement within a specified region, e.g. a line or rectangle. Zones can \n * also have predefined transition points between them.\n */" },
		{ "IncludePath", "Environment/AdvKitZone.h" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Zones are special movement objects that a character can use for specific movement modes.\n\nA zone always restricts movement within a specified region, e.g. a line or rectangle. Zones can\nalso have predefined transition points between them." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** Build modules this zone will use. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Build modules this zone will use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules = { "BuildModules", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitZone, BuildModules), METADATA_PARAMS(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_Inner_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** Build modules this zone will use. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Build modules this zone will use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_Inner = { "BuildModules", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZone_Statics::NewProp_CustomZonePhysics_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Custom Movement mode to be used in this zone */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Custom Movement mode to be used in this zone" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAdvKitZone_Statics::NewProp_CustomZonePhysics = { "CustomZonePhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitZone, CustomZonePhysics), nullptr, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_CustomZonePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_CustomZonePhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Movement mode to be used in this zone */" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZone.h" },
		{ "ToolTip", "Movement mode to be used in this zone" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics = { "ZonePhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvKitZone, ZonePhysics), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvKitZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZone_Statics::NewProp_BuildModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZone_Statics::NewProp_CustomZonePhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvKitZone_Statics::NewProp_ZonePhysics_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvKitZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvKitZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvKitZone_Statics::ClassParams = {
		&AAdvKitZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvKitZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZone_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvKitZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvKitZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvKitZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvKitZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvKitZone, 3512182192);
	template<> ADVKITRUNTIME_API UClass* StaticClass<AAdvKitZone>()
	{
		return AAdvKitZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvKitZone(Z_Construct_UClass_AAdvKitZone, &AAdvKitZone::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("AAdvKitZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvKitZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

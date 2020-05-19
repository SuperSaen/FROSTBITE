// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/AdvKitTransitionBuilderModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTransitionBuilderModule() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitCharacter_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentLine_NoRegister();
	ADVKITRUNTIME_API UEnum* Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentPoint_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentRect_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponentSpline_NoRegister();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP();
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAdvKitMovementProperties();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister();
// End Cross Module References
	static FName NAME_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor = FName(TEXT("CanCreateTransitionsFor"));
	bool UAdvKitTransitionBuilderModule::CanCreateTransitionsFor(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone)
	{
		AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms Parms;
		Parms.ForCharacterClass=ForCharacterClass;
		Parms.ForZone=ForZone;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAdvKitTransitionBuilderModule_CreateTransitionBetween = FName(TEXT("CreateTransitionBetween"));
	bool UAdvKitTransitionBuilderModule::CreateTransitionBetween(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* SourceZone, AAdvKitZone* TargetZone)
	{
		AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms Parms;
		Parms.ForCharacterClass=ForCharacterClass;
		Parms.SourceZone=SourceZone;
		Parms.TargetZone=TargetZone;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitTransitionBuilderModule_CreateTransitionBetween),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAdvKitTransitionBuilderModule_CreateTransitions = FName(TEXT("CreateTransitions"));
	void UAdvKitTransitionBuilderModule::CreateTransitions(TArray<AAdvKitZone*>& OutAffectedZones)
	{
		AdvKitTransitionBuilderModule_eventCreateTransitions_Parms Parms;
		Parms.OutAffectedZones=OutAffectedZones;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitTransitionBuilderModule_CreateTransitions),&Parms);
		OutAffectedZones=Parms.OutAffectedZones;
	}
	static FName NAME_UAdvKitTransitionBuilderModule_CreateTransitionsFor = FName(TEXT("CreateTransitionsFor"));
	void UAdvKitTransitionBuilderModule::CreateTransitionsFor(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone)
	{
		AdvKitTransitionBuilderModule_eventCreateTransitionsFor_Parms Parms;
		Parms.ForCharacterClass=ForCharacterClass;
		Parms.ForZone=ForZone;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitTransitionBuilderModule_CreateTransitionsFor),&Parms);
	}
	static FName NAME_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones = FName(TEXT("GatherPotentialTargetZones"));
	bool UAdvKitTransitionBuilderModule::GatherPotentialTargetZones(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone, TArray<AAdvKitZone*>& OutZones)
	{
		AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms Parms;
		Parms.ForCharacterClass=ForCharacterClass;
		Parms.ForZone=ForZone;
		Parms.OutZones=OutZones;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones),&Parms);
		OutZones=Parms.OutZones;
		return !!Parms.ReturnValue;
	}
	void UAdvKitTransitionBuilderModule::StaticRegisterNativesUAdvKitTransitionBuilderModule()
	{
		UClass* Class = UAdvKitTransitionBuilderModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCreateTransitionsFor", &UAdvKitTransitionBuilderModule::execCanCreateTransitionsFor },
			{ "CreateTransitionBetween", &UAdvKitTransitionBuilderModule::execCreateTransitionBetween },
			{ "CreateTransitionLine", &UAdvKitTransitionBuilderModule::execCreateTransitionLine },
			{ "CreateTransitionPoint", &UAdvKitTransitionBuilderModule::execCreateTransitionPoint },
			{ "CreateTransitionRect", &UAdvKitTransitionBuilderModule::execCreateTransitionRect },
			{ "CreateTransitions", &UAdvKitTransitionBuilderModule::execCreateTransitions },
			{ "CreateTransitionsFor", &UAdvKitTransitionBuilderModule::execCreateTransitionsFor },
			{ "CreateTransitionSpline", &UAdvKitTransitionBuilderModule::execCreateTransitionSpline },
			{ "GatherPotentialTargetZones", &UAdvKitTransitionBuilderModule::execGatherPotentialTargetZones },
			{ "GetCharacterHalfExtent", &UAdvKitTransitionBuilderModule::execGetCharacterHalfExtent },
			{ "GetCharacterMovementProperties_BP", &UAdvKitTransitionBuilderModule::execGetCharacterMovementProperties_BP },
			{ "GetOuterZone", &UAdvKitTransitionBuilderModule::execGetOuterZone },
			{ "OverlapForCloseZones", &UAdvKitTransitionBuilderModule::execOverlapForCloseZones },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForZone;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms), &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ForZone = { UE4CodeGen_Private::EPropertyClass::Object, "ForZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms, ForZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ForCharacterClass = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms, ForCharacterClass), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ForZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::NewProp_ForCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Check if this module can create transitions for a given zone and character.\n@param       ForCharacterClass       Character to create transitions for.\n@param       ForZone         Zone to create transitions for.\n@return True if this module can create transitions for the given arguments." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CanCreateTransitionsFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetZone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceZone;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms), &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_TargetZone = { UE4CodeGen_Private::EPropertyClass::Object, "TargetZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms, TargetZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_SourceZone = { UE4CodeGen_Private::EPropertyClass::Object, "SourceZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms, SourceZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_ForCharacterClass = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms, ForCharacterClass), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_TargetZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_SourceZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::NewProp_ForCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Creates transitions between two given zones\n@param       ForCharacterClass       Character to create transitions for.\n@param       SourceZone      Zone to create transitions from.\n@param       TargetZone      Zone to create transitions to.\n@return      True if any transitions were created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitionBetween", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics
	{
		struct AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms
		{
			UAdvKitTransitionBuilderModule* ForModule;
			FString Id;
			AAdvKitZone* SourceZone;
			FVector MinWorldSourceLocation;
			FVector MinWorldTargetLocation;
			FVector MaxWorldSourceLocation;
			FVector MaxWorldTargetLocation;
			TSubclassOf<AAdvKitCharacter>  ForCharacter;
			EAdvKitMovementMode MovementMode;
			AAdvKitZone* TargetZone;
			uint8 CustomMovementMode;
			UAdvKitTransitionComponentLine* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetZone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorldTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWorldTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorldSourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWorldSourceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWorldTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinWorldTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWorldSourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinWorldSourceLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceZone;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, ReturnValue), Z_Construct_UClass_UAdvKitTransitionComponentLine_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_CustomMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, CustomMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_TargetZone = { UE4CodeGen_Private::EPropertyClass::Object, "TargetZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, TargetZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, MovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ForCharacter = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, ForCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxWorldTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, MaxWorldTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldSourceLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldSourceLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxWorldSourceLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, MaxWorldSourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldSourceLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldSourceLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinWorldTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, MinWorldTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldSourceLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldSourceLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinWorldSourceLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, MinWorldSourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldSourceLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldSourceLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_SourceZone = { UE4CodeGen_Private::EPropertyClass::Object, "SourceZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, SourceZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Str, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ForModule = { UE4CodeGen_Private::EPropertyClass::Object, "ForModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms, ForModule), Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_CustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_TargetZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ForCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MaxWorldSourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_MinWorldSourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_SourceZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::NewProp_ForModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_CustomMovementMode", "0" },
		{ "CPP_Default_TargetZone", "None" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitionLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionLine_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics
	{
		struct AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms
		{
			UAdvKitTransitionBuilderModule* ForModule;
			FString Id;
			AAdvKitZone* SourceZone;
			FVector WorldSourceLocation;
			FVector WorldTargetLocation;
			TSubclassOf<AAdvKitCharacter>  ForCharacter;
			EAdvKitMovementMode MovementMode;
			AAdvKitZone* TargetZone;
			uint8 CustomMovementMode;
			UAdvKitTransitionComponentPoint* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetZone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSourceLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceZone;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, ReturnValue), Z_Construct_UClass_UAdvKitTransitionComponentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_CustomMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, CustomMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_TargetZone = { UE4CodeGen_Private::EPropertyClass::Object, "TargetZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, TargetZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_MovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, MovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_MovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ForCharacter = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, ForCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, WorldTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldSourceLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldSourceLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldSourceLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, WorldSourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldSourceLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldSourceLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_SourceZone = { UE4CodeGen_Private::EPropertyClass::Object, "SourceZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, SourceZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Str, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ForModule = { UE4CodeGen_Private::EPropertyClass::Object, "ForModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms, ForModule), Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_CustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_TargetZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ForCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_WorldSourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_SourceZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::NewProp_ForModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_CustomMovementMode", "0" },
		{ "CPP_Default_TargetZone", "None" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitionPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionPoint_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics
	{
		struct AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms
		{
			UAdvKitTransitionBuilderModule* ForModule;
			FString Id;
			AAdvKitZone* SourceZone;
			FVector MinWorldSourceLocation;
			FVector MinWorldTargetLocation;
			FVector MaxWorldSourceLocation;
			FVector MaxWorldTargetLocation;
			TSubclassOf<AAdvKitCharacter>  ForCharacter;
			EAdvKitMovementMode MovementMode;
			AAdvKitZone* TargetZone;
			uint8 CustomMovementMode;
			UAdvKitTransitionComponentRect* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetZone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorldTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWorldTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorldSourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWorldSourceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWorldTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinWorldTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWorldSourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinWorldSourceLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceZone;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, ReturnValue), Z_Construct_UClass_UAdvKitTransitionComponentRect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_CustomMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, CustomMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_TargetZone = { UE4CodeGen_Private::EPropertyClass::Object, "TargetZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, TargetZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, MovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ForCharacter = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, ForCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxWorldTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, MaxWorldTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldSourceLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldSourceLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxWorldSourceLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, MaxWorldSourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldSourceLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldSourceLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinWorldTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, MinWorldTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldSourceLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldSourceLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinWorldSourceLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, MinWorldSourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldSourceLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldSourceLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_SourceZone = { UE4CodeGen_Private::EPropertyClass::Object, "SourceZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, SourceZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Str, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ForModule = { UE4CodeGen_Private::EPropertyClass::Object, "ForModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms, ForModule), Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_CustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_TargetZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ForCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MaxWorldSourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_MinWorldSourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_SourceZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::NewProp_ForModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_CustomMovementMode", "0" },
		{ "CPP_Default_TargetZone", "None" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitionRect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionRect_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAffectedZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutAffectedZones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::NewProp_OutAffectedZones = { UE4CodeGen_Private::EPropertyClass::Array, "OutAffectedZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitions_Parms, OutAffectedZones), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::NewProp_OutAffectedZones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutAffectedZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::NewProp_OutAffectedZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::NewProp_OutAffectedZones_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Create transitions for zone\n@param[out]  OutAffectedZones        All zones that are targets of the created transitions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitions_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForZone;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::NewProp_ForZone = { UE4CodeGen_Private::EPropertyClass::Object, "ForZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionsFor_Parms, ForZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::NewProp_ForCharacterClass = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionsFor_Parms, ForCharacterClass), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::NewProp_ForZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::NewProp_ForCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Create transitions for a given character and zone\n@param       ForCharacterClass       Character to create transitions for.\n@param       ForZone         Zone to create transitions for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitionsFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionsFor_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics
	{
		struct AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms
		{
			UAdvKitTransitionBuilderModule* ForModule;
			FString Id;
			AAdvKitZone* SourceZone;
			float MinSourceDistance;
			FVector MinWorldSourcePosition;
			float MinTargetDistance;
			FVector MinWorldTargetPosition;
			float MaxSourceDistance;
			FVector MaxWorldSourcePosition;
			float MaxTargetDistance;
			FVector MaxWorldTargetPosition;
			TSubclassOf<AAdvKitCharacter>  ForCharacter;
			EAdvKitMovementMode MovementMode;
			AAdvKitZone* TargetZone;
			uint8 CustomMovementMode;
			UAdvKitTransitionComponentSpline* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetZone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorldTargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWorldTargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorldSourcePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWorldSourcePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSourceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSourceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWorldTargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinWorldTargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTargetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTargetDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWorldSourcePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinWorldSourcePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSourceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSourceDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceZone;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, ReturnValue), Z_Construct_UClass_UAdvKitTransitionComponentSpline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_CustomMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, CustomMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_TargetZone = { UE4CodeGen_Private::EPropertyClass::Object, "TargetZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, TargetZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MovementMode), Z_Construct_UEnum_AdvKitRuntime_EAdvKitMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ForCharacter = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, ForCharacter), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldTargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldTargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxWorldTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MaxWorldTargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldTargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxTargetDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxTargetDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTargetDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MaxTargetDistance), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxTargetDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxTargetDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldSourcePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldSourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxWorldSourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MaxWorldSourcePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldSourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldSourcePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxSourceDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxSourceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSourceDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MaxSourceDistance), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxSourceDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxSourceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldTargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldTargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MinWorldTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MinWorldTargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldTargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldTargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinTargetDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinTargetDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinTargetDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MinTargetDistance), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinTargetDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinTargetDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldSourcePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldSourcePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MinWorldSourcePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MinWorldSourcePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldSourcePosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldSourcePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinSourceDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinSourceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinSourceDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, MinSourceDistance), METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinSourceDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinSourceDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_SourceZone = { UE4CodeGen_Private::EPropertyClass::Object, "SourceZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, SourceZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Str, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ForModule = { UE4CodeGen_Private::EPropertyClass::Object, "ForModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms, ForModule), Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_CustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_TargetZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ForCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxTargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxWorldSourcePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MaxSourceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldTargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinTargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinWorldSourcePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_MinSourceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_SourceZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::NewProp_ForModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "CPP_Default_CustomMovementMode", "0" },
		{ "CPP_Default_TargetZone", "None" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "CreateTransitionSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AdvKitTransitionBuilderModule_eventCreateTransitionSpline_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutZones_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForZone;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms), &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_OutZones = { UE4CodeGen_Private::EPropertyClass::Array, "OutZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms, OutZones), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_OutZones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ForZone = { UE4CodeGen_Private::EPropertyClass::Object, "ForZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms, ForZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ForCharacterClass = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms, ForCharacterClass), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_OutZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_OutZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ForZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::NewProp_ForCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Queries all zones that might be potential targets for new transitions.\n@param       ForCharacterClass       Character to create transitions for.\n@param       ForZone         Zone to create transitions for.\n@param[out]  OutZones        All zones that are potential targets.\n@return      True if any potential targets were found, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "GatherPotentialTargetZones", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics
	{
		struct AdvKitTransitionBuilderModule_eventGetCharacterHalfExtent_Parms
		{
			TSubclassOf<AAdvKitCharacter>  ForCharacterClass;
			AAdvKitZone* ForZone;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForZone;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGetCharacterHalfExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::NewProp_ForZone = { UE4CodeGen_Private::EPropertyClass::Object, "ForZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGetCharacterHalfExtent_Parms, ForZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::NewProp_ForCharacterClass = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGetCharacterHalfExtent_Parms, ForCharacterClass), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::NewProp_ForZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::NewProp_ForCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Utility method to query a character's size properties.\n@param       ForCharacterClass       Character to get size of.\n@param       ForZone         Zone to get character's size in.\n@return Half extent (Radius, Radius, Half Height) of character" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "GetCharacterHalfExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(AdvKitTransitionBuilderModule_eventGetCharacterHalfExtent_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics
	{
		struct AdvKitTransitionBuilderModule_eventGetCharacterMovementProperties_BP_Parms
		{
			TSubclassOf<AAdvKitCharacter>  ForCharacterClass;
			FAdvKitMovementProperties ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ForCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000582, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGetCharacterMovementProperties_BP_Parms, ReturnValue), Z_Construct_UScriptStruct_FAdvKitMovementProperties, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ForCharacterClass = { UE4CodeGen_Private::EPropertyClass::Class, "ForCharacterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGetCharacterMovementProperties_BP_Parms, ForCharacterClass), Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::NewProp_ForCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "DisplayName", "GetCharacterMovementProperties" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Utility method to get movement properties of a given character\n@param       ForCharacterClass       Character to get movement properties of.\n@return The character's movement properties." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "GetCharacterMovementProperties_BP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AdvKitTransitionBuilderModule_eventGetCharacterMovementProperties_BP_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics
	{
		struct AdvKitTransitionBuilderModule_eventGetOuterZone_Parms
		{
			AAdvKitZone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventGetOuterZone_Parms, ReturnValue), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "@return The zone this build module belongs to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "GetOuterZone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AdvKitTransitionBuilderModule_eventGetOuterZone_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics
	{
		struct AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms
		{
			AAdvKitZone* ToZone;
			FVector OverlapStart;
			FVector OverlapEnd;
			float OverlapRadius;
			TArray<AAdvKitZone*> OutOtherZones;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutOtherZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOtherZones_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms), &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OutOtherZones = { UE4CodeGen_Private::EPropertyClass::Array, "OutOtherZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms, OutOtherZones), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OutOtherZones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutOtherZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OverlapRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OverlapRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms, OverlapRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OverlapEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "OverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms, OverlapEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OverlapStart = { UE4CodeGen_Private::EPropertyClass::Struct, "OverlapStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms, OverlapStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_ToZone = { UE4CodeGen_Private::EPropertyClass::Object, "ToZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms, ToZone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OutOtherZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OutOtherZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OverlapRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OverlapEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_OverlapStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::NewProp_ToZone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "Does an overlap check to find all zones within it.\n@param       ToZone  The origin zone to find overlaps for.\n@param       OverlapStart    Start of the overlap.\n@param       OverlapEnd              End of the overlap.\n@param       OverlapRadius   Radius of the overlap.\n@param[out]  OutOtherZones   All zones that were overlapped.\n@return True if any zones were overlapped, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule, "OverlapForCloseZones", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(AdvKitTransitionBuilderModule_eventOverlapForCloseZones_Parms), Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule_NoRegister()
	{
		return UAdvKitTransitionBuilderModule::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultCharacterClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultCharacterClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedOrUpdatedTransitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreatedOrUpdatedTransitions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedOrUpdatedTransitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectedZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedZones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMarginDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorMarginDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMarginPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorMarginPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CanCreateTransitionsFor, "CanCreateTransitionsFor" }, // 2952883988
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionBetween, "CreateTransitionBetween" }, // 323158064
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionLine, "CreateTransitionLine" }, // 2170440739
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionPoint, "CreateTransitionPoint" }, // 3156356047
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionRect, "CreateTransitionRect" }, // 431679509
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitions, "CreateTransitions" }, // 3005152979
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionsFor, "CreateTransitionsFor" }, // 85726122
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_CreateTransitionSpline, "CreateTransitionSpline" }, // 2628400584
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GatherPotentialTargetZones, "GatherPotentialTargetZones" }, // 3188950866
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterHalfExtent, "GetCharacterHalfExtent" }, // 722144054
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetCharacterMovementProperties_BP, "GetCharacterMovementProperties_BP" }, // 2080197343
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_GetOuterZone, "GetOuterZone" }, // 2517657719
		{ &Z_Construct_UFunction_UAdvKitTransitionBuilderModule_OverlapForCloseZones, "OverlapForCloseZones" }, // 599235429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Environment/AdvKitTransitionBuilderModule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Base class for modules that create transition. A module takes care of creating transitions for\nspecific types of zones." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses_MetaData[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "For which character classes this builder should create transitions." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultCharacterClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionBuilderModule, DefaultCharacterClasses), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultCharacterClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvKitCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions_MetaData[] = {
		{ "Category", "Transitions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "During the build process this is used to keep track transitions that where created or updated" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions = { UE4CodeGen_Private::EPropertyClass::Array, "CreatedOrUpdatedTransitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008800000000c, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionBuilderModule, CreatedOrUpdatedTransitions), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CreatedOrUpdatedTransitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAdvKitTransitionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones_MetaData[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "During the build process this is used to keep track of zones that transitions where created to or removed from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones = { UE4CodeGen_Private::EPropertyClass::Array, "AffectedZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionBuilderModule, AffectedZones), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AffectedZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginDot_MetaData[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "When checking if two directions align, this is the maximum variance of their dot product to be considered equal." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginDot = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorMarginDot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionBuilderModule, ErrorMarginDot), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginDot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginPosition_MetaData[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitTransitionBuilderModule.h" },
		{ "ToolTip", "When checking if two positions align, this is the maximum variance for positions to be considered equal." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginPosition = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorMarginPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAdvKitTransitionBuilderModule, ErrorMarginPosition), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_DefaultCharacterClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_CreatedOrUpdatedTransitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_AffectedZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::NewProp_ErrorMarginPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTransitionBuilderModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::ClassParams = {
		&UAdvKitTransitionBuilderModule::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009030A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTransitionBuilderModule, 1212244632);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTransitionBuilderModule(Z_Construct_UClass_UAdvKitTransitionBuilderModule, &UAdvKitTransitionBuilderModule::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTransitionBuilderModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTransitionBuilderModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

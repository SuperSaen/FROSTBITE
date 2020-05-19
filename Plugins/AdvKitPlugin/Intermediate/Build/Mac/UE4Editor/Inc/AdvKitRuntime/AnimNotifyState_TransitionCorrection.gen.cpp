// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Actions/AnimNotifyState_TransitionCorrection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TransitionCorrection() {}
// Cross Module References
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTransitionCorrectionData();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTransitionLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_AAdvKitZone_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAnimNotifyState_TransitionCorrection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
// End Cross Module References
class UScriptStruct* FTransitionCorrectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionCorrectionData, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("TransitionCorrectionData"), sizeof(FTransitionCorrectionData), Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransitionCorrectionData(FTransitionCorrectionData::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("TransitionCorrectionData"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFTransitionCorrectionData
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFTransitionCorrectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransitionCorrectionData")),new UScriptStruct::TCppStructOps<FTransitionCorrectionData>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFTransitionCorrectionData;
	struct Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransitionCorrectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "New location in target zone after the transition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NextLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransitionCorrectionData, NextLocation), Z_Construct_UScriptStruct_FTransitionLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Location before the transition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransitionCorrectionData, PreviousLocation), Z_Construct_UScriptStruct_FTransitionLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"TransitionCorrectionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTransitionCorrectionData),
		alignof(FTransitionCorrectionData),
		Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransitionCorrectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransitionCorrectionData"), sizeof(FTransitionCorrectionData), Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_CRC() { return 4035049203U; }
class UScriptStruct* FTransitionLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTransitionLocation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionLocation, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("TransitionLocation"), sizeof(FTransitionLocation), Get_Z_Construct_UScriptStruct_FTransitionLocation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransitionLocation(FTransitionLocation::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("TransitionLocation"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFTransitionLocation
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFTransitionLocation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransitionLocation")),new UScriptStruct::TCppStructOps<FTransitionLocation>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFTransitionLocation;
	struct Z_Construct_UScriptStruct_FTransitionLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalZoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalZoneLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransitionLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Rotation if zone location is not valid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransitionLocation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Location if zone location is not valid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransitionLocation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Location in zone of the transition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalZoneLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransitionLocation, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Zone of the transition" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone = { UE4CodeGen_Private::EPropertyClass::Object, "Zone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransitionLocation, Zone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransitionLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"TransitionLocation",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTransitionLocation),
		alignof(FTransitionLocation),
		Z_Construct_UScriptStruct_FTransitionLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransitionLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransitionLocation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransitionLocation"), sizeof(FTransitionLocation), Get_Z_Construct_UScriptStruct_FTransitionLocation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransitionLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransitionLocation_CRC() { return 3900457422U; }
	void UAnimNotifyState_TransitionCorrection::StaticRegisterNativesUAnimNotifyState_TransitionCorrection()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_NoRegister()
	{
		return UAnimNotifyState_TransitionCorrection::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcementCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EnforcementCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RotationCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteTransitionCorrection_MetaData[];
#endif
		static void NewProp_bAbsoluteTransitionCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteTransitionCorrection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Transiton Correction" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "USTRUCT()\nstruct FRootMotionSource_TransitionCorrection : public FRootMotionSource\n{\n       GENERATED_USTRUCT_BODY()\n\n       FRootMotionSource_TransitionCorrection();\n\n       virtual ~FRootMotionSource_TransitionCorrection() {}\n\n\n        Last alpha of the location transition curve\n       float LastLocationAlpha;\n\n        Last alpha of the rotation transition curve\n       float LastRotationAlpha;\n\n        Delta translation during the current transition\n       FVector TranslationDifference;\n\n        Delta rotation during the current transition\n       FRotator RotationDifference;\n\n        Location before the transition\n       UPROPERTY()\n       FTransitionLocation PreviousLocation;\n\n        New location in target zone after the transition\n       UPROPERTY()\n       FTransitionLocation NextLocation;\n       UPROPERTY()\n       FVector Force;\n\n       UPROPERTY()\n       UCurveFloat* StrengthOverTime;\n\n       virtual FRootMotionSource* Clone() const override;\n\n       virtual bool Matches(const FRootMotionSource* Other) const override;\n\n       virtual bool MatchesAndHasSameState(const FRootMotionSource* Other) const override;\n\n       virtual bool UpdateStateFrom(const FRootMotionSource* SourceToTakeStateFrom, bool bMarkForSimulatedCatchup = false) override;\n\n       virtual void PrepareRootMotion(\n               float SimulationTime,\n               float MovementTickTime,\n               const ACharacter& Character,\n               const UCharacterMovementComponent& MoveComponent\n               ) override;\n\n       virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;\n\n       virtual UScriptStruct* GetScriptStruct() const override;\n\n       virtual FString ToSimpleString() const override;\n\n       virtual void AddReferencedObjects(class FReferenceCollector& Collector) override;\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "EditCondition", "bAbsoluteTransitionCorrection" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Name of the anim curve to use if doing absolute transition correction" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName = { UE4CodeGen_Private::EPropertyClass::Name, "EnforcementCurveName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TransitionCorrection, EnforcementCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Name of the anim curve to use for rotation correction alpha" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName = { UE4CodeGen_Private::EPropertyClass::Name, "RotationCurveName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TransitionCorrection, RotationCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Name of the anim curve to use for location correction alpha" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName = { UE4CodeGen_Private::EPropertyClass::Name, "LocationCurveName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_TransitionCorrection, LocationCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Use rotation part of transition correction" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_SetBit(void* Obj)
	{
		((UAnimNotifyState_TransitionCorrection*)Obj)->bAbsoluteTransitionCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsoluteTransitionCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimNotifyState_TransitionCorrection), &Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TransitionCorrection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::ClassParams = {
		&UAnimNotifyState_TransitionCorrection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000130A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_TransitionCorrection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_TransitionCorrection, 2534956412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_TransitionCorrection(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection, &UAnimNotifyState_TransitionCorrection::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotifyState_TransitionCorrection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TransitionCorrection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
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
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionCorrectionData, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("TransitionCorrectionData"), sizeof(FTransitionCorrectionData), Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_Hash());
	}
	return Singleton;
}
template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<FTransitionCorrectionData>()
{
	return FTransitionCorrectionData::StaticStruct();
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
		{ "Comment", "/** New location in target zone after the transition*/" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "New location in target zone after the transition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation = { "NextLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionCorrectionData, NextLocation), Z_Construct_UScriptStruct_FTransitionLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation_MetaData[] = {
		{ "Comment", "/** Location before the transition */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Location before the transition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation = { "PreviousLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionCorrectionData, PreviousLocation), Z_Construct_UScriptStruct_FTransitionLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_NextLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::NewProp_PreviousLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"TransitionCorrectionData",
		sizeof(FTransitionCorrectionData),
		alignof(FTransitionCorrectionData),
		Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransitionCorrectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransitionCorrectionData"), sizeof(FTransitionCorrectionData), Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransitionCorrectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransitionCorrectionData_Hash() { return 3970107608U; }
class UScriptStruct* FTransitionLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTransitionLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionLocation, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("TransitionLocation"), sizeof(FTransitionLocation), Get_Z_Construct_UScriptStruct_FTransitionLocation_Hash());
	}
	return Singleton;
}
template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<FTransitionLocation>()
{
	return FTransitionLocation::StaticStruct();
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
		{ "Comment", "/** Rotation if zone location is not valid */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Rotation if zone location is not valid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionLocation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location if zone location is not valid */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Location if zone location is not valid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionLocation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation_MetaData[] = {
		{ "Comment", "/** Location in zone of the transition*/" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Location in zone of the transition" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation = { "LocalZoneLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionLocation, LocalZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_LocalZoneLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone_MetaData[] = {
		{ "Comment", "/** Zone of the transition*/" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Zone of the transition" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionLocation, Zone), Z_Construct_UClass_AAdvKitZone_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::NewProp_Zone_MetaData)) };
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
		sizeof(FTransitionLocation),
		alignof(FTransitionLocation),
		Z_Construct_UScriptStruct_FTransitionLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransitionLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransitionLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransitionLocation"), sizeof(FTransitionLocation), Get_Z_Construct_UScriptStruct_FTransitionLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransitionLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransitionLocation_Hash() { return 3907571713U; }
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
		{ "Comment", "//\n//USTRUCT()\n//struct FRootMotionSource_TransitionCorrection : public FRootMotionSource\n//{\n//\x09GENERATED_USTRUCT_BODY()\n//\n//\x09""FRootMotionSource_TransitionCorrection();\n//\n//\x09virtual ~FRootMotionSource_TransitionCorrection() {}\n//\n//\n//\x09/** Last alpha of the location transition curve */\n//\x09""float LastLocationAlpha;\n//\n//\x09/** Last alpha of the rotation transition curve */\n//\x09""float LastRotationAlpha;\n//\n//\x09/** Delta translation during the current transition */\n//\x09""FVector TranslationDifference;\n//\n//\x09/** Delta rotation during the current transition */\n//\x09""FRotator RotationDifference;\n//\n//\x09/** Location before the transition */\n//\x09UPROPERTY()\n//\x09""FTransitionLocation PreviousLocation;\n//\n//\x09/** New location in target zone after the transition*/\n//\x09UPROPERTY()\n//\x09""FTransitionLocation NextLocation;\n//\x09UPROPERTY()\n//\x09""FVector Force;\n//\n//\x09UPROPERTY()\n//\x09UCurveFloat* StrengthOverTime;\n//\n//\x09virtual FRootMotionSource* Clone() const override;\n//\n//\x09virtual bool Matches(const FRootMotionSource* Other) const override;\n//\n//\x09virtual bool MatchesAndHasSameState(const FRootMotionSource* Other) const override;\n//\n//\x09virtual bool UpdateStateFrom(const FRootMotionSource* SourceToTakeStateFrom, bool bMarkForSimulatedCatchup = false) override;\n//\n//\x09virtual void PrepareRootMotion(\n//\x09\x09""float SimulationTime, \n//\x09\x09""float MovementTickTime,\n//\x09\x09""const ACharacter& Character, \n//\x09\x09""const UCharacterMovementComponent& MoveComponent\n//\x09\x09) override;\n//\n//\x09virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;\n//\n//\x09virtual UScriptStruct* GetScriptStruct() const override;\n//\n//\x09virtual FString ToSimpleString() const override;\n//\n//\x09virtual void AddReferencedObjects(class FReferenceCollector& Collector) override;\n//};\n//\n" },
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
		{ "Comment", "/** Name of the anim curve to use if doing absolute transition correction */" },
		{ "EditCondition", "bAbsoluteTransitionCorrection" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Name of the anim curve to use if doing absolute transition correction" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName = { "EnforcementCurveName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TransitionCorrection, EnforcementCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_EnforcementCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "Comment", "/** Name of the anim curve to use for rotation correction alpha */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Name of the anim curve to use for rotation correction alpha" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName = { "RotationCurveName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TransitionCorrection, RotationCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_RotationCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "Comment", "/** Name of the anim curve to use for location correction alpha */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Name of the anim curve to use for location correction alpha" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName = { "LocationCurveName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TransitionCorrection, LocationCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_LocationCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_MetaData[] = {
		{ "Category", "Transition Correction" },
		{ "Comment", "/** Use rotation part of transition correction */" },
		{ "ModuleRelativePath", "Public/Actions/AnimNotifyState_TransitionCorrection.h" },
		{ "ToolTip", "Use rotation part of transition correction" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_SetBit(void* Obj)
	{
		((UAnimNotifyState_TransitionCorrection*)Obj)->bAbsoluteTransitionCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection = { "bAbsoluteTransitionCorrection", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotifyState_TransitionCorrection), &Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::NewProp_bAbsoluteTransitionCorrection_MetaData)) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UAnimNotifyState_TransitionCorrection, 3712112907);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAnimNotifyState_TransitionCorrection>()
	{
		return UAnimNotifyState_TransitionCorrection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_TransitionCorrection(Z_Construct_UClass_UAnimNotifyState_TransitionCorrection, &UAnimNotifyState_TransitionCorrection::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAnimNotifyState_TransitionCorrection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TransitionCorrection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

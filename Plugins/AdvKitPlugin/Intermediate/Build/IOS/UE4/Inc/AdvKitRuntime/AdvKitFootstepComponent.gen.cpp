// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitFootstepComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitFootstepComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootStepSound();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitFootstepComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitFootstepComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep();
	ADVKITRUNTIME_API UFunction* Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FFootStepSound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVKITRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FFootStepSound_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootStepSound, Z_Construct_UPackage__Script_AdvKitRuntime(), TEXT("FootStepSound"), sizeof(FFootStepSound), Get_Z_Construct_UScriptStruct_FFootStepSound_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootStepSound(FFootStepSound::StaticStruct, TEXT("/Script/AdvKitRuntime"), TEXT("FootStepSound"), false, nullptr, nullptr);
static struct FScriptStruct_AdvKitRuntime_StaticRegisterNativesFFootStepSound
{
	FScriptStruct_AdvKitRuntime_StaticRegisterNativesFFootStepSound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootStepSound")),new UScriptStruct::TCppStructOps<FFootStepSound>);
	}
} ScriptStruct_AdvKitRuntime_StaticRegisterNativesFFootStepSound;
	struct Z_Construct_UScriptStruct_FFootStepSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "@brief Configuration struct to assign a sound cue to a specific surface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootStepSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootStepSound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "Sound cue that is played on configured surface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFootStepSound, Sound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Surface_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "Physical surface to play sound for" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Surface = { UE4CodeGen_Private::EPropertyClass::Byte, "Surface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFootStepSound, Surface), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Surface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Surface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootStepSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepSound_Statics::NewProp_Surface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootStepSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
		nullptr,
		&NewStructOps,
		"FootStepSound",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFootStepSound),
		alignof(FFootStepSound),
		Z_Construct_UScriptStruct_FFootStepSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepSound_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepSound_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootStepSound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootStepSound_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvKitRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootStepSound"), sizeof(FFootStepSound), Get_Z_Construct_UScriptStruct_FFootStepSound_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootStepSound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootStepSound_CRC() { return 918559545U; }
	static FName NAME_UAdvKitFootstepComponent_PlayFootstep = FName(TEXT("PlayFootstep"));
	void UAdvKitFootstepComponent::PlayFootstep(int32 Foot)
	{
		AdvKitFootstepComponent_eventPlayFootstep_Parms Parms;
		Parms.Foot=Foot;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitFootstepComponent_PlayFootstep),&Parms);
	}
	static FName NAME_UAdvKitFootstepComponent_PlayFootstepAttached = FName(TEXT("PlayFootstepAttached"));
	UAudioComponent* UAdvKitFootstepComponent::PlayFootstepAttached(int32 Foot)
	{
		AdvKitFootstepComponent_eventPlayFootstepAttached_Parms Parms;
		Parms.Foot=Foot;
		ProcessEvent(FindFunctionChecked(NAME_UAdvKitFootstepComponent_PlayFootstepAttached),&Parms);
		return Parms.ReturnValue;
	}
	void UAdvKitFootstepComponent::StaticRegisterNativesUAdvKitFootstepComponent()
	{
		UClass* Class = UAdvKitFootstepComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayFootstep", &UAdvKitFootstepComponent::execPlayFootstep },
			{ "PlayFootstepAttached", &UAdvKitFootstepComponent::execPlayFootstepAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Foot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::NewProp_Foot = { UE4CodeGen_Private::EPropertyClass::Int, "Foot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitFootstepComponent_eventPlayFootstep_Parms, Foot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::NewProp_Foot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "Tries to play a footstep sound for a configured foot.\n@param       Foot    Index (in Socket Array) of foot socket to play sound for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitFootstepComponent, "PlayFootstep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitFootstepComponent_eventPlayFootstep_Parms), Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Foot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AdvKitFootstepComponent_eventPlayFootstepAttached_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_Foot = { UE4CodeGen_Private::EPropertyClass::Int, "Foot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvKitFootstepComponent_eventPlayFootstepAttached_Parms, Foot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::NewProp_Foot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvKit" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "Tries to play a footstep sound for a configured foot.\n@param       Foot    Index (in Socket Array) of foot socket to play sound for\n@return      Audio component playing the sound of the footstep" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvKitFootstepComponent, "PlayFootstepAttached", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(AdvKitFootstepComponent_eventPlayFootstepAttached_Parms), Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvKitFootstepComponent_NoRegister()
	{
		return UAdvKitFootstepComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitFootstepComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootStepTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootSocketNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootSocketNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootSocketNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootStepSounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootStepSounds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitFootstepComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvKitFootstepComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstep, "PlayFootstep" }, // 588920019
		{ &Z_Construct_UFunction_UAdvKitFootstepComponent_PlayFootstepAttached, "PlayFootstepAttached" }, // 1450335106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFootstepComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Mobility LOD Events Collision Physics Rendering Rendering | Material TextureStreaming Input Lighting Base Activation" },
		{ "IncludePath", "Player/AdvKitFootstepComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief Utility component to play foot step sounds depending on what surface is beneath a\nfoot of the owning character" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepTraceDistance_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "How far down to trace below a foot socket to detect the surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepTraceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FootStepTraceDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UAdvKitFootstepComponent, FootStepTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepTraceDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "List of foot sockets on the character" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames = { UE4CodeGen_Private::EPropertyClass::Array, "FootSocketNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAdvKitFootstepComponent, FootSocketNames), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "FootSocketNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/Player/AdvKitFootstepComponent.h" },
		{ "ToolTip", "List of sounds configured for surfaces" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds = { UE4CodeGen_Private::EPropertyClass::Array, "FootStepSounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAdvKitFootstepComponent, FootStepSounds), METADATA_PARAMS(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FootStepSounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFootStepSound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitFootstepComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootSocketNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitFootstepComponent_Statics::NewProp_FootStepSounds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitFootstepComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitFootstepComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitFootstepComponent_Statics::ClassParams = {
		&UAdvKitFootstepComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAdvKitFootstepComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvKitFootstepComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitFootstepComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitFootstepComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitFootstepComponent, 1293215378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitFootstepComponent(Z_Construct_UClass_UAdvKitFootstepComponent, &UAdvKitFootstepComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitFootstepComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitFootstepComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

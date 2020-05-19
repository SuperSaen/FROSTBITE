// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitBuildModule_Ladder() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTransitionBuilderModule();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitBuildModule_Ladder::StaticRegisterNativesUAdvKitBuildModule_Ladder()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder_NoRegister()
	{
		return UAdvKitBuildModule_Ladder::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateTransitionToFloor_MetaData[];
#endif
		static void NewProp_bCreateTransitionToFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateTransitionToFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateTransitionToPlatform_MetaData[];
#endif
		static void NewProp_bCreateTransitionToPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateTransitionToPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSidewaysTransitionRequiresJump_MetaData[];
#endif
		static void NewProp_bSidewaysTransitionRequiresJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSidewaysTransitionRequiresJump;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvKitTransitionBuilderModule,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Implementation of a transition builder module to create transitions for ladder zones\n */" },
		{ "DisplayName", "Ladder Enter and Exit" },
		{ "IncludePath", "Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "@brief Implementation of a transition builder module to create transitions for ladder zones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether or not to create an exit transition at bottom of the ladder */" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "Whether or not to create an exit transition at bottom of the ladder" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ladder*)Obj)->bCreateTransitionToFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor = { "bCreateTransitionToFloor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Ladder), &Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether or not to create an exit transition at the top of the ladder */" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "Whether or not to create an exit transition at the top of the ladder" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ladder*)Obj)->bCreateTransitionToPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform = { "bCreateTransitionToPlatform", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Ladder), &Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether or not transitions to the side require jumps */" },
		{ "ModuleRelativePath", "Public/Environment/BuildModules/AdvKitBuildModule_Ladder.h" },
		{ "ToolTip", "Whether or not transitions to the side require jumps" },
	};
#endif
	void Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_SetBit(void* Obj)
	{
		((UAdvKitBuildModule_Ladder*)Obj)->bSidewaysTransitionRequiresJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump = { "bSidewaysTransitionRequiresJump", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvKitBuildModule_Ladder), &Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bCreateTransitionToPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::NewProp_bSidewaysTransitionRequiresJump,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitBuildModule_Ladder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::ClassParams = {
		&UAdvKitBuildModule_Ladder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitBuildModule_Ladder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitBuildModule_Ladder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitBuildModule_Ladder, 2920408002);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitBuildModule_Ladder>()
	{
		return UAdvKitBuildModule_Ladder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitBuildModule_Ladder(Z_Construct_UClass_UAdvKitBuildModule_Ladder, &UAdvKitBuildModule_Ladder::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitBuildModule_Ladder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitBuildModule_Ladder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

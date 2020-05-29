// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Player/AdvKitTargetLockComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitTargetLockComponent() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTargetLockComponent_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitTargetLockComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UAdvKitTargetLockComponent::StaticRegisterNativesUAdvKitTargetLockComponent()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitTargetLockComponent_NoRegister()
	{
		return UAdvKitTargetLockComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitTargetLockComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDistanceFromCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistanceFromCenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * @brief This component tries to keep an attached camera between the parent character and its target so \n * that both are in view at all times.\n */" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Player/AdvKitTargetLockComponent.h" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetLockComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief This component tries to keep an attached camera between the parent character and its target so\nthat both are in view at all times." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_TargetOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Offset to add to the center point */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetLockComponent.h" },
		{ "ToolTip", "Offset to add to the center point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTargetLockComponent, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_TargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_TargetOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_MinimumDistanceFromCenter_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The minimal distance the camera is away from the center point between character and target */" },
		{ "ModuleRelativePath", "Public/Player/AdvKitTargetLockComponent.h" },
		{ "ToolTip", "The minimal distance the camera is away from the center point between character and target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_MinimumDistanceFromCenter = { "MinimumDistanceFromCenter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvKitTargetLockComponent, MinimumDistanceFromCenter), METADATA_PARAMS(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_MinimumDistanceFromCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_MinimumDistanceFromCenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_TargetOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::NewProp_MinimumDistanceFromCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitTargetLockComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::ClassParams = {
		&UAdvKitTargetLockComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitTargetLockComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitTargetLockComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitTargetLockComponent, 4291535390);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitTargetLockComponent>()
	{
		return UAdvKitTargetLockComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitTargetLockComponent(Z_Construct_UClass_UAdvKitTargetLockComponent, &UAdvKitTargetLockComponent::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitTargetLockComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitTargetLockComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

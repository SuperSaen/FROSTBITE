// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlockingBehaviourSystem/Public/BoidMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidMovementComponent() {}
// Cross Module References
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_UBoidMovementComponent_NoRegister();
	FLOCKINGBEHAVIOURSYSTEM_API UClass* Z_Construct_UClass_UBoidMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_FlockingBehaviourSystem();
// End Cross Module References
	void UBoidMovementComponent::StaticRegisterNativesUBoidMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UBoidMovementComponent_NoRegister()
	{
		return UBoidMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoidMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoidMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_FlockingBehaviourSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoidMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Controls the movement of a boid\n */" },
		{ "IncludePath", "BoidMovementComponent.h" },
		{ "ModuleRelativePath", "Public/BoidMovementComponent.h" },
		{ "ToolTip", "Controls the movement of a boid" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoidMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoidMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoidMovementComponent_Statics::ClassParams = {
		&UBoidMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoidMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoidMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoidMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoidMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoidMovementComponent, 1665385130);
	template<> FLOCKINGBEHAVIOURSYSTEM_API UClass* StaticClass<UBoidMovementComponent>()
	{
		return UBoidMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoidMovementComponent(Z_Construct_UClass_UBoidMovementComponent, &UBoidMovementComponent::StaticClass, TEXT("/Script/FlockingBehaviourSystem"), TEXT("UBoidMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoidMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvKitRuntime/Public/Environment/AdvKitZoneLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvKitZoneLocation() {}
// Cross Module References
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitZoneLocation_NoRegister();
	ADVKITRUNTIME_API UClass* Z_Construct_UClass_UAdvKitZoneLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdvKitRuntime();
// End Cross Module References
	void UAdvKitZoneLocation::StaticRegisterNativesUAdvKitZoneLocation()
	{
	}
	UClass* Z_Construct_UClass_UAdvKitZoneLocation_NoRegister()
	{
		return UAdvKitZoneLocation::StaticClass();
	}
	struct Z_Construct_UClass_UAdvKitZoneLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvKitZoneLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvKitRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvKitZoneLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Base class for object that defines a location inside a zone. \n * \n * Different zones can have different location specifiers. This class \n * takes care of storing a location and all the conversion methods \n * required to position the character.\n */" },
		{ "IncludePath", "Environment/AdvKitZoneLocation.h" },
		{ "ModuleRelativePath", "Public/Environment/AdvKitZoneLocation.h" },
		{ "ToolTip", "@brief Base class for object that defines a location inside a zone.\n\nDifferent zones can have different location specifiers. This class\ntakes care of storing a location and all the conversion methods\nrequired to position the character." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvKitZoneLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvKitZoneLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvKitZoneLocation_Statics::ClassParams = {
		&UAdvKitZoneLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvKitZoneLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvKitZoneLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvKitZoneLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvKitZoneLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvKitZoneLocation, 3738412727);
	template<> ADVKITRUNTIME_API UClass* StaticClass<UAdvKitZoneLocation>()
	{
		return UAdvKitZoneLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvKitZoneLocation(Z_Construct_UClass_UAdvKitZoneLocation, &UAdvKitZoneLocation::StaticClass, TEXT("/Script/AdvKitRuntime"), TEXT("UAdvKitZoneLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvKitZoneLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

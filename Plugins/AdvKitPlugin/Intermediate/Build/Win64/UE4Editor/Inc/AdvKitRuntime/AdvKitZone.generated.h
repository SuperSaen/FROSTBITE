// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
struct FTransform;
enum class EAdvKitMovementMode : uint8;
class UAdvKitZoneLocation;
class AAdvKitZone;
class AAdvKitCharacter;
class UAdvKitTransitionComponent;
#ifdef ADVKITRUNTIME_AdvKitZone_generated_h
#error "AdvKitZone.generated.h already included, missing '#pragma once' in AdvKitZone.h"
#endif
#define ADVKITRUNTIME_AdvKitZone_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS \
	virtual FVector ConstrainDirectionToZone_Implementation(FVector const& WorldDirection, FVector const& AtWorldLocation) const; \
	virtual FVector GetClosestZoneLocationNew_Implementation(FVector const& WorldLocation, FVector const& HalfExtent, FRotator const& ExtentWorldRotation) const; \
	virtual FVector GetClosestZoneUpVector_Implementation(FVector const& ToWorldLocation) const; \
	virtual FVector GetClosestZoneRightVector_Implementation(FVector const& ToWorldLocation) const; \
	virtual FVector GetClosestZoneForwardVector_Implementation(FVector const& ToWorldLocation) const; \
	virtual FVector GetZoneUpVectorNew_Implementation(FVector const& LocalZoneLocation) const; \
	virtual FVector GetZoneRightVectorNew_Implementation(FVector const& LocalZoneLocation) const; \
	virtual FVector GetZoneForwardVectorNew_Implementation(FVector const& LocalZoneLocation) const; \
	virtual FVector ConstrainPositionToZone_Implementation(FVector const& WorldPosition, FVector const& HalfExtent, FRotator const& ExtentWorldRotation) const; \
	virtual FVector GetPositionInDirection_Implementation(FVector const& FromWorldPosition, FVector const& WorldDesiredDelta, bool bClamp, FVector const& HalfExtent, FRotator const& ExtentWorldRotation); \
	virtual void GenerateTransitions_Implementation(bool bZoneMoved); \
 \
	DECLARE_FUNCTION(execConstrainDirectionToZone); \
	DECLARE_FUNCTION(execGetClosestZoneLocationNew); \
	DECLARE_FUNCTION(execGetClosestZoneTransform); \
	DECLARE_FUNCTION(execGetClosestZoneUpVector); \
	DECLARE_FUNCTION(execGetClosestZoneRightVector); \
	DECLARE_FUNCTION(execGetClosestZoneForwardVector); \
	DECLARE_FUNCTION(execGetZoneUpVectorNew); \
	DECLARE_FUNCTION(execGetZoneRightVectorNew); \
	DECLARE_FUNCTION(execGetZoneForwardVectorNew); \
	DECLARE_FUNCTION(execGetZoneLocationLocal); \
	DECLARE_FUNCTION(execGetZoneLocationWorld); \
	DECLARE_FUNCTION(execMoveLocationInDirectionNew); \
	DECLARE_FUNCTION(execHasCustomPhysics); \
	DECLARE_FUNCTION(execHasPhysics); \
	DECLARE_FUNCTION(execGetCustomPhysics); \
	DECLARE_FUNCTION(execGetPhysics); \
	DECLARE_FUNCTION(execConstrainPositionToZone); \
	DECLARE_FUNCTION(execGetZoneUpVector); \
	DECLARE_FUNCTION(execGetZoneRightVector); \
	DECLARE_FUNCTION(execGetZoneForwardVector); \
	DECLARE_FUNCTION(execMoveLocationInDirection); \
	DECLARE_FUNCTION(execGetPositionInDirection); \
	DECLARE_FUNCTION(execRemoveExistingTransitionsTo); \
	DECLARE_FUNCTION(execAddTransition); \
	DECLARE_FUNCTION(execGenerateTransitions);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstrainDirectionToZone); \
	DECLARE_FUNCTION(execGetClosestZoneLocationNew); \
	DECLARE_FUNCTION(execGetClosestZoneTransform); \
	DECLARE_FUNCTION(execGetClosestZoneUpVector); \
	DECLARE_FUNCTION(execGetClosestZoneRightVector); \
	DECLARE_FUNCTION(execGetClosestZoneForwardVector); \
	DECLARE_FUNCTION(execGetZoneUpVectorNew); \
	DECLARE_FUNCTION(execGetZoneRightVectorNew); \
	DECLARE_FUNCTION(execGetZoneForwardVectorNew); \
	DECLARE_FUNCTION(execGetZoneLocationLocal); \
	DECLARE_FUNCTION(execGetZoneLocationWorld); \
	DECLARE_FUNCTION(execMoveLocationInDirectionNew); \
	DECLARE_FUNCTION(execHasCustomPhysics); \
	DECLARE_FUNCTION(execHasPhysics); \
	DECLARE_FUNCTION(execGetCustomPhysics); \
	DECLARE_FUNCTION(execGetPhysics); \
	DECLARE_FUNCTION(execConstrainPositionToZone); \
	DECLARE_FUNCTION(execGetZoneUpVector); \
	DECLARE_FUNCTION(execGetZoneRightVector); \
	DECLARE_FUNCTION(execGetZoneForwardVector); \
	DECLARE_FUNCTION(execMoveLocationInDirection); \
	DECLARE_FUNCTION(execGetPositionInDirection); \
	DECLARE_FUNCTION(execRemoveExistingTransitionsTo); \
	DECLARE_FUNCTION(execAddTransition); \
	DECLARE_FUNCTION(execGenerateTransitions);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_EVENT_PARMS \
	struct AdvKitZone_eventConstrainDirectionToZone_Parms \
	{ \
		FVector WorldDirection; \
		FVector AtWorldLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventConstrainDirectionToZone_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventConstrainPositionToZone_Parms \
	{ \
		FVector WorldPosition; \
		FVector HalfExtent; \
		FRotator ExtentWorldRotation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventConstrainPositionToZone_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGenerateTransitions_Parms \
	{ \
		bool bZoneMoved; \
	}; \
	struct AdvKitZone_eventGetClosestZoneForwardVector_Parms \
	{ \
		FVector ToWorldLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetClosestZoneForwardVector_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetClosestZoneLocationNew_Parms \
	{ \
		FVector WorldLocation; \
		FVector HalfExtent; \
		FRotator ExtentWorldRotation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetClosestZoneLocationNew_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetClosestZoneRightVector_Parms \
	{ \
		FVector ToWorldLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetClosestZoneRightVector_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetClosestZoneUpVector_Parms \
	{ \
		FVector ToWorldLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetClosestZoneUpVector_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetPositionInDirection_Parms \
	{ \
		FVector FromWorldPosition; \
		FVector WorldDesiredDelta; \
		bool bClamp; \
		FVector HalfExtent; \
		FRotator ExtentWorldRotation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetPositionInDirection_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetZoneForwardVectorNew_Parms \
	{ \
		FVector LocalZoneLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetZoneForwardVectorNew_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetZoneRightVectorNew_Parms \
	{ \
		FVector LocalZoneLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetZoneRightVectorNew_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitZone_eventGetZoneUpVectorNew_Parms \
	{ \
		FVector LocalZoneLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitZone_eventGetZoneUpVectorNew_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitZone(); \
	friend struct Z_Construct_UClass_AAdvKitZone_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZone, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZone)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitZone(); \
	friend struct Z_Construct_UClass_AAdvKitZone_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZone, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZone)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZone(AAdvKitZone&&); \
	NO_API AAdvKitZone(const AAdvKitZone&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZone(AAdvKitZone&&); \
	NO_API AAdvKitZone(const AAdvKitZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZone)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_PRIVATE_PROPERTY_OFFSET
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_22_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

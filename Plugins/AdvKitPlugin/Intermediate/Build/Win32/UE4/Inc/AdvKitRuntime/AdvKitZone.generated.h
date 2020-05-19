// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_SPARSE_DATA
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execConstrainDirectionToZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainDirectionToZone_Implementation(Z_Param_Out_WorldDirection,Z_Param_Out_AtWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneLocationNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneLocationNew_Implementation(Z_Param_Out_WorldLocation,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneTransform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetClosestZoneTransform(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneUpVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneUpVector_Implementation(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneRightVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneRightVector_Implementation(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneForwardVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneForwardVector_Implementation(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneUpVectorNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneUpVectorNew_Implementation(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneRightVectorNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneRightVectorNew_Implementation(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneForwardVectorNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneForwardVectorNew_Implementation(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneLocationLocal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneLocationLocal(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneLocationWorld) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneLocationWorld(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLocationInDirectionNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDesiredDelta); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveLocationInDirectionNew(Z_Param_Out_LocalZoneLocation,Z_Param_Out_WorldDesiredDelta,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasCustomPhysics) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_QueryPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasCustomPhysics(Z_Param_QueryPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPhysics) \
	{ \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_QueryPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPhysics(EAdvKitMovementMode(Z_Param_QueryPhysics)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomPhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetCustomPhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAdvKitMovementMode*)Z_Param__Result=P_THIS->GetPhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainPositionToZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainPositionToZone_Implementation(Z_Param_Out_WorldPosition,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneUpVector) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_AtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneUpVector(Z_Param_AtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneRightVector) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_AtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneRightVector(Z_Param_AtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneForwardVector) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_AtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneForwardVector(Z_Param_AtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLocationInDirection) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_LocationToMove); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDesiredDelta); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveLocationInDirection(Z_Param_LocationToMove,Z_Param_Out_WorldDesiredDelta,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPositionInDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FromWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDesiredDelta); \
		P_GET_UBOOL(Z_Param_bClamp); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPositionInDirection_Implementation(Z_Param_Out_FromWorldPosition,Z_Param_Out_WorldDesiredDelta,Z_Param_bClamp,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveExistingTransitionsTo) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveExistingTransitionsTo(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTransition) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_For); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_Transition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTransition(Z_Param_For,Z_Param_Transition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTransitions) \
	{ \
		P_GET_UBOOL(Z_Param_bZoneMoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateTransitions_Implementation(Z_Param_bZoneMoved); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstrainDirectionToZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainDirectionToZone_Implementation(Z_Param_Out_WorldDirection,Z_Param_Out_AtWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneLocationNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneLocationNew_Implementation(Z_Param_Out_WorldLocation,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneTransform) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetClosestZoneTransform(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneUpVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneUpVector_Implementation(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneRightVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneRightVector_Implementation(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestZoneForwardVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToWorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetClosestZoneForwardVector_Implementation(Z_Param_Out_ToWorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneUpVectorNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneUpVectorNew_Implementation(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneRightVectorNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneRightVectorNew_Implementation(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneForwardVectorNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneForwardVectorNew_Implementation(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneLocationLocal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneLocationLocal(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneLocationWorld) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneLocationWorld(Z_Param_Out_LocalZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLocationInDirectionNew) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalZoneLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDesiredDelta); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveLocationInDirectionNew(Z_Param_Out_LocalZoneLocation,Z_Param_Out_WorldDesiredDelta,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasCustomPhysics) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_QueryPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasCustomPhysics(Z_Param_QueryPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPhysics) \
	{ \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_QueryPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPhysics(EAdvKitMovementMode(Z_Param_QueryPhysics)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomPhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetCustomPhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAdvKitMovementMode*)Z_Param__Result=P_THIS->GetPhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstrainPositionToZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ConstrainPositionToZone_Implementation(Z_Param_Out_WorldPosition,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneUpVector) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_AtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneUpVector(Z_Param_AtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneRightVector) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_AtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneRightVector(Z_Param_AtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneForwardVector) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_AtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneForwardVector(Z_Param_AtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLocationInDirection) \
	{ \
		P_GET_OBJECT(UAdvKitZoneLocation,Z_Param_LocationToMove); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDesiredDelta); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MoveLocationInDirection(Z_Param_LocationToMove,Z_Param_Out_WorldDesiredDelta,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPositionInDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FromWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDesiredDelta); \
		P_GET_UBOOL(Z_Param_bClamp); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfExtent); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ExtentWorldRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPositionInDirection_Implementation(Z_Param_Out_FromWorldPosition,Z_Param_Out_WorldDesiredDelta,Z_Param_bClamp,Z_Param_Out_HalfExtent,Z_Param_Out_ExtentWorldRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveExistingTransitionsTo) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveExistingTransitionsTo(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTransition) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_For); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_Transition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTransition(Z_Param_For,Z_Param_Transition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTransitions) \
	{ \
		P_GET_UBOOL(Z_Param_bZoneMoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateTransitions_Implementation(Z_Param_bZoneMoved); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_EVENT_PARMS \
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


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_CALLBACK_WRAPPERS
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitZone(); \
	friend struct Z_Construct_UClass_AAdvKitZone_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZone, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZone)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitZone(); \
	friend struct Z_Construct_UClass_AAdvKitZone_Statics; \
public: \
	DECLARE_CLASS(AAdvKitZone, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitZone)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_STANDARD_CONSTRUCTORS \
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


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitZone(AAdvKitZone&&); \
	NO_API AAdvKitZone(const AAdvKitZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitZone)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_PRIVATE_PROPERTY_OFFSET
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_22_PROLOG \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_EVENT_PARMS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

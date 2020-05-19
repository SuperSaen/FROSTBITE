// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAdvKitTransitionBuilderModule;
class AAdvKitZone;
struct FVector;
class AAdvKitCharacter;
enum class EAdvKitMovementMode : uint8;
class UAdvKitTransitionComponentRect;
class UAdvKitTransitionComponentSpline;
class UAdvKitTransitionComponentLine;
class UAdvKitTransitionComponentPoint;
struct FAdvKitMovementProperties;
#ifdef ADVKITRUNTIME_AdvKitTransitionBuilderModule_generated_h
#error "AdvKitTransitionBuilderModule.generated.h already included, missing '#pragma once' in AdvKitTransitionBuilderModule.h"
#endif
#define ADVKITRUNTIME_AdvKitTransitionBuilderModule_generated_h

#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS \
	virtual bool CreateTransitionBetween_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* SourceZone, AAdvKitZone* TargetZone); \
	virtual bool GatherPotentialTargetZones_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone, TArray<AAdvKitZone*>& OutZones); \
	virtual void CreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone); \
	virtual bool CanCreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter>  ForCharacterClass, AAdvKitZone* ForZone); \
	virtual void CreateTransitions_Implementation(TArray<AAdvKitZone*>& OutAffectedZones); \
 \
	DECLARE_FUNCTION(execCreateTransitionRect) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldTargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldTargetLocation); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentRect**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionRect(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_MinWorldSourceLocation,Z_Param_Out_MinWorldTargetLocation,Z_Param_Out_MaxWorldSourceLocation,Z_Param_Out_MaxWorldTargetLocation,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionSpline) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinSourceDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldSourcePosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinTargetDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldTargetPosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxSourceDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldSourcePosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxTargetDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldTargetPosition); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentSpline**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionSpline(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_MinSourceDistance,Z_Param_Out_MinWorldSourcePosition,Z_Param_Out_MinTargetDistance,Z_Param_Out_MinWorldTargetPosition,Z_Param_Out_MaxSourceDistance,Z_Param_Out_MaxWorldSourcePosition,Z_Param_Out_MaxTargetDistance,Z_Param_Out_MaxWorldTargetPosition,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionLine) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldTargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldTargetLocation); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentLine**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionLine(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_MinWorldSourceLocation,Z_Param_Out_MinWorldTargetLocation,Z_Param_Out_MaxWorldSourceLocation,Z_Param_Out_MaxWorldTargetLocation,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionPoint) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldTargetLocation); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentPoint**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionPoint(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_WorldSourceLocation,Z_Param_Out_WorldTargetLocation,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverlapForCloseZones) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ToZone); \
		P_GET_STRUCT(FVector,Z_Param_OverlapStart); \
		P_GET_STRUCT(FVector,Z_Param_OverlapEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverlapRadius); \
		P_GET_TARRAY_REF(AAdvKitZone*,Z_Param_Out_OutOtherZones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OverlapForCloseZones(Z_Param_ToZone,Z_Param_OverlapStart,Z_Param_OverlapEnd,Z_Param_OverlapRadius,Z_Param_Out_OutOtherZones); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterMovementProperties_BP) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAdvKitMovementProperties*)Z_Param__Result=P_THIS->GetCharacterMovementProperties_BP(Z_Param_ForCharacterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterHalfExtent) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCharacterHalfExtent(Z_Param_ForCharacterClass,Z_Param_ForZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionBetween) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateTransitionBetween_Implementation(Z_Param_ForCharacterClass,Z_Param_SourceZone,Z_Param_TargetZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGatherPotentialTargetZones) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_TARRAY_REF(AAdvKitZone*,Z_Param_Out_OutZones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GatherPotentialTargetZones_Implementation(Z_Param_ForCharacterClass,Z_Param_ForZone,Z_Param_Out_OutZones); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionsFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateTransitionsFor_Implementation(Z_Param_ForCharacterClass,Z_Param_ForZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanCreateTransitionsFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanCreateTransitionsFor_Implementation(Z_Param_ForCharacterClass,Z_Param_ForZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOuterZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitZone**)Z_Param__Result=P_THIS->GetOuterZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitions) \
	{ \
		P_GET_TARRAY_REF(AAdvKitZone*,Z_Param_Out_OutAffectedZones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateTransitions_Implementation(Z_Param_Out_OutAffectedZones); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTransitionRect) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldTargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldTargetLocation); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentRect**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionRect(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_MinWorldSourceLocation,Z_Param_Out_MinWorldTargetLocation,Z_Param_Out_MaxWorldSourceLocation,Z_Param_Out_MaxWorldTargetLocation,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionSpline) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinSourceDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldSourcePosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinTargetDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldTargetPosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxSourceDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldSourcePosition); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxTargetDistance); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldTargetPosition); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentSpline**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionSpline(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_MinSourceDistance,Z_Param_Out_MinWorldSourcePosition,Z_Param_Out_MinTargetDistance,Z_Param_Out_MinWorldTargetPosition,Z_Param_Out_MaxSourceDistance,Z_Param_Out_MaxWorldSourcePosition,Z_Param_Out_MaxTargetDistance,Z_Param_Out_MaxWorldTargetPosition,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionLine) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinWorldTargetLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxWorldTargetLocation); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentLine**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionLine(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_MinWorldSourceLocation,Z_Param_Out_MinWorldTargetLocation,Z_Param_Out_MaxWorldSourceLocation,Z_Param_Out_MaxWorldTargetLocation,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionPoint) \
	{ \
		P_GET_OBJECT(UAdvKitTransitionBuilderModule,Z_Param_ForModule); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Id); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSourceLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldTargetLocation); \
		P_GET_OBJECT(UClass,Z_Param_ForCharacter); \
		P_GET_ENUM(EAdvKitMovementMode,Z_Param_MovementMode); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponentPoint**)Z_Param__Result=UAdvKitTransitionBuilderModule::CreateTransitionPoint(Z_Param_ForModule,Z_Param_Id,Z_Param_SourceZone,Z_Param_Out_WorldSourceLocation,Z_Param_Out_WorldTargetLocation,Z_Param_ForCharacter,EAdvKitMovementMode(Z_Param_MovementMode),Z_Param_TargetZone,Z_Param_CustomMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverlapForCloseZones) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ToZone); \
		P_GET_STRUCT(FVector,Z_Param_OverlapStart); \
		P_GET_STRUCT(FVector,Z_Param_OverlapEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverlapRadius); \
		P_GET_TARRAY_REF(AAdvKitZone*,Z_Param_Out_OutOtherZones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OverlapForCloseZones(Z_Param_ToZone,Z_Param_OverlapStart,Z_Param_OverlapEnd,Z_Param_OverlapRadius,Z_Param_Out_OutOtherZones); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterMovementProperties_BP) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAdvKitMovementProperties*)Z_Param__Result=P_THIS->GetCharacterMovementProperties_BP(Z_Param_ForCharacterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterHalfExtent) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCharacterHalfExtent(Z_Param_ForCharacterClass,Z_Param_ForZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionBetween) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_SourceZone); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_TargetZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateTransitionBetween_Implementation(Z_Param_ForCharacterClass,Z_Param_SourceZone,Z_Param_TargetZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGatherPotentialTargetZones) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_TARRAY_REF(AAdvKitZone*,Z_Param_Out_OutZones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GatherPotentialTargetZones_Implementation(Z_Param_ForCharacterClass,Z_Param_ForZone,Z_Param_Out_OutZones); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitionsFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateTransitionsFor_Implementation(Z_Param_ForCharacterClass,Z_Param_ForZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanCreateTransitionsFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForCharacterClass); \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanCreateTransitionsFor_Implementation(Z_Param_ForCharacterClass,Z_Param_ForZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOuterZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitZone**)Z_Param__Result=P_THIS->GetOuterZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTransitions) \
	{ \
		P_GET_TARRAY_REF(AAdvKitZone*,Z_Param_Out_OutAffectedZones); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateTransitions_Implementation(Z_Param_Out_OutAffectedZones); \
		P_NATIVE_END; \
	}


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_EVENT_PARMS \
	struct AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* ForZone; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitTransitionBuilderModule_eventCanCreateTransitionsFor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* SourceZone; \
		AAdvKitZone* TargetZone; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitTransitionBuilderModule_eventCreateTransitionBetween_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitTransitionBuilderModule_eventCreateTransitions_Parms \
	{ \
		TArray<AAdvKitZone*> OutAffectedZones; \
	}; \
	struct AdvKitTransitionBuilderModule_eventCreateTransitionsFor_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* ForZone; \
	}; \
	struct AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms \
	{ \
		TSubclassOf<AAdvKitCharacter>  ForCharacterClass; \
		AAdvKitZone* ForZone; \
		TArray<AAdvKitZone*> OutZones; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitTransitionBuilderModule_eventGatherPotentialTargetZones_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_CALLBACK_WRAPPERS
#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitTransitionBuilderModule(); \
	friend struct Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTransitionBuilderModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTransitionBuilderModule)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitTransitionBuilderModule(); \
	friend struct Z_Construct_UClass_UAdvKitTransitionBuilderModule_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTransitionBuilderModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTransitionBuilderModule)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitTransitionBuilderModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTransitionBuilderModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTransitionBuilderModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTransitionBuilderModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTransitionBuilderModule(UAdvKitTransitionBuilderModule&&); \
	NO_API UAdvKitTransitionBuilderModule(const UAdvKitTransitionBuilderModule&); \
public:


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTransitionBuilderModule(UAdvKitTransitionBuilderModule&&); \
	NO_API UAdvKitTransitionBuilderModule(const UAdvKitTransitionBuilderModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTransitionBuilderModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTransitionBuilderModule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTransitionBuilderModule)


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ErrorMarginPosition() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, ErrorMarginPosition); } \
	FORCEINLINE static uint32 __PPO__ErrorMarginDot() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, ErrorMarginDot); } \
	FORCEINLINE static uint32 __PPO__AffectedZones() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, AffectedZones); } \
	FORCEINLINE static uint32 __PPO__CreatedOrUpdatedTransitions() { return STRUCT_OFFSET(UAdvKitTransitionBuilderModule, CreatedOrUpdatedTransitions); }


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_20_PROLOG \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_EVENT_PARMS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_CALLBACK_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_PRIVATE_PROPERTY_OFFSET \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_CALLBACK_WRAPPERS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_INCLASS_NO_PURE_DECLS \
	MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitTransitionBuilderModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MildorsPlume_4_20___2_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Environment_AdvKitTransitionBuilderModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

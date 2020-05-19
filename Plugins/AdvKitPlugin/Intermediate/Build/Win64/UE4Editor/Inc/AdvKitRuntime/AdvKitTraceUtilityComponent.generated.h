// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FVector;
struct FRotator;
#ifdef ADVKITRUNTIME_AdvKitTraceUtilityComponent_generated_h
#error "AdvKitTraceUtilityComponent.generated.h already included, missing '#pragma once' in AdvKitTraceUtilityComponent.h"
#endif
#define ADVKITRUNTIME_AdvKitTraceUtilityComponent_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceMultiForObjects(Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjectsBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceSingleForObjectsBlueprint(Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiForObjectsBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceMultiForObjectsBlueprint(Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleForObjectsBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceSingleForObjectsBlueprint(Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiForObjectsBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceMultiForObjectsBlueprint(Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleForObjectBlueprints) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceSingleForObjectBlueprints(Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiForObjectsBlueprint) \
	{ \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceMultiForObjectsBlueprint(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleForObjectBlueprints) \
	{ \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleForObjectBlueprints(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceMultiBlueprint(Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceSingleBlueprint(Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceMultiBlueprint(Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceSingleBlueprint(Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceMultiBlueprint(Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceSingleBlueprint(Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiBlueprint) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceMultiBlueprint(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleBlueprint) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleBlueprint(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetStart(); \
		P_NATIVE_END; \
	}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceMultiForObjects(Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjectsBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceSingleForObjectsBlueprint(Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiForObjectsBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceMultiForObjectsBlueprint(Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleForObjectsBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceSingleForObjectsBlueprint(Z_Param_HalfSize,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiForObjectsBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceMultiForObjectsBlueprint(Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleForObjectBlueprints) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceSingleForObjectBlueprints(Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiForObjectsBlueprint) \
	{ \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceMultiForObjectsBlueprint(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleForObjectBlueprints) \
	{ \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleForObjectBlueprints(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceMultiBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceMultiBlueprint(Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTraceSingleBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CapsuleTraceSingleBlueprint(Z_Param_Radius,Z_Param_HalfHeight,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceMultiBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceMultiBlueprint(Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTraceSingleBlueprint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_HalfSize); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BoxTraceSingleBlueprint(Z_Param_HalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceMultiBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceMultiBlueprint(Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereTraceSingleBlueprint) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SphereTraceSingleBlueprint(Z_Param_Radius,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceMultiBlueprint) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceMultiBlueprint(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleBlueprint) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleBlueprint(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetStart(); \
		P_NATIVE_END; \
	}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvKitTraceUtilityComponent(); \
	friend struct Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTraceUtilityComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTraceUtilityComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAdvKitTraceUtilityComponent(); \
	friend struct Z_Construct_UClass_UAdvKitTraceUtilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvKitTraceUtilityComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAdvKitTraceUtilityComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvKitTraceUtilityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTraceUtilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTraceUtilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTraceUtilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTraceUtilityComponent(UAdvKitTraceUtilityComponent&&); \
	NO_API UAdvKitTraceUtilityComponent(const UAdvKitTraceUtilityComponent&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvKitTraceUtilityComponent(UAdvKitTraceUtilityComponent&&); \
	NO_API UAdvKitTraceUtilityComponent(const UAdvKitTraceUtilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvKitTraceUtilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvKitTraceUtilityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvKitTraceUtilityComponent)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TraceLength() { return STRUCT_OFFSET(UAdvKitTraceUtilityComponent, TraceLength); } \
	FORCEINLINE static uint32 __PPO__DebugLineColor() { return STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineColor); } \
	FORCEINLINE static uint32 __PPO__DebugLineThickness() { return STRUCT_OFFSET(UAdvKitTraceUtilityComponent, DebugLineThickness); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_17_PROLOG
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class UAdvKitTraceUtilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitTraceUtilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

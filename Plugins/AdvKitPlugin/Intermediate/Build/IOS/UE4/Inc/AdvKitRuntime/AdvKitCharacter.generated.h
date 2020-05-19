// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvKitCharacter;
class UAnimMontage;
struct FRepAdvKitAnimMontage;
class AController;
struct FDamageEvent;
struct FVector;
class UDamageType;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class AAdvKitZone;
class UAdvKitTransitionComponent;
struct FRotator;
class AAdvKitUsable;
class AAdvKitInventoryItem;
class UAdvKitCharacterMovementComponent;
class AAdvKitTargetPoint;
class AAdvKitWeapon;
#ifdef ADVKITRUNTIME_AdvKitCharacter_generated_h
#error "AdvKitCharacter.generated.h already included, missing '#pragma once' in AdvKitCharacter.h"
#endif
#define ADVKITRUNTIME_AdvKitCharacter_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepAdvKitAnimMontage_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvKitInventoryConfig_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_15_DELEGATE \
struct _Script_AdvKitRuntime_eventAdvKitCharacterDied_Parms \
{ \
	AAdvKitCharacter* Character; \
}; \
static inline void FAdvKitCharacterDied_DelegateWrapper(const FMulticastScriptDelegate& AdvKitCharacterDied, AAdvKitCharacter* Character) \
{ \
	_Script_AdvKitRuntime_eventAdvKitCharacterDied_Parms Parms; \
	Parms.Character=Character; \
	AdvKitCharacterDied.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS \
	virtual bool StopAnimMontageServer_Validate(UAnimMontage* ); \
	virtual void StopAnimMontageServer_Implementation(UAnimMontage* AnimMontage); \
	virtual bool PlayAnimMontageServer_Validate(UAnimMontage* , float , FName ); \
	virtual void PlayAnimMontageServer_Implementation(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName); \
	virtual void Died_Implementation(AController* Killer, FDamageEvent const& DamageEvent, FVector HitLocation); \
	virtual bool IsAlive_Implementation(); \
	virtual float BlockPointDamage_Implementation(float DamageReceived, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser); \
	virtual float BlockRadialDamage_Implementation(float DamageReceived, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser); \
	virtual float BlockAnyDamage_Implementation(float DamageReceived, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser); \
	virtual bool TransitionToServer_Validate(AAdvKitZone* , UAdvKitTransitionComponent* , bool ); \
	virtual void TransitionToServer_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition, bool bForce); \
	virtual bool TransitionTo_Implementation(AAdvKitZone* NewZone, UAdvKitTransitionComponent* NewTransition, bool bForce); \
	virtual bool CanTransitionTo_Implementation(AAdvKitZone* Zone, UAdvKitTransitionComponent* NewTransition); \
	virtual bool SetZoneServer_Validate(AAdvKitZone* , bool , bool ); \
	virtual void SetZoneServer_Implementation(AAdvKitZone* NewZone, bool bSnap, bool bClearPendingTransition); \
	virtual void SetZone_Implementation(AAdvKitZone* NewZone, bool bSnap, bool bClearPendingTransition); \
	virtual FVector GetHalfExtentForZone_Implementation(AAdvKitZone* Zone) const; \
	virtual FVector GetDesiredOffsetFromZone_Implementation(AAdvKitZone* Zone, FVector const& AtZoneLocation); \
	virtual FRotator GetDesiredRotationInZone_Implementation(AAdvKitZone* Zone, FVector const& AtZoneLocation); \
	virtual bool CanTransition_Implementation(AAdvKitZone* ForZone, FVector const& ForWorldPosition, FVector const& InWorldDirection, bool bIsJump); \
	virtual bool CanTransitionFromCurrentZone_Implementation(FVector const& InWorldDirection, bool bIsJump); \
	virtual UAdvKitTransitionComponent* GetPossibleTransition_Implementation(AAdvKitZone* ForZone, FVector const& ForWorldPosition, FVector const& InWorldDirection, bool bIsJump); \
	virtual bool TryToTransition_Implementation(AAdvKitZone* ForZone, FVector const& ForWorldPosition, FVector const& InWorldDirection, bool bIsJump); \
	virtual bool TryToTransitionFromCurrentZone_Implementation(FVector const& InWorldDirection, bool bIsJump); \
	virtual float GetMaxZoneSpeed_Implementation(); \
	virtual FVector GetZoneAcceleration_Implementation(); \
	virtual bool JumpUpZone_Implementation(); \
	virtual bool LetGoOfZone_Implementation(); \
	virtual bool IsDodging_Implementation() const; \
	virtual bool ServerUse_Validate(AAdvKitUsable* , AAdvKitInventoryItem* ); \
	virtual void ServerUse_Implementation(AAdvKitUsable* Useable, AAdvKitInventoryItem* WithItem); \
	virtual bool Use_Implementation(AAdvKitUsable* Usable, AAdvKitInventoryItem* WithItem); \
	virtual FVector GetWeaponStartTraceLocation_Implementation(AAdvKitWeapon* Weapon); \
	virtual FRotator GetAdjustedAimFor_Implementation(AAdvKitWeapon* Weapon, FVector FireLocation); \
	virtual FRotator GetAimOffsets_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetAnimRootMotionTranslationScaleBP) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAnimRootMotionTranslationScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimRootMotionTranslationScaleBP(Z_Param_InAnimRootMotionTranslationScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimMontageServer) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StopAnimMontageServer_Validate(Z_Param_AnimMontage)) \
		{ \
			RPC_ValidateFailed(TEXT("StopAnimMontageServer_Validate")); \
			return; \
		} \
		P_THIS->StopAnimMontageServer_Implementation(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimMontageServer) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->PlayAnimMontageServer_Validate(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName)) \
		{ \
			RPC_ValidateFailed(TEXT("PlayAnimMontageServer_Validate")); \
			return; \
		} \
		P_THIS->PlayAnimMontageServer_Implementation(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RepAnimMontage) \
	{ \
		P_GET_STRUCT(FRepAdvKitAnimMontage,Z_Param_OldRepAnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RepAnimMontage(Z_Param_OldRepAnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMappedAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetMappedAnimMontage(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDied) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Killer); \
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Died_Implementation(Z_Param_Killer,Z_Param_Out_DamageEvent,Z_Param_HitLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockPointDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageReceived); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockPointDamage_Implementation(Z_Param_DamageReceived,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockRadialDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageReceived); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockRadialDamage_Implementation(Z_Param_DamageReceived,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockAnyDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageReceived); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockAnyDamage_Implementation(Z_Param_DamageReceived,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockDamage(Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseCursorEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseCursorEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseClosestUseable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UseClosestUseable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransitionToServer) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_NewTransition); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->TransitionToServer_Validate(Z_Param_NewZone,Z_Param_NewTransition,Z_Param_bForce)) \
		{ \
			RPC_ValidateFailed(TEXT("TransitionToServer_Validate")); \
			return; \
		} \
		P_THIS->TransitionToServer_Implementation(Z_Param_NewZone,Z_Param_NewTransition,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransitionTo) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_NewTransition); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TransitionTo_Implementation(Z_Param_NewZone,Z_Param_NewTransition,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransitionTo) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_NewTransition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransitionTo_Implementation(Z_Param_Zone,Z_Param_NewTransition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneDotToLocation) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT(FVector,Z_Param_LocalZoneDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetZoneDotToLocation(Z_Param_Zone,Z_Param_LocalZoneDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionToClosestLocation) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionToClosestLocation(Z_Param_Zone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDotToClosestLocation) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT(FVector,Z_Param_LocalCharacterDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDotToClosestLocation(Z_Param_Zone,Z_Param_LocalCharacterDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitZone**)Z_Param__Result=P_THIS->GetZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZoneServer) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_UBOOL(Z_Param_bSnap); \
		P_GET_UBOOL(Z_Param_bClearPendingTransition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetZoneServer_Validate(Z_Param_NewZone,Z_Param_bSnap,Z_Param_bClearPendingTransition)) \
		{ \
			RPC_ValidateFailed(TEXT("SetZoneServer_Validate")); \
			return; \
		} \
		P_THIS->SetZoneServer_Implementation(Z_Param_NewZone,Z_Param_bSnap,Z_Param_bClearPendingTransition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_UBOOL(Z_Param_bSnap); \
		P_GET_UBOOL(Z_Param_bClearPendingTransition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetZone_Implementation(Z_Param_NewZone,Z_Param_bSnap,Z_Param_bClearPendingTransition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHalfExtentForZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetHalfExtentForZone_Implementation(Z_Param_Zone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredOffsetFromZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDesiredOffsetFromZone_Implementation(Z_Param_Zone,Z_Param_Out_AtZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotationInZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotationInZone_Implementation(Z_Param_Zone,Z_Param_Out_AtZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransition) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransition_Implementation(Z_Param_ForZone,Z_Param_Out_ForWorldPosition,Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransitionFromCurrentZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransitionFromCurrentZone_Implementation(Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPossibleTransition) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponent**)Z_Param__Result=P_THIS->GetPossibleTransition_Implementation(Z_Param_ForZone,Z_Param_Out_ForWorldPosition,Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToTransition) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryToTransition_Implementation(Z_Param_ForZone,Z_Param_Out_ForWorldPosition,Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToTransitionFromCurrentZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryToTransitionFromCurrentZone_Implementation(Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxZoneSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxZoneSpeed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneAcceleration_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpUpZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JumpUpZone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetGoOfZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LetGoOfZone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDodging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDodging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(Z_Param_FireMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUse) \
	{ \
		P_GET_OBJECT(AAdvKitUsable,Z_Param_Useable); \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUse_Validate(Z_Param_Useable,Z_Param_WithItem)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUse_Validate")); \
			return; \
		} \
		P_THIS->ServerUse_Implementation(Z_Param_Useable,Z_Param_WithItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AAdvKitUsable,Z_Param_Usable); \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Use_Implementation(Z_Param_Usable,Z_Param_WithItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConditionalMovementInput) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_STRUCT(FVector,Z_Param_LocalDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddConditionalMovementInput(Z_Param_WorldDirection,Z_Param_LocalDirection,Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdvMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitCharacterMovementComponent**)Z_Param__Result=P_THIS->GetAdvMovementComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(AAdvKitTargetPoint,Z_Param_NewTarget); \
		P_GET_UBOOL(Z_Param_bLock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTarget(Z_Param_NewTarget,Z_Param_bLock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAvailableTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AAdvKitTargetPoint*>*)Z_Param__Result=P_THIS->GetAllAvailableTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponStartTraceLocation) \
	{ \
		P_GET_OBJECT(AAdvKitWeapon,Z_Param_Weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWeaponStartTraceLocation_Implementation(Z_Param_Weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedAimFor) \
	{ \
		P_GET_OBJECT(AAdvKitWeapon,Z_Param_Weapon); \
		P_GET_STRUCT(FVector,Z_Param_FireLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAdjustedAimFor_Implementation(Z_Param_Weapon,Z_Param_FireLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextItem(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool StopAnimMontageServer_Validate(UAnimMontage* ); \
	virtual bool PlayAnimMontageServer_Validate(UAnimMontage* , float , FName ); \
	virtual bool TransitionToServer_Validate(AAdvKitZone* , UAdvKitTransitionComponent* , bool ); \
	virtual bool SetZoneServer_Validate(AAdvKitZone* , bool , bool ); \
	virtual bool ServerUse_Validate(AAdvKitUsable* , AAdvKitInventoryItem* ); \
 \
	DECLARE_FUNCTION(execSetAnimRootMotionTranslationScaleBP) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAnimRootMotionTranslationScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimRootMotionTranslationScaleBP(Z_Param_InAnimRootMotionTranslationScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimMontageServer) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StopAnimMontageServer_Validate(Z_Param_AnimMontage)) \
		{ \
			RPC_ValidateFailed(TEXT("StopAnimMontageServer_Validate")); \
			return; \
		} \
		P_THIS->StopAnimMontageServer_Implementation(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimMontageServer) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->PlayAnimMontageServer_Validate(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName)) \
		{ \
			RPC_ValidateFailed(TEXT("PlayAnimMontageServer_Validate")); \
			return; \
		} \
		P_THIS->PlayAnimMontageServer_Implementation(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RepAnimMontage) \
	{ \
		P_GET_STRUCT(FRepAdvKitAnimMontage,Z_Param_OldRepAnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RepAnimMontage(Z_Param_OldRepAnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMappedAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetMappedAnimMontage(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDied) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Killer); \
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Died_Implementation(Z_Param_Killer,Z_Param_Out_DamageEvent,Z_Param_HitLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockPointDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageReceived); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockPointDamage_Implementation(Z_Param_DamageReceived,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockRadialDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageReceived); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockRadialDamage_Implementation(Z_Param_DamageReceived,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockAnyDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageReceived); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockAnyDamage_Implementation(Z_Param_DamageReceived,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BlockDamage(Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseCursorEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseCursorEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseClosestUseable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UseClosestUseable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransitionToServer) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_NewTransition); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->TransitionToServer_Validate(Z_Param_NewZone,Z_Param_NewTransition,Z_Param_bForce)) \
		{ \
			RPC_ValidateFailed(TEXT("TransitionToServer_Validate")); \
			return; \
		} \
		P_THIS->TransitionToServer_Implementation(Z_Param_NewZone,Z_Param_NewTransition,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransitionTo) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_NewTransition); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TransitionTo_Implementation(Z_Param_NewZone,Z_Param_NewTransition,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransitionTo) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_OBJECT(UAdvKitTransitionComponent,Z_Param_NewTransition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransitionTo_Implementation(Z_Param_Zone,Z_Param_NewTransition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneDotToLocation) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT(FVector,Z_Param_LocalZoneDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetZoneDotToLocation(Z_Param_Zone,Z_Param_LocalZoneDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirectionToClosestLocation) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionToClosestLocation(Z_Param_Zone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDotToClosestLocation) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT(FVector,Z_Param_LocalCharacterDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDotToClosestLocation(Z_Param_Zone,Z_Param_LocalCharacterDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitZone**)Z_Param__Result=P_THIS->GetZone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZoneServer) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_UBOOL(Z_Param_bSnap); \
		P_GET_UBOOL(Z_Param_bClearPendingTransition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetZoneServer_Validate(Z_Param_NewZone,Z_Param_bSnap,Z_Param_bClearPendingTransition)) \
		{ \
			RPC_ValidateFailed(TEXT("SetZoneServer_Validate")); \
			return; \
		} \
		P_THIS->SetZoneServer_Implementation(Z_Param_NewZone,Z_Param_bSnap,Z_Param_bClearPendingTransition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_NewZone); \
		P_GET_UBOOL(Z_Param_bSnap); \
		P_GET_UBOOL(Z_Param_bClearPendingTransition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetZone_Implementation(Z_Param_NewZone,Z_Param_bSnap,Z_Param_bClearPendingTransition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHalfExtentForZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetHalfExtentForZone_Implementation(Z_Param_Zone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredOffsetFromZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDesiredOffsetFromZone_Implementation(Z_Param_Zone,Z_Param_Out_AtZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotationInZone) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_Zone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AtZoneLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotationInZone_Implementation(Z_Param_Zone,Z_Param_Out_AtZoneLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransition) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransition_Implementation(Z_Param_ForZone,Z_Param_Out_ForWorldPosition,Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanTransitionFromCurrentZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanTransitionFromCurrentZone_Implementation(Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPossibleTransition) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitTransitionComponent**)Z_Param__Result=P_THIS->GetPossibleTransition_Implementation(Z_Param_ForZone,Z_Param_Out_ForWorldPosition,Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToTransition) \
	{ \
		P_GET_OBJECT(AAdvKitZone,Z_Param_ForZone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryToTransition_Implementation(Z_Param_ForZone,Z_Param_Out_ForWorldPosition,Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToTransitionFromCurrentZone) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldDirection); \
		P_GET_UBOOL(Z_Param_bIsJump); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryToTransitionFromCurrentZone_Implementation(Z_Param_Out_InWorldDirection,Z_Param_bIsJump); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxZoneSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxZoneSpeed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetZoneAcceleration_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpUpZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JumpUpZone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetGoOfZone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LetGoOfZone_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDodging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDodging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(Z_Param_FireMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUse) \
	{ \
		P_GET_OBJECT(AAdvKitUsable,Z_Param_Useable); \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUse_Validate(Z_Param_Useable,Z_Param_WithItem)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUse_Validate")); \
			return; \
		} \
		P_THIS->ServerUse_Implementation(Z_Param_Useable,Z_Param_WithItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AAdvKitUsable,Z_Param_Usable); \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_WithItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Use_Implementation(Z_Param_Usable,Z_Param_WithItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConditionalMovementInput) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_STRUCT(FVector,Z_Param_LocalDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddConditionalMovementInput(Z_Param_WorldDirection,Z_Param_LocalDirection,Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdvMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitCharacterMovementComponent**)Z_Param__Result=P_THIS->GetAdvMovementComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(AAdvKitTargetPoint,Z_Param_NewTarget); \
		P_GET_UBOOL(Z_Param_bLock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTarget(Z_Param_NewTarget,Z_Param_bLock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAvailableTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AAdvKitTargetPoint*>*)Z_Param__Result=P_THIS->GetAllAvailableTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponStartTraceLocation) \
	{ \
		P_GET_OBJECT(AAdvKitWeapon,Z_Param_Weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWeaponStartTraceLocation_Implementation(Z_Param_Weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedAimFor) \
	{ \
		P_GET_OBJECT(AAdvKitWeapon,Z_Param_Weapon); \
		P_GET_STRUCT(FVector,Z_Param_FireLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAdjustedAimFor_Implementation(Z_Param_Weapon,Z_Param_FireLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextItem(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_EVENT_PARMS \
	struct AdvKitCharacter_eventBlockAnyDamage_Parms \
	{ \
		float DamageReceived; \
		const UDamageType* DamageType; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventBlockAnyDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventBlockPointDamage_Parms \
	{ \
		float DamageReceived; \
		const UDamageType* DamageType; \
		FVector HitLocation; \
		FVector HitNormal; \
		UPrimitiveComponent* HitComponent; \
		FName BoneName; \
		FVector ShotFromDirection; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventBlockPointDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventBlockRadialDamage_Parms \
	{ \
		float DamageReceived; \
		const UDamageType* DamageType; \
		FVector Origin; \
		FHitResult HitInfo; \
		AController* InstigatedBy; \
		AActor* DamageCauser; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventBlockRadialDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventCanTransition_Parms \
	{ \
		AAdvKitZone* ForZone; \
		FVector ForWorldPosition; \
		FVector InWorldDirection; \
		bool bIsJump; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventCanTransition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventCanTransitionFromCurrentZone_Parms \
	{ \
		FVector InWorldDirection; \
		bool bIsJump; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventCanTransitionFromCurrentZone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventCanTransitionTo_Parms \
	{ \
		AAdvKitZone* Zone; \
		UAdvKitTransitionComponent* NewTransition; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventCanTransitionTo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventDied_Parms \
	{ \
		AController* Killer; \
		FDamageEvent DamageEvent; \
		FVector HitLocation; \
	}; \
	struct AdvKitCharacter_eventGetAdjustedAimFor_Parms \
	{ \
		AAdvKitWeapon* Weapon; \
		FVector FireLocation; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetAdjustedAimFor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetAimOffsets_Parms \
	{ \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetAimOffsets_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetDesiredOffsetFromZone_Parms \
	{ \
		AAdvKitZone* Zone; \
		FVector AtZoneLocation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetDesiredOffsetFromZone_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetDesiredRotationInZone_Parms \
	{ \
		AAdvKitZone* Zone; \
		FVector AtZoneLocation; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetDesiredRotationInZone_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetHalfExtentForZone_Parms \
	{ \
		AAdvKitZone* Zone; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetHalfExtentForZone_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetMaxZoneSpeed_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetMaxZoneSpeed_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetPossibleTransition_Parms \
	{ \
		AAdvKitZone* ForZone; \
		FVector ForWorldPosition; \
		FVector InWorldDirection; \
		bool bIsJump; \
		UAdvKitTransitionComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetPossibleTransition_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetWeaponStartTraceLocation_Parms \
	{ \
		AAdvKitWeapon* Weapon; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetWeaponStartTraceLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventGetZoneAcceleration_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventGetZoneAcceleration_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventIsAlive_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventIsAlive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventIsDodging_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventIsDodging_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventJumpUpZone_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventJumpUpZone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventLetGoOfZone_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventLetGoOfZone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventPlayAnimMontageServer_Parms \
	{ \
		UAnimMontage* AnimMontage; \
		float InPlayRate; \
		FName StartSectionName; \
	}; \
	struct AdvKitCharacter_eventServerUse_Parms \
	{ \
		AAdvKitUsable* Useable; \
		AAdvKitInventoryItem* WithItem; \
	}; \
	struct AdvKitCharacter_eventSetZone_Parms \
	{ \
		AAdvKitZone* NewZone; \
		bool bSnap; \
		bool bClearPendingTransition; \
	}; \
	struct AdvKitCharacter_eventSetZoneServer_Parms \
	{ \
		AAdvKitZone* NewZone; \
		bool bSnap; \
		bool bClearPendingTransition; \
	}; \
	struct AdvKitCharacter_eventStopAnimMontageServer_Parms \
	{ \
		UAnimMontage* AnimMontage; \
	}; \
	struct AdvKitCharacter_eventTransitionTo_Parms \
	{ \
		AAdvKitZone* NewZone; \
		UAdvKitTransitionComponent* NewTransition; \
		bool bForce; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventTransitionTo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventTransitionToServer_Parms \
	{ \
		AAdvKitZone* NewZone; \
		UAdvKitTransitionComponent* NewTransition; \
		bool bForce; \
	}; \
	struct AdvKitCharacter_eventTryToTransition_Parms \
	{ \
		AAdvKitZone* ForZone; \
		FVector ForWorldPosition; \
		FVector InWorldDirection; \
		bool bIsJump; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventTryToTransition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventTryToTransitionFromCurrentZone_Parms \
	{ \
		FVector InWorldDirection; \
		bool bIsJump; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventTryToTransitionFromCurrentZone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitCharacter_eventUse_Parms \
	{ \
		AAdvKitUsable* Usable; \
		AAdvKitInventoryItem* WithItem; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitCharacter_eventUse_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitCharacter(AAdvKitCharacter&&); \
	NO_API AAdvKitCharacter(const AAdvKitCharacter&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitCharacter(AAdvKitCharacter&&); \
	NO_API AAdvKitCharacter(const AAdvKitCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitCharacter)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_96_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h


#define FOREACH_ENUM_EADVKITCAMERATYPE(op) \
	op(EAdvKitCameraType::FirstPerson) \
	op(EAdvKitCameraType::ThirdPerson) \
	op(EAdvKitCameraType::Shoulder) \
	op(EAdvKitCameraType::TargetLocked) \
	op(EAdvKitCameraType::Unkown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

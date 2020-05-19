// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAdvKitWeaponState;
class AActor;
struct FDamageEvent;
class AController;
class UAdvKitFireModeConfiguration;
struct FRotator;
struct FVector;
class AAdvKitProjectile;
class AAdvKitWeapon;
class UTexture2D;
#ifdef ADVKITRUNTIME_AdvKitWeapon_generated_h
#error "AdvKitWeapon.generated.h already included, missing '#pragma once' in AdvKitWeapon.h"
#endif
#define ADVKITRUNTIME_AdvKitWeapon_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvKitWeaponState_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS \
	virtual void OnWeaponEmpty_Implementation(); \
	virtual void OnMagazineEmpty_Implementation(); \
	virtual void OnReloadEnd_Implementation(); \
	virtual void OnReloaded_Implementation(); \
	virtual void OnReloadBegin_Implementation(); \
	virtual void OnFireEnd_Implementation(); \
	virtual void OnFireShot_Implementation(); \
	virtual void OnFireBegin_Implementation(); \
	virtual bool StopReloadServer_Validate(); \
	virtual void StopReloadServer_Implementation(); \
	virtual bool StartReloadServer_Validate(); \
	virtual void StartReloadServer_Implementation(); \
	virtual bool StopFireServer_Validate(); \
	virtual void StopFireServer_Implementation(); \
	virtual bool StartFireServer_Validate(uint8 ); \
	virtual void StartFireServer_Implementation(uint8 FireModeIndex); \
	virtual void BlockedBy_Implementation(AActor* By, float BlockedDamage); \
	virtual float BlockDamage_Implementation(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual void StopReloadTimer_Implementation(); \
	virtual void StartReloadTimer_Implementation(); \
	virtual void AddAmmunition_Implementation(int32 Amount); \
	virtual void ReloadAmmunition_Implementation(); \
	virtual void StopReloadInternal_Implementation(); \
	virtual void StartReloadInternal_Implementation(); \
	virtual bool CanReload_Implementation(); \
	virtual void StopFireInternal_Implementation(); \
	virtual void StartFireInternal_Implementation(); \
	virtual bool CanFire_Implementation(); \
	virtual FVector GetTraceStart_Implementation(uint8 FireModeIndex); \
	virtual FVector GetMuzzleLocation_Implementation(uint8 FireModeIndex); \
	virtual void FireCustom_Implementation(); \
	virtual AAdvKitProjectile* FireProjectile_Implementation(); \
	virtual void FireInstant_Implementation(); \
	virtual void FireAmmunition_Implementation(); \
	virtual void HandleFiringPrerequisites_Implementation(); \
	virtual void ConsumeAmmunition_Implementation(); \
	virtual void StopReload_Implementation(); \
	virtual void StartReload_Implementation(); \
	virtual void StopFire_Implementation(); \
	virtual void StartFire_Implementation(uint8 FireModeIndex); \
 \
	DECLARE_FUNCTION(execOnWeaponEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponEmpty_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMagazineEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMagazineEmpty_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReloadEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReloadEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReloaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReloaded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReloadBegin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReloadBegin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFireEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFireEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFireShot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFireShot_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFireBegin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFireBegin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BurstCounter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldBurstCounter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BurstCounter(Z_Param_OldBurstCounter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WeaponState) \
	{ \
		P_GET_STRUCT(FAdvKitWeaponState,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WeaponState(Z_Param_OldState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReloadServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StopReloadServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StopReloadServer_Validate")); \
			return; \
		} \
		P_THIS->StopReloadServer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReloadServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartReloadServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StartReloadServer_Validate")); \
			return; \
		} \
		P_THIS->StartReloadServer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFireServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StopFireServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StopFireServer_Validate")); \
			return; \
		} \
		P_THIS->StopFireServer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFireServer) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartFireServer_Validate(Z_Param_FireModeIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("StartFireServer_Validate")); \
			return; \
		} \
		P_THIS->StartFireServer_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockedBy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_By); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlockedDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockedBy_Implementation(Z_Param_By,Z_Param_BlockedDamage); \
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
		*(float*)Z_Param__Result=P_THIS->BlockDamage_Implementation(Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFireModeClass) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UAdvKitFireModeConfiguration> *)Z_Param__Result=P_THIS->GetFireModeClass(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFireModeBP) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitFireModeConfiguration**)Z_Param__Result=P_THIS->GetFireModeBP(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFireMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFireMode(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadedTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadedTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReloadTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReloadTimer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReloadTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReloadTimer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAmmunition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAmmunition_Implementation(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReloadInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReloadInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReloadInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReloadInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanReload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFireInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFireInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFireInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFireInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSpread) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_OriginalAim); \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->AddSpread(Z_Param_OriginalAim,Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedAim) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartFireLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAdjustedAim(Z_Param_StartFireLocation,Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTraceStart) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTraceStart_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzleLocation_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReloading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIdle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsIdle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAmmunitionInMagazine) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAmmunitionInMagazine(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAmmunition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAmmunition(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMagazineEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMagazineEmpty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefireTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefireTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRefireTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRefireTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRefireTimer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRefireTimer(Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireCustom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireCustom_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireProjectile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitProjectile**)Z_Param__Result=P_THIS->FireProjectile_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireInstant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireInstant_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleFiringPrerequisites) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleFiringPrerequisites_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsumeAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponCrosshairTexture) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_WeaponClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=AAdvKitWeapon::GetWeaponCrosshairTexture(Z_Param_WeaponClass); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool StopReloadServer_Validate(); \
	virtual bool StartReloadServer_Validate(); \
	virtual bool StopFireServer_Validate(); \
	virtual bool StartFireServer_Validate(uint8 ); \
 \
	DECLARE_FUNCTION(execOnWeaponEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponEmpty_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMagazineEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMagazineEmpty_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReloadEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReloadEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReloaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReloaded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReloadBegin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReloadBegin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFireEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFireEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFireShot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFireShot_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFireBegin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFireBegin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BurstCounter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldBurstCounter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BurstCounter(Z_Param_OldBurstCounter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WeaponState) \
	{ \
		P_GET_STRUCT(FAdvKitWeaponState,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WeaponState(Z_Param_OldState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReloadServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StopReloadServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StopReloadServer_Validate")); \
			return; \
		} \
		P_THIS->StopReloadServer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReloadServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartReloadServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StartReloadServer_Validate")); \
			return; \
		} \
		P_THIS->StartReloadServer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFireServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StopFireServer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("StopFireServer_Validate")); \
			return; \
		} \
		P_THIS->StopFireServer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFireServer) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->StartFireServer_Validate(Z_Param_FireModeIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("StartFireServer_Validate")); \
			return; \
		} \
		P_THIS->StartFireServer_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockedBy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_By); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlockedDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockedBy_Implementation(Z_Param_By,Z_Param_BlockedDamage); \
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
		*(float*)Z_Param__Result=P_THIS->BlockDamage_Implementation(Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFireModeClass) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UAdvKitFireModeConfiguration> *)Z_Param__Result=P_THIS->GetFireModeClass(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFireModeBP) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAdvKitFireModeConfiguration**)Z_Param__Result=P_THIS->GetFireModeBP(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFireMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFireMode(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadedTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadedTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReloadTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReloadTimer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReloadTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReloadTimer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAmmunition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAmmunition_Implementation(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReloadInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReloadInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReloadInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReloadInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanReload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFireInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFireInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFireInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFireInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSpread) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_OriginalAim); \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->AddSpread(Z_Param_OriginalAim,Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedAim) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartFireLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAdjustedAim(Z_Param_StartFireLocation,Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTraceStart) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTraceStart_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzleLocation_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReloading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIdle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsIdle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAmmunitionInMagazine) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAmmunitionInMagazine(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAmmunition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAmmunition(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMagazineEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMagazineEmpty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefireTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefireTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRefireTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRefireTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRefireTimer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRefireTimer(Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireCustom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireCustom_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireProjectile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitProjectile**)Z_Param__Result=P_THIS->FireProjectile_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireInstant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireInstant_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleFiringPrerequisites) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleFiringPrerequisites_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsumeAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire_Implementation(Z_Param_FireModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponCrosshairTexture) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_WeaponClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=AAdvKitWeapon::GetWeaponCrosshairTexture(Z_Param_WeaponClass); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_EVENT_PARMS \
	struct AdvKitWeapon_eventAddAmmunition_Parms \
	{ \
		int32 Amount; \
	}; \
	struct AdvKitWeapon_eventBlockDamage_Parms \
	{ \
		float Damage; \
		FDamageEvent DamageEvent; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitWeapon_eventBlockDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdvKitWeapon_eventBlockedBy_Parms \
	{ \
		AActor* By; \
		float BlockedDamage; \
	}; \
	struct AdvKitWeapon_eventCanFire_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitWeapon_eventCanFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitWeapon_eventCanReload_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitWeapon_eventCanReload_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitWeapon_eventFireProjectile_Parms \
	{ \
		AAdvKitProjectile* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitWeapon_eventFireProjectile_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AdvKitWeapon_eventGetMuzzleLocation_Parms \
	{ \
		uint8 FireModeIndex; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitWeapon_eventGetMuzzleLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitWeapon_eventGetTraceStart_Parms \
	{ \
		uint8 FireModeIndex; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitWeapon_eventGetTraceStart_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct AdvKitWeapon_eventStartFire_Parms \
	{ \
		uint8 FireModeIndex; \
	}; \
	struct AdvKitWeapon_eventStartFireServer_Parms \
	{ \
		uint8 FireModeIndex; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitWeapon(); \
	friend struct Z_Construct_UClass_AAdvKitWeapon_Statics; \
public: \
	DECLARE_CLASS(AAdvKitWeapon, AAdvKitInventoryItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitWeapon(); \
	friend struct Z_Construct_UClass_AAdvKitWeapon_Statics; \
public: \
	DECLARE_CLASS(AAdvKitWeapon, AAdvKitInventoryItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitWeapon(AAdvKitWeapon&&); \
	NO_API AAdvKitWeapon(const AAdvKitWeapon&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitWeapon(AAdvKitWeapon&&); \
	NO_API AAdvKitWeapon(const AAdvKitWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitWeapon)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponState() { return STRUCT_OFFSET(AAdvKitWeapon, WeaponState); } \
	FORCEINLINE static uint32 __PPO__BurstCounter() { return STRUCT_OFFSET(AAdvKitWeapon, BurstCounter); } \
	FORCEINLINE static uint32 __PPO__DefaultRootComponent() { return STRUCT_OFFSET(AAdvKitWeapon, DefaultRootComponent); } \
	FORCEINLINE static uint32 __PPO__AmmunitionPerMagazine() { return STRUCT_OFFSET(AAdvKitWeapon, AmmunitionPerMagazine); } \
	FORCEINLINE static uint32 __PPO__AmmunitionInMagazine() { return STRUCT_OFFSET(AAdvKitWeapon, AmmunitionInMagazine); } \
	FORCEINLINE static uint32 __PPO__Ammunition() { return STRUCT_OFFSET(AAdvKitWeapon, Ammunition); } \
	FORCEINLINE static uint32 __PPO__MaxAmmunition() { return STRUCT_OFFSET(AAdvKitWeapon, MaxAmmunition); } \
	FORCEINLINE static uint32 __PPO__bHasInfiniteAmmunition() { return STRUCT_OFFSET(AAdvKitWeapon, bHasInfiniteAmmunition); } \
	FORCEINLINE static uint32 __PPO__DefaultFireModes() { return STRUCT_OFFSET(AAdvKitWeapon, DefaultFireModes); } \
	FORCEINLINE static uint32 __PPO__FireModes_OLD() { return STRUCT_OFFSET(AAdvKitWeapon, FireModes_OLD); } \
	FORCEINLINE static uint32 __PPO__CharacterReloadMontage() { return STRUCT_OFFSET(AAdvKitWeapon, CharacterReloadMontage); } \
	FORCEINLINE static uint32 __PPO__AmmoByReloading() { return STRUCT_OFFSET(AAdvKitWeapon, AmmoByReloading); } \
	FORCEINLINE static uint32 __PPO__ReloadTime() { return STRUCT_OFFSET(AAdvKitWeapon, ReloadTime); } \
	FORCEINLINE static uint32 __PPO__Crosshair() { return STRUCT_OFFSET(AAdvKitWeapon, Crosshair); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_75_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h


#define FOREACH_ENUM_EADVKITWEAPONSTATE(op) \
	op(EAdvKitWeaponState::Idle) \
	op(EAdvKitWeaponState::Firing) \
	op(EAdvKitWeaponState::Reloading) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

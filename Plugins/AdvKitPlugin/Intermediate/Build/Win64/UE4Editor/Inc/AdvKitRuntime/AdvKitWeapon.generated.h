// Copyright Epic Games, Inc. All Rights Reserved.
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

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvKitWeaponState_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FAdvKitWeaponState>();

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execOnWeaponEmpty); \
	DECLARE_FUNCTION(execOnMagazineEmpty); \
	DECLARE_FUNCTION(execOnReloadEnd); \
	DECLARE_FUNCTION(execOnReloaded); \
	DECLARE_FUNCTION(execOnReloadBegin); \
	DECLARE_FUNCTION(execOnFireEnd); \
	DECLARE_FUNCTION(execOnFireShot); \
	DECLARE_FUNCTION(execOnFireBegin); \
	DECLARE_FUNCTION(execOnRep_BurstCounter); \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execStopReloadServer); \
	DECLARE_FUNCTION(execStartReloadServer); \
	DECLARE_FUNCTION(execStopFireServer); \
	DECLARE_FUNCTION(execStartFireServer); \
	DECLARE_FUNCTION(execBlockedBy); \
	DECLARE_FUNCTION(execBlockDamage); \
	DECLARE_FUNCTION(execGetFireModeClass); \
	DECLARE_FUNCTION(execGetFireModeBP); \
	DECLARE_FUNCTION(execHasFireMode); \
	DECLARE_FUNCTION(execReloadedTimer); \
	DECLARE_FUNCTION(execStopReloadTimer); \
	DECLARE_FUNCTION(execStartReloadTimer); \
	DECLARE_FUNCTION(execAddAmmunition); \
	DECLARE_FUNCTION(execReloadAmmunition); \
	DECLARE_FUNCTION(execStopReloadInternal); \
	DECLARE_FUNCTION(execStartReloadInternal); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execStopFireInternal); \
	DECLARE_FUNCTION(execStartFireInternal); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execAddSpread); \
	DECLARE_FUNCTION(execGetAdjustedAim); \
	DECLARE_FUNCTION(execGetTraceStart); \
	DECLARE_FUNCTION(execGetMuzzleLocation); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execIsIdle); \
	DECLARE_FUNCTION(execHasAmmunitionInMagazine); \
	DECLARE_FUNCTION(execHasAmmunition); \
	DECLARE_FUNCTION(execIsMagazineEmpty); \
	DECLARE_FUNCTION(execRefireTimer); \
	DECLARE_FUNCTION(execStopRefireTimer); \
	DECLARE_FUNCTION(execStartRefireTimer); \
	DECLARE_FUNCTION(execFireCustom); \
	DECLARE_FUNCTION(execFireProjectile); \
	DECLARE_FUNCTION(execFireInstant); \
	DECLARE_FUNCTION(execFireAmmunition); \
	DECLARE_FUNCTION(execHandleFiringPrerequisites); \
	DECLARE_FUNCTION(execConsumeAmmunition); \
	DECLARE_FUNCTION(execStopReload); \
	DECLARE_FUNCTION(execStartReload); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execGetWeaponCrosshairTexture);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool StopReloadServer_Validate(); \
	virtual bool StartReloadServer_Validate(); \
	virtual bool StopFireServer_Validate(); \
	virtual bool StartFireServer_Validate(uint8 ); \
 \
	DECLARE_FUNCTION(execOnWeaponEmpty); \
	DECLARE_FUNCTION(execOnMagazineEmpty); \
	DECLARE_FUNCTION(execOnReloadEnd); \
	DECLARE_FUNCTION(execOnReloaded); \
	DECLARE_FUNCTION(execOnReloadBegin); \
	DECLARE_FUNCTION(execOnFireEnd); \
	DECLARE_FUNCTION(execOnFireShot); \
	DECLARE_FUNCTION(execOnFireBegin); \
	DECLARE_FUNCTION(execOnRep_BurstCounter); \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execStopReloadServer); \
	DECLARE_FUNCTION(execStartReloadServer); \
	DECLARE_FUNCTION(execStopFireServer); \
	DECLARE_FUNCTION(execStartFireServer); \
	DECLARE_FUNCTION(execBlockedBy); \
	DECLARE_FUNCTION(execBlockDamage); \
	DECLARE_FUNCTION(execGetFireModeClass); \
	DECLARE_FUNCTION(execGetFireModeBP); \
	DECLARE_FUNCTION(execHasFireMode); \
	DECLARE_FUNCTION(execReloadedTimer); \
	DECLARE_FUNCTION(execStopReloadTimer); \
	DECLARE_FUNCTION(execStartReloadTimer); \
	DECLARE_FUNCTION(execAddAmmunition); \
	DECLARE_FUNCTION(execReloadAmmunition); \
	DECLARE_FUNCTION(execStopReloadInternal); \
	DECLARE_FUNCTION(execStartReloadInternal); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execStopFireInternal); \
	DECLARE_FUNCTION(execStartFireInternal); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execAddSpread); \
	DECLARE_FUNCTION(execGetAdjustedAim); \
	DECLARE_FUNCTION(execGetTraceStart); \
	DECLARE_FUNCTION(execGetMuzzleLocation); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execIsIdle); \
	DECLARE_FUNCTION(execHasAmmunitionInMagazine); \
	DECLARE_FUNCTION(execHasAmmunition); \
	DECLARE_FUNCTION(execIsMagazineEmpty); \
	DECLARE_FUNCTION(execRefireTimer); \
	DECLARE_FUNCTION(execStopRefireTimer); \
	DECLARE_FUNCTION(execStartRefireTimer); \
	DECLARE_FUNCTION(execFireCustom); \
	DECLARE_FUNCTION(execFireProjectile); \
	DECLARE_FUNCTION(execFireInstant); \
	DECLARE_FUNCTION(execFireAmmunition); \
	DECLARE_FUNCTION(execHandleFiringPrerequisites); \
	DECLARE_FUNCTION(execConsumeAmmunition); \
	DECLARE_FUNCTION(execStopReload); \
	DECLARE_FUNCTION(execStartReload); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execGetWeaponCrosshairTexture);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_EVENT_PARMS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitWeapon(); \
	friend struct Z_Construct_UClass_AAdvKitWeapon_Statics; \
public: \
	DECLARE_CLASS(AAdvKitWeapon, AAdvKitInventoryItem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponState=NETFIELD_REP_START, \
		BurstCounter, \
		Ammunition, \
		DefaultFireModes, \
		FireModes_OLD, \
		NETFIELD_REP_END=FireModes_OLD	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitWeapon(); \
	friend struct Z_Construct_UClass_AAdvKitWeapon_Statics; \
public: \
	DECLARE_CLASS(AAdvKitWeapon, AAdvKitInventoryItem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponState=NETFIELD_REP_START, \
		BurstCounter, \
		Ammunition, \
		DefaultFireModes, \
		FireModes_OLD, \
		NETFIELD_REP_END=FireModes_OLD	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_STANDARD_CONSTRUCTORS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitWeapon(AAdvKitWeapon&&); \
	NO_API AAdvKitWeapon(const AAdvKitWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitWeapon)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_PRIVATE_PROPERTY_OFFSET \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_75_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitWeapon_h


#define FOREACH_ENUM_EADVKITWEAPONSTATE(op) \
	op(EAdvKitWeaponState::Idle) \
	op(EAdvKitWeaponState::Firing) \
	op(EAdvKitWeaponState::Reloading) 

enum class EAdvKitWeaponState : uint8;
template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

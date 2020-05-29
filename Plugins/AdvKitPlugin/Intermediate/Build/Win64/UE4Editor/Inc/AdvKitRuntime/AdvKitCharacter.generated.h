// Copyright Epic Games, Inc. All Rights Reserved.
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

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepAdvKitAnimMontage_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FRepAdvKitAnimMontage>();

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvKitInventoryConfig_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FAdvKitInventoryConfig>();

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_15_DELEGATE \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetAnimRootMotionTranslationScaleBP); \
	DECLARE_FUNCTION(execStopAnimMontageServer); \
	DECLARE_FUNCTION(execPlayAnimMontageServer); \
	DECLARE_FUNCTION(execOnRep_RepAnimMontage); \
	DECLARE_FUNCTION(execGetMappedAnimMontage); \
	DECLARE_FUNCTION(execDied); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execBlockPointDamage); \
	DECLARE_FUNCTION(execBlockRadialDamage); \
	DECLARE_FUNCTION(execBlockAnyDamage); \
	DECLARE_FUNCTION(execBlockDamage); \
	DECLARE_FUNCTION(execSetMouseCursorEnabled); \
	DECLARE_FUNCTION(execUseClosestUseable); \
	DECLARE_FUNCTION(execTransitionToServer); \
	DECLARE_FUNCTION(execTransitionTo); \
	DECLARE_FUNCTION(execCanTransitionTo); \
	DECLARE_FUNCTION(execGetZoneDotToLocation); \
	DECLARE_FUNCTION(execGetDirectionToClosestLocation); \
	DECLARE_FUNCTION(execGetDotToClosestLocation); \
	DECLARE_FUNCTION(execGetZone); \
	DECLARE_FUNCTION(execSetZoneServer); \
	DECLARE_FUNCTION(execSetZone); \
	DECLARE_FUNCTION(execGetHalfExtentForZone); \
	DECLARE_FUNCTION(execGetDesiredOffsetFromZone); \
	DECLARE_FUNCTION(execGetDesiredRotationInZone); \
	DECLARE_FUNCTION(execCanTransition); \
	DECLARE_FUNCTION(execCanTransitionFromCurrentZone); \
	DECLARE_FUNCTION(execGetPossibleTransition); \
	DECLARE_FUNCTION(execTryToTransition); \
	DECLARE_FUNCTION(execTryToTransitionFromCurrentZone); \
	DECLARE_FUNCTION(execGetMaxZoneSpeed); \
	DECLARE_FUNCTION(execGetZoneAcceleration); \
	DECLARE_FUNCTION(execJumpUpZone); \
	DECLARE_FUNCTION(execLetGoOfZone); \
	DECLARE_FUNCTION(execIsDodging); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execServerUse); \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execAddConditionalMovementInput); \
	DECLARE_FUNCTION(execGetAdvMovementComponent); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execGetAllAvailableTargets); \
	DECLARE_FUNCTION(execGetWeaponStartTraceLocation); \
	DECLARE_FUNCTION(execGetAdjustedAimFor); \
	DECLARE_FUNCTION(execGetAimOffsets); \
	DECLARE_FUNCTION(execPreviousItem); \
	DECLARE_FUNCTION(execNextItem);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool StopAnimMontageServer_Validate(UAnimMontage* ); \
	virtual bool PlayAnimMontageServer_Validate(UAnimMontage* , float , FName ); \
	virtual bool TransitionToServer_Validate(AAdvKitZone* , UAdvKitTransitionComponent* , bool ); \
	virtual bool SetZoneServer_Validate(AAdvKitZone* , bool , bool ); \
	virtual bool ServerUse_Validate(AAdvKitUsable* , AAdvKitInventoryItem* ); \
 \
	DECLARE_FUNCTION(execSetAnimRootMotionTranslationScaleBP); \
	DECLARE_FUNCTION(execStopAnimMontageServer); \
	DECLARE_FUNCTION(execPlayAnimMontageServer); \
	DECLARE_FUNCTION(execOnRep_RepAnimMontage); \
	DECLARE_FUNCTION(execGetMappedAnimMontage); \
	DECLARE_FUNCTION(execDied); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execBlockPointDamage); \
	DECLARE_FUNCTION(execBlockRadialDamage); \
	DECLARE_FUNCTION(execBlockAnyDamage); \
	DECLARE_FUNCTION(execBlockDamage); \
	DECLARE_FUNCTION(execSetMouseCursorEnabled); \
	DECLARE_FUNCTION(execUseClosestUseable); \
	DECLARE_FUNCTION(execTransitionToServer); \
	DECLARE_FUNCTION(execTransitionTo); \
	DECLARE_FUNCTION(execCanTransitionTo); \
	DECLARE_FUNCTION(execGetZoneDotToLocation); \
	DECLARE_FUNCTION(execGetDirectionToClosestLocation); \
	DECLARE_FUNCTION(execGetDotToClosestLocation); \
	DECLARE_FUNCTION(execGetZone); \
	DECLARE_FUNCTION(execSetZoneServer); \
	DECLARE_FUNCTION(execSetZone); \
	DECLARE_FUNCTION(execGetHalfExtentForZone); \
	DECLARE_FUNCTION(execGetDesiredOffsetFromZone); \
	DECLARE_FUNCTION(execGetDesiredRotationInZone); \
	DECLARE_FUNCTION(execCanTransition); \
	DECLARE_FUNCTION(execCanTransitionFromCurrentZone); \
	DECLARE_FUNCTION(execGetPossibleTransition); \
	DECLARE_FUNCTION(execTryToTransition); \
	DECLARE_FUNCTION(execTryToTransitionFromCurrentZone); \
	DECLARE_FUNCTION(execGetMaxZoneSpeed); \
	DECLARE_FUNCTION(execGetZoneAcceleration); \
	DECLARE_FUNCTION(execJumpUpZone); \
	DECLARE_FUNCTION(execLetGoOfZone); \
	DECLARE_FUNCTION(execIsDodging); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execServerUse); \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execAddConditionalMovementInput); \
	DECLARE_FUNCTION(execGetAdvMovementComponent); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execGetAllAvailableTargets); \
	DECLARE_FUNCTION(execGetWeaponStartTraceLocation); \
	DECLARE_FUNCTION(execGetAdjustedAimFor); \
	DECLARE_FUNCTION(execGetAimOffsets); \
	DECLARE_FUNCTION(execPreviousItem); \
	DECLARE_FUNCTION(execNextItem);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_EVENT_PARMS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		InventoryManager, \
		PendingTransition, \
		RepAnimMontage, \
		NETFIELD_REP_END=RepAnimMontage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitCharacter(); \
	friend struct Z_Construct_UClass_AAdvKitCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvKitCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		InventoryManager, \
		PendingTransition, \
		RepAnimMontage, \
		NETFIELD_REP_END=RepAnimMontage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_STANDARD_CONSTRUCTORS \
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


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitCharacter(AAdvKitCharacter&&); \
	NO_API AAdvKitCharacter(const AAdvKitCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitCharacter)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_PRIVATE_PROPERTY_OFFSET
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_96_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitCharacter_h


#define FOREACH_ENUM_EADVKITCAMERATYPE(op) \
	op(EAdvKitCameraType::FirstPerson) \
	op(EAdvKitCameraType::ThirdPerson) \
	op(EAdvKitCameraType::Shoulder) \
	op(EAdvKitCameraType::TargetLocked) \
	op(EAdvKitCameraType::Unkown) 

enum class EAdvKitCameraType : uint8;
template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitCameraType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

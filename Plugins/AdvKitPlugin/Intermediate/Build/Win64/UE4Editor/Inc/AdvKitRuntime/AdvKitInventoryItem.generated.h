// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAdvKitInventoryState : uint8;
struct FRepAdvKitInventoryState;
struct FVector;
class AAdvKitInventoryItem;
class UTexture2D;
#ifdef ADVKITRUNTIME_AdvKitInventoryItem_generated_h
#error "AdvKitInventoryItem.generated.h already included, missing '#pragma once' in AdvKitInventoryItem.h"
#endif
#define ADVKITRUNTIME_AdvKitInventoryItem_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FRepAdvKitInventoryState>();

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS \
	virtual void OnUneqiupped_Implementation(bool bInstant); \
	virtual void OnUneqiup_Implementation(bool bInstant); \
	virtual void OnEquipped_Implementation(bool bInstant); \
	virtual void OnEquip_Implementation(bool bInstant); \
	virtual bool EquipServer_Validate(bool ); \
	virtual void EquipServer_Implementation(bool bInstant); \
	virtual bool UneqiupServer_Validate(bool ); \
	virtual void UneqiupServer_Implementation(bool bInstant); \
	virtual bool CanUneqiup_Implementation(bool bInstant); \
	virtual bool CanEquip_Implementation(bool bInstant); \
	virtual void DetachFromCharacter_Implementation(); \
	virtual void AttachToCharacter_Implementation(); \
	virtual void Drop_Implementation(FVector Velocity); \
	virtual void OwnerDied_Implementation(); \
	virtual AAdvKitInventoryItem* CombinedWith_Implementation(AAdvKitInventoryItem* With); \
	virtual bool CanBeCombinedWith_Implementation(AAdvKitInventoryItem* With); \
 \
	DECLARE_FUNCTION(execOnUneqiupped); \
	DECLARE_FUNCTION(execOnUneqiup); \
	DECLARE_FUNCTION(execOnEquipped); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execEquipServer); \
	DECLARE_FUNCTION(execUneqiupServer); \
	DECLARE_FUNCTION(execCanUneqiup); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execUneqiup); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execOnRep_ItemState); \
	DECLARE_FUNCTION(execDetachFromCharacter); \
	DECLARE_FUNCTION(execAttachToCharacter); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execOwnerDied); \
	DECLARE_FUNCTION(execCombinedWith); \
	DECLARE_FUNCTION(execCanBeCombinedWith); \
	DECLARE_FUNCTION(execGetInventoryIconTexture);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool EquipServer_Validate(bool ); \
	virtual bool UneqiupServer_Validate(bool ); \
 \
	DECLARE_FUNCTION(execOnUneqiupped); \
	DECLARE_FUNCTION(execOnUneqiup); \
	DECLARE_FUNCTION(execOnEquipped); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execEquipServer); \
	DECLARE_FUNCTION(execUneqiupServer); \
	DECLARE_FUNCTION(execCanUneqiup); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execUneqiup); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execOnRep_ItemState); \
	DECLARE_FUNCTION(execDetachFromCharacter); \
	DECLARE_FUNCTION(execAttachToCharacter); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execOwnerDied); \
	DECLARE_FUNCTION(execCombinedWith); \
	DECLARE_FUNCTION(execCanBeCombinedWith); \
	DECLARE_FUNCTION(execGetInventoryIconTexture);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_EVENT_PARMS \
	struct AdvKitInventoryItem_eventCanBeCombinedWith_Parms \
	{ \
		AAdvKitInventoryItem* With; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitInventoryItem_eventCanBeCombinedWith_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitInventoryItem_eventCanEquip_Parms \
	{ \
		bool bInstant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitInventoryItem_eventCanEquip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitInventoryItem_eventCanUneqiup_Parms \
	{ \
		bool bInstant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitInventoryItem_eventCanUneqiup_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitInventoryItem_eventCombinedWith_Parms \
	{ \
		AAdvKitInventoryItem* With; \
		AAdvKitInventoryItem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitInventoryItem_eventCombinedWith_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AdvKitInventoryItem_eventDrop_Parms \
	{ \
		FVector Velocity; \
	}; \
	struct AdvKitInventoryItem_eventEquipServer_Parms \
	{ \
		bool bInstant; \
	}; \
	struct AdvKitInventoryItem_eventOnEquip_Parms \
	{ \
		bool bInstant; \
	}; \
	struct AdvKitInventoryItem_eventOnEquipped_Parms \
	{ \
		bool bInstant; \
	}; \
	struct AdvKitInventoryItem_eventOnUneqiup_Parms \
	{ \
		bool bInstant; \
	}; \
	struct AdvKitInventoryItem_eventOnUneqiupped_Parms \
	{ \
		bool bInstant; \
	}; \
	struct AdvKitInventoryItem_eventUneqiupServer_Parms \
	{ \
		bool bInstant; \
	};


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryItem(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryItem) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepItemState=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryItem(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryItem) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepItemState=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryItem(AAdvKitInventoryItem&&); \
	NO_API AAdvKitInventoryItem(const AAdvKitInventoryItem&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryItem(AAdvKitInventoryItem&&); \
	NO_API AAdvKitInventoryItem(const AAdvKitInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryItem)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RepItemState() { return STRUCT_OFFSET(AAdvKitInventoryItem, RepItemState); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_60_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h


#define FOREACH_ENUM_EADVKITINVENTORYSTATE(op) \
	op(EAdvKitInventoryState::Inactive) \
	op(EAdvKitInventoryState::Equipping) \
	op(EAdvKitInventoryState::Active) \
	op(EAdvKitInventoryState::Uneqiupping) \
	op(EAdvKitInventoryState::Unknown) 

enum class EAdvKitInventoryState : uint8;
template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitInventoryState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

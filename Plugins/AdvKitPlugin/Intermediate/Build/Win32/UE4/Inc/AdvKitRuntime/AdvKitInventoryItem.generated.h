// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepAdvKitInventoryState_Statics; \
	ADVKITRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ADVKITRUNTIME_API UScriptStruct* StaticStruct<struct FRepAdvKitInventoryState>();

#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_SPARSE_DATA
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execOnUneqiupped) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUneqiupped_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUneqiup) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUneqiup_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquipped) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquipped_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipServer) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->EquipServer_Validate(Z_Param_bInstant)) \
		{ \
			RPC_ValidateFailed(TEXT("EquipServer_Validate")); \
			return; \
		} \
		P_THIS->EquipServer_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUneqiupServer) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->UneqiupServer_Validate(Z_Param_bInstant)) \
		{ \
			RPC_ValidateFailed(TEXT("UneqiupServer_Validate")); \
			return; \
		} \
		P_THIS->UneqiupServer_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanUneqiup) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanUneqiup_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEquip) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUneqiup) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Uneqiup(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquip) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Equip(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAdvKitInventoryState*)Z_Param__Result=P_THIS->GetItemState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ItemState) \
	{ \
		P_GET_STRUCT(FRepAdvKitInventoryState,Z_Param_PreviousRepItemState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ItemState(Z_Param_PreviousRepItemState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachFromCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetachFromCharacter_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachToCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachToCharacter_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Velocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(Z_Param_Velocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerDied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerDied_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombinedWith) \
	{ \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_With); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitInventoryItem**)Z_Param__Result=P_THIS->CombinedWith_Implementation(Z_Param_With); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeCombinedWith) \
	{ \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_With); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanBeCombinedWith_Implementation(Z_Param_With); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryIconTexture) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InventoryClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=AAdvKitInventoryItem::GetInventoryIconTexture(Z_Param_InventoryClass); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool EquipServer_Validate(bool ); \
	virtual bool UneqiupServer_Validate(bool ); \
 \
	DECLARE_FUNCTION(execOnUneqiupped) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUneqiupped_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUneqiup) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUneqiup_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquipped) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquipped_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipServer) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->EquipServer_Validate(Z_Param_bInstant)) \
		{ \
			RPC_ValidateFailed(TEXT("EquipServer_Validate")); \
			return; \
		} \
		P_THIS->EquipServer_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUneqiupServer) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->UneqiupServer_Validate(Z_Param_bInstant)) \
		{ \
			RPC_ValidateFailed(TEXT("UneqiupServer_Validate")); \
			return; \
		} \
		P_THIS->UneqiupServer_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanUneqiup) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanUneqiup_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEquip) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUneqiup) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Uneqiup(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquip) \
	{ \
		P_GET_UBOOL(Z_Param_bInstant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Equip(Z_Param_bInstant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAdvKitInventoryState*)Z_Param__Result=P_THIS->GetItemState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ItemState) \
	{ \
		P_GET_STRUCT(FRepAdvKitInventoryState,Z_Param_PreviousRepItemState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ItemState(Z_Param_PreviousRepItemState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachFromCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetachFromCharacter_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachToCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachToCharacter_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Velocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(Z_Param_Velocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerDied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerDied_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombinedWith) \
	{ \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_With); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvKitInventoryItem**)Z_Param__Result=P_THIS->CombinedWith_Implementation(Z_Param_With); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeCombinedWith) \
	{ \
		P_GET_OBJECT(AAdvKitInventoryItem,Z_Param_With); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanBeCombinedWith_Implementation(Z_Param_With); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryIconTexture) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InventoryClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=AAdvKitInventoryItem::GetInventoryIconTexture(Z_Param_InventoryClass); \
		P_NATIVE_END; \
	}


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_EVENT_PARMS \
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


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_CALLBACK_WRAPPERS
#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryItem(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryItem) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryItem(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryItem) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_STANDARD_CONSTRUCTORS \
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


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryItem(AAdvKitInventoryItem&&); \
	NO_API AAdvKitInventoryItem(const AAdvKitInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryItem)


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RepItemState() { return STRUCT_OFFSET(AAdvKitInventoryItem, RepItemState); }


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_60_PROLOG \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_EVENT_PARMS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_PRIVATE_PROPERTY_OFFSET \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_SPARSE_DATA \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_CALLBACK_WRAPPERS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_INCLASS_NO_PURE_DECLS \
	MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MOMBASA_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Items_AdvKitInventoryItem_h


#define FOREACH_ENUM_EADVKITINVENTORYSTATE(op) \
	op(EAdvKitInventoryState::Inactive) \
	op(EAdvKitInventoryState::Equipping) \
	op(EAdvKitInventoryState::Active) \
	op(EAdvKitInventoryState::Uneqiupping) \
	op(EAdvKitInventoryState::Unknown) 

enum class EAdvKitInventoryState : uint8;
template<> ADVKITRUNTIME_API UEnum* StaticEnum<EAdvKitInventoryState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

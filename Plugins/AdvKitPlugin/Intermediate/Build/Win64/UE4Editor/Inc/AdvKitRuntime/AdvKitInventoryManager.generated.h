// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvKitInventoryManager;
class AAdvKitInventoryItem;
#ifdef ADVKITRUNTIME_AdvKitInventoryManager_generated_h
#error "AdvKitInventoryManager.generated.h already included, missing '#pragma once' in AdvKitInventoryManager.h"
#endif
#define ADVKITRUNTIME_AdvKitInventoryManager_generated_h

#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_13_DELEGATE \
struct _Script_AdvKitRuntime_eventInventoryItemsChanged_Parms \
{ \
	AAdvKitInventoryManager* InInventory; \
}; \
static inline void FInventoryItemsChanged_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemsChanged, AAdvKitInventoryManager* InInventory) \
{ \
	_Script_AdvKitRuntime_eventInventoryItemsChanged_Parms Parms; \
	Parms.InInventory=InInventory; \
	InventoryItemsChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_12_DELEGATE \
struct _Script_AdvKitRuntime_eventActiveItemChanged_Parms \
{ \
	AAdvKitInventoryManager* InInventory; \
	AAdvKitInventoryItem* NewItem; \
}; \
static inline void FActiveItemChanged_DelegateWrapper(const FMulticastScriptDelegate& ActiveItemChanged, AAdvKitInventoryManager* InInventory, AAdvKitInventoryItem* NewItem) \
{ \
	_Script_AdvKitRuntime_eventActiveItemChanged_Parms Parms; \
	Parms.InInventory=InInventory; \
	Parms.NewItem=NewItem; \
	ActiveItemChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_11_DELEGATE \
struct _Script_AdvKitRuntime_eventItemRemovedSignature_Parms \
{ \
	AAdvKitInventoryManager* FromInventory; \
	AAdvKitInventoryItem* Item; \
}; \
static inline void FItemRemovedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemRemovedSignature, AAdvKitInventoryManager* FromInventory, AAdvKitInventoryItem* Item) \
{ \
	_Script_AdvKitRuntime_eventItemRemovedSignature_Parms Parms; \
	Parms.FromInventory=FromInventory; \
	Parms.Item=Item; \
	ItemRemovedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_10_DELEGATE \
struct _Script_AdvKitRuntime_eventItemAddedSignature_Parms \
{ \
	AAdvKitInventoryManager* ToInventory; \
	AAdvKitInventoryItem* Item; \
}; \
static inline void FItemAddedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemAddedSignature, AAdvKitInventoryManager* ToInventory, AAdvKitInventoryItem* Item) \
{ \
	_Script_AdvKitRuntime_eventItemAddedSignature_Parms Parms; \
	Parms.ToInventory=ToInventory; \
	Parms.Item=Item; \
	ItemAddedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_SPARSE_DATA
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_RPC_WRAPPERS \
	virtual bool SetNewInventoryServer_Validate(AAdvKitInventoryItem* , bool ); \
	virtual void SetNewInventoryServer_Implementation(AAdvKitInventoryItem* NewInventory, bool bInstant); \
	virtual bool CanEquipInventory_Implementation(AAdvKitInventoryItem* NewInventory, bool bInstant); \
	virtual void RemoveInventory_Implementation(AAdvKitInventoryItem* RemovedInventory); \
	virtual void AddInventory_Implementation(AAdvKitInventoryItem* NewInventory, bool bEquip); \
 \
	DECLARE_FUNCTION(execOnRep_InventoryArray); \
	DECLARE_FUNCTION(execSetNewInventoryServer); \
	DECLARE_FUNCTION(execSetNewInventoryByClass); \
	DECLARE_FUNCTION(execSetNewInventory); \
	DECLARE_FUNCTION(execCanEquipInventory); \
	DECLARE_FUNCTION(execPreviousItem); \
	DECLARE_FUNCTION(execNextItem); \
	DECLARE_FUNCTION(execGetInventoryByClass); \
	DECLARE_FUNCTION(execRemoveInventory); \
	DECLARE_FUNCTION(execAddInventory); \
	DECLARE_FUNCTION(execGetCurrentInventory); \
	DECLARE_FUNCTION(execGetPendingInventory);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetNewInventoryServer_Validate(AAdvKitInventoryItem* , bool ); \
 \
	DECLARE_FUNCTION(execOnRep_InventoryArray); \
	DECLARE_FUNCTION(execSetNewInventoryServer); \
	DECLARE_FUNCTION(execSetNewInventoryByClass); \
	DECLARE_FUNCTION(execSetNewInventory); \
	DECLARE_FUNCTION(execCanEquipInventory); \
	DECLARE_FUNCTION(execPreviousItem); \
	DECLARE_FUNCTION(execNextItem); \
	DECLARE_FUNCTION(execGetInventoryByClass); \
	DECLARE_FUNCTION(execRemoveInventory); \
	DECLARE_FUNCTION(execAddInventory); \
	DECLARE_FUNCTION(execGetCurrentInventory); \
	DECLARE_FUNCTION(execGetPendingInventory);


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_EVENT_PARMS \
	struct AdvKitInventoryManager_eventAddInventory_Parms \
	{ \
		AAdvKitInventoryItem* NewInventory; \
		bool bEquip; \
	}; \
	struct AdvKitInventoryManager_eventCanEquipInventory_Parms \
	{ \
		AAdvKitInventoryItem* NewInventory; \
		bool bInstant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvKitInventoryManager_eventCanEquipInventory_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvKitInventoryManager_eventRemoveInventory_Parms \
	{ \
		AAdvKitInventoryItem* RemovedInventory; \
	}; \
	struct AdvKitInventoryManager_eventSetNewInventoryServer_Parms \
	{ \
		AAdvKitInventoryItem* NewInventory; \
		bool bInstant; \
	};


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_CALLBACK_WRAPPERS
#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryManager(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryManager_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryManager) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		PendingInventory, \
		CurrentInventory, \
		NETFIELD_REP_END=CurrentInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAdvKitInventoryManager(); \
	friend struct Z_Construct_UClass_AAdvKitInventoryManager_Statics; \
public: \
	DECLARE_CLASS(AAdvKitInventoryManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvKitRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAdvKitInventoryManager) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		PendingInventory, \
		CurrentInventory, \
		NETFIELD_REP_END=CurrentInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvKitInventoryManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryManager(AAdvKitInventoryManager&&); \
	NO_API AAdvKitInventoryManager(const AAdvKitInventoryManager&); \
public:


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvKitInventoryManager(AAdvKitInventoryManager&&); \
	NO_API AAdvKitInventoryManager(const AAdvKitInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvKitInventoryManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvKitInventoryManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvKitInventoryManager)


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AAdvKitInventoryManager, Inventory); } \
	FORCEINLINE static uint32 __PPO__PendingInventory() { return STRUCT_OFFSET(AAdvKitInventoryManager, PendingInventory); } \
	FORCEINLINE static uint32 __PPO__CurrentInventory() { return STRUCT_OFFSET(AAdvKitInventoryManager, CurrentInventory); }


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_18_PROLOG \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_EVENT_PARMS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_RPC_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_INCLASS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_SPARSE_DATA \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_CALLBACK_WRAPPERS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_INCLASS_NO_PURE_DECLS \
	FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVKITRUNTIME_API UClass* StaticClass<class AAdvKitInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FROSTBITE_Plugins_AdvKitPlugin_Source_AdvKitRuntime_Public_Player_AdvKitInventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

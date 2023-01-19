// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef JOHNSMULTIPLAYER_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define JOHNSMULTIPLAYER_CombatComponent_generated_h

#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_SPARSE_DATA
#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_RPC_WRAPPERS \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
 \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire);


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
 \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire);


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_EVENT_PARMS \
	struct CombatComponent_eventMulticastFire_Parms \
	{ \
		FVector_NetQuantize TraceHitTarget; \
	}; \
	struct CombatComponent_eventServerFire_Parms \
	{ \
		FVector_NetQuantize TraceHitTarget; \
	};


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_CALLBACK_WRAPPERS
#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JohnsMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippedWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JohnsMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippedWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public:


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent)


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(UCombatComponent, EquippedWeapon); }


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_13_PROLOG \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_EVENT_PARMS


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_SPARSE_DATA \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_RPC_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_CALLBACK_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_INCLASS \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_SPARSE_DATA \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_CALLBACK_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_INCLASS_NO_PURE_DECLS \
	JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOHNSMULTIPLAYER_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JohnsMultiplayer_Source_JohnsMultiplayer_CharacterComponents_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
class AWeapon;
#ifdef JOHNSMULTIPLAYER_JohnsMultiplayerCharacter_generated_h
#error "JohnsMultiplayerCharacter.generated.h already included, missing '#pragma once' in JohnsMultiplayerCharacter.h"
#endif
#define JOHNSMULTIPLAYER_JohnsMultiplayerCharacter_generated_h

#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_SPARSE_DATA
#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_RPC_WRAPPERS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastElim_Implementation(); \
 \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execMulticastElim);


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastElim_Implementation(); \
 \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execMulticastElim);


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_EVENT_PARMS
#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_CALLBACK_WRAPPERS
#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJohnsMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AJohnsMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JohnsMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AJohnsMultiplayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAJohnsMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AJohnsMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JohnsMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AJohnsMultiplayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJohnsMultiplayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJohnsMultiplayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJohnsMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJohnsMultiplayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJohnsMultiplayerCharacter(AJohnsMultiplayerCharacter&&); \
	NO_API AJohnsMultiplayerCharacter(const AJohnsMultiplayerCharacter&); \
public:


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJohnsMultiplayerCharacter(AJohnsMultiplayerCharacter&&); \
	NO_API AJohnsMultiplayerCharacter(const AJohnsMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJohnsMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJohnsMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJohnsMultiplayerCharacter)


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FollowCam() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, FollowCam); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, SpringArm); } \
	FORCEINLINE static uint32 __PPO__HandComponent() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, HandComponent); } \
	FORCEINLINE static uint32 __PPO__OverlappingWeapon() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, OverlappingWeapon); } \
	FORCEINLINE static uint32 __PPO__Combat() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, Combat); } \
	FORCEINLINE static uint32 __PPO__CameraThreshold() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, CameraThreshold); } \
	FORCEINLINE static uint32 __PPO__RelativeHandLocation() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, RelativeHandLocation); } \
	FORCEINLINE static uint32 __PPO__RelativeHandScale() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, RelativeHandScale); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__ElimDelay() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, ElimDelay); } \
	FORCEINLINE static uint32 __PPO__DissolveTimeline() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, DissolveTimeline); } \
	FORCEINLINE static uint32 __PPO__DissolveCurve() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, DissolveCurve); } \
	FORCEINLINE static uint32 __PPO__DynamicDissolveMatInst() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, DynamicDissolveMatInst); } \
	FORCEINLINE static uint32 __PPO__DissolveMaterialInstance() { return STRUCT_OFFSET(AJohnsMultiplayerCharacter, DissolveMaterialInstance); }


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_12_PROLOG \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_EVENT_PARMS


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_SPARSE_DATA \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_RPC_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_CALLBACK_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_INCLASS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_SPARSE_DATA \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_CALLBACK_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOHNSMULTIPLAYER_API UClass* StaticClass<class AJohnsMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JohnsMultiplayer_Source_JohnsMultiplayer_Character_JohnsMultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

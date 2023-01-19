// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef JOHNSMULTIPLAYER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define JOHNSMULTIPLAYER_Weapon_generated_h

#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_SPARSE_DATA
#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execOnRep_WeaponState);


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execOnRep_WeaponState);


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JohnsMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JohnsMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__AreaSphere() { return STRUCT_OFFSET(AWeapon, AreaSphere); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnLocationMeshComponent() { return STRUCT_OFFSET(AWeapon, ProjectileSpawnLocationMeshComponent); } \
	FORCEINLINE static uint32 __PPO__RelativeProjectileSpawnLocation() { return STRUCT_OFFSET(AWeapon, RelativeProjectileSpawnLocation); } \
	FORCEINLINE static uint32 __PPO__RelativeProjectileSpawnScale() { return STRUCT_OFFSET(AWeapon, RelativeProjectileSpawnScale); } \
	FORCEINLINE static uint32 __PPO__WeaponState() { return STRUCT_OFFSET(AWeapon, WeaponState); } \
	FORCEINLINE static uint32 __PPO__PickupWidget() { return STRUCT_OFFSET(AWeapon, PickupWidget); }


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_24_PROLOG
#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_PRIVATE_PROPERTY_OFFSET \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_SPARSE_DATA \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_RPC_WRAPPERS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_INCLASS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_PRIVATE_PROPERTY_OFFSET \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_SPARSE_DATA \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_INCLASS_NO_PURE_DECLS \
	JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOHNSMULTIPLAYER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JohnsMultiplayer_Source_JohnsMultiplayer_Weapon_Weapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::EWS_Initial) \
	op(EWeaponState::EWS_Equipped) \
	op(EWeaponState::EWS_Dropped) 

enum class EWeaponState : uint8;
template<> JOHNSMULTIPLAYER_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

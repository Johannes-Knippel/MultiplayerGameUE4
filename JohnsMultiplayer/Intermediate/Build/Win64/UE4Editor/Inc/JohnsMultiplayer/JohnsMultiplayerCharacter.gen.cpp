// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnsMultiplayer/Character/JohnsMultiplayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJohnsMultiplayerCharacter() {}
// Cross Module References
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsMultiplayerCharacter_NoRegister();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsMultiplayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_JohnsMultiplayer();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AJohnsMultiplayerCharacter::execReceiveDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatorController);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatorController,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJohnsMultiplayerCharacter::execUpdateDissolveMaterial)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DissolveValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDissolveMaterial(Z_Param_DissolveValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJohnsMultiplayerCharacter::execOnRep_Health)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJohnsMultiplayerCharacter::execServerEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipButtonPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJohnsMultiplayerCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJohnsMultiplayerCharacter::execMulticastElim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastElim_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AJohnsMultiplayerCharacter_MulticastElim = FName(TEXT("MulticastElim"));
	void AJohnsMultiplayerCharacter::MulticastElim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJohnsMultiplayerCharacter_MulticastElim),NULL);
	}
	static FName NAME_AJohnsMultiplayerCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
	void AJohnsMultiplayerCharacter::ServerEquipButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJohnsMultiplayerCharacter_ServerEquipButtonPressed),NULL);
	}
	void AJohnsMultiplayerCharacter::StaticRegisterNativesAJohnsMultiplayerCharacter()
	{
		UClass* Class = AJohnsMultiplayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastElim", &AJohnsMultiplayerCharacter::execMulticastElim },
			{ "OnRep_Health", &AJohnsMultiplayerCharacter::execOnRep_Health },
			{ "OnRep_OverlappingWeapon", &AJohnsMultiplayerCharacter::execOnRep_OverlappingWeapon },
			{ "ReceiveDamage", &AJohnsMultiplayerCharacter::execReceiveDamage },
			{ "ServerEquipButtonPressed", &AJohnsMultiplayerCharacter::execServerEquipButtonPressed },
			{ "UpdateDissolveMaterial", &AJohnsMultiplayerCharacter::execUpdateDissolveMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJohnsMultiplayerCharacter, nullptr, "MulticastElim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJohnsMultiplayerCharacter, nullptr, "OnRep_Health", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct JohnsMultiplayerCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeapon* LastWeapon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJohnsMultiplayerCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, sizeof(JohnsMultiplayerCharacter_eventOnRep_OverlappingWeapon_Parms), Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics
	{
		struct JohnsMultiplayerCharacter_eventReceiveDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatorController;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventReceiveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventReceiveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventReceiveDamage_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventReceiveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_InstigatorController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJohnsMultiplayerCharacter, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(JohnsMultiplayerCharacter_eventReceiveDamage_Parms), Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJohnsMultiplayerCharacter, nullptr, "ServerEquipButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics
	{
		struct JohnsMultiplayerCharacter_eventUpdateDissolveMaterial_Parms
		{
			float DissolveValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DissolveValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue = { "DissolveValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JohnsMultiplayerCharacter_eventUpdateDissolveMaterial_Parms, DissolveValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJohnsMultiplayerCharacter, nullptr, "UpdateDissolveMaterial", nullptr, nullptr, sizeof(JohnsMultiplayerCharacter_eventUpdateDissolveMaterial_Parms), Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJohnsMultiplayerCharacter_NoRegister()
	{
		return AJohnsMultiplayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Combat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeHandLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeHandLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeHandScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeHandScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElimDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElimDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DissolveTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DissolveTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DissolveCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DissolveCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnsMultiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJohnsMultiplayerCharacter_MulticastElim, "MulticastElim" }, // 2615631134
		{ &Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_Health, "OnRep_Health" }, // 482305589
		{ &Z_Construct_UFunction_AJohnsMultiplayerCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 2056957017
		{ &Z_Construct_UFunction_AJohnsMultiplayerCharacter_ReceiveDamage, "ReceiveDamage" }, // 4161025186
		{ &Z_Construct_UFunction_AJohnsMultiplayerCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 4061933119
		{ &Z_Construct_UFunction_AJohnsMultiplayerCharacter_UpdateDissolveMaterial, "UpdateDissolveMaterial" }, // 958066814
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/JohnsMultiplayerCharacter.h" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_FollowCam_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_FollowCam = { "FollowCam", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, FollowCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_FollowCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_FollowCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_HandComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Hand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_HandComponent = { "HandComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, HandComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_HandComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_HandComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Combat_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Combat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Combat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_CameraThreshold_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_CameraThreshold = { "CameraThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, CameraThreshold), METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_CameraThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_CameraThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandLocation_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandLocation = { "RelativeHandLocation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, RelativeHandLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandScale_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandScale = { "RelativeHandScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, RelativeHandScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "Comment", "/**\n\x09 *PlayerHealth\n\x09 */" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
		{ "ToolTip", "PlayerHealth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100020021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_ElimDelay_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_ElimDelay = { "ElimDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, ElimDelay), METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_ElimDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_ElimDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveTimeline_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "Comment", "/*\n\x09 * Dissolve Effect\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
		{ "ToolTip", "* Dissolve Effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveTimeline = { "DissolveTimeline", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, DissolveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveCurve_MetaData[] = {
		{ "Category", "JohnsMultiplayerCharacter" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveCurve = { "DissolveCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, DissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DynamicDissolveMatInst_MetaData[] = {
		{ "Category", "Elim" },
		{ "Comment", "//dynamic instnace that we change at runtime\n" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
		{ "ToolTip", "dynamic instnace that we change at runtime" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DynamicDissolveMatInst = { "DynamicDissolveMatInst", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, DynamicDissolveMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DynamicDissolveMatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DynamicDissolveMatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
		{ "Comment", "//material inst that we assign on the BP, used with with the dynamic one.\n" },
		{ "ModuleRelativePath", "Character/JohnsMultiplayerCharacter.h" },
		{ "ToolTip", "material inst that we assign on the BP, used with with the dynamic one." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveMaterialInstance = { "DissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsMultiplayerCharacter, DissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_FollowCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_HandComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_OverlappingWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Combat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_CameraThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_RelativeHandScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_ElimDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DynamicDissolveMatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::NewProp_DissolveMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJohnsMultiplayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::ClassParams = {
		&AJohnsMultiplayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJohnsMultiplayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJohnsMultiplayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJohnsMultiplayerCharacter, 812594268);
	template<> JOHNSMULTIPLAYER_API UClass* StaticClass<AJohnsMultiplayerCharacter>()
	{
		return AJohnsMultiplayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJohnsMultiplayerCharacter(Z_Construct_UClass_AJohnsMultiplayerCharacter, &AJohnsMultiplayerCharacter::StaticClass, TEXT("/Script/JohnsMultiplayer"), TEXT("AJohnsMultiplayerCharacter"), false, nullptr, nullptr, nullptr);

	void AJohnsMultiplayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));
		static const FName Name_Health(TEXT("Health"));

		const bool bIsValid = true
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AJohnsMultiplayerCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJohnsMultiplayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

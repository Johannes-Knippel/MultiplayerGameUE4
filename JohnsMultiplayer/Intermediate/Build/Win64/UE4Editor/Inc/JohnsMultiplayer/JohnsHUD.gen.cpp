// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnsMultiplayer/HUD/JohnsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJohnsHUD() {}
// Cross Module References
	JOHNSMULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage();
	UPackage* Z_Construct_UPackage__Script_JohnsMultiplayer();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsHUD_NoRegister();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FHUDPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JOHNSMULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FHUDPackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDPackage, Z_Construct_UPackage__Script_JohnsMultiplayer(), TEXT("HUDPackage"), sizeof(FHUDPackage), Get_Z_Construct_UScriptStruct_FHUDPackage_Hash());
	}
	return Singleton;
}
template<> JOHNSMULTIPLAYER_API UScriptStruct* StaticStruct<FHUDPackage>()
{
	return FHUDPackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHUDPackage(FHUDPackage::StaticStruct, TEXT("/Script/JohnsMultiplayer"), TEXT("HUDPackage"), false, nullptr, nullptr);
static struct FScriptStruct_JohnsMultiplayer_StaticRegisterNativesFHUDPackage
{
	FScriptStruct_JohnsMultiplayer_StaticRegisterNativesFHUDPackage()
	{
		UScriptStruct::DeferCppStructOps<FHUDPackage>(FName(TEXT("HUDPackage")));
	}
} ScriptStruct_JohnsMultiplayer_StaticRegisterNativesFHUDPackage;
	struct Z_Construct_UScriptStruct_FHUDPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HUD/JohnsHUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDPackage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JohnsMultiplayer,
		nullptr,
		&NewStructOps,
		"HUDPackage",
		sizeof(FHUDPackage),
		alignof(FHUDPackage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHUDPackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JohnsMultiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HUDPackage"), sizeof(FHUDPackage), Get_Z_Construct_UScriptStruct_FHUDPackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHUDPackage_Hash() { return 3165528972U; }
	void AJohnsHUD::StaticRegisterNativesAJohnsHUD()
	{
	}
	UClass* Z_Construct_UClass_AJohnsHUD_NoRegister()
	{
		return AJohnsHUD::StaticClass();
	}
	struct Z_Construct_UClass_AJohnsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlayClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterOverlayClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJohnsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnsMultiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/JohnsHUD.h" },
		{ "ModuleRelativePath", "HUD/JohnsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsHUD_Statics::NewProp_CharacterOverlayClass_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "HUD/JohnsHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJohnsHUD_Statics::NewProp_CharacterOverlayClass = { "CharacterOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJohnsHUD, CharacterOverlayClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AJohnsHUD_Statics::NewProp_CharacterOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsHUD_Statics::NewProp_CharacterOverlayClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJohnsHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJohnsHUD_Statics::NewProp_CharacterOverlayClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJohnsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJohnsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJohnsHUD_Statics::ClassParams = {
		&AJohnsHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJohnsHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJohnsHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJohnsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJohnsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJohnsHUD, 2606231727);
	template<> JOHNSMULTIPLAYER_API UClass* StaticClass<AJohnsHUD>()
	{
		return AJohnsHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJohnsHUD(Z_Construct_UClass_AJohnsHUD, &AJohnsHUD::StaticClass, TEXT("/Script/JohnsMultiplayer"), TEXT("AJohnsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJohnsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnsMultiplayer/GameMode/JohnsMultiplayerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJohnsMultiplayerGameModeBase() {}
// Cross Module References
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsMultiplayerGameModeBase_NoRegister();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsMultiplayerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JohnsMultiplayer();
// End Cross Module References
	void AJohnsMultiplayerGameModeBase::StaticRegisterNativesAJohnsMultiplayerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AJohnsMultiplayerGameModeBase_NoRegister()
	{
		return AJohnsMultiplayerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnsMultiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameMode/JohnsMultiplayerGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/JohnsMultiplayerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJohnsMultiplayerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::ClassParams = {
		&AJohnsMultiplayerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJohnsMultiplayerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJohnsMultiplayerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJohnsMultiplayerGameModeBase, 1894282450);
	template<> JOHNSMULTIPLAYER_API UClass* StaticClass<AJohnsMultiplayerGameModeBase>()
	{
		return AJohnsMultiplayerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJohnsMultiplayerGameModeBase(Z_Construct_UClass_AJohnsMultiplayerGameModeBase, &AJohnsMultiplayerGameModeBase::StaticClass, TEXT("/Script/JohnsMultiplayer"), TEXT("AJohnsMultiplayerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJohnsMultiplayerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

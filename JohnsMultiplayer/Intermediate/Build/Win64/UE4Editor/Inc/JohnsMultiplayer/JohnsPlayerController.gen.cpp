// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnsMultiplayer/PlayerController/JohnsPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJohnsPlayerController() {}
// Cross Module References
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsPlayerController_NoRegister();
	JOHNSMULTIPLAYER_API UClass* Z_Construct_UClass_AJohnsPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_JohnsMultiplayer();
// End Cross Module References
	void AJohnsPlayerController::StaticRegisterNativesAJohnsPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AJohnsPlayerController_NoRegister()
	{
		return AJohnsPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AJohnsPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJohnsPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnsMultiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJohnsPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController/JohnsPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/JohnsPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJohnsPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJohnsPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJohnsPlayerController_Statics::ClassParams = {
		&AJohnsPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJohnsPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJohnsPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJohnsPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJohnsPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJohnsPlayerController, 3534231072);
	template<> JOHNSMULTIPLAYER_API UClass* StaticClass<AJohnsPlayerController>()
	{
		return AJohnsPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJohnsPlayerController(Z_Construct_UClass_AJohnsPlayerController, &AJohnsPlayerController::StaticClass, TEXT("/Script/JohnsMultiplayer"), TEXT("AJohnsPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJohnsPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vectors3d/vectors3dGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodevectors3dGameMode() {}
// Cross Module References
	VECTORS3D_API UClass* Z_Construct_UClass_Avectors3dGameMode_NoRegister();
	VECTORS3D_API UClass* Z_Construct_UClass_Avectors3dGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_vectors3d();
// End Cross Module References
	void Avectors3dGameMode::StaticRegisterNativesAvectors3dGameMode()
	{
	}
	UClass* Z_Construct_UClass_Avectors3dGameMode_NoRegister()
	{
		return Avectors3dGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Avectors3dGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Avectors3dGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_vectors3d,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Avectors3dGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "vectors3dGameMode.h" },
		{ "ModuleRelativePath", "vectors3dGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Avectors3dGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Avectors3dGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Avectors3dGameMode_Statics::ClassParams = {
		&Avectors3dGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Avectors3dGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Avectors3dGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Avectors3dGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Avectors3dGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Avectors3dGameMode, 1224348420);
	template<> VECTORS3D_API UClass* StaticClass<Avectors3dGameMode>()
	{
		return Avectors3dGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Avectors3dGameMode(Z_Construct_UClass_Avectors3dGameMode, &Avectors3dGameMode::StaticClass, TEXT("/Script/vectors3d"), TEXT("Avectors3dGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Avectors3dGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

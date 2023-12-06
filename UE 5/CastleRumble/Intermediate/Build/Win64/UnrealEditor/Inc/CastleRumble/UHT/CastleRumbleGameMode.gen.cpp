// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CastleRumble/CastleRumbleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleRumbleGameMode() {}
// Cross Module References
	CASTLERUMBLE_API UClass* Z_Construct_UClass_ACastleRumbleGameMode();
	CASTLERUMBLE_API UClass* Z_Construct_UClass_ACastleRumbleGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CastleRumble();
// End Cross Module References
	void ACastleRumbleGameMode::StaticRegisterNativesACastleRumbleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACastleRumbleGameMode);
	UClass* Z_Construct_UClass_ACastleRumbleGameMode_NoRegister()
	{
		return ACastleRumbleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACastleRumbleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleRumbleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CastleRumble,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACastleRumbleGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleRumbleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CastleRumbleGameMode.h" },
		{ "ModuleRelativePath", "CastleRumbleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleRumbleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleRumbleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACastleRumbleGameMode_Statics::ClassParams = {
		&ACastleRumbleGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACastleRumbleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACastleRumbleGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACastleRumbleGameMode()
	{
		if (!Z_Registration_Info_UClass_ACastleRumbleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACastleRumbleGameMode.OuterSingleton, Z_Construct_UClass_ACastleRumbleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACastleRumbleGameMode.OuterSingleton;
	}
	template<> CASTLERUMBLE_API UClass* StaticClass<ACastleRumbleGameMode>()
	{
		return ACastleRumbleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleRumbleGameMode);
	ACastleRumbleGameMode::~ACastleRumbleGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_styec_Desktop_Verona_UnrealEngine_Project_UE_5_CastleRumble_Source_CastleRumble_CastleRumbleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_styec_Desktop_Verona_UnrealEngine_Project_UE_5_CastleRumble_Source_CastleRumble_CastleRumbleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACastleRumbleGameMode, ACastleRumbleGameMode::StaticClass, TEXT("ACastleRumbleGameMode"), &Z_Registration_Info_UClass_ACastleRumbleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACastleRumbleGameMode), 3163358525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_styec_Desktop_Verona_UnrealEngine_Project_UE_5_CastleRumble_Source_CastleRumble_CastleRumbleGameMode_h_3205229895(TEXT("/Script/CastleRumble"),
		Z_CompiledInDeferFile_FID_Users_styec_Desktop_Verona_UnrealEngine_Project_UE_5_CastleRumble_Source_CastleRumble_CastleRumbleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_styec_Desktop_Verona_UnrealEngine_Project_UE_5_CastleRumble_Source_CastleRumble_CastleRumbleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

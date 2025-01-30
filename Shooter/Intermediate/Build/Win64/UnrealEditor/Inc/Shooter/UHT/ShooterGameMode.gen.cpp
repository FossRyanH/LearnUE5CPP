// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTER_API UClass* Z_Construct_UClass_AShooterGameMode();
SHOOTER_API UClass* Z_Construct_UClass_AShooterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AShooterGameMode
void AShooterGameMode::StaticRegisterNativesAShooterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGameMode);
UClass* Z_Construct_UClass_AShooterGameMode_NoRegister()
{
	return AShooterGameMode::StaticClass();
}
struct Z_Construct_UClass_AShooterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterGameMode.h" },
		{ "ModuleRelativePath", "ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameMode_Statics::ClassParams = {
	&AShooterGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterGameMode()
{
	if (!Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton, Z_Construct_UClass_AShooterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AShooterGameMode>()
{
	return AShooterGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameMode);
AShooterGameMode::~AShooterGameMode() {}
// End Class AShooterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameMode, AShooterGameMode::StaticClass, TEXT("AShooterGameMode"), &Z_Registration_Info_UClass_AShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameMode), 2309050885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_4121303490(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

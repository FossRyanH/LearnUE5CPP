// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShooterGameMode_generated_h
#error "ShooterGameMode.generated.h already included, missing '#pragma once' in ShooterGameMode.h"
#endif
#define SHOOTER_ShooterGameMode_generated_h

#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameMode(); \
	friend struct Z_Construct_UClass_AShooterGameMode_Statics; \
public: \
	DECLARE_CLASS(AShooterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), SHOOTER_API) \
	DECLARE_SERIALIZER(AShooterGameMode)


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterGameMode(AShooterGameMode&&); \
	AShooterGameMode(const AShooterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTER_API, AShooterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterGameMode) \
	SHOOTER_API virtual ~AShooterGameMode();


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_9_PROLOG
#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

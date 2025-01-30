// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SHOOTER_ShooterProjectile_generated_h
#error "ShooterProjectile.generated.h already included, missing '#pragma once' in ShooterProjectile.h"
#endif
#define SHOOTER_ShooterProjectile_generated_h

#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterProjectile(); \
	friend struct Z_Construct_UClass_AShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterProjectile(AShooterProjectile&&); \
	AShooterProjectile(const AShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterProjectile) \
	NO_API virtual ~AShooterProjectile();


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_12_PROLOG
#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

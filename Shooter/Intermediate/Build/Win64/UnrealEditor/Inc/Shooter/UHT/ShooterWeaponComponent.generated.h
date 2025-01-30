// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterCharacter;
#ifdef SHOOTER_ShooterWeaponComponent_generated_h
#error "ShooterWeaponComponent.generated.h already included, missing '#pragma once' in ShooterWeaponComponent.h"
#endif
#define SHOOTER_ShooterWeaponComponent_generated_h

#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterWeaponComponent(); \
	friend struct Z_Construct_UClass_UShooterWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UShooterWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UShooterWeaponComponent)


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UShooterWeaponComponent(UShooterWeaponComponent&&); \
	UShooterWeaponComponent(const UShooterWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShooterWeaponComponent) \
	NO_API virtual ~UShooterWeaponComponent();


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_11_PROLOG
#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UShooterWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

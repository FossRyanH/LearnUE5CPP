// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AShooterCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SHOOTER_ShooterPickUpComponent_generated_h
#error "ShooterPickUpComponent.generated.h already included, missing '#pragma once' in ShooterPickUpComponent.h"
#endif
#define SHOOTER_ShooterPickUpComponent_generated_h

#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_12_DELEGATE \
SHOOTER_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AShooterCharacter* PickUpCharacter);


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterPickUpComponent(); \
	friend struct Z_Construct_UClass_UShooterPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UShooterPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UShooterPickUpComponent)


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UShooterPickUpComponent(UShooterPickUpComponent&&); \
	UShooterPickUpComponent(const UShooterPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShooterPickUpComponent) \
	NO_API virtual ~UShooterPickUpComponent();


#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_14_PROLOG
#define FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UShooterPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ryanh_Documents_Repos_LearnUE5CPP_Shooter_Source_Shooter_ShooterPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

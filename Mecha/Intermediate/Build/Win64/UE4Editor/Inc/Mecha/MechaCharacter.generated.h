// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHA_MechaCharacter_generated_h
#error "MechaCharacter.generated.h already included, missing '#pragma once' in MechaCharacter.h"
#endif
#define MECHA_MechaCharacter_generated_h

#define Mecha_Source_Mecha_MechaCharacter_h_14_RPC_WRAPPERS
#define Mecha_Source_Mecha_MechaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Mecha_Source_Mecha_MechaCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechaCharacter(); \
	friend MECHA_API class UClass* Z_Construct_UClass_AMechaCharacter(); \
public: \
	DECLARE_CLASS(AMechaCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mecha"), NO_API) \
	DECLARE_SERIALIZER(AMechaCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Mecha_Source_Mecha_MechaCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMechaCharacter(); \
	friend MECHA_API class UClass* Z_Construct_UClass_AMechaCharacter(); \
public: \
	DECLARE_CLASS(AMechaCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mecha"), NO_API) \
	DECLARE_SERIALIZER(AMechaCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Mecha_Source_Mecha_MechaCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaCharacter(AMechaCharacter&&); \
	NO_API AMechaCharacter(const AMechaCharacter&); \
public:


#define Mecha_Source_Mecha_MechaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaCharacter(AMechaCharacter&&); \
	NO_API AMechaCharacter(const AMechaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechaCharacter)


#define Mecha_Source_Mecha_MechaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMechaCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMechaCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMechaCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMechaCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMechaCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMechaCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMechaCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMechaCharacter, L_MotionController); }


#define Mecha_Source_Mecha_MechaCharacter_h_11_PROLOG
#define Mecha_Source_Mecha_MechaCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mecha_Source_Mecha_MechaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Mecha_Source_Mecha_MechaCharacter_h_14_RPC_WRAPPERS \
	Mecha_Source_Mecha_MechaCharacter_h_14_INCLASS \
	Mecha_Source_Mecha_MechaCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mecha_Source_Mecha_MechaCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mecha_Source_Mecha_MechaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Mecha_Source_Mecha_MechaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Mecha_Source_Mecha_MechaCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Mecha_Source_Mecha_MechaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mecha_Source_Mecha_MechaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHA_MechaGameMode_generated_h
#error "MechaGameMode.generated.h already included, missing '#pragma once' in MechaGameMode.h"
#endif
#define MECHA_MechaGameMode_generated_h

#define Mecha_Source_Mecha_MechaGameMode_h_12_RPC_WRAPPERS
#define Mecha_Source_Mecha_MechaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Mecha_Source_Mecha_MechaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechaGameMode(); \
	friend MECHA_API class UClass* Z_Construct_UClass_AMechaGameMode(); \
public: \
	DECLARE_CLASS(AMechaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Mecha"), MECHA_API) \
	DECLARE_SERIALIZER(AMechaGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Mecha_Source_Mecha_MechaGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMechaGameMode(); \
	friend MECHA_API class UClass* Z_Construct_UClass_AMechaGameMode(); \
public: \
	DECLARE_CLASS(AMechaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Mecha"), MECHA_API) \
	DECLARE_SERIALIZER(AMechaGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Mecha_Source_Mecha_MechaGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MECHA_API AMechaGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechaGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MECHA_API, AMechaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MECHA_API AMechaGameMode(AMechaGameMode&&); \
	MECHA_API AMechaGameMode(const AMechaGameMode&); \
public:


#define Mecha_Source_Mecha_MechaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MECHA_API AMechaGameMode(AMechaGameMode&&); \
	MECHA_API AMechaGameMode(const AMechaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MECHA_API, AMechaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechaGameMode)


#define Mecha_Source_Mecha_MechaGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Mecha_Source_Mecha_MechaGameMode_h_9_PROLOG
#define Mecha_Source_Mecha_MechaGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mecha_Source_Mecha_MechaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Mecha_Source_Mecha_MechaGameMode_h_12_RPC_WRAPPERS \
	Mecha_Source_Mecha_MechaGameMode_h_12_INCLASS \
	Mecha_Source_Mecha_MechaGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mecha_Source_Mecha_MechaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mecha_Source_Mecha_MechaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Mecha_Source_Mecha_MechaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mecha_Source_Mecha_MechaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Mecha_Source_Mecha_MechaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mecha_Source_Mecha_MechaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VECTORS3D_Movecomponent_generated_h
#error "Movecomponent.generated.h already included, missing '#pragma once' in Movecomponent.h"
#endif
#define VECTORS3D_Movecomponent_generated_h

#define vectors3d_Source_vectors3d_Movecomponent_h_14_SPARSE_DATA
#define vectors3d_Source_vectors3d_Movecomponent_h_14_RPC_WRAPPERS
#define vectors3d_Source_vectors3d_Movecomponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define vectors3d_Source_vectors3d_Movecomponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovecomponent(); \
	friend struct Z_Construct_UClass_UMovecomponent_Statics; \
public: \
	DECLARE_CLASS(UMovecomponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/vectors3d"), NO_API) \
	DECLARE_SERIALIZER(UMovecomponent)


#define vectors3d_Source_vectors3d_Movecomponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMovecomponent(); \
	friend struct Z_Construct_UClass_UMovecomponent_Statics; \
public: \
	DECLARE_CLASS(UMovecomponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/vectors3d"), NO_API) \
	DECLARE_SERIALIZER(UMovecomponent)


#define vectors3d_Source_vectors3d_Movecomponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovecomponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovecomponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovecomponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovecomponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovecomponent(UMovecomponent&&); \
	NO_API UMovecomponent(const UMovecomponent&); \
public:


#define vectors3d_Source_vectors3d_Movecomponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovecomponent(UMovecomponent&&); \
	NO_API UMovecomponent(const UMovecomponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovecomponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovecomponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovecomponent)


#define vectors3d_Source_vectors3d_Movecomponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveOffset() { return STRUCT_OFFSET(UMovecomponent, MoveOffset); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UMovecomponent, Speed); }


#define vectors3d_Source_vectors3d_Movecomponent_h_11_PROLOG
#define vectors3d_Source_vectors3d_Movecomponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vectors3d_Source_vectors3d_Movecomponent_h_14_PRIVATE_PROPERTY_OFFSET \
	vectors3d_Source_vectors3d_Movecomponent_h_14_SPARSE_DATA \
	vectors3d_Source_vectors3d_Movecomponent_h_14_RPC_WRAPPERS \
	vectors3d_Source_vectors3d_Movecomponent_h_14_INCLASS \
	vectors3d_Source_vectors3d_Movecomponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vectors3d_Source_vectors3d_Movecomponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vectors3d_Source_vectors3d_Movecomponent_h_14_PRIVATE_PROPERTY_OFFSET \
	vectors3d_Source_vectors3d_Movecomponent_h_14_SPARSE_DATA \
	vectors3d_Source_vectors3d_Movecomponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	vectors3d_Source_vectors3d_Movecomponent_h_14_INCLASS_NO_PURE_DECLS \
	vectors3d_Source_vectors3d_Movecomponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VECTORS3D_API UClass* StaticClass<class UMovecomponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vectors3d_Source_vectors3d_Movecomponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

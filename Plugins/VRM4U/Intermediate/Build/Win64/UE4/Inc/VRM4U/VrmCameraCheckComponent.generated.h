// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_VrmCameraCheckComponent_generated_h
#error "VrmCameraCheckComponent.generated.h already included, missing '#pragma once' in VrmCameraCheckComponent.h"
#endif
#define VRM4U_VrmCameraCheckComponent_generated_h

#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_26_DELEGATE \
static inline void FVrmCameraCheckDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmCameraCheckDelegate) \
{ \
	VrmCameraCheckDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_SPARSE_DATA
#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraCheck);


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraCheck);


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmCameraCheckComponent(); \
	friend struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmCameraCheckComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmCameraCheckComponent)


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVrmCameraCheckComponent(); \
	friend struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmCameraCheckComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmCameraCheckComponent)


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmCameraCheckComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmCameraCheckComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmCameraCheckComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmCameraCheckComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmCameraCheckComponent(UVrmCameraCheckComponent&&); \
	NO_API UVrmCameraCheckComponent(const UVrmCameraCheckComponent&); \
public:


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmCameraCheckComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmCameraCheckComponent(UVrmCameraCheckComponent&&); \
	NO_API UVrmCameraCheckComponent(const UVrmCameraCheckComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmCameraCheckComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmCameraCheckComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmCameraCheckComponent)


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_PRIVATE_PROPERTY_OFFSET
#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_19_PROLOG
#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_SPARSE_DATA \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_RPC_WRAPPERS \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_INCLASS \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_SPARSE_DATA \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_INCLASS_NO_PURE_DECLS \
	GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmCameraCheckComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmCameraCheckComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GFF_2_3B_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

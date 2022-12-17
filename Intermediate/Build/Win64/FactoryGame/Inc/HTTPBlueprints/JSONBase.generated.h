// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJSONBase;
enum class EValueTypes : uint8;
#ifdef HTTPBLUEPRINTS_JSONBase_generated_h
#error "JSONBase.generated.h already included, missing '#pragma once' in JSONBase.h"
#endif
#define HTTPBLUEPRINTS_JSONBase_generated_h

#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_SPARSE_DATA
#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTryGetJsonObject); \
	DECLARE_FUNCTION(execTryGetJson); \
	DECLARE_FUNCTION(execTryGetJsonArray); \
	DECLARE_FUNCTION(execTryGetStringArray); \
	DECLARE_FUNCTION(execTryGetInt); \
	DECLARE_FUNCTION(execTryGetFloat); \
	DECLARE_FUNCTION(execTryGetBool); \
	DECLARE_FUNCTION(execTryGetString); \
	DECLARE_FUNCTION(execHasJsonObject); \
	DECLARE_FUNCTION(execTypeOfFieldExists); \
	DECLARE_FUNCTION(execFieldExists); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execCreateFromString); \
	DECLARE_FUNCTION(execCreate);


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryGetJsonObject); \
	DECLARE_FUNCTION(execTryGetJson); \
	DECLARE_FUNCTION(execTryGetJsonArray); \
	DECLARE_FUNCTION(execTryGetStringArray); \
	DECLARE_FUNCTION(execTryGetInt); \
	DECLARE_FUNCTION(execTryGetFloat); \
	DECLARE_FUNCTION(execTryGetBool); \
	DECLARE_FUNCTION(execTryGetString); \
	DECLARE_FUNCTION(execHasJsonObject); \
	DECLARE_FUNCTION(execTypeOfFieldExists); \
	DECLARE_FUNCTION(execFieldExists); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execCreateFromString); \
	DECLARE_FUNCTION(execCreate);


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJSONBase(); \
	friend struct Z_Construct_UClass_UJSONBase_Statics; \
public: \
	DECLARE_CLASS(UJSONBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTPBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UJSONBase)


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUJSONBase(); \
	friend struct Z_Construct_UClass_UJSONBase_Statics; \
public: \
	DECLARE_CLASS(UJSONBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTPBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UJSONBase)


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJSONBase(UJSONBase&&); \
	NO_API UJSONBase(const UJSONBase&); \
public:


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJSONBase(UJSONBase&&); \
	NO_API UJSONBase(const UJSONBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONBase)


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_PRIVATE_PROPERTY_OFFSET
#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_20_PROLOG
#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_FRIENDS \
private:


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INLINE_ACCESSORS \
public:


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_PRIVATE_PROPERTY_OFFSET \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_SPARSE_DATA \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_RPC_WRAPPERS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INCLASS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_STANDARD_CONSTRUCTORS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_FRIENDS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INLINE_ACCESSORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_PRIVATE_PROPERTY_OFFSET \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_SPARSE_DATA \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INCLASS_NO_PURE_DECLS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_ENHANCED_CONSTRUCTORS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_FRIENDS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h_23_INLINE_ACCESSORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JSONBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPBLUEPRINTS_API UClass* StaticClass<class UJSONBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_JSONBase_h


#define FOREACH_ENUM_EVALUETYPES(op) \
	op(EValueTypes::None) \
	op(EValueTypes::Null) \
	op(EValueTypes::String) \
	op(EValueTypes::Number) \
	op(EValueTypes::Boolean) \
	op(EValueTypes::Array) \
	op(EValueTypes::Object) 

enum class EValueTypes : uint8;
template<> HTTPBLUEPRINTS_API UEnum* StaticEnum<EValueTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHTTPResponseWrap;
 
enum class EHTTPRequest : uint8;
#ifdef HTTPBLUEPRINTS_HTTPBlueprintsBPLibrary_generated_h
#error "HTTPBlueprintsBPLibrary.generated.h already included, missing '#pragma once' in HTTPBlueprintsBPLibrary.h"
#endif
#define HTTPBLUEPRINTS_HTTPBlueprintsBPLibrary_generated_h

#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_17_DELEGATE \
struct _Script_HTTPBlueprints_eventRequestDelegeate_Parms \
{ \
	UHTTPResponseWrap* Response; \
	bool Successful; \
}; \
static inline void FRequestDelegeate_DelegateWrapper(const FScriptDelegate& RequestDelegeate, UHTTPResponseWrap* Response, bool Successful) \
{ \
	_Script_HTTPBlueprints_eventRequestDelegeate_Parms Parms; \
	Parms.Response=Response; \
	Parms.Successful=Successful ? true : false; \
	RequestDelegeate.ProcessDelegate<UObject>(&Parms); \
}


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_SPARSE_DATA
#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest);


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest);


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTTPBlueprintsBPLibrary(); \
	friend struct Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHTTPBlueprintsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTPBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UHTTPBlueprintsBPLibrary)


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHTTPBlueprintsBPLibrary(); \
	friend struct Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHTTPBlueprintsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTPBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UHTTPBlueprintsBPLibrary)


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTTPBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTTPBlueprintsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTTPBlueprintsBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTTPBlueprintsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTTPBlueprintsBPLibrary(UHTTPBlueprintsBPLibrary&&); \
	NO_API UHTTPBlueprintsBPLibrary(const UHTTPBlueprintsBPLibrary&); \
public:


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTTPBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTTPBlueprintsBPLibrary(UHTTPBlueprintsBPLibrary&&); \
	NO_API UHTTPBlueprintsBPLibrary(const UHTTPBlueprintsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTTPBlueprintsBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTTPBlueprintsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTTPBlueprintsBPLibrary)


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_19_PROLOG
#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_FRIENDS \
private:


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INLINE_ACCESSORS \
public:


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_SPARSE_DATA \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_RPC_WRAPPERS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INCLASS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_STANDARD_CONSTRUCTORS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_FRIENDS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INLINE_ACCESSORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_SPARSE_DATA \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INCLASS_NO_PURE_DECLS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_ENHANCED_CONSTRUCTORS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_FRIENDS \
	SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h_22_INLINE_ACCESSORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HTTPBlueprintsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPBLUEPRINTS_API UClass* StaticClass<class UHTTPBlueprintsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SatisfactoryModLoader_Plugins_HTTPBlueprints_Source_HTTPBlueprints_Public_HTTPBlueprintsBPLibrary_h


#define FOREACH_ENUM_EHTTPREQUEST(op) \
	op(EHTTPRequest::GET) \
	op(EHTTPRequest::POST) 

enum class EHTTPRequest : uint8;
template<> HTTPBLUEPRINTS_API UEnum* StaticEnum<EHTTPRequest>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

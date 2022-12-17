// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTPBlueprints/Public/JSONBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSONBase() {}
// Cross Module References
	HTTPBLUEPRINTS_API UEnum* Z_Construct_UEnum_HTTPBlueprints_EValueTypes();
	UPackage* Z_Construct_UPackage__Script_HTTPBlueprints();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UJSONBase_NoRegister();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UJSONBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EValueTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HTTPBlueprints_EValueTypes, Z_Construct_UPackage__Script_HTTPBlueprints(), TEXT("EValueTypes"));
		}
		return Singleton;
	}
	template<> HTTPBLUEPRINTS_API UEnum* StaticEnum<EValueTypes>()
	{
		return EValueTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EValueTypes(EValueTypes_StaticEnum, TEXT("/Script/HTTPBlueprints"), TEXT("EValueTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HTTPBlueprints_EValueTypes_Hash() { return 2597548727U; }
	UEnum* Z_Construct_UEnum_HTTPBlueprints_EValueTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HTTPBlueprints();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EValueTypes"), 0, Get_Z_Construct_UEnum_HTTPBlueprints_EValueTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EValueTypes::None", (int64)EValueTypes::None },
				{ "EValueTypes::Null", (int64)EValueTypes::Null },
				{ "EValueTypes::String", (int64)EValueTypes::String },
				{ "EValueTypes::Number", (int64)EValueTypes::Number },
				{ "EValueTypes::Boolean", (int64)EValueTypes::Boolean },
				{ "EValueTypes::Array", (int64)EValueTypes::Array },
				{ "EValueTypes::Object", (int64)EValueTypes::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.DisplayName", "ARRAY" },
				{ "Array.Name", "EValueTypes::Array" },
				{ "Boolean.DisplayName", "BOOLEAN" },
				{ "Boolean.Name", "EValueTypes::Boolean" },
				{ "ModuleRelativePath", "Public/JSONBase.h" },
				{ "None.DisplayName", "NONE" },
				{ "None.Name", "EValueTypes::None" },
				{ "Null.DisplayName", "NULL" },
				{ "Null.Name", "EValueTypes::Null" },
				{ "Number.DisplayName", "NUMBER" },
				{ "Number.Name", "EValueTypes::Number" },
				{ "Object.DisplayName", "OBJECT" },
				{ "Object.Name", "EValueTypes::Object" },
				{ "String.DisplayName", "STRING" },
				{ "String.Name", "EValueTypes::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HTTPBlueprints,
				nullptr,
				"EValueTypes",
				"EValueTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetJsonObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_OBJECT_REF(UJSONBase,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetJsonObject(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_OBJECT_REF(UJSONBase,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetJson(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetJsonArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_TARRAY_REF(UJSONBase*,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetJsonArray(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetStringArray(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetInt(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetFloat(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetBool(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTryGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringField);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetString(Z_Param_StringField,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execHasJsonObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasJsonObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execTypeOfFieldExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_ENUM(EValueTypes,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TypeOfFieldExists(Z_Param_field,EValueTypes(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execFieldExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FieldExists(Z_Param_field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execCreateFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONBase**)Z_Param__Result=UJSONBase::CreateFromString(Z_Param_content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONBase::execCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONBase**)Z_Param__Result=UJSONBase::Create();
		P_NATIVE_END;
	}
	void UJSONBase::StaticRegisterNativesUJSONBase()
	{
		UClass* Class = UJSONBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UJSONBase::execCreate },
			{ "CreateFromString", &UJSONBase::execCreateFromString },
			{ "FieldExists", &UJSONBase::execFieldExists },
			{ "HasJsonObject", &UJSONBase::execHasJsonObject },
			{ "ToString", &UJSONBase::execToString },
			{ "TryGetBool", &UJSONBase::execTryGetBool },
			{ "TryGetFloat", &UJSONBase::execTryGetFloat },
			{ "TryGetInt", &UJSONBase::execTryGetInt },
			{ "TryGetJson", &UJSONBase::execTryGetJson },
			{ "TryGetJsonArray", &UJSONBase::execTryGetJsonArray },
			{ "TryGetJsonObject", &UJSONBase::execTryGetJsonObject },
			{ "TryGetString", &UJSONBase::execTryGetString },
			{ "TryGetStringArray", &UJSONBase::execTryGetStringArray },
			{ "TypeOfFieldExists", &UJSONBase::execTypeOfFieldExists },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJSONBase_Create_Statics
	{
		struct JSONBase_eventCreate_Parms
		{
			UJSONBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJSONBase_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UJSONBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "DisplayName", "Create Json Object" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "Create", nullptr, nullptr, sizeof(JSONBase_eventCreate_Parms), Z_Construct_UFunction_UJSONBase_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_CreateFromString_Statics
	{
		struct JSONBase_eventCreateFromString_Parms
		{
			FString content;
			UJSONBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventCreateFromString_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventCreateFromString_Parms, ReturnValue), Z_Construct_UClass_UJSONBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|JSON" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "CreateFromString", nullptr, nullptr, sizeof(JSONBase_eventCreateFromString_Parms), Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_CreateFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_CreateFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_FieldExists_Statics
	{
		struct JSONBase_eventFieldExists_Parms
		{
			FString field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_FieldExists_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventFieldExists_Parms, field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_FieldExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventFieldExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_FieldExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventFieldExists_Parms), &Z_Construct_UFunction_UJSONBase_FieldExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_FieldExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_FieldExists_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_FieldExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_FieldExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|JSON" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_FieldExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "FieldExists", nullptr, nullptr, sizeof(JSONBase_eventFieldExists_Parms), Z_Construct_UFunction_UJSONBase_FieldExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_FieldExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_FieldExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_FieldExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_FieldExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_FieldExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics
	{
		struct JSONBase_eventHasJsonObject_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventHasJsonObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventHasJsonObject_Parms), &Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "HTTPBlueprint|JSON" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "HasJsonObject", nullptr, nullptr, sizeof(JSONBase_eventHasJsonObject_Parms), Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_HasJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_HasJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_ToString_Statics
	{
		struct JSONBase_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|JSON" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "ToString", nullptr, nullptr, sizeof(JSONBase_eventToString_Parms), Z_Construct_UFunction_UJSONBase_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetBool_Statics
	{
		struct JSONBase_eventTryGetBool_Parms
		{
			FString StringField;
			bool Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetBool_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetBool_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetBool_Parms), &Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetBool_Parms), &Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetBool", nullptr, nullptr, sizeof(JSONBase_eventTryGetBool_Parms), Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics
	{
		struct JSONBase_eventTryGetFloat_Parms
		{
			FString StringField;
			float Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetFloat_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetFloat_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetFloat_Parms), &Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetFloat", nullptr, nullptr, sizeof(JSONBase_eventTryGetFloat_Parms), Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetInt_Statics
	{
		struct JSONBase_eventTryGetInt_Parms
		{
			FString StringField;
			int32 Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetInt_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetInt_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetInt_Parms), &Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetInt", nullptr, nullptr, sizeof(JSONBase_eventTryGetInt_Parms), Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetJson_Statics
	{
		struct JSONBase_eventTryGetJson_Parms
		{
			FString StringField;
			UJSONBase* Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetJson_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetJson_Parms, Result), Z_Construct_UClass_UJSONBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetJson_Parms), &Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetJson", nullptr, nullptr, sizeof(JSONBase_eventTryGetJson_Parms), Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics
	{
		struct JSONBase_eventTryGetJsonArray_Parms
		{
			FString StringField;
			TArray<UJSONBase*> Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetJsonArray_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UJSONBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetJsonArray_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetJsonArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetJsonArray_Parms), &Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetJsonArray", nullptr, nullptr, sizeof(JSONBase_eventTryGetJsonArray_Parms), Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetJsonArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetJsonArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics
	{
		struct JSONBase_eventTryGetJsonObject_Parms
		{
			FString StringField;
			UJSONBase* Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetJsonObject_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetJsonObject_Parms, Result), Z_Construct_UClass_UJSONBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetJsonObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetJsonObject_Parms), &Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetJsonObject", nullptr, nullptr, sizeof(JSONBase_eventTryGetJsonObject_Parms), Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetString_Statics
	{
		struct JSONBase_eventTryGetString_Parms
		{
			FString StringField;
			FString Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetString_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetString_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetString_Parms), &Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetString", nullptr, nullptr, sizeof(JSONBase_eventTryGetString_Parms), Z_Construct_UFunction_UJSONBase_TryGetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics
	{
		struct JSONBase_eventTryGetStringArray_Parms
		{
			FString StringField;
			TArray<FString> Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringField;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_StringField = { "StringField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetStringArray_Parms, StringField), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTryGetStringArray_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTryGetStringArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTryGetStringArray_Parms), &Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_StringField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Json" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TryGetStringArray", nullptr, nullptr, sizeof(JSONBase_eventTryGetStringArray_Parms), Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TryGetStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TryGetStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics
	{
		struct JSONBase_eventTypeOfFieldExists_Parms
		{
			FString field;
			EValueTypes type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTypeOfFieldExists_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JSONBase_eventTypeOfFieldExists_Parms, type), Z_Construct_UEnum_HTTPBlueprints_EValueTypes, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONBase_eventTypeOfFieldExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JSONBase_eventTypeOfFieldExists_Parms), &Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|JSON" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONBase, nullptr, "TypeOfFieldExists", nullptr, nullptr, sizeof(JSONBase_eventTypeOfFieldExists_Parms), Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJSONBase_TypeOfFieldExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJSONBase_TypeOfFieldExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJSONBase_NoRegister()
	{
		return UJSONBase::StaticClass();
	}
	struct Z_Construct_UClass_UJSONBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJSONBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJSONBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJSONBase_Create, "Create" }, // 269428046
		{ &Z_Construct_UFunction_UJSONBase_CreateFromString, "CreateFromString" }, // 1017550337
		{ &Z_Construct_UFunction_UJSONBase_FieldExists, "FieldExists" }, // 854884713
		{ &Z_Construct_UFunction_UJSONBase_HasJsonObject, "HasJsonObject" }, // 2017811088
		{ &Z_Construct_UFunction_UJSONBase_ToString, "ToString" }, // 364076360
		{ &Z_Construct_UFunction_UJSONBase_TryGetBool, "TryGetBool" }, // 893573290
		{ &Z_Construct_UFunction_UJSONBase_TryGetFloat, "TryGetFloat" }, // 1548366117
		{ &Z_Construct_UFunction_UJSONBase_TryGetInt, "TryGetInt" }, // 2732090687
		{ &Z_Construct_UFunction_UJSONBase_TryGetJson, "TryGetJson" }, // 484341077
		{ &Z_Construct_UFunction_UJSONBase_TryGetJsonArray, "TryGetJsonArray" }, // 1260778626
		{ &Z_Construct_UFunction_UJSONBase_TryGetJsonObject, "TryGetJsonObject" }, // 4122943954
		{ &Z_Construct_UFunction_UJSONBase_TryGetString, "TryGetString" }, // 3870305221
		{ &Z_Construct_UFunction_UJSONBase_TryGetStringArray, "TryGetStringArray" }, // 1644377961
		{ &Z_Construct_UFunction_UJSONBase_TypeOfFieldExists, "TypeOfFieldExists" }, // 1441441725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JSONBase.h" },
		{ "ModuleRelativePath", "Public/JSONBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJSONBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJSONBase_Statics::ClassParams = {
		&UJSONBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJSONBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJSONBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJSONBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJSONBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJSONBase, 4094814336);
	template<> HTTPBLUEPRINTS_API UClass* StaticClass<UJSONBase>()
	{
		return UJSONBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONBase(Z_Construct_UClass_UJSONBase, &UJSONBase::StaticClass, TEXT("/Script/HTTPBlueprints"), TEXT("UJSONBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

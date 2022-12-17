// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTPBlueprints/Public/UHTTPResponseWrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUHTTPResponseWrap() {}
// Cross Module References
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPResponseWrap_NoRegister();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPResponseWrap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HTTPBlueprints();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UJSONBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHTTPResponseWrap::execGetAllHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPResponseWrap::execGetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_header);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeader(Z_Param_header);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPResponseWrap::execGetResponseCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPResponseWrap::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPResponseWrap::execGetContentAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContentAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPResponseWrap::execGetContentAsJSON)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONBase**)Z_Param__Result=P_THIS->GetContentAsJSON();
		P_NATIVE_END;
	}
	void UHTTPResponseWrap::StaticRegisterNativesUHTTPResponseWrap()
	{
		UClass* Class = UHTTPResponseWrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllHeaders", &UHTTPResponseWrap::execGetAllHeaders },
			{ "GetContent", &UHTTPResponseWrap::execGetContent },
			{ "GetContentAsJSON", &UHTTPResponseWrap::execGetContentAsJSON },
			{ "GetContentAsString", &UHTTPResponseWrap::execGetContentAsString },
			{ "GetHeader", &UHTTPResponseWrap::execGetHeader },
			{ "GetResponseCode", &UHTTPResponseWrap::execGetResponseCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics
	{
		struct HTTPResponseWrap_eventGetAllHeaders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetAllHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|HTTP Responses" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPResponseWrap, nullptr, "GetAllHeaders", nullptr, nullptr, sizeof(HTTPResponseWrap_eventGetAllHeaders_Parms), Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics
	{
		struct HTTPResponseWrap_eventGetContent_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|HTTP Responses" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPResponseWrap, nullptr, "GetContent", nullptr, nullptr, sizeof(HTTPResponseWrap_eventGetContent_Parms), Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPResponseWrap_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPResponseWrap_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics
	{
		struct HTTPResponseWrap_eventGetContentAsJSON_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetContentAsJSON_Parms, ReturnValue), Z_Construct_UClass_UJSONBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|HTTP Responses" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPResponseWrap, nullptr, "GetContentAsJSON", nullptr, nullptr, sizeof(HTTPResponseWrap_eventGetContentAsJSON_Parms), Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics
	{
		struct HTTPResponseWrap_eventGetContentAsString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetContentAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|HTTP Responses" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPResponseWrap, nullptr, "GetContentAsString", nullptr, nullptr, sizeof(HTTPResponseWrap_eventGetContentAsString_Parms), Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics
	{
		struct HTTPResponseWrap_eventGetHeader_Parms
		{
			FString header;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetHeader_Parms, header), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|HTTP Responses" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPResponseWrap, nullptr, "GetHeader", nullptr, nullptr, sizeof(HTTPResponseWrap_eventGetHeader_Parms), Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPResponseWrap_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPResponseWrap_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics
	{
		struct HTTPResponseWrap_eventGetResponseCode_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPResponseWrap_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|HTTP Responses" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPResponseWrap, nullptr, "GetResponseCode", nullptr, nullptr, sizeof(HTTPResponseWrap_eventGetResponseCode_Parms), Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHTTPResponseWrap_NoRegister()
	{
		return UHTTPResponseWrap::StaticClass();
	}
	struct Z_Construct_UClass_UHTTPResponseWrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTTPResponseWrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHTTPResponseWrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTTPResponseWrap_GetAllHeaders, "GetAllHeaders" }, // 1827488222
		{ &Z_Construct_UFunction_UHTTPResponseWrap_GetContent, "GetContent" }, // 422482951
		{ &Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsJSON, "GetContentAsJSON" }, // 928524502
		{ &Z_Construct_UFunction_UHTTPResponseWrap_GetContentAsString, "GetContentAsString" }, // 535361873
		{ &Z_Construct_UFunction_UHTTPResponseWrap_GetHeader, "GetHeader" }, // 3057396915
		{ &Z_Construct_UFunction_UHTTPResponseWrap_GetResponseCode, "GetResponseCode" }, // 1262807348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTPResponseWrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UHTTPResponseWrap.h" },
		{ "ModuleRelativePath", "Public/UHTTPResponseWrap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTTPResponseWrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTTPResponseWrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHTTPResponseWrap_Statics::ClassParams = {
		&UHTTPResponseWrap::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHTTPResponseWrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPResponseWrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTTPResponseWrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHTTPResponseWrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHTTPResponseWrap, 1378006282);
	template<> HTTPBLUEPRINTS_API UClass* StaticClass<UHTTPResponseWrap>()
	{
		return UHTTPResponseWrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHTTPResponseWrap(Z_Construct_UClass_UHTTPResponseWrap, &UHTTPResponseWrap::StaticClass, TEXT("/Script/HTTPBlueprints"), TEXT("UHTTPResponseWrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTTPResponseWrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTPBlueprints/Public/URegex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeURegex() {}
// Cross Module References
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UURegex_NoRegister();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UURegex();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HTTPBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UURegex::execreplaceMatch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pattern);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_GET_PROPERTY(FStrProperty,Z_Param_replace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UURegex::replaceMatch(Z_Param_pattern,Z_Param_text,Z_Param_replace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UURegex::execfindMatch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pattern);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UURegex::findMatch(Z_Param_pattern,Z_Param_text);
		P_NATIVE_END;
	}
	void UURegex::StaticRegisterNativesUURegex()
	{
		UClass* Class = UURegex::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "findMatch", &UURegex::execfindMatch },
			{ "replaceMatch", &UURegex::execreplaceMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UURegex_findMatch_Statics
	{
		struct URegex_eventfindMatch_Parms
		{
			FString pattern;
			FString text;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pattern;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_findMatch_Statics::NewProp_pattern = { "pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventfindMatch_Parms, pattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_findMatch_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventfindMatch_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_findMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventfindMatch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UURegex_findMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_findMatch_Statics::NewProp_pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_findMatch_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_findMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UURegex_findMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Regex" },
		{ "ModuleRelativePath", "Public/URegex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UURegex_findMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UURegex, nullptr, "findMatch", nullptr, nullptr, sizeof(URegex_eventfindMatch_Parms), Z_Construct_UFunction_UURegex_findMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UURegex_findMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UURegex_findMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UURegex_findMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UURegex_findMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UURegex_findMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UURegex_replaceMatch_Statics
	{
		struct URegex_eventreplaceMatch_Parms
		{
			FString pattern;
			FString text;
			FString replace;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pattern;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_replace;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_pattern = { "pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventreplaceMatch_Parms, pattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventreplaceMatch_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_replace = { "replace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventreplaceMatch_Parms, replace), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegex_eventreplaceMatch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UURegex_replaceMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_replace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURegex_replaceMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UURegex_replaceMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|Regex" },
		{ "ModuleRelativePath", "Public/URegex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UURegex_replaceMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UURegex, nullptr, "replaceMatch", nullptr, nullptr, sizeof(URegex_eventreplaceMatch_Parms), Z_Construct_UFunction_UURegex_replaceMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UURegex_replaceMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UURegex_replaceMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UURegex_replaceMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UURegex_replaceMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UURegex_replaceMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UURegex_NoRegister()
	{
		return UURegex::StaticClass();
	}
	struct Z_Construct_UClass_UURegex_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UURegex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UURegex_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UURegex_findMatch, "findMatch" }, // 1944836977
		{ &Z_Construct_UFunction_UURegex_replaceMatch, "replaceMatch" }, // 1907059327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UURegex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "URegex.h" },
		{ "ModuleRelativePath", "Public/URegex.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UURegex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UURegex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UURegex_Statics::ClassParams = {
		&UURegex::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UURegex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UURegex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UURegex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UURegex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UURegex, 1120222642);
	template<> HTTPBLUEPRINTS_API UClass* StaticClass<UURegex>()
	{
		return UURegex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UURegex(Z_Construct_UClass_UURegex, &UURegex::StaticClass, TEXT("/Script/HTTPBlueprints"), TEXT("UURegex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UURegex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

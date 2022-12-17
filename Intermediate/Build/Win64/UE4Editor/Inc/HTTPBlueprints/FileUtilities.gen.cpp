// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTPBlueprints/Public/FileUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileUtilities() {}
// Cross Module References
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UFileUtilities_NoRegister();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UFileUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HTTPBlueprints();
// End Cross Module References
	DEFINE_FUNCTION(UFileUtilities::execLoadFileBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileUtilities::LoadFileBytes(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileUtilities::execLoadFileString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileUtilities::LoadFileString(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileUtilities::execSaveFileBytes)
	{
		P_GET_TARRAY(uint8,Z_Param_content);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileUtilities::SaveFileBytes(Z_Param_content,Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileUtilities::execSaveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileUtilities::SaveFile(Z_Param_content,Z_Param_path);
		P_NATIVE_END;
	}
	void UFileUtilities::StaticRegisterNativesUFileUtilities()
	{
		UClass* Class = UFileUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileBytes", &UFileUtilities::execLoadFileBytes },
			{ "LoadFileString", &UFileUtilities::execLoadFileString },
			{ "SaveFile", &UFileUtilities::execSaveFile },
			{ "SaveFileBytes", &UFileUtilities::execSaveFileBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics
	{
		struct FileUtilities_eventLoadFileBytes_Parms
		{
			FString path;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventLoadFileBytes_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventLoadFileBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|File Utilities" },
		{ "ModuleRelativePath", "Public/FileUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileUtilities, nullptr, "LoadFileBytes", nullptr, nullptr, sizeof(FileUtilities_eventLoadFileBytes_Parms), Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileUtilities_LoadFileBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileUtilities_LoadFileBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics
	{
		struct FileUtilities_eventLoadFileString_Parms
		{
			FString path;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventLoadFileString_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventLoadFileString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|File Utilities" },
		{ "ModuleRelativePath", "Public/FileUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileUtilities, nullptr, "LoadFileString", nullptr, nullptr, sizeof(FileUtilities_eventLoadFileString_Parms), Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileUtilities_LoadFileString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileUtilities_LoadFileString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileUtilities_SaveFile_Statics
	{
		struct FileUtilities_eventSaveFile_Parms
		{
			FString content;
			FString path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventSaveFile_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventSaveFile_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileUtilities_eventSaveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileUtilities_eventSaveFile_Parms), &Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|File Utilities" },
		{ "ModuleRelativePath", "Public/FileUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileUtilities, nullptr, "SaveFile", nullptr, nullptr, sizeof(FileUtilities_eventSaveFile_Parms), Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileUtilities_SaveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileUtilities_SaveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics
	{
		struct FileUtilities_eventSaveFileBytes_Parms
		{
			TArray<uint8> content;
			FString path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_content_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_content_Inner = { "content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventSaveFileBytes_Parms, content), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUtilities_eventSaveFileBytes_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileUtilities_eventSaveFileBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileUtilities_eventSaveFileBytes_Parms), &Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTPBlueprint|File Utilities" },
		{ "ModuleRelativePath", "Public/FileUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileUtilities, nullptr, "SaveFileBytes", nullptr, nullptr, sizeof(FileUtilities_eventSaveFileBytes_Parms), Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileUtilities_SaveFileBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileUtilities_SaveFileBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileUtilities_NoRegister()
	{
		return UFileUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UFileUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileUtilities_LoadFileBytes, "LoadFileBytes" }, // 2012189727
		{ &Z_Construct_UFunction_UFileUtilities_LoadFileString, "LoadFileString" }, // 2563121842
		{ &Z_Construct_UFunction_UFileUtilities_SaveFile, "SaveFile" }, // 4206196983
		{ &Z_Construct_UFunction_UFileUtilities_SaveFileBytes, "SaveFileBytes" }, // 1150963490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FileUtilities.h" },
		{ "ModuleRelativePath", "Public/FileUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileUtilities_Statics::ClassParams = {
		&UFileUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileUtilities, 2690022113);
	template<> HTTPBLUEPRINTS_API UClass* StaticClass<UFileUtilities>()
	{
		return UFileUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileUtilities(Z_Construct_UClass_UFileUtilities, &UFileUtilities::StaticClass, TEXT("/Script/HTTPBlueprints"), TEXT("UFileUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

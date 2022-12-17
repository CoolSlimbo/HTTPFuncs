// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTPBlueprints/Public/HTTPBlueprintsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTPBlueprintsBPLibrary() {}
// Cross Module References
	HTTPBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HTTPBlueprints();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPResponseWrap_NoRegister();
	HTTPBLUEPRINTS_API UEnum* Z_Construct_UEnum_HTTPBlueprints_EHTTPRequest();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPBlueprintsBPLibrary_NoRegister();
	HTTPBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPBlueprintsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics
	{
		struct _Script_HTTPBlueprints_eventRequestDelegeate_Parms
		{
			UHTTPResponseWrap* Response;
			bool Successful;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Response;
		static void NewProp_Successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HTTPBlueprints_eventRequestDelegeate_Parms, Response), Z_Construct_UClass_UHTTPResponseWrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
	{
		((_Script_HTTPBlueprints_eventRequestDelegeate_Parms*)Obj)->Successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_HTTPBlueprints_eventRequestDelegeate_Parms), &Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::NewProp_Successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate contains response ptr and bool of success\n" },
		{ "ModuleRelativePath", "Public/HTTPBlueprintsBPLibrary.h" },
		{ "ToolTip", "Delegate contains response ptr and bool of success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HTTPBlueprints, nullptr, "RequestDelegeate__DelegateSignature", nullptr, nullptr, sizeof(_Script_HTTPBlueprints_eventRequestDelegeate_Parms), Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EHTTPRequest_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HTTPBlueprints_EHTTPRequest, Z_Construct_UPackage__Script_HTTPBlueprints(), TEXT("EHTTPRequest"));
		}
		return Singleton;
	}
	template<> HTTPBLUEPRINTS_API UEnum* StaticEnum<EHTTPRequest>()
	{
		return EHTTPRequest_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHTTPRequest(EHTTPRequest_StaticEnum, TEXT("/Script/HTTPBlueprints"), TEXT("EHTTPRequest"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HTTPBlueprints_EHTTPRequest_Hash() { return 586420293U; }
	UEnum* Z_Construct_UEnum_HTTPBlueprints_EHTTPRequest()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HTTPBlueprints();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHTTPRequest"), 0, Get_Z_Construct_UEnum_HTTPBlueprints_EHTTPRequest_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHTTPRequest::GET", (int64)EHTTPRequest::GET },
				{ "EHTTPRequest::POST", (int64)EHTTPRequest::POST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GET.DisplayName", "GET" },
				{ "GET.Name", "EHTTPRequest::GET" },
				{ "ModuleRelativePath", "Public/HTTPBlueprintsBPLibrary.h" },
				{ "POST.DisplayName", "POST" },
				{ "POST.Name", "EHTTPRequest::POST" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HTTPBlueprints,
				nullptr,
				"EHTTPRequest",
				"EHTTPRequest",
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
	DEFINE_FUNCTION(UHTTPBlueprintsBPLibrary::execSendHTTPRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_TMAP(FString,FString,Z_Param_headers);
		P_GET_ENUM(EHTTPRequest,Z_Param_method);
		P_GET_PROPERTY(FStrProperty,Z_Param_body);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_requestCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHTTPBlueprintsBPLibrary::SendHTTPRequest(Z_Param_url,Z_Param_headers,EHTTPRequest(Z_Param_method),Z_Param_body,FRequestDelegeate(Z_Param_Out_requestCallback));
		P_NATIVE_END;
	}
	void UHTTPBlueprintsBPLibrary::StaticRegisterNativesUHTTPBlueprintsBPLibrary()
	{
		UClass* Class = UHTTPBlueprintsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendHTTPRequest", &UHTTPBlueprintsBPLibrary::execSendHTTPRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics
	{
		struct HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms
		{
			FString url;
			TMap<FString,FString> headers;
			EHTTPRequest method;
			FString body;
			FScriptDelegate requestCallback;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_headers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_headers_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_headers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_method_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_method;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_requestCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_headers_ValueProp = { "headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_headers_Key_KeyProp = { "headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_headers = { "headers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms, headers), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms, method), Z_Construct_UEnum_HTTPBlueprints_EHTTPRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms, body), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_requestCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_requestCallback = { "requestCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms, requestCallback), Z_Construct_UDelegateFunction_HTTPBlueprints_RequestDelegeate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_requestCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_requestCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_headers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_headers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_method_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::NewProp_requestCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "requestCallback" },
		{ "Category", "HTTPBlueprint|HTTP Requests" },
		{ "ModuleRelativePath", "Public/HTTPBlueprintsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPBlueprintsBPLibrary, nullptr, "SendHTTPRequest", nullptr, nullptr, sizeof(HTTPBlueprintsBPLibrary_eventSendHTTPRequest_Parms), Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHTTPBlueprintsBPLibrary_NoRegister()
	{
		return UHTTPBlueprintsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTTPBlueprintsBPLibrary_SendHTTPRequest, "SendHTTPRequest" }, // 684460426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HTTPBlueprintsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/HTTPBlueprintsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTTPBlueprintsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::ClassParams = {
		&UHTTPBlueprintsBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTTPBlueprintsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHTTPBlueprintsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHTTPBlueprintsBPLibrary, 1663257955);
	template<> HTTPBLUEPRINTS_API UClass* StaticClass<UHTTPBlueprintsBPLibrary>()
	{
		return UHTTPBlueprintsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHTTPBlueprintsBPLibrary(Z_Construct_UClass_UHTTPBlueprintsBPLibrary, &UHTTPBlueprintsBPLibrary::StaticClass, TEXT("/Script/HTTPBlueprints"), TEXT("UHTTPBlueprintsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTTPBlueprintsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

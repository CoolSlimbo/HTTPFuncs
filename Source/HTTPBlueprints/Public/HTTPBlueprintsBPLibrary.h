// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "UHTTPResponseWrap.h"
#include "HTTPBlueprintsBPLibrary.generated.h"

UENUM( BlueprintType )
enum class EHTTPRequest : uint8 {
	GET = 0	UMETA( DisplayName = "GET" ),
	POST = 1	UMETA( DisplayName = "POST" ),
};

// Delegate contains response ptr and bool of success
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestDelegeate, UHTTPResponseWrap*, Response, bool, Successful);

UCLASS()
class UHTTPBlueprintsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Requests", meta = (AutoCreateRefTerm = "requestCallback"))
		static void SendHTTPRequest(FString url, TMap<FString, FString> headers, EHTTPRequest method, FString body, const FRequestDelegeate& requestCallback);
};
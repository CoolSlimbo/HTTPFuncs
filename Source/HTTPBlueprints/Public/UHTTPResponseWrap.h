// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "JSONBase.h"
#include "UHTTPResponseWrap.generated.h"

UCLASS()
class UHTTPResponseWrap :  public UObject
{
	GENERATED_UCLASS_BODY()

public:
	static UHTTPResponseWrap* Create(const FHttpResponsePtr* resPtr);

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Responses")
		UJSONBase* GetContentAsJSON();

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Responses")
		FString GetContentAsString();

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Responses")
		TArray<uint8> GetContent();

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Responses")
		int32 GetResponseCode();

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Responses")
		FString GetHeader(FString header);

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|HTTP Responses")
		TArray<FString> GetAllHeaders();
	
private:
	IHttpResponse* imRes;
};
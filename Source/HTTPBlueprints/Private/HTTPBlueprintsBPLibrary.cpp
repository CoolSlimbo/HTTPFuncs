// Copyright Epic Games, Inc. All Rights Reserved.

#include "HTTPBlueprintsBPLibrary.h"
#include "FGResourceSinkSubsystem.h"

UHTTPBlueprintsBPLibrary::UHTTPBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	
}

void UHTTPBlueprintsBPLibrary::SendHTTPRequest(FString url, TMap<FString, FString> headers, EHTTPRequest method, FString body, const FRequestDelegeate& requestCallback) {
	FHttpRequestRef request = FHttpModule::Get().CreateRequest();
	request->OnProcessRequestComplete().BindLambda([requestCallback](FHttpRequestPtr request, FHttpResponsePtr response, bool bSuccess) {
		UE_LOG(LogTemp, Warning, TEXT("Reqeust was: %d"), bSuccess)

		if (bSuccess)
			UE_LOG(LogTemp, Warning, TEXT("Requst Content: %s"), *response->GetContentAsString())
		
		if (requestCallback.IsBound())
			requestCallback.Execute(UHTTPResponseWrap::Create(&response), bSuccess);
	});

	request->SetURL(url);
	for (auto& header : headers) {
		if (header.Key != "Accepts" && header.Key != "Content-Type" && header.Key != "User-Agent" && header.Key != "") {
			if (!header.Key.IsEmpty() && !header.Value.IsEmpty()) {
				request->SetHeader(header.Key, header.Value);
			}
		}
	}

	request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	request->SetHeader(TEXT("Accepts"), TEXT("application/json"));

	request->SetVerb(method == EHTTPRequest::GET ? "GET" : "POST");
	request->SetContentAsString(body);
	request->ProcessRequest();
}
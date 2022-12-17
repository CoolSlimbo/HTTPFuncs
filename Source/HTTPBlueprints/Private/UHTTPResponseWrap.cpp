// Copyright Coffee Stain Studios. All Rights Reserved.


#include "UHTTPResponseWrap.h"


UHTTPResponseWrap::UHTTPResponseWrap(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UHTTPResponseWrap* UHTTPResponseWrap::Create(const FHttpResponsePtr* resPtr) {
	UHTTPResponseWrap* responseObject = NewObject<UHTTPResponseWrap>();
	responseObject->imRes = resPtr->Get();
	return responseObject;
}

FString UHTTPResponseWrap::GetContentAsString() {
	return imRes->GetContentAsString();
}

UJSONBase* UHTTPResponseWrap::GetContentAsJSON() {
	return UJSONBase::CreateFromString(GetContentAsString());
}

TArray<uint8> UHTTPResponseWrap::GetContent() {
	return imRes->GetContent();
}

int32 UHTTPResponseWrap::GetResponseCode() {
	return imRes->GetResponseCode();
}

FString UHTTPResponseWrap::GetHeader(FString header) {
	return imRes->GetHeader(header);
}

TArray<FString> UHTTPResponseWrap::GetAllHeaders() {
	return imRes->GetAllHeaders();
}
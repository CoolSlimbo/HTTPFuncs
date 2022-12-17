// 


#include "FileUtilities.h"

bool UFileUtilities::SaveFile(FString content, FString path) {
	return FFileHelper::SaveStringToFile(content, *path);
}

bool UFileUtilities::SaveFileBytes(TArray<uint8> content, FString path) {
	return FFileHelper::SaveArrayToFile(content, *path);
}

FString UFileUtilities::LoadFileString(FString path) {
	FString result;
	FFileHelper::LoadFileToString(result, *path);
	return result;
}


TArray<uint8> UFileUtilities::LoadFileBytes(FString path) {
	TArray<uint8> result;
	FFileHelper::LoadFileToArray(result, *path);
	return result;
}

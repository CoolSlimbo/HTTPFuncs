// 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "FileUtilities.generated.h"

/**
 * 
 */
UCLASS()
class HTTPBLUEPRINTS_API UFileUtilities : public UObject {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|File Utilities")
		static bool SaveFile(FString content, FString path);

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|File Utilities")
		static bool SaveFileBytes(TArray<uint8> content, FString path);

	UFUNCTION(BlueprintCallable, Category="HTTPBlueprint|File Utilities")
		static FString LoadFileString(FString path);

	UFUNCTION(BlueprintCallable, Category="HTTPBlueprint|File Utilities")
		static TArray<uint8> LoadFileBytes(FString path);
};

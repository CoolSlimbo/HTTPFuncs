// 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "URegex.generated.h"

/**
 * 
 */
UCLASS()
class HTTPBLUEPRINTS_API UURegex : public UObject {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Regex")
		static FString findMatch(FString pattern, FString text);
	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Regex")
		static FString replaceMatch(FString pattern, FString text, FString replace);
};
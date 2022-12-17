// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Json.h"
#include "JSONBase.generated.h"

UENUM()
enum class EValueTypes : uint8 {
	None = 1 UMETA(DisplayName = "NONE"),
	Null = 2 UMETA(DisplayName = "NULL"),
	String = 3 UMETA(DisplayName = "STRING"),
	Number = 4 UMETA(DisplayName = "NUMBER"),
	Boolean = 5 UMETA(DisplayName = "BOOLEAN"),
	Array = 6 UMETA(DisplayName = "ARRAY"),
	Object = 7 UMETA(DisplayName = "OBJECT")
};

UCLASS()
class UJSONBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
    UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Json Object"), Category = "HTTPBlueprint|Json")
        static UJSONBase* Create();

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|JSON")
		static UJSONBase* CreateFromString(FString content);
	
    static UJSONBase* CreateFromJSON(TSharedPtr<FJsonObject> JsonObject);

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|JSON")
		FString ToString();

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|JSON")
		bool FieldExists(FString field);

	UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|JSON")
		bool TypeOfFieldExists(FString field, EValueTypes type);

    UFUNCTION(BlueprintGetter, Category = "HTTPBlueprint|JSON")
        FORCEINLINE bool HasJsonObject() const { return mJsonObj.IsValid(); }

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetString(FString StringField, FString& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetBool(FString StringField, bool& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetFloat(FString StringField, float& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetInt(FString StringField, int& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetStringArray(FString StringField, TArray< FString >& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetJsonArray(FString StringField, TArray< UJSONBase* >& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetJson(FString StringField, UJSONBase*& Result);

    UFUNCTION(BlueprintCallable, Category = "HTTPBlueprint|Json")
        bool TryGetJsonObject(FString StringField, UJSONBase*& Result);

    FORCEINLINE void SetJson(TSharedPtr<FJsonObject> JsonObject) { mJsonObj = JsonObject; }
    FORCEINLINE TSharedPtr<FJsonObject> GetJson() { return mJsonObj; }

private:
	TSharedPtr<FJsonObject> mJsonObj;
};

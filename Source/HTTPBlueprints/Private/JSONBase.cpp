// Copyright Coffee Stain Studios. All Rights Reserved.


#include "JSONBase.h"

#include "FGResourceSinkSubsystem.h"

UJSONBase::UJSONBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{}

UJSONBase* UJSONBase::Create() {
    UJSONBase* JsonObject = NewObject< UJSONBase >();
    return JsonObject;
}

UJSONBase* UJSONBase::CreateFromString(FString content) {
	UJSONBase* jsonObj = NewObject<UJSONBase>();
	FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(content), jsonObj->mJsonObj);
	return jsonObj;
}

UJSONBase* UJSONBase::CreateFromJSON(TSharedPtr<FJsonObject> JsonObject) {
    UJSONBase* Object = Create();
    if (Object)
    {
        Object->SetJson(JsonObject);
    }    
    return Object;
}

FString UJSONBase::ToString() {
    FString JsonString;
    TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&JsonString);
    FJsonSerializer::Serialize(mJsonObj.ToSharedRef(), Writer);
    return JsonString;
}

bool UJSONBase::FieldExists(FString field) {
	return GetJson()->HasField(field);
}

bool UJSONBase::TypeOfFieldExists(FString field, EValueTypes type) {
	switch (type) {
	case EValueTypes::None:
		return GetJson()->HasTypedField<EJson::None>(field);
	case EValueTypes::Null:
		return GetJson()->HasTypedField<EJson::Null>(field);
	case EValueTypes::String:
		return GetJson()->HasTypedField<EJson::String>(field);
	case EValueTypes::Number:
		return GetJson()->HasTypedField<EJson::Number>(field);
	case EValueTypes::Boolean:
		return GetJson()->HasTypedField<EJson::Boolean>(field);
	case EValueTypes::Array:
		return GetJson()->HasTypedField<EJson::Array>(field);
	case EValueTypes::Object:
		return GetJson()->HasTypedField<EJson::Object>(field);
	default:
		return false;
	}
}

bool UJSONBase::TryGetString(FString StringField, FString& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    return GetJson()->TryGetStringField(StringField, Result);
}

bool UJSONBase::TryGetBool(FString StringField, bool& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    return GetJson()->TryGetBoolField(StringField, Result);
}

bool UJSONBase::TryGetFloat(FString StringField, float& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    double Num;
    const bool Success = GetJson()->TryGetNumberField(StringField, Num);
    Result = Num;
    return Success;
}
bool UJSONBase::TryGetInt(FString StringField, int& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    double Num;
    const bool Success = GetJson()->TryGetNumberField(StringField, Num);
    Result = Num;
    return Success;
}

bool UJSONBase::TryGetStringArray(FString StringField, TArray< FString >& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    GetJson()->TryGetStringArrayField(StringField, Result);
    return Result.Num() != 0;
}

bool UJSONBase::TryGetJsonArray(FString StringField, TArray< UJSONBase* >& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    Result.Empty();
    const TArray< TSharedPtr< FJsonValue > >* DataArray;
    if (GetJson()->TryGetArrayField(StringField, DataArray))
    {
        for (const TSharedPtr< FJsonValue > ArrayElement : *DataArray)
        {
            if (ArrayElement)
            {
                UJSONBase* ElementObj = CreateFromJSON(ArrayElement->AsObject());
                Result.Add(ElementObj);
            }
        }
    }
    return Result.Num() > 0;
}

bool UJSONBase::TryGetJson(FString StringField, UJSONBase*& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    Result = nullptr;
    TSharedPtr< FJsonValue > Field = GetJson()->TryGetField(StringField);
    if (Field)
    {
        Result = CreateFromJSON(Field->AsObject());
    }
    return Result != nullptr;
}

bool UJSONBase::TryGetJsonObject(FString StringField, UJSONBase*& Result)
{
    if (!HasJsonObject())
    {
        return false;
    }

    const TSharedPtr< FJsonObject >* Json;
    if (GetJson()->TryGetObjectField(StringField, Json))
    {
        bool Success = false;
        Result = CreateFromJSON(*Json);
        return Success;
    }

    return false;
}
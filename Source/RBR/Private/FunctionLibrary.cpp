// Fill out your copyright notice in the Description page of Project Settings.

#include "FunctionLibrary.h"
#include "RBR.h"

UBlueprintGeneratedClass* UFunctionLibrary::GetItemFromObjectLibrary(UObjectLibrary* ObjectLibrary, int32 ID, bool& Exists, int32& ArraySize)
{

	TArray<UBlueprintGeneratedClass*> ObjectList;
	ObjectLibrary->GetObjects<UBlueprintGeneratedClass>(ObjectList);
	ArraySize = ObjectList.Num();
	if (ObjectList.Num() > ID)
	{
		Exists = true;
		return ObjectList[ID];
	}
	else {
		Exists = false;
		return nullptr;
	}
}

FString UFunctionLibrary::GetProjectVersion()
{
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
	return ProjectVersion;
}



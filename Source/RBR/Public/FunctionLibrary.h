// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Object.h"
#include "FunctionLibrary.generated.h"

/*
 *
 * 
 */
UCLASS()
class RBR_API UFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Object Library")
		static UBlueprintGeneratedClass* GetItemFromObjectLibrary(UObjectLibrary* ObjectLibrary, int32 ID, bool& Exists, int32& ArraySize);

	UFUNCTION(BlueprintPure, Category = "Project")
		static FString GetProjectVersion();

	UFUNCTION(BlueprintPure, Category = "Math|Date Time")
		static void GetUTCFromUnixTimeStamp(int32 UnixTimeStamp, FDateTime& UTCTime)
	{
		//Please note it should really be int64 but that is not supported by BP yet
		UTCTime = FDateTime::FromUnixTimestamp(UnixTimeStamp);
	}

	UFUNCTION(BlueprintPure, Category = "Math|Date Time")
		static int32 GetUnixTimeStamp(const FDateTime& UTCTime)
	{
		//Please note it should really be int64 but that is not supported by BP yet
		return UTCTime.ToUnixTimestamp();
	}

	UFUNCTION(BlueprintPure, Category = "Engine")
		static bool IsWithEditor()
	{
	#if WITH_EDITOR
			return true;
	#else
			return false;
	#endif
	}
	
	
};

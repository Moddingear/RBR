// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class RBR_API UMyGameInstance : public UAdvancedFriendsGameInstance
{
	GENERATED_BODY()
	
	public:
		virtual void Init() override;

		UFUNCTION()
			virtual void BeginLoadingScreen(const FString& MapName);
		UFUNCTION()
			virtual void EndLoadingScreen(UWorld* InLoadedWorld);
	
	
	
};

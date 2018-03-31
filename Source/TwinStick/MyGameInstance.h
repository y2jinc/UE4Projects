// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TWINSTICK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	
	virtual void Init() override;

	UFUNCTION()
	virtual void BeginLoadingScreen(const FString& MapName);
	
	UFUNCTION()
	virtual void EndLoadingScreen(UWorld* InLoadedWorld);	
};

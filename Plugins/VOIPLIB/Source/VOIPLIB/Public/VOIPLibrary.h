// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintDataDefinitions.h"
#include "Interfaces/VoiceInterface.h"
#include "Online.h"
#include "OnlineSubsystem.h"
#include "UObject/UObjectIterator.h"
#include "Engine/GameInstance.h"
#include "VOIPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VOIPLIB_API UVOIPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "VOIP Library")
	static void ClearVoicePackets(UObject* WorldContextObject);
	
};

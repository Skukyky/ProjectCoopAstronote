// Fill out your copyright notice in the Description page of Project Settings.


#include "VOIPLibrary.h"

void UVOIPLibrary::ClearVoicePackets(UObject* WorldContextObject)
{
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(World))
	{
		return;
	}

	IOnlineVoicePtr VoiceInterface = Online::GetVoiceInterface(World);

	if (!VoiceInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Clear voice packets couldn't get the voice interface!"));
	}

	VoiceInterface->ClearVoicePackets();
}

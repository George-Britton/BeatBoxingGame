// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine.h"
#include "GetRainbowSignature.generated.h"

/**
 * 
 */
UCLASS()
class BEATBOXING_API UGetRainbowSignature : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static FString GetRainbowSignature(const int32 UniqueIdentifier);
	
	
};

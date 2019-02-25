// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine.h"
#include "CheckStreakValueByString.generated.h"

/**
 * 
 */
UCLASS()
class BEATBOXING_API UCheckStreakValueByString : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static int CheckStreakValueByString(const FString NewValue, FString LastGainedValue, int StreakCount);
	
	
};
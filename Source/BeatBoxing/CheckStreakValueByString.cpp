// Fill out your copyright notice in the Description page of Project Settings.

#include "CheckStreakValueByString.h"

UFUNCTION(BlueprintCallable)
int UCheckStreakValueByString::CheckStreakValueByString(const FString NewValue, FString LastGainedValue, int StreakCount)
{
	if (NewValue == "Violet" && LastGainedValue == "Indigo" && StreakCount == 6) { StreakCount = 7; }
	else if (NewValue == "Indigo" && LastGainedValue == "Blue" && StreakCount == 5) { StreakCount = 6; }
	else if (NewValue == "Blue" && LastGainedValue == "Green" && StreakCount == 4) { StreakCount = 5; }
	else if (NewValue == "Green" && LastGainedValue == "Yellow" && StreakCount == 3) { StreakCount = 4; }
	else if (NewValue == "Yellow" && LastGainedValue == "Orange" && StreakCount == 2) { StreakCount = 3; }
	else if (NewValue == "Orange" && LastGainedValue == "Red" && StreakCount == 1) { StreakCount = 2; }
	else if (NewValue == "Red") { StreakCount = 1; }
	else { StreakCount = 0; }

	return StreakCount;
}
// Fill out your copyright notice in the Description page of Project Settings.

#include "GetRainbowSignature.h"

UFUNCTION(BlueprintCallable)
FString UGetRainbowSignature::GetRainbowSignature(const int UniqueIdentifier)
{
	FString output = "Red";

	switch (UniqueIdentifier)
	{
	case 1: break;
	case 2: output = "Orange"; break;
	case 3: output = "Yellow"; break;
	case 4: output = "Green"; break;
	case 5: output = "Blue"; break;
	case 6: output = "Indigo"; break;
	case 7: output = "Violet"; break;
	}
	return output;
}



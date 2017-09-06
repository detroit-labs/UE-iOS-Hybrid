// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "iOSFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class HYBRID_API UiOSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category="User Interface")
	static void showNativeUI();
	
};

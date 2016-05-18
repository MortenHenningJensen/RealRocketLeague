// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResetBallPosition.generated.h"

/**
 * 
 */
UCLASS()
class REALRLEAGUE_API UResetBallPosition : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, meta = (FriendlyName = "ResetBallPosition", CompactNodeTitle = "ResetPos"), Category = "MyNodes")
		static void ResetPos(AActor Ball, FVector StarPosition);
	
	
};

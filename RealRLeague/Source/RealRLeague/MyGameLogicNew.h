// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyGameLogicNew.generated.h"

/**
 * 
 */
UCLASS()
class REALRLEAGUE_API UMyGameLogicNew : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "RedScore", CompactNodeTitle = "RedTeamScore", Category = "InGame Information"))
		static FString GetRedScore();

		UFUNCTION(BlueprintPure, meta = (DisplayName = "BlueScore", CompactNodeTitle = "BlueTeamScore", Category = "InGame Information"))
		static FString GetBlueScore();

		UFUNCTION(BlueprintPure, meta = (DisplayName = "AddGoal", CompactNodeTitle = "AddGoal", Category = "InGame Information"))
		static int AddGoal(int score);

//public:
//	int redHudScore;
//	int blueHudScore;
};

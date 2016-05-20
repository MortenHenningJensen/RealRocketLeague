// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "AGameLogic.generated.h"

UCLASS()
class REALRLEAGUE_API AAGameLogic : public AActor
{
	GENERATED_BODY()

	// Adds one to score
	UFUNCTION(BlueprintPure, meta = (DisplayName = "AddGoal", CompactNodeTitle = "AddGoal", Category = "InGame Information"))
	static int AddGoal(int score);
	
public:	
	// Sets default values for this actor's properties
	AAGameLogic();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Takes the redScore and runs the AddGoal-methoed and returns a new score
	UFUNCTION(BlueprintPure, meta = (DisplayName = "RedScore", CompactNodeTitle = "RedTeamScore", Category = "InGame Information"))
		static int GetRedScore(int score);
	// Takes the blueScore and runs the AddGoal-methoed and returns a new score
	UFUNCTION(BlueprintPure, meta = (DisplayName = "BlueScore", CompactNodeTitle = "BlueTeamScore", Category = "InGame Information"))
		static int GetBlueScore(int score);

	// Takes the blueScore and runs the AddGoal-methoed and returns a new score
	UFUNCTION(BlueprintPure, meta = (DisplayName = "StartGameTimer", CompactNodeTitle = "StartTimer", Category = "InGame Information"))
		static bool StartGameTime(bool timerStart);

};

// Fill out your copyright notice in the Description page of Project Settings.

#include "RealRLeague.h"
#include "AGameLogic.h"


// Sets default values
AAGameLogic::AAGameLogic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAGameLogic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAGameLogic::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

int AAGameLogic::GetRedScore(int getScore)
{
	int redScore;

	redScore = AddGoal(getScore);

	return redScore;
}

int AAGameLogic::GetBlueScore(int getScore)
{
	int blueScore;

	blueScore = AddGoal(getScore);

	return blueScore;
}

int AAGameLogic::AddGoal(int score)
{
	return score + 1;
}

bool AAGameLogic::StartGameTime(bool timerStart)
{
	if (!timerStart)
	{
		return false;
	}
	return true;
}

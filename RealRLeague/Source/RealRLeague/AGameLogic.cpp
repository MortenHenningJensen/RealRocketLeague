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

FString AAGameLogic::DrawRedScore(int score)
{
	FString _drawScore;
	FString teamName = "Red Team";
	FString scoreText = FString::FromInt(score);

	_drawScore = teamName + ": " + scoreText;

	return _drawScore;
}

FString AAGameLogic::DrawBlueScore(int score)
{
	FString _drawScore;
	FString teamName = "Blue Team";
	FString scoreText = FString::FromInt(score);

	_drawScore = teamName + ": " + scoreText;

	return _drawScore;
}

FString AAGameLogic::DrawGameTime(int minutes, int seconds)
{
	FString _updatedGT;
	FString _minutes;
	FString _seconds;
	FString _timeText = "Time: ";

	_minutes = FString::FromInt(minutes);
	_seconds = FString::FromInt(seconds);
	if (seconds > 9)
	{
		_updatedGT = _timeText + _minutes + ":" + _seconds;
		return _updatedGT;
	}

	_updatedGT = _timeText + _minutes + ":0" + _seconds;

	return _updatedGT;
}
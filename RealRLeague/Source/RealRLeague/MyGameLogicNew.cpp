// Fill out your copyright notice in the Description page of Project Settings.

#include "RealRLeague.h"
#include "MyGameLogicNew.h"

FString UMyGameLogicNew::GetRedScore() 
{
	FString RedScore;

	int newScore = FCString::Atoi(*RedScore);
	RedScore = FString::FromInt(AddGoal(newScore));
	
	return RedScore;
}

FString UMyGameLogicNew::GetBlueScore()
{
	FString BlueScore;

	return BlueScore;
}

int UMyGameLogicNew::AddGoal(int score)
{
	return score + 1;
}

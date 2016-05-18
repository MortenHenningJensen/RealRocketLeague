// Fill out your copyright notice in the Description page of Project Settings.

#include "RealRLeague.h"
#include "ResetBallPosition.h"

void UResetBallPosition::ResetPos(AActor Ball, FVector StartPosition) {
	Ball.SetActorLocation(StartPosition);
}



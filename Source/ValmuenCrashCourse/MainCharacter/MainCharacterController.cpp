// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterController.h"

AMainCharacterController::AMainCharacterController()
{
	bShowMouseCursor = true;
}



void AMainCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();
}



void AMainCharacterController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

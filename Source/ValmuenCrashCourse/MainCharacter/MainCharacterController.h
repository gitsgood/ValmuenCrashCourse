// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "GameFramework/PlayerController.h"
#include "MainCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class VALMUENCRASHCOURSE_API AMainCharacterController : public APlayerController
{
	GENERATED_BODY()	
	
public:
	AMainCharacterController();
	
protected:
	virtual void SetupInputComponent() override;
	virtual void OnPossess(APawn* InPawn) override;
	
private:
	UPROPERTY()
	TObjectPtr<AMainCharacter> AMainCharacter;
	
};

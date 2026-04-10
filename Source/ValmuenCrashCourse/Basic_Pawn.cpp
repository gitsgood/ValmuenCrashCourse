// Fill out your copyright notice in the Description page of Project Settings.


#include "Basic_Pawn.h"

// Sets default values
ABasic_Pawn::ABasic_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MagicalInt = 10;
	MagicalInt2 = 1;

}

// Called when the game starts or when spawned
void ABasic_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<int> IntArray = {1, 2, 3};
	IntArray.Add(1);
	
	for (auto Element: IntArray)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT("Element: %d"), Element));

	}
	
}

// Called every frame
void ABasic_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasic_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABasic_Pawn::AddInts()
{
	int newInte = MagicalInt + MagicalInt2;
	
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Example text that prints a float: %d"), newInte));
}

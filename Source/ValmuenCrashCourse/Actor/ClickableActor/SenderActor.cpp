// Fill out your copyright notice in the Description page of Project Settings.


#include "SenderActor.h"


// Sets default values
ASenderActor::ASenderActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh -> OnClicked.AddDynamic(this, &ASenderActor::ActorClicked);
}

// Called when the game starts or when spawned
void ASenderActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASenderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ASenderActor::ActorClicked(UPrimitiveComponent* pComponent, FKey ButtonPressed)
{
	
	UE_LOG(LogTemp, Warning, TEXT("Sending out %f to a receiver"), NumberToSend);

}


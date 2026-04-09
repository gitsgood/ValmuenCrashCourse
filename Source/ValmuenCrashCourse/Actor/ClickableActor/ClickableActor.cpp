// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickableActor.h"

// Sets default values
AClickableActor::AClickableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AClickableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClickableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh -> SetupAttachment(GetRootComponent());
}



void AClickableActor::ActorClicked(UPrimitiveComponent* pComponent, FKey ButtonPressed)
{
}



void AClickableActor::ActorMouseOverlapStart(UPrimitiveComponent* TouchedComponent)
{
}



void AClickableActor::ActorMouseOverlapEnd(UPrimitiveComponent* TouchedComponent)
{
}


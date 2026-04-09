// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClickableActor.h"
#include "SenderActor.generated.h"

UCLASS()
class VALMUENCRASHCOURSE_API ASenderActor : public AClickableActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASenderActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	UFUNCTION(BlueprintCallable)
	virtual void ActorClicked(UPrimitiveComponent* pComponent, FKey ButtonPressed) override;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClickableActor|Variables", meta = (AllowPrivateAccess = "true"))
	float NumberToSend;
};

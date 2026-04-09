// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClickableActor.generated.h"

UCLASS()
class VALMUENCRASHCOURSE_API AClickableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClickableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	/**
	 * 
	 * @param pComponent 
	 * @param ButtonPressed What Button is pressed
	 */
	
	virtual void ActorClicked(UPrimitiveComponent* pComponent, FKey ButtonPressed);
	UFUNCTION(BlueprintCallable)
	virtual void ActorMouseOverlapStart(UPrimitiveComponent* TouchedComponent);
	UFUNCTION(BlueprintCallable)
	virtual void ActorMouseOverlapEnd(UPrimitiveComponent* TouchedComponent);
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClickableActor", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;
	
	
};

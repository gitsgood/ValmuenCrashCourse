// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Spring Arm"));
	CameraSpringArm -> SetupAttachment(RootComponent.Get());
	
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (not IsLocallyControlled())
	{
		return;
	}
	APlayerController* CastPlayerController = Cast<APlayerController>(GetController());
	if (not CastPlayerController)
	{
		return;
	}
	
	
	// Epic Games. (n.d.). Using a Static Camera. Retrieved from Unreal Engine: https://dev.epicgames.com/documentation/en-us/unreal-engine/using-a-static-camera-in-unreal-engine
	TArray<AActor*> FoundCameras;
	
	// Atheist91. (2015, August). “Get All Actors Of Class” in C++. Retrieved from Unreal Engine: https://forums.unrealengine.com/t/get-all-actors-of-class-in-c/329740/4
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundCameras);
	auto* const CastCameraActor = Cast<ACameraActor>(FoundCameras[0]);
	if (not CastCameraActor)
	{
		return;
	}
	Camera = CastCameraActor;
	CastPlayerController -> SetViewTarget(Camera);
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


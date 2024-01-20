// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/IroasCharacter.h"

// Sets default values
AIroasCharacter::AIroasCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIroasCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIroasCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AIroasCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


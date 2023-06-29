// Fill out your copyright notice in the Description page of Project Settings.


#include "Juggernaut.h"

// Sets default values
AJuggernaut::AJuggernaut()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJuggernaut::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJuggernaut::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJuggernaut::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


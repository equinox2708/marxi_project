// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingElement.h"

// Sets default values
AMovingElement::AMovingElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingElement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


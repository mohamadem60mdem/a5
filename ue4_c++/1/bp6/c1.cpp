// Fill out your copyright notice in the Description page of Project Settings.

#include "c1.h"


// Sets default values
Ac1::Ac1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	s1 = "g2";
	
}

void Ac1::f1()
{
	GEngine->AddOnScreenDebugMessage(1, 1.5f, FColor::Yellow, s1);
}

// Called when the game starts or when spawned
void Ac1::BeginPlay()
{
	Super::BeginPlay();
	f1();
}

// Called every frame
void Ac1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	f1();
}

 

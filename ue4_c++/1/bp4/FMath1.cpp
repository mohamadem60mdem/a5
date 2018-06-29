// Fill out your copyright notice in the Description page of Project Settings.

#include "FMath1.h"


// Sets default values
AFMath1::AFMath1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	 s1 = "gggg3";
	 float1 = 0.0f;

}

// Called when the game starts or when spawned
void AFMath1::BeginPlay()
{
	Super::BeginPlay();
	//AFMath1::f1( );
}

// Called every frame
void AFMath1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	f1( DeltaTime);
}

float AFMath1::f1(float DeltaSecends)
{
	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(2, 0.5f, FColor::Yellow, FString::FromInt(MyNumber));
		// FString::SanitizeFloat() FString::FromInt(MyNumber) 
		GEngine->AddOnScreenDebugMessage(1, 1.5f, FColor::Yellow, s1);	
		GEngine->AddOnScreenDebugMessage(2, 1.5f, FColor::Yellow, FString::SanitizeFloat(DeltaSecends));

	}
	return 0.0f;
}


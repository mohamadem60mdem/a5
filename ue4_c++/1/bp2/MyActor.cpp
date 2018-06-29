// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 200;
	DamageTimeInSeconds = 1.f;
	DamagePerSecond = 1.f;


}

void AMyActor::CalculateValues()
{
	//DamagePerSecond = TotalDamage / DamageTimeInSeconds;
	//DamagePerSecond = TotalDamage - 2;
	TotalDamage = TotalDamage - 2;
	int i;
	FString Mesh;
	FString Mesh2;
	//TArray MeshArray;
	//FString MeshArray[];
	TArray<FString> MeshArray;

	for (i = 0; i < 10; i++)
	{
	//	Mesh =Mesh MeshArray[i];
		//Mesh += i ;
		 
		Mesh += FString::FromInt(i);
		Mesh2 = FString::FromInt(i);
		
		GLog->Log(Mesh2);
	}
	GLog->Log("XXzZz");
	GLog->Log(Mesh);


}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();

	CalculateValues();
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	DamagePerSecond = 1.f;

	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}


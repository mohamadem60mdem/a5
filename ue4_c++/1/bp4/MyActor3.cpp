// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor3.h"


// Sets default values
AMyActor3::AMyActor3()
{
 	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;
	 
	 MyNumber = 0;
	// s1 = "gggg";
	// FString ThePath = FString(FPlatformProcess::BaseDir());
	 s1 = FString(FPlatformProcess::BaseDir());
	 s2 = FPaths::ConvertRelativePathToFull(FPaths::RootDir());

	 s3 = FPaths::ConvertRelativePathToFull(FPaths::AutomationDir());

	 s4 = FPaths::AutomationDir();

	 s5 = FPaths::AutomationDir();
	 s6 = FPaths::AutomationLogDir();
	 s7 = FPaths::AutomationTransientDir();
	 s8 = FPaths::BugItDir();
	 s9 = FPaths::CloudDir();

	
}

// Called when the game starts or when spawned
void AMyActor3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//static const FString ScrollingMessage(TEXT("Hello World: "));

	if (GEngine)
	{

		const int32 MyNumberKey = 0; 
		
	//	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 0.5f, FColor::Yellow, ScrollingMessage + FString::FromInt(MyNumber));
		
		//GEngine->AddOnScreenDebugMessage(2, 0.5f, FColor::Yellow, FString::FromInt(MyNumber));
		//GEngine->AddOnScreenDebugMessage(2, 1.5f, FColor::Yellow, s1);
		GEngine->AddOnScreenDebugMessage(1, 1.5f, FColor::Yellow, s1);
		GEngine->AddOnScreenDebugMessage(2, 1.5f, FColor::Yellow, s2);
		GEngine->AddOnScreenDebugMessage(3, 1.5f, FColor::Yellow, s3);
		GEngine->AddOnScreenDebugMessage(4, 1.5f, FColor::Yellow, s4);

		GEngine->AddOnScreenDebugMessage(5, 1.5f, FColor::Red, s5);
		GEngine->AddOnScreenDebugMessage(6, 1.5f, FColor::Red, s6);
		GEngine->AddOnScreenDebugMessage(7, 1.5f, FColor::Red, s7);
		GEngine->AddOnScreenDebugMessage(8, 1.5f, FColor::Red, s8);
		GEngine->AddOnScreenDebugMessage(9, 1.5f, FColor::Red, s9);
		
		
	}
}


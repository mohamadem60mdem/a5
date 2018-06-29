// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDataTable1.h"

// Sets default values
UMyDataTable1::UMyDataTable1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
 
	s1 = "gggg3";
	float1 = 0.0f;
	f1(float1);
}

  

float UMyDataTable1::f1(float DeltaSecends)
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

void UMyDataTable1::f2(FString s1)
{
	
	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(2, 0.5f, FColor::Yellow, FString::FromInt(MyNumber));
		// FString::SanitizeFloat() FString::FromInt(MyNumber) 
		GEngine->AddOnScreenDebugMessage(2, 1.5f, FColor::Yellow, s1);
		
	}
	
}

FString UMyDataTable1::f3(FString Point) const
{
 
	return Point;
}

 

float UMyDataTable1::f4(float A)
{
	return 0.0f;
}


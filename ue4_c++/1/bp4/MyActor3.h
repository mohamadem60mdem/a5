// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "Engine.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "GameFramework/Actor.h"
#include "MyActor3.generated.h"

UCLASS()
class BP4_API AMyActor3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor3();
	int32 MyNumber;
	FString s1,s2,s3,s4,s5,s6,s7,s8,s9;
	//static FString AutomationDir() ;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

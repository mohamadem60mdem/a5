// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FMath1.generated.h"

UCLASS(Blueprintable)
class BP4_API AFMath1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFMath1();
	FString s1, s2, s3, s4, s5, s6, s7, s8, s9;
	float float1, float2, float3;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// -- ****************************************************************** -- //
	//	salam _ List Of Custom Function f1,f2,f3,...
	// -- ****************************************************************** -- //
	float f1(float DeltaSecends);




	// -- ****************************************************************** -- //
	//	salam
	// -- ****************************************************************** -- //

	
	
};

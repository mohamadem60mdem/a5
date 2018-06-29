// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class BP2_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "emami***********")
		int32 TOOOOOOOOOOOOe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "emami***********")
		int32 TotalDamage;

	  
		 


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "emami***********")
		float DamageTimeInSeconds;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "emami***********")
		float DamagePerSecond;


	UFUNCTION(BlueprintCallable, Category = "emami***********")
		void CalculateValues();


	UFUNCTION(BlueprintCallable, Category = "emami***********")
		void PostInitProperties();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

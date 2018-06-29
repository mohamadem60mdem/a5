// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "MyDataTable1.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BP5_API UMyDataTable1 :  public UDataTable
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	UMyDataTable1();
	FString s1, s2, s3, s4, s5, s6, s7, s8, s9;
	float float1, float2, float3;



public:

	// -- ****************************************************************** -- //
	//	salam _ List Of Custom Function f1,f2,f3,...
	// -- ****************************************************************** -- //
	float f1(float DeltaSecends);
	
	UFUNCTION(BlueprintCallable, Category = "emami***********")
	void f2(FString s1);

	UFUNCTION(BlueprintCallable, Category = "emami***********")
		FString f3(FString Point) const;

	UFUNCTION(BlueprintPure, Category = "emami***********") 
	static float f4(float A=2);


	// -- ****************************************************************** -- //
	//	salam
	// -- ****************************************************************** -- //

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConstructorHelpers.h"
#include "UnrealString.h"
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "MyActor2.generated.h"
//
//UCLASS()
//class BP4_API AMyActor2 : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AMyActor2();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	
//	
//};



USTRUCT(Blueprintable)
struct FMyActor2 : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()



		//UPROPERTY(BlueprintReadOnly, Category = "GO")
		//uint8 j1;
	//	
	//	UPROPERTY(BlueprintReadOnly, Category = "GO")
	//	int32 BasicBits;


	///** Full Path of Blueprint */
	//UPROPERTY(BlueprintReadOnly, Category = "GO")
	//	FString Blueprint_Class;


	///** Category of GamePlay Object */
	//UPROPERTY(BlueprintReadOnly, Category = "GO")
	//	int32 Category;

	/** Scriptable Use Code */
		UPROPERTY(BlueprintReadOnly, Category = "GO")
		int32 a;

	/** Scriptable Use Code */
	UPROPERTY(BlueprintReadOnly, Category = "GO")
		int32 b;

	/** Scriptable Use Code */
	UPROPERTY(BlueprintReadOnly, Category = "GO")
		int32 c;

};



// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "UnrealString.h"
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"


USTRUCT(Blueprintable)
struct FMyActor1 : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()



		//UPROPERTY(BlueprintReadOnly, Category = "GO")
		//uint8 j1;

	UPROPERTY(BlueprintReadOnly, Category = "GO")
		int32 BasicBits;

	 
	/** Full Path of Blueprint */
	UPROPERTY(BlueprintReadOnly, Category = "GO")
		FString Blueprint_Class;

	


};



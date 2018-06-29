// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Struct1.generated.h"

/**
 * 
 */
UCLASS()
class BP4_API UStruct1 : public UUserDefinedStruct
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 XPtoLv02;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "e***")
		int32 XPtoLv01;

	
};

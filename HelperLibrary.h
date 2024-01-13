// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GMCPPBlueprintFunctionLibrary.generated.h"


/**
 *
 */
UCLASS()
class GM_API UGMCPPBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HelperLibrary")
		static FVector CalculateProjectileDirection(FVector Target, FVector Origin, FVector Gravity, float Speed, bool& bWillHit, float& Time);


	/**
	* Calculate a projectile direction to hit a target with constant velocity
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "HelperLibrary")
		static FVector CalculateProjectileDirectionForMovingTarget(FVector Target, FVector TargetVelocity, FVector Origin, FVector Gravity, float Speed, bool& bWillHit, float& Time, int Iterations = 5, float EpsilonTime = 0.01f);

};

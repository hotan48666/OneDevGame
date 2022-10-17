// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyPlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ONEDEVGAME_API UMyPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);

	virtual void NativeInitializeAnimation() override;

private:

	// Create variable to have reference to Wukong character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	class AMyPlayerCharacter* PlayerCharacter;

	// Speed of Wukong
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Speed;
};

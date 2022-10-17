// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyBaseCharacter.h"
#include "MyPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ONEDEVGAME_API AMyPlayerCharacter : public AMyBaseCharacter
{
	GENERATED_BODY()
public:
	
	AMyPlayerCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FollowCamera;

protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)override;

	void MoveForward(float value);

	void MoveRight(float value);
};

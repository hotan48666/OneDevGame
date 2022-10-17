// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerAnimInstance.h"

#include "MyPlayerCharacter.h"

void UMyPlayerAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (PlayerCharacter == nullptr)
	{
		PlayerCharacter = Cast<AMyPlayerCharacter>(TryGetPawnOwner());
	}
	 
	if (PlayerCharacter)
	{
		// Get speed of Wukong from velocity
		FVector Velocity{ PlayerCharacter->GetVelocity() };
		Velocity.Z = 0;
		Speed = Velocity.Size();
	}
}

void UMyPlayerAnimInstance::NativeInitializeAnimation()
{
	PlayerCharacter = Cast<AMyPlayerCharacter>(TryGetPawnOwner());
}
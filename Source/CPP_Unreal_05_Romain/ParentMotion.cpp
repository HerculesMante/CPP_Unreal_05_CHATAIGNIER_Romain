// Fill out your copyright notice in the Description page of Project Settings.


#include "ParentMotion.h"

// Sets default values
AParentMotion::AParentMotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PitchValue = 0.0f;
	YawValue = 0.0f;
	RollValue = 0.0f;
}

// Called when the game starts or when spawned
void AParentMotion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AParentMotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator SelfRotate = GetActorRotation();
	SetActorRotation(SelfRotate + FRotator(PitchValue, YawValue, RollValue));

}
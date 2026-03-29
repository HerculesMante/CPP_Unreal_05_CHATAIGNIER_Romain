// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParentMotion.generated.h"

UCLASS()
class CPP_UNREAL_05_ROMAIN_API AParentMotion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParentMotion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, Category ="Rotation")
	float PitchValue;
	UPROPERTY(EditAnywhere, Category = "Rotation")
	float YawValue;
	UPROPERTY(EditAnywhere, Category = "Rotation")
	float RollValue;


	AActor* Actor;
};

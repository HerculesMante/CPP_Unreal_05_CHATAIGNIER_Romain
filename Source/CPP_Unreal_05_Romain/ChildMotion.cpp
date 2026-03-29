// Fill out your copyright notice in the Description page of Project Settings.


#include "ChildMotion.h"

// Sets default values
AChildMotion::AChildMotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(MeshComponent);
}

// Called when the game starts or when spawned
void AChildMotion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChildMotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AChildMotion::TranslateFromRotationForward_Implementation(FRotator Rotation, float Distance)
{
	Distance = 10.0f;

	FVector Location = GetActorLocation();
	Location += GetActorForwardVector() * 20 * Distance;
	SetActorLocation(Location);
}

void AChildMotion::HorizontalLookAtActor_Implementation(AActor* Actor)
{
	UWorld* World = GetWorld();
	if (World == nullptr)
		return;

	FRotator Rotation = GetActorRotation();
}


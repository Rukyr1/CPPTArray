// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class M260417_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "TEST")
	TArray<TObjectPtr<USceneComponent>> Components;
	
	UPROPERTY(EditAnywhere, Category = "TEST")
	UClass* MyClass;
	
	UPROPERTY(EditAnywhere, Category = "TEST")
	TSubclassOf<UClass> MyActorClass;
};

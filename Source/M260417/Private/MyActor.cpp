// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

#include "AudioMixerBlueprintLibrary.h"
#include "ContentBrowserItemData.h"
//#include "Math/UnrealMathFPU.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<FString> Inventory;
	Inventory.Add(TEXT("Sword"));
	Inventory.Add(TEXT("Shield"));
	
	TMap<FString, FString> ItemMap;
	ItemMap.Add(TEXT("Sword"), TEXT("Broken Sword"));
	ItemMap.Add(TEXT("Shield"), TEXT("Wood Shield"));
	
	TSet<FString> TitleSet;
	TitleSet.Add(TEXT("Starter"));
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}


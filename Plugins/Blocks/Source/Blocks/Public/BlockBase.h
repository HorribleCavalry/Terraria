// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockBase.generated.h"

UCLASS()
class BLOCKS_API ABlockBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FString BlockBaseContentPath;
public:
	UPROPERTY(EditAnywhere)
	uint32 BlockID;

	UPROPERTY(EditAnywhere)
	bool bMobility;

	UPROPERTY(EditAnywhere)
	uint32 Infectivity;

	UPROPERTY(EditAnywhere)
	bool bCanBeInfected;

public:
	virtual void OnBlockIdChanged();
	virtual void OnBlockPlanted();
	virtual void OnBlockDestroyed();
	virtual void OnCharacterTouched();
	virtual void OnCharacterDigged();
	virtual void OnBulletHitted();

public:
	virtual void InitializeBlockMesh();
	virtual void InitializeBlockBlockMaterial();
	virtual void InitializeBlockProperity();
};

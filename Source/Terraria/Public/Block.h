// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS()
class TERRARIA_API ABlockBase : public AActor
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
public:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BlockMesh;

	UPROPERTY(EditAnywhere)
	UMaterial* BlockMaterial;

	UPROPERTY(EditAnywhere)
	uint32 BlockID;

	virtual void OnBlockIDChanged();
	virtual void OnBlockPlanted();
	virtual void OnBlockDestroyed();

	virtual void OnCharacterTouched();
	virtual void OnCharacterDigged();

	virtual void OnBulletHitted();

private:

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"

// Sets default values
ABlockBase::ABlockBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> LoadedBlockMesh(TEXT("/Game/Meshes/SM_Block"));
	BlockMesh->SetStaticMesh(LoadedBlockMesh.Object);
	
	ConstructorHelpers::FObjectFinder<UMaterial> LoadedBlockMaterial(TEXT("/Game/Materials/BlockMaterials/TestMaterial"));
	BlockMesh->SetMaterial(0, LoadedBlockMaterial.Object);
}

// Called when the game starts or when spawned
void ABlockBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABlockBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABlockBase::OnBlockIDChanged()
{
}

void ABlockBase::OnBlockPlanted()
{
}

void ABlockBase::OnBlockDestroyed()
{
}

void ABlockBase::OnCharacterTouched()
{
}

void ABlockBase::OnCharacterDigged()
{
}

void ABlockBase::OnBulletHitted()
{
}

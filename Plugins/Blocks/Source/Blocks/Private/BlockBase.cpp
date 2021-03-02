// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockBase.h"

// Sets default values
ABlockBase::ABlockBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	InitializeBlockMesh();
	InitializeBlockBlockMaterial();
	InitializeBlockProperity();
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

void ABlockBase::OnBlockIdChanged()
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

void ABlockBase::InitializeBlockMesh()
{
}

void ABlockBase::InitializeBlockBlockMaterial()
{
}

void ABlockBase::InitializeBlockProperity()
{
	BlockBaseContentPath = TEXT("/Blocks/Content/Blocks");
}


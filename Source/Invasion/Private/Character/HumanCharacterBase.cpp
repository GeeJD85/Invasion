// Copyright Mintcake Games


#include "Character/HumanCharacterBase.h"

ABaseHumanCharacter::ABaseHumanCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh());

}

void ABaseHumanCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


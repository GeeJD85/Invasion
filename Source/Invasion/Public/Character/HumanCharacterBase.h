// Copyright Mintcake Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HumanCharacterBase.generated.h"

UCLASS()
class INVASION_API ABaseHumanCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseHumanCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> Weapon;

};

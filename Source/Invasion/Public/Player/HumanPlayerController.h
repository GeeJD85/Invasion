// Copyright Mintcake Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HumanPlayerController.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class INVASION_API AHumanPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AHumanPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> HumanContext;
	
};

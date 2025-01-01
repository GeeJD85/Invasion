// Copyright Mintcake Games

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "HumanPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
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
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> HumanContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> HumanMoveAction;

	void Move(const FInputActionValue& InputActionValue);
	
};

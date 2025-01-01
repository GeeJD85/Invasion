// Copyright Mintcake Games


#include "Player/HumanPlayerController.h"

#include "EnhancedInputSubsystems.h"

AHumanPlayerController::AHumanPlayerController()
{
	bReplicates = true;
}

void AHumanPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(HumanContext); // Halt execution & crash if this fails

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(HumanContext, 0);
}

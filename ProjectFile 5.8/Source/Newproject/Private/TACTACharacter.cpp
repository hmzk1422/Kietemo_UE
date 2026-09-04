#include "TACTACharacter.h"

ATACTACharacter::ATACTACharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ATACTACharacter::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("TACTA CHARACTER SPAWNED"));
}

void ATACTACharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATACTACharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
FVector ATACTACharacter::GetTACTAWorldPosition() const
{
    return GetActorLocation();
}
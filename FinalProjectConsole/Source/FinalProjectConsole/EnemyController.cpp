// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


AEnemyController::AEnemyController()
{
    PrimaryActorTick.bCanEverTick = true;
    bAttachToPawn = true;
}

void AEnemyController::BeginPlay()
{
    Super::BeginPlay();
    ChooseLocation();

}

void AEnemyController::Tick(float DeltaTime)
{

    Super::Tick(DeltaTime);

    playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    enemyPawn = GetPawn();

    if (enemyPawn && playerCharacter)
    {
        float Distance = FVector::Dist(enemyPawn->GetActorLocation(), playerCharacter->GetActorLocation());

        if (Distance < chaseDistance)
        {
            ChasePlayer();
        }
    }

}

void AEnemyController::ChasePlayer()
{
    playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!playerCharacter) return;

    MoveToLocation(playerCharacter->GetActorLocation());
}

void AEnemyController::Patrol()
{
    MoveToLocation(currentPatrolLocation);
}

void AEnemyController::ChooseLocation()
{
    enemyPawn = GetPawn();
    FVector origin = enemyPawn->GetActorLocation();

    float randomX = FMath::FRandRange(-4000.0f, 4000.0f);
    float randomY = FMath::FRandRange(-4000.0f, 4000.0f);

    currentPatrolLocation = origin + FVector(randomX, randomY, 0.f);

    Patrol();

}


void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    Super::OnMoveCompleted(RequestID, Result);

    GetWorldTimerManager().SetTimer(patrolTimerHandle, this, &AEnemyController::ChooseLocation, patrolTimeInterval, false);

}

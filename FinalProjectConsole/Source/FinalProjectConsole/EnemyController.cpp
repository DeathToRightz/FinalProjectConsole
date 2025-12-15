// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"


AEnemyController::AEnemyController()
{
    PrimaryActorTick.bCanEverTick = true;
    bAttachToPawn = true;
}

void AEnemyController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    
}

void AEnemyController::BeginPlay()
{
    Super::BeginPlay();

    enemyPawn = GetPawn();

    if (enemyPawn)
    {
        FProperty* Actor01ByName = enemyPawn->GetClass()->FindPropertyByName("Location01");
        FProperty* Actor02ByName = enemyPawn->GetClass()->FindPropertyByName("Location02");
        FProperty* Actor03ByName = enemyPawn->GetClass()->FindPropertyByName("Location03");

        FObjectProperty* Actor01ByName_Obj = CastField<FObjectProperty>(Actor01ByName);
        FObjectProperty* Actor02ByName_Obj = CastField<FObjectProperty>(Actor02ByName);
        FObjectProperty* Actor03ByName_Obj = CastField<FObjectProperty>(Actor03ByName);

        UObject* Location01_Value = Actor01ByName_Obj->GetObjectPropertyValue_InContainer(enemyPawn);
        UObject* Location02_Value = Actor02ByName_Obj->GetObjectPropertyValue_InContainer(enemyPawn);
        UObject* Location03_Value = Actor03ByName_Obj->GetObjectPropertyValue_InContainer(enemyPawn);

        AActor* Location01_Actor = Cast<AActor>(Location01_Value);
        AActor* Location02_Actor = Cast<AActor>(Location02_Value);
        AActor* Location03_Actor = Cast<AActor>(Location03_Value);

        Location01Coordinates = Location01_Actor->GetActorLocation();
        Location02Coordinates = Location02_Actor->GetActorLocation();
        Location03Coordinates = Location03_Actor->GetActorLocation();

        
    }
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

    if (patrolSpotNumber < 3)
    {
        patrolSpotNumber++;
    }
    else
    {
        patrolSpotNumber = 1;
    }

    switch (patrolSpotNumber) {
    case 1:
        currentPatrolLocation = Location01Coordinates;
        break;

    case 2:
        currentPatrolLocation = Location02Coordinates;
        break;

    case 3:
        currentPatrolLocation = Location03Coordinates;
        break;

    default:
        return;
    }

    Patrol();

}


void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    Super::OnMoveCompleted(RequestID, Result);

    GetWorldTimerManager().SetTimer(patrolTimerHandle, this, &AEnemyController::ChooseLocation, patrolTimeInterval, false);

}

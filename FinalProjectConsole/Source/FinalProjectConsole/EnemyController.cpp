// Final Project Assignment
// Logan Cordova & Irina Mishina
// 12/15/2025


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



void AEnemyController::BeginPlay()
{
    Super::BeginPlay();

    enemyPawn = GetPawn();

    if (enemyPawn)// finds the object (property in the game) by the name, sets it as an object property and assigns it to an object to then convert to an actor and get the actor's location for the patroling points. TLDR: gets the patroling points
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

void AEnemyController::Tick(float DeltaTime)//Checks distance between the enemy and the player to determine whether the enemy should chase
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

void AEnemyController::ChasePlayer()//chases player based on current location
{
    playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!playerCharacter) return;

    MoveToLocation(playerCharacter->GetActorLocation());
}

void AEnemyController::Patrol()//moves to the patrol location set
{
    MoveToLocation(currentPatrolLocation);
}

void AEnemyController::ChooseLocation()//sets the patrol location depending on the "sequence" step and resets when completed
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


void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)//checks when the enemy completed its move (patrol) to start a delay timer in between the walking
{
    Super::OnMoveCompleted(RequestID, Result);

    GetWorldTimerManager().SetTimer(patrolTimerHandle, this, &AEnemyController::ChooseLocation, patrolTimeInterval, false);

}

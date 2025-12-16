// Final Project Assignment
// Logan Cordova & Irina Mishina
// 12/15/2025

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/Pawn.h"
#include "TimerManager.h"
#include "EnemyController.generated.h"
/**
 * 
 */
UCLASS()
class FINALPROJECTCONSOLE_API AEnemyController : public AAIController
{
	GENERATED_BODY()
	
public:
    AEnemyController();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    float chaseDistance = 800.0f;
    float patrolTimeInterval = 5.f;
    int patrolSpotNumber = 0;

    FVector currentPatrolLocation;
    FVector Location01Coordinates;
    FVector Location02Coordinates;
    FVector Location03Coordinates;
    ACharacter* playerCharacter;
    APawn* enemyPawn;



private:
    void ChasePlayer();
    void Patrol();
    void ChooseLocation();

    void OnMoveCompleted(struct FAIRequestID RequestID, const struct FPathFollowingResult& Result) override;

    FTimerHandle patrolTimerHandle;


public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Patrol")
    AActor* Location1;
};

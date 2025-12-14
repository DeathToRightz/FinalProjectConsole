// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
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

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Patrol Locations")
    class AActor* Location01;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    float chaseDistance = 800.0f;
    float patrolTimeInterval = 5.f;

    FVector currentPatrolLocation;
    ACharacter* playerCharacter;
    APawn* enemyPawn;


private:
    void ChasePlayer();
    void Patrol();
    void ChooseLocation();

    void OnMoveCompleted(struct FAIRequestID RequestID, const struct FPathFollowingResult& Result) override;

    FTimerHandle patrolTimerHandle;
};

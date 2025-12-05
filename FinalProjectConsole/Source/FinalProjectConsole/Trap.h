// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Trap.generated.h"

UCLASS()
class FINALPROJECTCONSOLE_API ATrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrap();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage variables")
	float Damage = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage variables")
	float DamageRate = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toggles")
	bool DestroyOnImpact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Toggles")
	bool ContinuesDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit box measurements")
	FVector HitBoxMesurements = FVector(10,10,10);

protected:
	// Called when the game starts or when spawned
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	UFUNCTION()
	void OnHit(
		AActor* SelfActor,
		AActor* OtherActor,
		FVector NormalImpulse,
		const FHitResult& Hit
	);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimerManager.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FINALPROJECTCONSOLE_API UHealth_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealth_Component();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Variables")
	float  MaxHealth = 100;

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigateBy, AActor* DamageCauser);

	UPROPERTY()
	AActor* Owner;	

	UFUNCTION()
	void TakeDamageDelay();

	bool CanBeDamaged = true;
protected:
	
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	float  Health;

	FTimerHandle TimerHandle;
		
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

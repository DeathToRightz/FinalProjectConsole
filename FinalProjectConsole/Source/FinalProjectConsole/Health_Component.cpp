// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"
#include "Health_Component.h"

// Sets default values for this component's properties
UHealth_Component::UHealth_Component()
{
	PrimaryComponentTick.bCanEverTick = true;
	
	Owner = GetOwner(); //Gets actor that health component is attached to
	
	if (!Owner) { return; }
	else
	{
			GEngine->AddOnScreenDebugMessage
	(
		-1,
		3.0f,
		FColor::Red,
		FString::Printf(TEXT("Owner Found"))
	);

		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealth_Component::TakeDamage); //Bind the function
	}
}

// Called when the game starts
void UHealth_Component::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth; //Sets health for attached actor

	UE_LOG(LogTemp, Warning, TEXT("Current Health, %f"), Health);
	
}


// Called every frame
void UHealth_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UHealth_Component::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigateBy, AActor* DamageCauser)
{
	
	if (Damage <= 0 || Health <= 0) return;  //Doesn't deal damage if actor is "dead" or no damage is being applied

	if (!CanBeDamaged) return;

	Health = FMath::Clamp(Health - Damage, 0, Health); //Makes sure health doesn't go below 0

	GEngine->AddOnScreenDebugMessage
	(
		-1,
		3.0f,
		FColor::Red,
		FString::Printf(TEXT("Current Health: %f"), Health)
	);
	
	
}

void UHealth_Component::TakeDamageDelay()
{
	CanBeDamaged = !CanBeDamaged;
	GEngine->AddOnScreenDebugMessage
	(
		-1,
		3.0f,
		FColor::Red,
		FString::Printf(TEXT("Can be damaged"))
	);
}

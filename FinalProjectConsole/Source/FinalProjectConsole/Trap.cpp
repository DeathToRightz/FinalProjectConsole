// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "FinalProjectConsoleCharacter.h"
#include "Health_Component.h"
#include "Trap.h"

// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit Box"));
	BoxCollider->SetCollisionProfileName("BlockAllDynamic");
	RootComponent = BoxCollider;
	OnActorHit.AddDynamic(this, &ATrap::OnHit);
}



void ATrap::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	BoxCollider->SetBoxExtent(HitBoxMesurements, true); //Sets the dimensions of the box collider
}

// Called every frame
void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrap::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this) //If the hit actor isn't itself damage hit actor
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, GetWorld()->GetFirstPlayerController(), this, UDamageType::StaticClass());	
	}

	if (!ContinuesDamage) //If the toggle is off it uses the damage rate set for trap
	{
		if (AFinalProjectConsoleCharacter* HitActor = Cast<AFinalProjectConsoleCharacter>(OtherActor)) //Creates hit actor ref to call timer for damage rate
		{
			UHealth_Component* Comp = HitActor->FindComponentByClass< UHealth_Component>();

			if (Comp && Comp->CanBeDamaged) //If the actor can be damaged and finds the health component
			{
				FTimerHandle TimerHandle;

				Comp->CanBeDamaged = false;
				Comp->GetWorld()->GetTimerManager().SetTimer(TimerHandle, Comp, &UHealth_Component::TakeDamageDelay, DamageRate, false);

			}
		}
	}
	if (DestroyOnImpact) { Destroy(); }
}


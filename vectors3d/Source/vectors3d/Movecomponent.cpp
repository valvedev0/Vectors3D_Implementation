// Fill out your copyright notice in the Description page of Project Settings.


#include "Movecomponent.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UMovecomponent::UMovecomponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovecomponent::BeginPlay()
{
	Super::BeginPlay();

	// location of enemy 
	
	
	// calculating the direction
	


	// Normalising the vector
	//MoveOffsetNorm = MoveOffset;
	//MoveOffsetNorm.Normalize();

	// Calculate the max distance
	//MaxDis = MoveOffset.Size();
	
	
	
}


// Called every frame
void UMovecomponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// speed and delta multiplication 

	//CurDis += DeltaTime * Speed * MaxDis;

	//if (CurDis >= MaxDis || CurDis <= 0.0f)
		//Movedirection *= -1;

	StartRelativeLocationEnemy = GetRelativeLocation();
	
	// location of actor
	StartRelativeLocationActor = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player Location: %s"), *StartRelativeLocationActor.ToString()));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Enemy Location: %s"), *StartRelativeLocationEnemy.ToString()));

	//calculating the distance 
	/*distance = (StartRelativeLocationActor - StartRelativeLocationEnemy).Size();*/

	//StringValue = FString::SanitizeFloat(distance);

	//DrawDebugString(GetWorld(), FVector(-1.0f, 5.0f, 0.0f), StringValue, nullptr, FColor::Blue, 0.0f, true);

	direction = StartRelativeLocationActor - StartRelativeLocationEnemy;

	direction.Normalize();

	float Distance = FVector::Distance(StartRelativeLocationActor, StartRelativeLocationEnemy);
	if (Distance < 1500)
	{
		SetRelativeLocation(StartRelativeLocationEnemy + (direction * Speed * GetWorld()->GetDeltaSeconds()));

	}

		// setting the position everry tick
	

	//SetActorLocation(CurrentLocation + (Direction * Speed * GetWorld()->GetDeltaSeconds()));
	
}


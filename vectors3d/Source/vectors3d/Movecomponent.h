// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "Movecomponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VECTORS3D_API UMovecomponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovecomponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
private:

	// the distance b/w current and the pos set
	UPROPERTY(EditAnywhere)
		FVector MoveOffset;
	// speed
	UPROPERTY(EditAnywhere)
		float Speed = 1.0f;
	
	
	//default location
	FVector StartRelativeLocationEnemy;
	FVector StartRelativeLocationActor;

	//normalising the moveoffset vector to use in cpp file
	//FVector MoveOffsetNorm;

	//float MaxDis = 0.0f;
	//float CurDis = 0.0f;
	FVector direction;

	float distance = 0.0;

	FString StringValue;
	float movedir = 0.0f;
	float CurDis = 0.0f;
};

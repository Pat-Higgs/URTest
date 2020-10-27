// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Collider.generated.h"

UCLASS()
class FIRSTPROJECT_API ACollider : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACollider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UStaticMeshComponent* MeshComponent;
	FORCEINLINE UStaticMeshComponent* GetMeshcomponent()
	{
		return MeshComponent;
	}
	FORCEINLINE	void SetMeshComponent(UStaticMeshComponent* Mesh)
	{
		MeshComponent = Mesh;
	}
	
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USphereComponent* SphereComponent;
	FORCEINLINE USphereComponent* GetSpherecomponent()
	{
		return SphereComponent;
	}
	FORCEINLINE	void SetSphereComponent(USphereComponent* Mesh)
	{
		SphereComponent = Mesh;
	}

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UCameraComponent* Camera;
	FORCEINLINE UCameraComponent* GetCameracomponent()
	{
		return Camera;
	}
	FORCEINLINE	void SetCameraComponent(UCameraComponent* camera)
	{
		Camera = camera;
	}

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USpringArmComponent* SpringArm;
	FORCEINLINE USpringArmComponent* GetSpringArmcomponent()
	{
		return SpringArm;
	}
	FORCEINLINE	void SetSpringArmComponent(USpringArmComponent* springArm)
	{
		SpringArm = springArm;
	}

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	class UCollierMovementComponent* OurMovementComponent;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

private:
	void MoveForward(float value);
	void MoveRight(float value);

	
};

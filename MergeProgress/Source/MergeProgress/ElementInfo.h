// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ElementInfo.generated.h"

UENUM(BlueprintType)
enum class ElementBranch : uint8 {
	A = 0	UMETA(DisplayName = "A"),
	B = 1	UMETA(DisplayName = "B"),
	C = 2	UMETA(DisplayName = "C"),
	D = 3	UMETA(DisplayName = "D"),
};


UENUM(BlueprintType)
enum class ElementInstructions : uint8 {
	Merging = 0			UMETA(DisplayName = "Merging"),
	FeatureMerging = 1	UMETA(DisplayName = "FeatureMerging"),
};

USTRUCT(BlueprintType)
struct FDAElementInfo {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FString ID;

	UPROPERTY(EditAnywhere)
	FString name;

	UPROPERTY(EditAnywhere)
	bool isDiscovered;

	UPROPERTY(EditAnywhere)
	bool isReMergeable;

	UPROPERTY(EditAnywhere)
	APawn* prefabElement;

	UPROPERTY(EditAnywhere)
		ElementBranch branch;

	UPROPERTY(EditAnywhere)
		ElementInstructions instructions;

};

UCLASS()
class MERGEPROGRESS_API UElementInfo : public UPrimaryDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FDAElementInfo info;
	
};

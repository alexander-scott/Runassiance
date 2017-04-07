// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/TriggerVolume.h"
#include "MyTriggerVolume.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ECameraMoveEnum : uint8
{
	CME_ETL 	UMETA(DisplayName = "Extreme Top Left"),
	CME_TL 	UMETA(DisplayName = "Top Left"),
	CME_T 	UMETA(DisplayName = "Top"),
	CME_TR 	UMETA(DisplayName = "Top Right"),
	CME_ETR 	UMETA(DisplayName = "Extreme Top Right"),
	CME_EBL	UMETA(DisplayName = "Extreme Bottom Left"),
	CME_BL 	UMETA(DisplayName = "Bottom Left"),
	CME_B 	UMETA(DisplayName = "Bottom"),
	CME_BR 	UMETA(DisplayName = "Bottom Right"),
	CME_EBR 	UMETA(DisplayName = "Extreme Bottom Right")
};

/**
*
*/
UCLASS()
class MYPROJECT_API AMyTriggerVolume : public ATriggerVolume
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECameraMoveEnum CameraMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float targetArmLength;

};

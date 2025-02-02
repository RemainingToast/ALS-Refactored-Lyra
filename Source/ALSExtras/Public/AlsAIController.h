#pragma once

#include "AIController.h"
#include "Player/LyraPlayerBotController.h"
#include "AlsAIController.generated.h"

UCLASS(DisplayName = "Als AI Controller")
class ALSEXTRAS_API AAlsAIController : public ALyraPlayerBotController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	TObjectPtr<UBehaviorTree> BehaviorTree;

public:
	AAlsAIController();

protected:
	virtual void OnPossess(APawn* NewPawn) override;

public:
	virtual FVector GetFocalPointOnActor(const AActor* Actor) const override;
};

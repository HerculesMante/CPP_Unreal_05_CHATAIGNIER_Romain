#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomMotion.generated.h"

UINTERFACE(MinimalAPI)
class UCustomMotion : public UInterface
{
	GENERATED_BODY()
};

class CPP_UNREAL_05_ROMAIN_API ICustomMotion
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void TranslateFromRotationForward(FRotator Rotation, float Distance);

	UFUNCTION(BlueprintNativeEvent)
	void HorizontalLookAtActor(AActor* Actor);


};

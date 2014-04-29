// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Scope.h"
#include "GeneratorComponent.generated.h"

UCLASS(EditInlineNew, Blueprintable, BlueprintType, Meta = (BlueprintSpawnableComponent), ClassGroup = PCG)
class UGeneratorComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

	// Adds a scope to the generator
	UFUNCTION(BlueprintCallable, Category = "PCG|Generator", meta = (FriendlyName = "Add Scope to Generator"))
	virtual void AddScope(UScope* Scope);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Scopes)
	TArray<UScope*> Scopes;

private:

};
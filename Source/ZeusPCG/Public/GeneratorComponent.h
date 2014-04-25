// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Scope.h"
#include "GeneratorComponent.generated.h"

UCLASS(EditInlineNew, Blueprintable, Meta = (BlueprintSpawnableComponent), ClassGroup = PCG)
class UGeneratorComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

	// Adds a scope to the generator
	UFUNCTION(BlueprintCallable, Category = "PCG|Generator", meta = (DefaultToSelf = "Generator", FriendlyName = "Add Scope to Generator"))
	static void AddScope(UGeneratorComponent* Generator, UScope* Scope);

	// Start generation event
	UFUNCTION(BlueprintImplementableEvent, Category = "PCG|Generator", meta = (FriendlyName = "On Generate"))
	virtual void OnGenerate();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Scopes)
	TArray<UScope*> Scopes;

private:

};
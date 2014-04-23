// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "ZeusPCGPrivatePCH.h"
#include "GeneratorComponent.h"


UGeneratorComponent::UGeneratorComponent(const FPostConstructInitializeProperties& PCIP)
	: Super( PCIP )
{
}

void UGeneratorComponent::AddScope(UScope* Scope)
{
	Scopes.Push(Scope);
}
#pragma once

#include "Scope.generated.h"

UCLASS(Abstract, ClassGroup = PCG)
class UScope : public UObject
{
	GENERATED_UCLASS_BODY()

	// Adds a sub-scope to the scope
	UFUNCTION(BlueprintCallable, Category = "PCG|Scope", meta = (DefaultToSelf = "ParentScope", FriendlyName = "Add sub-scope"))
	static void AddScope(UScope* ParentScope, UScope* ChildScope);

};
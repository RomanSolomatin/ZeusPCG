// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "ZeusPCGPrivatePCH.h"

#include "Generator.h"
#include "ZeusPCG.generated.inl"


class FZeusPCG : public IZeusPCG
{
	/** IModuleInterface implementation */
	virtual void StartupModule() OVERRIDE;
	virtual void ShutdownModule() OVERRIDE;
};

IMPLEMENT_MODULE(FZeusPCG, ZeusPCG)



void FZeusPCG::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FZeusPCG::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}




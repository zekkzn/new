#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS24

#include "Basic.hpp"

#include "TheS24_classes.hpp"


namespace SDK
{

// Function TheS24.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UDeception::OnOwningPlayerFakedEnteringLockerCosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Deception", "OnOwningPlayerFakedEnteringLockerCosmetic");

	UObject::ProcessEvent(Func, nullptr);
}

}

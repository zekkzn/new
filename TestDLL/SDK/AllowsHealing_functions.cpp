#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AllowsHealing

#include "Basic.hpp"

#include "AllowsHealing_classes.hpp"
#include "AllowsHealing_parameters.hpp"


namespace SDK
{

// Function AllowsHealing.AllowsHealing_C.GetMedkit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMedkit*                          Medkit                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IAllowsHealing_C::GetMedkit(class ADBDPlayer* Player, class AMedkit** Medkit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllowsHealing_C", "GetMedkit");

	Params::AllowsHealing_C_GetMedkit Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Medkit != nullptr)
		*Medkit = Parms.Medkit;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrapperKill

#include "Basic.hpp"

#include "TrapperKill_classes.hpp"
#include "TrapperKill_parameters.hpp"


namespace SDK
{

// Function TrapperKill.TrapperKill_C.OnInteractionExitEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTrapperKill_C::OnInteractionExitEnd(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapperKill_C", "OnInteractionExitEnd");

	Params::TrapperKill_C_OnInteractionExitEnd Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TrapperKill.TrapperKill_C.OnInteractionCompletionStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Complete                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrapperKill_C::OnInteractionCompletionStateChanged(class ADBDPlayer* Player, bool Complete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapperKill_C", "OnInteractionCompletionStateChanged");

	Params::TrapperKill_C_OnInteractionCompletionStateChanged Parms{};

	Parms.Player = Player;
	Parms.Complete = Complete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TrapperKill.TrapperKill_C.ExecuteUbergraph_TrapperKill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrapperKill_C::ExecuteUbergraph_TrapperKill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapperKill_C", "ExecuteUbergraph_TrapperKill");

	Params::TrapperKill_C_ExecuteUbergraph_TrapperKill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

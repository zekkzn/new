#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpenEscape

#include "Basic.hpp"

#include "OpenEscape_classes.hpp"
#include "OpenEscape_parameters.hpp"


namespace SDK
{

// Function OpenEscape.OpenEscape_C.UpdateSwitchAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UOpenEscape_C::UpdateSwitchAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenEscape_C", "UpdateSwitchAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OpenEscape.OpenEscape_C.OnInteractionUpdateStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UOpenEscape_C::OnInteractionUpdateStart(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenEscape_C", "OnInteractionUpdateStart");

	Params::OpenEscape_C_OnInteractionUpdateStart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenEscape.OpenEscape_C.OnInteractionInterruptStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInterruptionDefinition*          CurrentInterruption                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       InterruptingPlayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UOpenEscape_C::OnInteractionInterruptStarted(class ADBDPlayer* Player, class UInterruptionDefinition* CurrentInterruption, class ADBDPlayer* InterruptingPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenEscape_C", "OnInteractionInterruptStarted");

	Params::OpenEscape_C_OnInteractionInterruptStarted Parms{};

	Parms.Player = Player;
	Parms.CurrentInterruption = CurrentInterruption;
	Parms.InterruptingPlayer = InterruptingPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenEscape.OpenEscape_C.OnInteractionFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    HasInteractionStarted                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpenEscape_C::OnInteractionFinished(class ADBDPlayer* Player, bool HasInteractionStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenEscape_C", "OnInteractionFinished");

	Params::OpenEscape_C_OnInteractionFinished Parms{};

	Parms.Player = Player;
	Parms.HasInteractionStarted = HasInteractionStarted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenEscape.OpenEscape_C.Flip Switch Off
// (Public, BlueprintCallable, BlueprintEvent)

void UOpenEscape_C::Flip_Switch_Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenEscape_C", "Flip Switch Off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OpenEscape.OpenEscape_C.ExecuteUbergraph_OpenEscape
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpenEscape_C::ExecuteUbergraph_OpenEscape(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenEscape_C", "ExecuteUbergraph_OpenEscape");

	Params::OpenEscape_C_ExecuteUbergraph_OpenEscape Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

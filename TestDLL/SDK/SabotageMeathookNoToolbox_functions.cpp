#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SabotageMeathookNoToolbox

#include "Basic.hpp"

#include "SabotageMeathookNoToolbox_classes.hpp"
#include "SabotageMeathookNoToolbox_parameters.hpp"


namespace SDK
{

// Function SabotageMeathookNoToolbox.SabotageMeathookNoToolbox_C.OnInteractionFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    HasInteractionStarted                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USabotageMeathookNoToolbox_C::OnInteractionFinished(class ADBDPlayer* Player, bool HasInteractionStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SabotageMeathookNoToolbox_C", "OnInteractionFinished");

	Params::SabotageMeathookNoToolbox_C_OnInteractionFinished Parms{};

	Parms.Player = Player;
	Parms.HasInteractionStarted = HasInteractionStarted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SabotageMeathookNoToolbox.SabotageMeathookNoToolbox_C.ExecuteUbergraph_SabotageMeathookNoToolbox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USabotageMeathookNoToolbox_C::ExecuteUbergraph_SabotageMeathookNoToolbox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SabotageMeathookNoToolbox_C", "ExecuteUbergraph_SabotageMeathookNoToolbox");

	Params::SabotageMeathookNoToolbox_C_ExecuteUbergraph_SabotageMeathookNoToolbox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SabotageMeathookNoToolbox.SabotageMeathookNoToolbox_C.IsInteractionPossibleBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer*                       Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   InteractionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USabotageMeathookNoToolbox_C::IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SabotageMeathookNoToolbox_C", "IsInteractionPossibleBP");

	Params::SabotageMeathookNoToolbox_C_IsInteractionPossibleBP Parms{};

	Parms.Player = Player;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTallyRoot

#include "Basic.hpp"

#include "WBP_CoreTallyRoot_classes.hpp"
#include "WBP_CoreTallyRoot_parameters.hpp"


namespace SDK
{

// Function WBP_CoreTallyRoot.WBP_CoreTallyRoot_C.SetTabSelected
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETallyTabState                          TabState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreTallyRoot_C::SetTabSelected(const ETallyTabState& TabState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreTallyRoot_C", "SetTabSelected");

	Params::WBP_CoreTallyRoot_C_SetTabSelected Parms{};

	Parms.TabState = TabState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreTallyRoot.WBP_CoreTallyRoot_C.SetBackgroundVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreTallyRoot_C::SetBackgroundVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreTallyRoot_C", "SetBackgroundVisibility");

	Params::WBP_CoreTallyRoot_C_SetBackgroundVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreTallyRoot.WBP_CoreTallyRoot_C.ExecuteUbergraph_WBP_CoreTallyRoot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreTallyRoot_C::ExecuteUbergraph_WBP_CoreTallyRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreTallyRoot_C", "ExecuteUbergraph_WBP_CoreTallyRoot");

	Params::WBP_CoreTallyRoot_C_ExecuteUbergraph_WBP_CoreTallyRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreTallyRoot.WBP_CoreTallyRoot_C.GetTallyScoreboardInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class ITallyScoreboardViewInterface>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class ITallyScoreboardViewInterface> UWBP_CoreTallyRoot_C::GetTallyScoreboardInterface() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreTallyRoot_C", "GetTallyScoreboardInterface");

	Params::WBP_CoreTallyRoot_C_GetTallyScoreboardInterface Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

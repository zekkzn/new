#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSpectateBar

#include "Basic.hpp"

#include "WBP_CoreSpectateBar_classes.hpp"
#include "WBP_CoreSpectateBar_parameters.hpp"


namespace SDK
{

// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.SetSpectatedName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CoreSpectateBar_C::SetSpectatedName(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "SetSpectatedName");

	Params::WBP_CoreSpectateBar_C_SetSpectatedName Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.SetSpectateBarVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSpectateBar_C::SetSpectateBarVisibility(const bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "SetSpectateBarVisibility");

	Params::WBP_CoreSpectateBar_C_SetSpectateBarVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.SetHoveredOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreSpectateBar_C::SetHoveredOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "SetHoveredOpacity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.SetDefaultOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreSpectateBar_C::SetDefaultOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "SetDefaultOpacity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.SetBotTag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBot                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSpectateBar_C::SetBotTag(const bool IsBot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "SetBotTag");

	Params::WBP_CoreSpectateBar_C_SetBotTag Parms{};

	Parms.IsBot = IsBot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.SetArrowsVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSpectateBar_C::SetArrowsVisibility(const bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "SetArrowsVisibility");

	Params::WBP_CoreSpectateBar_C_SetArrowsVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSpectateBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "PreConstruct");

	Params::WBP_CoreSpectateBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.OnSpectateBarHovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_CoreSpectateBar_C::OnSpectateBarHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "OnSpectateBarHovered");

	Params::WBP_CoreSpectateBar_C_OnSpectateBarHovered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.HoverOpacity
// (BlueprintCallable, BlueprintEvent)

void UWBP_CoreSpectateBar_C::HoverOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "HoverOpacity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSpectateBar.WBP_CoreSpectateBar_C.ExecuteUbergraph_WBP_CoreSpectateBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSpectateBar_C::ExecuteUbergraph_WBP_CoreSpectateBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSpectateBar_C", "ExecuteUbergraph_WBP_CoreSpectateBar");

	Params::WBP_CoreSpectateBar_C_ExecuteUbergraph_WBP_CoreSpectateBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

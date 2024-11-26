#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreStandardButton

#include "Basic.hpp"

#include "WBP_CoreStandardButton_classes.hpp"
#include "WBP_CoreStandardButton_parameters.hpp"


namespace SDK
{

// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreStandardButton_C::ExecuteUbergraph_WBP_CoreStandardButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "ExecuteUbergraph_WBP_CoreStandardButton");

	Params::WBP_CoreStandardButton_C_ExecuteUbergraph_WBP_CoreStandardButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETextJustify                            NewAlignment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreStandardButton_C::OnAlignmentChanged(ETextJustify NewAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "OnAlignmentChanged");

	Params::WBP_CoreStandardButton_C_OnAlignmentChanged Parms{};

	Parms.NewAlignment = NewAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnButtonVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EButtonWidgetVisibility                 PreviousVisibility                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EButtonWidgetVisibility                 NewVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreStandardButton_C::OnButtonVisibilityChanged(const EButtonWidgetVisibility PreviousVisibility, const EButtonWidgetVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "OnButtonVisibilityChanged");

	Params::WBP_CoreStandardButton_C_OnButtonVisibilityChanged Parms{};

	Parms.PreviousVisibility = PreviousVisibility;
	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Param_IsEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreStandardButton_C::OnEnabledChanged(bool Param_IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "OnEnabledChanged");

	Params::WBP_CoreStandardButton_C_OnEnabledChanged Parms{};

	Parms.Param_IsEnabled = Param_IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UWBP_CoreStandardButton_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed
// (Event, Protected, BlueprintEvent)

void UWBP_CoreStandardButton_C::OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWBP_CoreStandardButton_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.Reset Visuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreStandardButton_C::Reset_Visuals(bool Param_IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreStandardButton_C", "Reset Visuals");

	Params::WBP_CoreStandardButton_C_Reset_Visuals Parms{};

	Parms.Param_IsEnabled = Param_IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


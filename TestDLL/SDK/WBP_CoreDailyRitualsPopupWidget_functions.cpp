#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreDailyRitualsPopupWidget

#include "Basic.hpp"

#include "WBP_CoreDailyRitualsPopupWidget_classes.hpp"
#include "WBP_CoreDailyRitualsPopupWidget_parameters.hpp"


namespace SDK
{

// Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreDailyRitualsPopupWidget_C::ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreDailyRitualsPopupWidget_C", "ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget");

	Params::WBP_CoreDailyRitualsPopupWidget_C_ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.GetAfterTrialProgressionButtonPadding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_Padding                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreDailyRitualsPopupWidget_C::GetAfterTrialProgressionButtonPadding(double* Param_Padding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreDailyRitualsPopupWidget_C", "GetAfterTrialProgressionButtonPadding");

	Params::WBP_CoreDailyRitualsPopupWidget_C_GetAfterTrialProgressionButtonPadding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Padding != nullptr)
		*Param_Padding = Parms.Param_Padding;
}


// Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAfterTrial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreDailyRitualsPopupWidget_C::SetBackground(bool IsAfterTrial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreDailyRitualsPopupWidget_C", "SetBackground");

	Params::WBP_CoreDailyRitualsPopupWidget_C_SetBackground Parms{};

	Parms.IsAfterTrial = IsAfterTrial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetDailyRitualDetailAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAfterTrial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreDailyRitualsPopupWidget_C::SetDailyRitualDetailAlignment(bool IsAfterTrial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreDailyRitualsPopupWidget_C", "SetDailyRitualDetailAlignment");

	Params::WBP_CoreDailyRitualsPopupWidget_C_SetDailyRitualDetailAlignment Parms{};

	Parms.IsAfterTrial = IsAfterTrial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetProgressionButtonAlignmentAndPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAfterTrial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreDailyRitualsPopupWidget_C::SetProgressionButtonAlignmentAndPadding(bool IsAfterTrial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreDailyRitualsPopupWidget_C", "SetProgressionButtonAlignmentAndPadding");

	Params::WBP_CoreDailyRitualsPopupWidget_C_SetProgressionButtonAlignmentAndPadding Parms{};

	Parms.IsAfterTrial = IsAfterTrial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsAfterTrial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreDailyRitualsPopupWidget_C::SetVisuals(bool IsAfterTrial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreDailyRitualsPopupWidget_C", "SetVisuals");

	Params::WBP_CoreDailyRitualsPopupWidget_C_SetVisuals Parms{};

	Parms.IsAfterTrial = IsAfterTrial;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCurrencyForTooltips

#include "Basic.hpp"

#include "WBP_CoreCurrencyForTooltips_classes.hpp"
#include "WBP_CoreCurrencyForTooltips_parameters.hpp"


namespace SDK
{

// Function WBP_CoreCurrencyForTooltips.WBP_CoreCurrencyForTooltips_C.SetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCurrencyProgressionRewardViewDataCurrencyRewardViewData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreCurrencyForTooltips_C::SetData(const struct FCurrencyProgressionRewardViewData& CurrencyRewardViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCurrencyForTooltips_C", "SetData");

	Params::WBP_CoreCurrencyForTooltips_C_SetData Parms{};

	Parms.CurrencyRewardViewData = std::move(CurrencyRewardViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCurrencyForTooltips.WBP_CoreCurrencyForTooltips_C.ExecuteUbergraph_WBP_CoreCurrencyForTooltips
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCurrencyForTooltips_C::ExecuteUbergraph_WBP_CoreCurrencyForTooltips(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCurrencyForTooltips_C", "ExecuteUbergraph_WBP_CoreCurrencyForTooltips");

	Params::WBP_CoreCurrencyForTooltips_C_ExecuteUbergraph_WBP_CoreCurrencyForTooltips Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

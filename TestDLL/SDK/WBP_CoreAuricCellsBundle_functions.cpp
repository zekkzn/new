#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreAuricCellsBundle

#include "Basic.hpp"

#include "WBP_CoreAuricCellsBundle_classes.hpp"
#include "WBP_CoreAuricCellsBundle_parameters.hpp"


namespace SDK
{

// Function WBP_CoreAuricCellsBundle.WBP_CoreAuricCellsBundle_C.SetupAsReward
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreAuricCellsBundle_C::SetupAsReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAuricCellsBundle_C", "SetupAsReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreAuricCellsBundle.WBP_CoreAuricCellsBundle_C.SetRewardHighlight
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    RewardHighlight                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreAuricCellsBundle_C::SetRewardHighlight(bool RewardHighlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAuricCellsBundle_C", "SetRewardHighlight");

	Params::WBP_CoreAuricCellsBundle_C_SetRewardHighlight Parms{};

	Parms.RewardHighlight = RewardHighlight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreAuricCellsBundle.WBP_CoreAuricCellsBundle_C.ExecuteUbergraph_WBP_CoreAuricCellsBundle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreAuricCellsBundle_C::ExecuteUbergraph_WBP_CoreAuricCellsBundle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAuricCellsBundle_C", "ExecuteUbergraph_WBP_CoreAuricCellsBundle");

	Params::WBP_CoreAuricCellsBundle_C_ExecuteUbergraph_WBP_CoreAuricCellsBundle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

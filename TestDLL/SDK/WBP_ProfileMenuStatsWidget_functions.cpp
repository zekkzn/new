#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileMenuStatsWidget

#include "Basic.hpp"

#include "WBP_ProfileMenuStatsWidget_classes.hpp"
#include "WBP_ProfileMenuStatsWidget_parameters.hpp"


namespace SDK
{

// Function WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.ExecuteUbergraph_WBP_ProfileMenuStatsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ProfileMenuStatsWidget_C::ExecuteUbergraph_WBP_ProfileMenuStatsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuStatsWidget_C", "ExecuteUbergraph_WBP_ProfileMenuStatsWidget");

	Params::WBP_ProfileMenuStatsWidget_C_ExecuteUbergraph_WBP_ProfileMenuStatsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ProfileMenuStatsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuStatsWidget_C", "PreConstruct");

	Params::WBP_ProfileMenuStatsWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.SetPlayerLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLevelViewData             ViewData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_ProfileMenuStatsWidget_C::SetPlayerLevel(const struct FPlayerLevelViewData& ViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuStatsWidget_C", "SetPlayerLevel");

	Params::WBP_ProfileMenuStatsWidget_C_SetPlayerLevel Parms{};

	Parms.ViewData = std::move(ViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.SetPlayerRanks
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRankViewData                    SurvivorViewData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FRankViewData                    KillerViewData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProfileMenuStatsWidget_C::SetPlayerRanks(const struct FRankViewData& SurvivorViewData, const struct FRankViewData& KillerViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuStatsWidget_C", "SetPlayerRanks");

	Params::WBP_ProfileMenuStatsWidget_C_SetPlayerRanks Parms{};

	Parms.SurvivorViewData = std::move(SurvivorViewData);
	Parms.KillerViewData = std::move(KillerViewData);

	UObject::ProcessEvent(Func, &Parms);
}

}

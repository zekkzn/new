#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCustomizationReward

#include "Basic.hpp"

#include "WBP_CoreCustomizationReward_classes.hpp"
#include "WBP_CoreCustomizationReward_parameters.hpp"


namespace SDK
{

// Function WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.ExecuteUbergraph_WBP_CoreCustomizationReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationReward_C::ExecuteUbergraph_WBP_CoreCustomizationReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationReward_C", "ExecuteUbergraph_WBP_CoreCustomizationReward");

	Params::WBP_CoreCustomizationReward_C_ExecuteUbergraph_WBP_CoreCustomizationReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetCustomizationRewardData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationRewardViewData     CustomizationRewardViewData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreCustomizationReward_C::SetCustomizationRewardData(const struct FCustomizationRewardViewData& CustomizationRewardViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationReward_C", "SetCustomizationRewardData");

	Params::WBP_CoreCustomizationReward_C_SetCustomizationRewardData Parms{};

	Parms.CustomizationRewardViewData = std::move(CustomizationRewardViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetKillSwitchOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsEnabled                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationReward_C::SetKillSwitchOverlay(const bool Param_IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationReward_C", "SetKillSwitchOverlay");

	Params::WBP_CoreCustomizationReward_C_SetKillSwitchOverlay Parms{};

	Parms.Param_IsEnabled = Param_IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetOwnedTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOwned                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationReward_C::SetOwnedTag(const bool IsOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationReward_C", "SetOwnedTag");

	Params::WBP_CoreCustomizationReward_C_SetOwnedTag Parms{};

	Parms.IsOwned = IsOwned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemRarity                             Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationReward_C::SetRarity(EItemRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationReward_C", "SetRarity");

	Params::WBP_CoreCustomizationReward_C_SetRarity Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetUnbreakableSetTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUnbreakable                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationReward_C::SetUnbreakableSetTag(const bool IsUnbreakable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationReward_C", "SetUnbreakableSetTag");

	Params::WBP_CoreCustomizationReward_C_SetUnbreakableSetTag Parms{};

	Parms.IsUnbreakable = IsUnbreakable;

	UObject::ProcessEvent(Func, &Parms);
}

}

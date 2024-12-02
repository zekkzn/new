#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K15

#include "Basic.hpp"

#include "WBP_K15_classes.hpp"
#include "WBP_K15_parameters.hpp"


namespace SDK
{

// Function WBP_K15.WBP_K15_C.SetPlagueVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESicknessLevel                          Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K15_C::SetPlagueVisibility(ESicknessLevel Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K15_C", "SetPlagueVisibility");

	Params::WBP_K15_C_SetPlagueVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K15.WBP_K15_C.SetPlagueData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLocalKiller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlagueStatusData*                KillerData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_K15_C::SetPlagueData(bool IsLocalKiller, class UPlagueStatusData* KillerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K15_C", "SetPlagueData");

	Params::WBP_K15_C_SetPlagueData Parms{};

	Parms.IsLocalKiller = IsLocalKiller;
	Parms.KillerData = KillerData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K15.WBP_K15_C.SetKillerData
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerStatusViewData            Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_K15_C::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K15_C", "SetKillerData");

	Params::WBP_K15_C_SetKillerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K15.WBP_K15_C.ExecuteUbergraph_WBP_K15
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K15_C::ExecuteUbergraph_WBP_K15(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K15_C", "ExecuteUbergraph_WBP_K15");

	Params::WBP_K15_C_ExecuteUbergraph_WBP_K15 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K15.WBP_K15_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_K15_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K15_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


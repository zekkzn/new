#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreWatermark

#include "Basic.hpp"

#include "WBP_CoreWatermark_classes.hpp"
#include "WBP_CoreWatermark_parameters.hpp"


namespace SDK
{

// Function WBP_CoreWatermark.WBP_CoreWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CoreWatermark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreWatermark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreWatermark.WBP_CoreWatermark_C.ExecuteUbergraph_WBP_CoreWatermark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreWatermark_C::ExecuteUbergraph_WBP_CoreWatermark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreWatermark_C", "ExecuteUbergraph_WBP_CoreWatermark");

	Params::WBP_CoreWatermark_C_ExecuteUbergraph_WBP_CoreWatermark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

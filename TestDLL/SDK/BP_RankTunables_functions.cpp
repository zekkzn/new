#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RankTunables

#include "Basic.hpp"

#include "BP_RankTunables_classes.hpp"
#include "BP_RankTunables_parameters.hpp"


namespace SDK
{

// Function BP_RankTunables.BP_RankTunables_C.ExecuteUbergraph_BP_RankTunables
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RankTunables_C::ExecuteUbergraph_BP_RankTunables(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RankTunables_C", "ExecuteUbergraph_BP_RankTunables");

	Params::BP_RankTunables_C_ExecuteUbergraph_BP_RankTunables Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RankTunables.BP_RankTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_RankTunables_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RankTunables_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RankTunables.BP_RankTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RankTunables_C::ReceiveTick(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RankTunables_C", "ReceiveTick");

	Params::BP_RankTunables_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

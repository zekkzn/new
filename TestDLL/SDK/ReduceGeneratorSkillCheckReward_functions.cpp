#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReduceGeneratorSkillCheckReward

#include "Basic.hpp"

#include "ReduceGeneratorSkillCheckReward_classes.hpp"
#include "ReduceGeneratorSkillCheckReward_parameters.hpp"


namespace SDK
{

// Function ReduceGeneratorSkillCheckReward.ReduceGeneratorSkillCheckReward_C.ExecuteUbergraph_ReduceGeneratorSkillCheckReward
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReduceGeneratorSkillCheckReward_C::ExecuteUbergraph_ReduceGeneratorSkillCheckReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReduceGeneratorSkillCheckReward_C", "ExecuteUbergraph_ReduceGeneratorSkillCheckReward");

	Params::ReduceGeneratorSkillCheckReward_C_ExecuteUbergraph_ReduceGeneratorSkillCheckReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReduceGeneratorSkillCheckReward.ReduceGeneratorSkillCheckReward_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReduceGeneratorSkillCheckReward_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReduceGeneratorSkillCheckReward_C", "ReceiveTick");

	Params::ReduceGeneratorSkillCheckReward_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


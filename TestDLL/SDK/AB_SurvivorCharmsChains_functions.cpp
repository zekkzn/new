#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_SurvivorCharmsChains

#include "Basic.hpp"

#include "AB_SurvivorCharmsChains_classes.hpp"
#include "AB_SurvivorCharmsChains_parameters.hpp"


namespace SDK
{

// Function AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_SurvivorCharmsChains_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_SurvivorCharmsChains_C", "AnimGraph");

	Params::AB_SurvivorCharmsChains_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_SurvivorCharmsChains_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_SurvivorCharmsChains_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C.ExecuteUbergraph_AB_SurvivorCharmsChains
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_SurvivorCharmsChains_C::ExecuteUbergraph_AB_SurvivorCharmsChains(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_SurvivorCharmsChains_C", "ExecuteUbergraph_AB_SurvivorCharmsChains");

	Params::AB_SurvivorCharmsChains_C_ExecuteUbergraph_AB_SurvivorCharmsChains Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

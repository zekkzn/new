#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Chest01

#include "Basic.hpp"

#include "AB_Chest01_classes.hpp"
#include "AB_Chest01_parameters.hpp"


namespace SDK
{

// Function AB_Chest01.AB_Chest01_C.ExecuteUbergraph_AB_Chest01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Chest01_C::ExecuteUbergraph_AB_Chest01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Chest01_C", "ExecuteUbergraph_AB_Chest01");

	Params::AB_Chest01_C_ExecuteUbergraph_AB_Chest01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Chest01.AB_Chest01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_E3B45CDA420F81FFF28FCA839A2CEECE
// (BlueprintEvent)

void UAB_Chest01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_E3B45CDA420F81FFF28FCA839A2CEECE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Chest01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_E3B45CDA420F81FFF28FCA839A2CEECE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Chest01.AB_Chest01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_54E01D50404AEB98BC823B958DFA00A1
// (BlueprintEvent)

void UAB_Chest01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_54E01D50404AEB98BC823B958DFA00A1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Chest01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_54E01D50404AEB98BC823B958DFA00A1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Chest01.AB_Chest01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_04BADBB541A6F35FDADAFB8E14BB4ACC
// (BlueprintEvent)

void UAB_Chest01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_04BADBB541A6F35FDADAFB8E14BB4ACC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Chest01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_04BADBB541A6F35FDADAFB8E14BB4ACC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Chest01.AB_Chest01_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_Chest01_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Chest01_C", "AnimGraph");

	Params::AB_Chest01_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

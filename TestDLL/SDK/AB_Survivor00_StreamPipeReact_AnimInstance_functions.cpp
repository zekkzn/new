#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Survivor00_StreamPipeReact_AnimInstance

#include "Basic.hpp"

#include "AB_Survivor00_StreamPipeReact_AnimInstance_classes.hpp"
#include "AB_Survivor00_StreamPipeReact_AnimInstance_parameters.hpp"


namespace SDK
{

// Function AB_Survivor00_StreamPipeReact_AnimInstance.AB_Survivor00_StreamPipeReact_AnimInstance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_Survivor00_StreamPipeReact_AnimInstance_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor00_StreamPipeReact_AnimInstance_C", "AnimGraph");

	Params::AB_Survivor00_StreamPipeReact_AnimInstance_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function AB_Survivor00_StreamPipeReact_AnimInstance.AB_Survivor00_StreamPipeReact_AnimInstance_C.AnimNotify_InteractionUpperBodyLayerDone
// (BlueprintCallable, BlueprintEvent)

void UAB_Survivor00_StreamPipeReact_AnimInstance_C::AnimNotify_InteractionUpperBodyLayerDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor00_StreamPipeReact_AnimInstance_C", "AnimNotify_InteractionUpperBodyLayerDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Survivor00_StreamPipeReact_AnimInstance.AB_Survivor00_StreamPipeReact_AnimInstance_C.ExecuteUbergraph_AB_Survivor00_StreamPipeReact_AnimInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Survivor00_StreamPipeReact_AnimInstance_C::ExecuteUbergraph_AB_Survivor00_StreamPipeReact_AnimInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor00_StreamPipeReact_AnimInstance_C", "ExecuteUbergraph_AB_Survivor00_StreamPipeReact_AnimInstance");

	Params::AB_Survivor00_StreamPipeReact_AnimInstance_C_ExecuteUbergraph_AB_Survivor00_StreamPipeReact_AnimInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Survivor00_StreamPipeReact_AnimInstance.AB_Survivor00_StreamPipeReact_AnimInstance_C.Survivor_InteractionUpperBody_Layer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_Survivor_InteractionUpperBody_Layer              (Parm, OutParm, NoDestructor)

void UAB_Survivor00_StreamPipeReact_AnimInstance_C::Survivor_InteractionUpperBody_Layer(const struct FPoseLink& InPose, struct FPoseLink* Param_Survivor_InteractionUpperBody_Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor00_StreamPipeReact_AnimInstance_C", "Survivor_InteractionUpperBody_Layer");

	Params::AB_Survivor00_StreamPipeReact_AnimInstance_C_Survivor_InteractionUpperBody_Layer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Survivor_InteractionUpperBody_Layer != nullptr)
		*Param_Survivor_InteractionUpperBody_Layer = std::move(Parms.Param_Survivor_InteractionUpperBody_Layer);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_Survivor_Interaction

#include "Basic.hpp"

#include "ALI_Survivor_Interaction_classes.hpp"
#include "ALI_Survivor_Interaction_parameters.hpp"


namespace SDK
{

// Function ALI_Survivor_Interaction.ALI_Survivor_Interaction_C.SurvivorInteractionLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SurvivorInteractionLayer                         (Parm, OutParm, NoDestructor)

void IALI_Survivor_Interaction_C::SurvivorInteractionLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_SurvivorInteractionLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_Survivor_Interaction_C", "SurvivorInteractionLayer");

	Params::ALI_Survivor_Interaction_C_SurvivorInteractionLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SurvivorInteractionLayer != nullptr)
		*Param_SurvivorInteractionLayer = std::move(Parms.Param_SurvivorInteractionLayer);
}

}


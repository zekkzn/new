#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Survivor_00

#include "Basic.hpp"

#include "AB_Survivor_00_classes.hpp"
#include "AB_Survivor_00_parameters.hpp"


namespace SDK
{

// Function AB_Survivor_00.AB_Survivor_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "AnimGraph");

	Params::AB_Survivor_00_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function AB_Survivor_00.AB_Survivor_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_00_AnimGraphNode_TransitionResult_235F69074FC3A036506E4A9ECD20AE97
// (BlueprintEvent)

void UAB_Survivor_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_00_AnimGraphNode_TransitionResult_235F69074FC3A036506E4A9ECD20AE97()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_00_AnimGraphNode_TransitionResult_235F69074FC3A036506E4A9ECD20AE97");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Survivor_00.AB_Survivor_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_00_AnimGraphNode_TransitionResult_355C1A6440A720937962D89A91E0D058
// (BlueprintEvent)

void UAB_Survivor_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_00_AnimGraphNode_TransitionResult_355C1A6440A720937962D89A91E0D058()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_00_AnimGraphNode_TransitionResult_355C1A6440A720937962D89A91E0D058");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Survivor_00.AB_Survivor_00_C.ExecuteUbergraph_AB_Survivor_00
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Survivor_00_C::ExecuteUbergraph_AB_Survivor_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "ExecuteUbergraph_AB_Survivor_00");

	Params::AB_Survivor_00_C_ExecuteUbergraph_AB_Survivor_00 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Survivor_00.AB_Survivor_00_C.KillerSpecificSurvivorAnimation
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_KillerSpecificSurvivorAnimation                  (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::KillerSpecificSurvivorAnimation(const struct FPoseLink& InPose, struct FPoseLink* Param_KillerSpecificSurvivorAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "KillerSpecificSurvivorAnimation");

	Params::AB_Survivor_00_C_KillerSpecificSurvivorAnimation Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_KillerSpecificSurvivorAnimation != nullptr)
		*Param_KillerSpecificSurvivorAnimation = std::move(Parms.Param_KillerSpecificSurvivorAnimation);
}


// Function AB_Survivor_00.AB_Survivor_00_C.KillerSpecivicSurvivorAnimationAfterMontage
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_KillerSpecivicSurvivorAnimationAfterMontage      (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::KillerSpecivicSurvivorAnimationAfterMontage(const struct FPoseLink& InPose_, struct FPoseLink* Param_KillerSpecivicSurvivorAnimationAfterMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "KillerSpecivicSurvivorAnimationAfterMontage");

	Params::AB_Survivor_00_C_KillerSpecivicSurvivorAnimationAfterMontage Parms{};

	Parms.InPose_ = std::move(InPose_);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_KillerSpecivicSurvivorAnimationAfterMontage != nullptr)
		*Param_KillerSpecivicSurvivorAnimationAfterMontage = std::move(Parms.Param_KillerSpecivicSurvivorAnimationAfterMontage);
}


// Function AB_Survivor_00.AB_Survivor_00_C.Survivor_InteractionUpperBody2_Layer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_Survivor_InteractionUpperBody2_Layer             (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::Survivor_InteractionUpperBody2_Layer(const struct FPoseLink& InPose, struct FPoseLink* Param_Survivor_InteractionUpperBody2_Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "Survivor_InteractionUpperBody2_Layer");

	Params::AB_Survivor_00_C_Survivor_InteractionUpperBody2_Layer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Survivor_InteractionUpperBody2_Layer != nullptr)
		*Param_Survivor_InteractionUpperBody2_Layer = std::move(Parms.Param_Survivor_InteractionUpperBody2_Layer);
}


// Function AB_Survivor_00.AB_Survivor_00_C.Survivor_InteractionUpperBody_Layer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_Survivor_InteractionUpperBody_Layer              (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::Survivor_InteractionUpperBody_Layer(const struct FPoseLink& InPose, struct FPoseLink* Param_Survivor_InteractionUpperBody_Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "Survivor_InteractionUpperBody_Layer");

	Params::AB_Survivor_00_C_Survivor_InteractionUpperBody_Layer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Survivor_InteractionUpperBody_Layer != nullptr)
		*Param_Survivor_InteractionUpperBody_Layer = std::move(Parms.Param_Survivor_InteractionUpperBody_Layer);
}


// Function AB_Survivor_00.AB_Survivor_00_C.Survivor_Locomotion_Layer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_Survivor_Locomotion_Layer                        (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::Survivor_Locomotion_Layer(struct FPoseLink* Param_Survivor_Locomotion_Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "Survivor_Locomotion_Layer");

	Params::AB_Survivor_00_C_Survivor_Locomotion_Layer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Survivor_Locomotion_Layer != nullptr)
		*Param_Survivor_Locomotion_Layer = std::move(Parms.Param_Survivor_Locomotion_Layer);
}


// Function AB_Survivor_00.AB_Survivor_00_C.Survivor_Perk_Layer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_Survivor_Perk_Layer                              (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::Survivor_Perk_Layer(const struct FPoseLink& InPose, struct FPoseLink* Param_Survivor_Perk_Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "Survivor_Perk_Layer");

	Params::AB_Survivor_00_C_Survivor_Perk_Layer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Survivor_Perk_Layer != nullptr)
		*Param_Survivor_Perk_Layer = std::move(Parms.Param_Survivor_Perk_Layer);
}


// Function AB_Survivor_00.AB_Survivor_00_C.SurvivorInteractionCollectableLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SurvivorInteractionCollectableLayer              (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::SurvivorInteractionCollectableLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_SurvivorInteractionCollectableLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "SurvivorInteractionCollectableLayer");

	Params::AB_Survivor_00_C_SurvivorInteractionCollectableLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SurvivorInteractionCollectableLayer != nullptr)
		*Param_SurvivorInteractionCollectableLayer = std::move(Parms.Param_SurvivorInteractionCollectableLayer);
}


// Function AB_Survivor_00.AB_Survivor_00_C.SurvivorInteractionLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_SurvivorInteractionLayer                         (Parm, OutParm, NoDestructor)

void UAB_Survivor_00_C::SurvivorInteractionLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_SurvivorInteractionLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Survivor_00_C", "SurvivorInteractionLayer");

	Params::AB_Survivor_00_C_SurvivorInteractionLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SurvivorInteractionLayer != nullptr)
		*Param_SurvivorInteractionLayer = std::move(Parms.Param_SurvivorInteractionLayer);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABSub_Survivor00_Interaction_ExitDoorActivation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABSub_Survivor00_Interaction_ExitDoorActivation.ABSub_Survivor00_Interaction_ExitDoorActivation_C
// 0x07C0 (0x0E00 - 0x0640)
class UABSub_Survivor00_Interaction_ExitDoorActivation_C final : public UExitDoorActivationSurvivorSubAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0648(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0650(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0658(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0678(0x00D0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0748(0x0108)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0850(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0878(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x08A0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x08C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0910(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0930(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0978(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0998(0x00C8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0A60(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0A80(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0BB8(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0BD8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0BF8(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0C28(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0C48(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0D10(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0D30(0x00D0)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void AnimNotify_InteractionLayerDone();
	void ExecuteUbergraph_ABSub_Survivor00_Interaction_ExitDoorActivation(int32 EntryPoint);
	void SurvivorInteractionLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_SurvivorInteractionLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABSub_Survivor00_Interaction_ExitDoorActivation_C">();
	}
	static class UABSub_Survivor00_Interaction_ExitDoorActivation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABSub_Survivor00_Interaction_ExitDoorActivation_C>();
	}
};
static_assert(alignof(UABSub_Survivor00_Interaction_ExitDoorActivation_C) == 0x000010, "Wrong alignment on UABSub_Survivor00_Interaction_ExitDoorActivation_C");
static_assert(sizeof(UABSub_Survivor00_Interaction_ExitDoorActivation_C) == 0x000E00, "Wrong size on UABSub_Survivor00_Interaction_ExitDoorActivation_C");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, UberGraphFrame) == 0x000640, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimBlueprintExtension_PropertyAccess) == 0x000648, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimBlueprintExtension_Base) == 0x000650, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_Root_1) == 0x000658, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_LinkedInputPose_1) == 0x000678, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_SaveCachedPose) == 0x000748, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_TransitionResult_2) == 0x000850, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_TransitionResult_1) == 0x000878, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_TransitionResult) == 0x0008A0, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_SequencePlayer_1) == 0x0008C8, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_StateResult_3) == 0x000910, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_SequencePlayer) == 0x000930, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_StateResult_2) == 0x000978, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_StateMachine_1) == 0x000998, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_ComponentToLocalSpace) == 0x000A60, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_ModifyBone) == 0x000A80, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_LocalToComponentSpace) == 0x000BB8, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_StateResult_1) == 0x000BD8, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_UseCachedPose) == 0x000BF8, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_StateResult) == 0x000C28, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_StateMachine) == 0x000C48, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_Root) == 0x000D10, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_ExitDoorActivation_C, AnimGraphNode_LinkedInputPose) == 0x000D30, "Member 'UABSub_Survivor00_Interaction_ExitDoorActivation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");

}

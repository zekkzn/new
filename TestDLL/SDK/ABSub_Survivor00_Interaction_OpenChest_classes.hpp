#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABSub_Survivor00_Interaction_OpenChest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABSub_Survivor00_Interaction_OpenChest.ABSub_Survivor00_Interaction_OpenChest_C
// 0x0F20 (0x1620 - 0x0700)
class UABSub_Survivor00_Interaction_OpenChest_C final : public UOpenChestSurvivorSubAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0700(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0708(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0710(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0718(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0738(0x00D0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0808(0x0108)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0910(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0938(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0960(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0988(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x09B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x09D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0A00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0A28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0A50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0A78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0AA0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0AC8(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x0AF8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x0B18(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x0B38(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0B58(0x0138)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0C90(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0CD8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0CF8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0D18(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0D38(0x0138)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0E70(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0EB8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0ED8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0EF8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0F18(0x0138)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1050(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1098(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x10B8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1100(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1120(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1148(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1190(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x11B0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x11F8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1218(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x12E0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1300(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1330(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1350(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1418(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x14F8(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1528(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x1548(0x00D0)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void AnimNotify_InteractionLayerDone();
	void ExecuteUbergraph_ABSub_Survivor00_Interaction_OpenChest(int32 EntryPoint);
	void SurvivorInteractionLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_SurvivorInteractionLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABSub_Survivor00_Interaction_OpenChest_C">();
	}
	static class UABSub_Survivor00_Interaction_OpenChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABSub_Survivor00_Interaction_OpenChest_C>();
	}
};
static_assert(alignof(UABSub_Survivor00_Interaction_OpenChest_C) == 0x000010, "Wrong alignment on UABSub_Survivor00_Interaction_OpenChest_C");
static_assert(sizeof(UABSub_Survivor00_Interaction_OpenChest_C) == 0x001620, "Wrong size on UABSub_Survivor00_Interaction_OpenChest_C");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, UberGraphFrame) == 0x000700, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimBlueprintExtension_PropertyAccess) == 0x000708, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimBlueprintExtension_Base) == 0x000710, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_Root_1) == 0x000718, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_LinkedInputPose) == 0x000738, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SaveCachedPose) == 0x000808, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_11) == 0x000910, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_10) == 0x000938, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_9) == 0x000960, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_8) == 0x000988, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_7) == 0x0009B0, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_6) == 0x0009D8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_5) == 0x000A00, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_4) == 0x000A28, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_3) == 0x000A50, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_2) == 0x000A78, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult_1) == 0x000AA0, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_UseCachedPose_2) == 0x000AC8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_8) == 0x000AF8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_LocalToComponentSpace_2) == 0x000B18, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x000B38, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_ModifyBone_2) == 0x000B58, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SequencePlayer_5) == 0x000C90, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_7) == 0x000CD8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000CF8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000D18, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_ModifyBone_1) == 0x000D38, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SequencePlayer_4) == 0x000E70, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_6) == 0x000EB8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_LocalToComponentSpace) == 0x000ED8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_ComponentToLocalSpace) == 0x000EF8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_ModifyBone) == 0x000F18, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SequencePlayer_3) == 0x001050, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_5) == 0x001098, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SequencePlayer_2) == 0x0010B8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_4) == 0x001100, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_TransitionResult) == 0x001120, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SequencePlayer_1) == 0x001148, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_3) == 0x001190, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SequencePlayer) == 0x0011B0, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_2) == 0x0011F8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateMachine_1) == 0x001218, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult_1) == 0x0012E0, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_UseCachedPose_1) == 0x001300, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateResult) == 0x001330, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_StateMachine) == 0x001350, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_LayeredBoneBlend) == 0x001418, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_UseCachedPose) == 0x0014F8, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_Root) == 0x001528, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_Interaction_OpenChest_C, AnimGraphNode_SubInput) == 0x001548, "Member 'UABSub_Survivor00_Interaction_OpenChest_C::AnimGraphNode_SubInput' has a wrong offset!");

}

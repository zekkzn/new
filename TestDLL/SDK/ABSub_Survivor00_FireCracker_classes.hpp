#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABSub_Survivor00_FireCracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABSub_Survivor00_FireCracker_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABSub_Survivor00_FireCracker.ABSub_Survivor00_FireCracker_C
// 0x06F0 (0x0D20 - 0x0630)
class UABSub_Survivor00_FireCracker_C final : public UFireCrackerSurvivorSubAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABSub_Survivor00_FireCracker::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0638(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_63A[0x6];                                      // 0x063A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0640(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0648(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0650(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0670(0x00D0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0740(0x0108)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0848(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0870(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0898(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x08C0(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x08F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0910(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0958(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0A38(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0A80(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0AC8(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0AF8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0B18(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0B48(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0B68(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0C30(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0C50(0x00D0)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void AnimNotify_InteractionCollectableLayerDone();
	void ExecuteUbergraph_ABSub_Survivor00_FireCracker(int32 EntryPoint);
	void SurvivorInteractionCollectableLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_SurvivorInteractionCollectableLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABSub_Survivor00_FireCracker_C">();
	}
	static class UABSub_Survivor00_FireCracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABSub_Survivor00_FireCracker_C>();
	}
};
static_assert(alignof(UABSub_Survivor00_FireCracker_C) == 0x000010, "Wrong alignment on UABSub_Survivor00_FireCracker_C");
static_assert(sizeof(UABSub_Survivor00_FireCracker_C) == 0x000D20, "Wrong size on UABSub_Survivor00_FireCracker_C");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, UberGraphFrame) == 0x000630, "Member 'UABSub_Survivor00_FireCracker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, __AnimBlueprintMutables) == 0x000638, "Member 'UABSub_Survivor00_FireCracker_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimBlueprintExtension_PropertyAccess) == 0x000640, "Member 'UABSub_Survivor00_FireCracker_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimBlueprintExtension_Base) == 0x000648, "Member 'UABSub_Survivor00_FireCracker_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_Root_1) == 0x000650, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_LinkedInputPose_1) == 0x000670, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_SaveCachedPose) == 0x000740, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_TransitionResult_2) == 0x000848, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_TransitionResult_1) == 0x000870, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_TransitionResult) == 0x000898, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_UseCachedPose_2) == 0x0008C0, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_StateResult_2) == 0x0008F0, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_SequencePlayer_1) == 0x000910, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_LayeredBoneBlend) == 0x000958, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_BlendListByBool) == 0x000A38, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_SequencePlayer) == 0x000A80, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_UseCachedPose_1) == 0x000AC8, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_StateResult_1) == 0x000AF8, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_UseCachedPose) == 0x000B18, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_StateResult) == 0x000B48, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_StateMachine) == 0x000B68, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_Root) == 0x000C30, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABSub_Survivor00_FireCracker_C, AnimGraphNode_LinkedInputPose) == 0x000C50, "Member 'UABSub_Survivor00_FireCracker_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");

}

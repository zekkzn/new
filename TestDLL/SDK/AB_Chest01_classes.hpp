#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Chest01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Chest01.AB_Chest01_C
// 0x05D0 (0x0940 - 0x0370)
class UAB_Chest01_C final : public UChestAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x03A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x03D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x03F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0420(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0448(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0470(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0498(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x04C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x04E8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0510(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0558(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0578(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x05C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x05E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0628(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0648(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0690(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x06B0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x06F8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0718(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0760(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0780(0x00C8)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0848(0x0010)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0858(0x00E0)()

public:
	void ExecuteUbergraph_AB_Chest01(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_E3B45CDA420F81FFF28FCA839A2CEECE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_54E01D50404AEB98BC823B958DFA00A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest01_AnimGraphNode_TransitionResult_04BADBB541A6F35FDADAFB8E14BB4ACC();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Chest01_C">();
	}
	static class UAB_Chest01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Chest01_C>();
	}
};
static_assert(alignof(UAB_Chest01_C) == 0x000010, "Wrong alignment on UAB_Chest01_C");
static_assert(sizeof(UAB_Chest01_C) == 0x000940, "Wrong size on UAB_Chest01_C");
static_assert(offsetof(UAB_Chest01_C, UberGraphFrame) == 0x000370, "Member 'UAB_Chest01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UAB_Chest01_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UAB_Chest01_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_Root) == 0x000388, "Member 'UAB_Chest01_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_8) == 0x0003A8, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_7) == 0x0003D0, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_6) == 0x0003F8, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_5) == 0x000420, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_4) == 0x000448, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_3) == 0x000470, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_2) == 0x000498, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult_1) == 0x0004C0, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_TransitionResult) == 0x0004E8, "Member 'UAB_Chest01_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_SequencePlayer_5) == 0x000510, "Member 'UAB_Chest01_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateResult_5) == 0x000558, "Member 'UAB_Chest01_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_SequencePlayer_4) == 0x000578, "Member 'UAB_Chest01_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateResult_4) == 0x0005C0, "Member 'UAB_Chest01_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_SequencePlayer_3) == 0x0005E0, "Member 'UAB_Chest01_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateResult_3) == 0x000628, "Member 'UAB_Chest01_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_SequencePlayer_2) == 0x000648, "Member 'UAB_Chest01_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateResult_2) == 0x000690, "Member 'UAB_Chest01_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_SequencePlayer_1) == 0x0006B0, "Member 'UAB_Chest01_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateResult_1) == 0x0006F8, "Member 'UAB_Chest01_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_SequencePlayer) == 0x000718, "Member 'UAB_Chest01_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateResult) == 0x000760, "Member 'UAB_Chest01_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_StateMachine) == 0x000780, "Member 'UAB_Chest01_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_LocalRefPose) == 0x000848, "Member 'UAB_Chest01_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UAB_Chest01_C, AnimGraphNode_LayeredBoneBlend) == 0x000858, "Member 'UAB_Chest01_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");

}

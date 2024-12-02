#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Entity_Generator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Entity_Generator.AB_Entity_Generator_C
// 0x0340 (0x06A0 - 0x0360)
class UAB_Entity_Generator_C final : public UGeneratorEntityAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0368(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0370(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0378(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0398(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0410(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0438(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0480(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x04A0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04E8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0508(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0550(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0570(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x05B8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x05D8(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void AnimNotify_FX_MakeEntityAppear();
	void AnimNotify_FX_MakeEntityDisappear();
	void AnimNotify_FX_MakeSmokeAppear();
	void AnimNotify_FX_MakeSmokeDisappear();
	void ExecuteUbergraph_AB_Entity_Generator(int32 EntryPoint);

	void GetGeneratorEntity(class ABP_GeneratorEntity_C** AsBP_Generator_Entity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Entity_Generator_C">();
	}
	static class UAB_Entity_Generator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Entity_Generator_C>();
	}
};
static_assert(alignof(UAB_Entity_Generator_C) == 0x000010, "Wrong alignment on UAB_Entity_Generator_C");
static_assert(sizeof(UAB_Entity_Generator_C) == 0x0006A0, "Wrong size on UAB_Entity_Generator_C");
static_assert(offsetof(UAB_Entity_Generator_C, UberGraphFrame) == 0x000360, "Member 'UAB_Entity_Generator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimBlueprintExtension_PropertyAccess) == 0x000368, "Member 'UAB_Entity_Generator_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimBlueprintExtension_Base) == 0x000370, "Member 'UAB_Entity_Generator_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_Root) == 0x000378, "Member 'UAB_Entity_Generator_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_TransitionResult_3) == 0x000398, "Member 'UAB_Entity_Generator_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_TransitionResult_2) == 0x0003C0, "Member 'UAB_Entity_Generator_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_TransitionResult_1) == 0x0003E8, "Member 'UAB_Entity_Generator_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_TransitionResult) == 0x000410, "Member 'UAB_Entity_Generator_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_SequencePlayer_3) == 0x000438, "Member 'UAB_Entity_Generator_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_StateResult_3) == 0x000480, "Member 'UAB_Entity_Generator_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_SequencePlayer_2) == 0x0004A0, "Member 'UAB_Entity_Generator_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_StateResult_2) == 0x0004E8, "Member 'UAB_Entity_Generator_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_SequencePlayer_1) == 0x000508, "Member 'UAB_Entity_Generator_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_StateResult_1) == 0x000550, "Member 'UAB_Entity_Generator_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_SequencePlayer) == 0x000570, "Member 'UAB_Entity_Generator_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_StateResult) == 0x0005B8, "Member 'UAB_Entity_Generator_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_Entity_Generator_C, AnimGraphNode_StateMachine) == 0x0005D8, "Member 'UAB_Entity_Generator_C::AnimGraphNode_StateMachine' has a wrong offset!");

}


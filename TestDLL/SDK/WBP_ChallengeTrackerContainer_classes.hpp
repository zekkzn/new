#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengeTrackerContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ChallengeTrackerContainer.WBP_ChallengeTrackerContainer_C
// 0x0008 (0x0478 - 0x0470)
class UWBP_ChallengeTrackerContainer_C final : public UCoreChallengeTrackerContainerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_ChallengeTrackerContainer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ChallengeTrackerContainer_C">();
	}
	static class UWBP_ChallengeTrackerContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ChallengeTrackerContainer_C>();
	}
};
static_assert(alignof(UWBP_ChallengeTrackerContainer_C) == 0x000008, "Wrong alignment on UWBP_ChallengeTrackerContainer_C");
static_assert(sizeof(UWBP_ChallengeTrackerContainer_C) == 0x000478, "Wrong size on UWBP_ChallengeTrackerContainer_C");
static_assert(offsetof(UWBP_ChallengeTrackerContainer_C, UberGraphFrame) == 0x000470, "Member 'UWBP_ChallengeTrackerContainer_C::UberGraphFrame' has a wrong offset!");

}


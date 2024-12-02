#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetExitSwing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LockerExitInteraction_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClosetExitSwing.ClosetExitSwing_C
// 0x0010 (0x07D0 - 0x07C0)
class UClosetExitSwing_C final : public UBP_LockerExitInteraction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnInteractionUpdateStart(class ADBDPlayer* Player);
	void OnInteractionFinished(class ADBDPlayer* Player, bool HasInteractionStarted);
	void ExecuteUbergraph_ClosetExitSwing(int32 EntryPoint);
	void EndPerformingHeadOn(class ADBDPlayer* Player);

	bool IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType InteractionType) const;
	bool CanApplyHeadOnInteraction(class ADBDPlayer* Player) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClosetExitSwing_C">();
	}
	static class UClosetExitSwing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClosetExitSwing_C>();
	}
};
static_assert(alignof(UClosetExitSwing_C) == 0x000010, "Wrong alignment on UClosetExitSwing_C");
static_assert(sizeof(UClosetExitSwing_C) == 0x0007D0, "Wrong size on UClosetExitSwing_C");
static_assert(offsetof(UClosetExitSwing_C, UberGraphFrame) == 0x0007C0, "Member 'UClosetExitSwing_C::UberGraphFrame' has a wrong offset!");

}


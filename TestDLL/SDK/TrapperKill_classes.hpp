#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrapperKill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TrapperKill.TrapperKill_C
// 0x0010 (0x09E0 - 0x09D0)
class UTrapperKill_C final : public UKillInteractionDefinition
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnInteractionExitEnd(class ADBDPlayer* Player);
	void OnInteractionCompletionStateChanged(class ADBDPlayer* Player, bool Complete);
	void ExecuteUbergraph_TrapperKill(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrapperKill_C">();
	}
	static class UTrapperKill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrapperKill_C>();
	}
};
static_assert(alignof(UTrapperKill_C) == 0x000010, "Wrong alignment on UTrapperKill_C");
static_assert(sizeof(UTrapperKill_C) == 0x0009E0, "Wrong size on UTrapperKill_C");
static_assert(offsetof(UTrapperKill_C, UberGraphFrame) == 0x0009D0, "Member 'UTrapperKill_C::UberGraphFrame' has a wrong offset!");

}


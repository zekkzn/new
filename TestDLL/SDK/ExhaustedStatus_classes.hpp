#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExhaustedStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ExhaustedStatus.ExhaustedStatus_C
// 0x0010 (0x0320 - 0x0310)
class AExhaustedStatus_C final : public AStatusView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ExhaustedStatus(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ExhaustedStatus_C">();
	}
	static class AExhaustedStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExhaustedStatus_C>();
	}
};
static_assert(alignof(AExhaustedStatus_C) == 0x000008, "Wrong alignment on AExhaustedStatus_C");
static_assert(sizeof(AExhaustedStatus_C) == 0x000320, "Wrong size on AExhaustedStatus_C");
static_assert(offsetof(AExhaustedStatus_C, UberGraphFrame) == 0x000310, "Member 'AExhaustedStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AExhaustedStatus_C, DefaultSceneRoot) == 0x000318, "Member 'AExhaustedStatus_C::DefaultSceneRoot' has a wrong offset!");

}


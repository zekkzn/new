#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HarderToHealStatus

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HarderToHealStatus.HarderToHealStatus_C
// 0x0008 (0x0318 - 0x0310)
class AHarderToHealStatus_C final : public AStatusView
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HarderToHealStatus_C">();
	}
	static class AHarderToHealStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHarderToHealStatus_C>();
	}
};
static_assert(alignof(AHarderToHealStatus_C) == 0x000008, "Wrong alignment on AHarderToHealStatus_C");
static_assert(sizeof(AHarderToHealStatus_C) == 0x000318, "Wrong size on AHarderToHealStatus_C");
static_assert(offsetof(AHarderToHealStatus_C, DefaultSceneRoot) == 0x000310, "Member 'AHarderToHealStatus_C::DefaultSceneRoot' has a wrong offset!");

}

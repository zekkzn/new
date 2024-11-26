#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsecutiveWakeUpPenaltyProficiency

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C
// 0x0000 (0x0048 - 0x0048)
class UConsecutiveWakeUpPenaltyProficiency_C final : public UInteractionProficiency
{
public:
	float GetValue(const class UChargeableInteractionDefinition* ChargeableInteraction, const class ADBDPlayer* Player) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsecutiveWakeUpPenaltyProficiency_C">();
	}
	static class UConsecutiveWakeUpPenaltyProficiency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsecutiveWakeUpPenaltyProficiency_C>();
	}
};
static_assert(alignof(UConsecutiveWakeUpPenaltyProficiency_C) == 0x000008, "Wrong alignment on UConsecutiveWakeUpPenaltyProficiency_C");
static_assert(sizeof(UConsecutiveWakeUpPenaltyProficiency_C) == 0x000048, "Wrong size on UConsecutiveWakeUpPenaltyProficiency_C");

}


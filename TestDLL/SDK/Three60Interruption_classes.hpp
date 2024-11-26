#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Three60Interruption

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 360Interruption.360Interruption_C
// 0x0010 (0x03C0 - 0x03B0)
class UThree60Interruption_C : public UInterruptionDefinition
{
public:
	double                                        SnapDistance;                                      // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShoulderOffset;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool IsInterruptionPossible(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee) const;
	struct FRotator GetInterruptionSnapPointRotationForInterruptor(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee) const;
	struct FVector GetInterruptionSnapPointPositionForInterruptor(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"360Interruption_C">();
	}
	static class UThree60Interruption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThree60Interruption_C>();
	}
};
static_assert(alignof(UThree60Interruption_C) == 0x000010, "Wrong alignment on UThree60Interruption_C");
static_assert(sizeof(UThree60Interruption_C) == 0x0003C0, "Wrong size on UThree60Interruption_C");
static_assert(offsetof(UThree60Interruption_C, SnapDistance) == 0x0003B0, "Member 'UThree60Interruption_C::SnapDistance' has a wrong offset!");
static_assert(offsetof(UThree60Interruption_C, ShoulderOffset) == 0x0003B8, "Member 'UThree60Interruption_C::ShoulderOffset' has a wrong offset!");

}


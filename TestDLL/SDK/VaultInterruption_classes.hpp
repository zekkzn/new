#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultInterruption

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultInterruption.VaultInterruption_C
// 0x0010 (0x03C0 - 0x03B0)
class UVaultInterruption_C : public UInterruptionDefinition
{
public:
	bool                                          IsBackInterruption;                                // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool IsInterruptionPossible(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee) const;
	void GetVaultingObject(class UObject** Window) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultInterruption_C">();
	}
	static class UVaultInterruption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaultInterruption_C>();
	}
};
static_assert(alignof(UVaultInterruption_C) == 0x000010, "Wrong alignment on UVaultInterruption_C");
static_assert(sizeof(UVaultInterruption_C) == 0x0003C0, "Wrong size on UVaultInterruption_C");
static_assert(offsetof(UVaultInterruption_C, IsBackInterruption) == 0x0003B0, "Member 'UVaultInterruption_C::IsBackInterruption' has a wrong offset!");

}

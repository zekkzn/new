#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockerSearchPlayerBlindImmunityStatusEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LockerSearchPlayerBlindImmunityStatusEffect.LockerSearchPlayerBlindImmunityStatusEffect_C
// 0x0008 (0x0388 - 0x0380)
class ULockerSearchPlayerBlindImmunityStatusEffect_C final : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_LockerSearchPlayerBlindImmunityStatusEffect(int32 EntryPoint);
	void Authority_OnInstantiateModifierConditions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockerSearchPlayerBlindImmunityStatusEffect_C">();
	}
	static class ULockerSearchPlayerBlindImmunityStatusEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockerSearchPlayerBlindImmunityStatusEffect_C>();
	}
};
static_assert(alignof(ULockerSearchPlayerBlindImmunityStatusEffect_C) == 0x000008, "Wrong alignment on ULockerSearchPlayerBlindImmunityStatusEffect_C");
static_assert(sizeof(ULockerSearchPlayerBlindImmunityStatusEffect_C) == 0x000388, "Wrong size on ULockerSearchPlayerBlindImmunityStatusEffect_C");
static_assert(offsetof(ULockerSearchPlayerBlindImmunityStatusEffect_C, UberGraphFrame) == 0x000380, "Member 'ULockerSearchPlayerBlindImmunityStatusEffect_C::UberGraphFrame' has a wrong offset!");

}


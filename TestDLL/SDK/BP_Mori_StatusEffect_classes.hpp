#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mori_StatusEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Mori_StatusEffect.BP_Mori_StatusEffect_C
// 0x0008 (0x0388 - 0x0380)
class UBP_Mori_StatusEffect_C final : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Authority_OnInstantiateModifierConditions();
	void ExecuteUbergraph_BP_Mori_StatusEffect(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Mori_StatusEffect_C">();
	}
	static class UBP_Mori_StatusEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Mori_StatusEffect_C>();
	}
};
static_assert(alignof(UBP_Mori_StatusEffect_C) == 0x000008, "Wrong alignment on UBP_Mori_StatusEffect_C");
static_assert(sizeof(UBP_Mori_StatusEffect_C) == 0x000388, "Wrong size on UBP_Mori_StatusEffect_C");
static_assert(offsetof(UBP_Mori_StatusEffect_C, UberGraphFrame) == 0x000380, "Member 'UBP_Mori_StatusEffect_C::UberGraphFrame' has a wrong offset!");

}

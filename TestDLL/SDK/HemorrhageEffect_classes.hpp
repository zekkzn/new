#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HemorrhageEffect

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "DBDCompetence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HemorrhageEffect.HemorrhageEffect_C
// 0x0010 (0x0408 - 0x03F8)
class UHemorrhageEffect_C final : public UHemorrhageStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Bleeding_Frequency;                                // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnStoppedHealing(const class ADBDPlayer* Instigator, const class ADBDPlayer* Target);
	void OnInitialized();
	void ExecuteUbergraph_HemorrhageEffect(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HemorrhageEffect_C">();
	}
	static class UHemorrhageEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHemorrhageEffect_C>();
	}
};
static_assert(alignof(UHemorrhageEffect_C) == 0x000008, "Wrong alignment on UHemorrhageEffect_C");
static_assert(sizeof(UHemorrhageEffect_C) == 0x000408, "Wrong size on UHemorrhageEffect_C");
static_assert(offsetof(UHemorrhageEffect_C, UberGraphFrame) == 0x0003F8, "Member 'UHemorrhageEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHemorrhageEffect_C, Bleeding_Frequency) == 0x000400, "Member 'UHemorrhageEffect_C::Bleeding_Frequency' has a wrong offset!");

}


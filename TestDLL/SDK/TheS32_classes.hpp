#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS32

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS32.S32P01
// 0x0040 (0x04E8 - 0x04A8)
class US32P01 final : public UGeneratorTrapPerk
{
public:
	float                                         _generatorRevealRange;                             // 0x04A8(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4AC[0x4];                                      // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _revealEffect;                                     // 0x04B0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _revealStatus;                                     // 0x04B8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _isKillerInRange;                                  // 0x04C0(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C1[0x27];                                     // 0x04C1(0x0027)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_IsKillerInRange();

	float GetGeneratorRevealRange() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S32P01">();
	}
	static class US32P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US32P01>();
	}
};
static_assert(alignof(US32P01) == 0x000008, "Wrong alignment on US32P01");
static_assert(sizeof(US32P01) == 0x0004E8, "Wrong size on US32P01");
static_assert(offsetof(US32P01, _generatorRevealRange) == 0x0004A8, "Member 'US32P01::_generatorRevealRange' has a wrong offset!");
static_assert(offsetof(US32P01, _revealEffect) == 0x0004B0, "Member 'US32P01::_revealEffect' has a wrong offset!");
static_assert(offsetof(US32P01, _revealStatus) == 0x0004B8, "Member 'US32P01::_revealStatus' has a wrong offset!");
static_assert(offsetof(US32P01, _isKillerInRange) == 0x0004C0, "Member 'US32P01::_isKillerInRange' has a wrong offset!");

// Class TheS32.S32P02
// 0x0020 (0x0440 - 0x0420)
class US32P02 final : public UPerk
{
public:
	float                                         _hitDistanceToTriggerPerkEffect[0x3];              // 0x0420(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _healingProgressionIncreasedOnHit[0x3];            // 0x042C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _tresholdToHealCompletely;                         // 0x0438(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetHealingProgressionIncreaseAtLevel() const;
	float GetHitDistanceAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S32P02">();
	}
	static class US32P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US32P02>();
	}
};
static_assert(alignof(US32P02) == 0x000008, "Wrong alignment on US32P02");
static_assert(sizeof(US32P02) == 0x000440, "Wrong size on US32P02");
static_assert(offsetof(US32P02, _hitDistanceToTriggerPerkEffect) == 0x000420, "Member 'US32P02::_hitDistanceToTriggerPerkEffect' has a wrong offset!");
static_assert(offsetof(US32P02, _healingProgressionIncreasedOnHit) == 0x00042C, "Member 'US32P02::_healingProgressionIncreasedOnHit' has a wrong offset!");
static_assert(offsetof(US32P02, _tresholdToHealCompletely) == 0x000438, "Member 'US32P02::_tresholdToHealCompletely' has a wrong offset!");

// Class TheS32.S32P03
// 0x0018 (0x0438 - 0x0420)
class US32P03 final : public UPerk
{
public:
	float                                         _activationTime[0x3];                              // 0x0420(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_42C[0xC];                                      // 0x042C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetActivationTimeForLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S32P03">();
	}
	static class US32P03* GetDefaultObj()
	{
		return GetDefaultObjImpl<US32P03>();
	}
};
static_assert(alignof(US32P03) == 0x000008, "Wrong alignment on US32P03");
static_assert(sizeof(US32P03) == 0x000438, "Wrong size on US32P03");
static_assert(offsetof(US32P03, _activationTime) == 0x000420, "Member 'US32P03::_activationTime' has a wrong offset!");

}

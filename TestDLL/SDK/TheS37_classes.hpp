#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS37

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS37.S37P01
// 0x0058 (0x0478 - 0x0420)
class US37P01 final : public UPerk
{
public:
	float                                         _killerRevealedTime[0x3];                          // 0x0420(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _chaseLingeringTimer[0x3];                         // 0x042C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _revealKillerStatusEffectClass;                    // 0x0438(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _revealGeneratorStatusEffectClass;                 // 0x0440(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _revealGeneratorStatusEffect;                      // 0x0448(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_450[0x28];                                     // 0x0450(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetChaseLingeringTimerAtLevel() const;
	float GetKillerRevealedTimeAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S37P01">();
	}
	static class US37P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US37P01>();
	}
};
static_assert(alignof(US37P01) == 0x000008, "Wrong alignment on US37P01");
static_assert(sizeof(US37P01) == 0x000478, "Wrong size on US37P01");
static_assert(offsetof(US37P01, _killerRevealedTime) == 0x000420, "Member 'US37P01::_killerRevealedTime' has a wrong offset!");
static_assert(offsetof(US37P01, _chaseLingeringTimer) == 0x00042C, "Member 'US37P01::_chaseLingeringTimer' has a wrong offset!");
static_assert(offsetof(US37P01, _revealKillerStatusEffectClass) == 0x000438, "Member 'US37P01::_revealKillerStatusEffectClass' has a wrong offset!");
static_assert(offsetof(US37P01, _revealGeneratorStatusEffectClass) == 0x000440, "Member 'US37P01::_revealGeneratorStatusEffectClass' has a wrong offset!");
static_assert(offsetof(US37P01, _revealGeneratorStatusEffect) == 0x000448, "Member 'US37P01::_revealGeneratorStatusEffect' has a wrong offset!");

// Class TheS37.S37P02
// 0x0030 (0x0450 - 0x0420)
class US37P02 final : public UPerk
{
public:
	TSubclassOf<class UStatusEffect>              _enduranceStatusEffect;                            // 0x0420(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _hasteStatusEffect;                                // 0x0428(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _enduranceEffectTimer[0x3];                        // 0x0430(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hasteSpeedAmount[0x3];                            // 0x043C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_448[0x8];                                      // 0x0448(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetEnduranceEffectTimerAtLevel() const;
	float GetHasteSpeedAmountAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S37P02">();
	}
	static class US37P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US37P02>();
	}
};
static_assert(alignof(US37P02) == 0x000008, "Wrong alignment on US37P02");
static_assert(sizeof(US37P02) == 0x000450, "Wrong size on US37P02");
static_assert(offsetof(US37P02, _enduranceStatusEffect) == 0x000420, "Member 'US37P02::_enduranceStatusEffect' has a wrong offset!");
static_assert(offsetof(US37P02, _hasteStatusEffect) == 0x000428, "Member 'US37P02::_hasteStatusEffect' has a wrong offset!");
static_assert(offsetof(US37P02, _enduranceEffectTimer) == 0x000430, "Member 'US37P02::_enduranceEffectTimer' has a wrong offset!");
static_assert(offsetof(US37P02, _hasteSpeedAmount) == 0x00043C, "Member 'US37P02::_hasteSpeedAmount' has a wrong offset!");

// Class TheS37.S37P03
// 0x0040 (0x0460 - 0x0420)
class US37P03 final : public UPerk
{
public:
	int32                                         _maxTokens;                                        // 0x0420(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         _repairSpeedDebuffTime[0x3];                       // 0x0424(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _repairSpeedDebuffAmount;                          // 0x0430(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _allowSearchChestForToolboxEffectClass;            // 0x0438(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _repairSpeedDebuffEffectClass;                     // 0x0440(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _allowSearchChestForToolboxEffect;                 // 0x0448(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_450[0x10];                                     // 0x0450(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetRepairSpeedDebuffAmount() const;
	float GetRepairSpeedDebuffTimeAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S37P03">();
	}
	static class US37P03* GetDefaultObj()
	{
		return GetDefaultObjImpl<US37P03>();
	}
};
static_assert(alignof(US37P03) == 0x000008, "Wrong alignment on US37P03");
static_assert(sizeof(US37P03) == 0x000460, "Wrong size on US37P03");
static_assert(offsetof(US37P03, _maxTokens) == 0x000420, "Member 'US37P03::_maxTokens' has a wrong offset!");
static_assert(offsetof(US37P03, _repairSpeedDebuffTime) == 0x000424, "Member 'US37P03::_repairSpeedDebuffTime' has a wrong offset!");
static_assert(offsetof(US37P03, _repairSpeedDebuffAmount) == 0x000430, "Member 'US37P03::_repairSpeedDebuffAmount' has a wrong offset!");
static_assert(offsetof(US37P03, _allowSearchChestForToolboxEffectClass) == 0x000438, "Member 'US37P03::_allowSearchChestForToolboxEffectClass' has a wrong offset!");
static_assert(offsetof(US37P03, _repairSpeedDebuffEffectClass) == 0x000440, "Member 'US37P03::_repairSpeedDebuffEffectClass' has a wrong offset!");
static_assert(offsetof(US37P03, _allowSearchChestForToolboxEffect) == 0x000448, "Member 'US37P03::_allowSearchChestForToolboxEffect' has a wrong offset!");

}

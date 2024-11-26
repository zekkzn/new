#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS41

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS41.S41P01
// 0x0010 (0x0458 - 0x0448)
class US41P01 final : public UImposeStatusEffectSeancePerk
{
public:
	float                                         _instantChargesGained[0x3];                        // 0x0448(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetInstantChargesGained() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S41P01">();
	}
	static class US41P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US41P01>();
	}
};
static_assert(alignof(US41P01) == 0x000008, "Wrong alignment on US41P01");
static_assert(sizeof(US41P01) == 0x000458, "Wrong size on US41P01");
static_assert(offsetof(US41P01, _instantChargesGained) == 0x000448, "Member 'US41P01::_instantChargesGained' has a wrong offset!");

// Class TheS41.S41P02
// 0x0040 (0x0460 - 0x0420)
class US41P02 final : public UPerk
{
public:
	TSubclassOf<class UStatusEffect>              _timedRevealKillerAuraEffectClass;                 // 0x0420(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _auraDuration[0x3];                                // 0x0428(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _selfHealNoMedkitSpeedPenaltyEffectClass;          // 0x0438(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _selfHealSpeedPenalty[0x3];                        // 0x0440(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_44C[0x4];                                      // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UInteractionDefinition>     _s41p02HealInteraction;                            // 0x0450(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionAttacherComponent*          _interactionAttacherComponent;                     // 0x0458(0x0008)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnRep_InteractionAttacherComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S41P02">();
	}
	static class US41P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US41P02>();
	}
};
static_assert(alignof(US41P02) == 0x000008, "Wrong alignment on US41P02");
static_assert(sizeof(US41P02) == 0x000460, "Wrong size on US41P02");
static_assert(offsetof(US41P02, _timedRevealKillerAuraEffectClass) == 0x000420, "Member 'US41P02::_timedRevealKillerAuraEffectClass' has a wrong offset!");
static_assert(offsetof(US41P02, _auraDuration) == 0x000428, "Member 'US41P02::_auraDuration' has a wrong offset!");
static_assert(offsetof(US41P02, _selfHealNoMedkitSpeedPenaltyEffectClass) == 0x000438, "Member 'US41P02::_selfHealNoMedkitSpeedPenaltyEffectClass' has a wrong offset!");
static_assert(offsetof(US41P02, _selfHealSpeedPenalty) == 0x000440, "Member 'US41P02::_selfHealSpeedPenalty' has a wrong offset!");
static_assert(offsetof(US41P02, _s41p02HealInteraction) == 0x000450, "Member 'US41P02::_s41p02HealInteraction' has a wrong offset!");
static_assert(offsetof(US41P02, _interactionAttacherComponent) == 0x000458, "Member 'US41P02::_interactionAttacherComponent' has a wrong offset!");

// Class TheS41.S41P03
// 0x0020 (0x0440 - 0x0420)
class US41P03 final : public UPerk
{
public:
	TSubclassOf<class UStatusEffect>              _selfUnhookBasementAlwaysSucceedEffectClass;       // 0x0420(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _timedRevealKillerAuraEffectClass;                 // 0x0428(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _auraDuration[0x3];                                // 0x0430(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S41P03">();
	}
	static class US41P03* GetDefaultObj()
	{
		return GetDefaultObjImpl<US41P03>();
	}
};
static_assert(alignof(US41P03) == 0x000008, "Wrong alignment on US41P03");
static_assert(sizeof(US41P03) == 0x000440, "Wrong size on US41P03");
static_assert(offsetof(US41P03, _selfUnhookBasementAlwaysSucceedEffectClass) == 0x000420, "Member 'US41P03::_selfUnhookBasementAlwaysSucceedEffectClass' has a wrong offset!");
static_assert(offsetof(US41P03, _timedRevealKillerAuraEffectClass) == 0x000428, "Member 'US41P03::_timedRevealKillerAuraEffectClass' has a wrong offset!");
static_assert(offsetof(US41P03, _auraDuration) == 0x000430, "Member 'US41P03::_auraDuration' has a wrong offset!");

}


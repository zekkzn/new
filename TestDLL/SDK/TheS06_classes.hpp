#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS06

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS06.ObjectOfObsession
// 0x0070 (0x0490 - 0x0420)
class UObjectOfObsession final : public UPerk
{
public:
	float                                         _revealTimeIntervals[0x3];                         // 0x0420(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _revealTimeDuration[0x3];                          // 0x042C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _actionSpeedBonus[0x3];                            // 0x0438(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_444[0x34];                                     // 0x0444(0x0034)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _increaseObsessionChanceEffect;                    // 0x0478(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _revealToKillerStatusEffect;                       // 0x0480(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _objectOfObsessionActionSpeedEffect;               // 0x0488(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void Authority_OnDamageStateChanged(ECamperDamageState OldDamageState, ECamperDamageState CurrentDamageState);
	void Authority_OnPlayerImmobilizeStateChanged(const EImmobilizedState OldImmobilizeState, const EImmobilizedState NewImmobilizeState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectOfObsession">();
	}
	static class UObjectOfObsession* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectOfObsession>();
	}
};
static_assert(alignof(UObjectOfObsession) == 0x000008, "Wrong alignment on UObjectOfObsession");
static_assert(sizeof(UObjectOfObsession) == 0x000490, "Wrong size on UObjectOfObsession");
static_assert(offsetof(UObjectOfObsession, _revealTimeIntervals) == 0x000420, "Member 'UObjectOfObsession::_revealTimeIntervals' has a wrong offset!");
static_assert(offsetof(UObjectOfObsession, _revealTimeDuration) == 0x00042C, "Member 'UObjectOfObsession::_revealTimeDuration' has a wrong offset!");
static_assert(offsetof(UObjectOfObsession, _actionSpeedBonus) == 0x000438, "Member 'UObjectOfObsession::_actionSpeedBonus' has a wrong offset!");
static_assert(offsetof(UObjectOfObsession, _increaseObsessionChanceEffect) == 0x000478, "Member 'UObjectOfObsession::_increaseObsessionChanceEffect' has a wrong offset!");
static_assert(offsetof(UObjectOfObsession, _revealToKillerStatusEffect) == 0x000480, "Member 'UObjectOfObsession::_revealToKillerStatusEffect' has a wrong offset!");
static_assert(offsetof(UObjectOfObsession, _objectOfObsessionActionSpeedEffect) == 0x000488, "Member 'UObjectOfObsession::_objectOfObsessionActionSpeedEffect' has a wrong offset!");

}

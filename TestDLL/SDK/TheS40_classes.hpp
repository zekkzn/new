#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS40

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS40.S40CheatComponent
// 0x0000 (0x00A8 - 0x00A8)
class US40CheatComponent final : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S40CheatComponent">();
	}
	static class US40CheatComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<US40CheatComponent>();
	}
};
static_assert(alignof(US40CheatComponent) == 0x000008, "Wrong alignment on US40CheatComponent");
static_assert(sizeof(US40CheatComponent) == 0x0000A8, "Wrong size on US40CheatComponent");

// Class TheS40.S40P01
// 0x0040 (0x0460 - 0x0420)
class US40P01 final : public UPerk
{
public:
	uint8                                         Pad_420[0x10];                                     // 0x0420(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _S40P01HasteEffectClass;                           // 0x0430(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _hinderedEffectClass;                              // 0x0438(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _S40P01HasteEffect;                                // 0x0440(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hasteEffectPercent;                               // 0x0448(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hinderedEffectTime;                               // 0x044C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hinderedEffectPercent;                            // 0x0450(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _cooldownTriggerTime[0x3];                         // 0x0454(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S40P01">();
	}
	static class US40P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US40P01>();
	}
};
static_assert(alignof(US40P01) == 0x000008, "Wrong alignment on US40P01");
static_assert(sizeof(US40P01) == 0x000460, "Wrong size on US40P01");
static_assert(offsetof(US40P01, _S40P01HasteEffectClass) == 0x000430, "Member 'US40P01::_S40P01HasteEffectClass' has a wrong offset!");
static_assert(offsetof(US40P01, _hinderedEffectClass) == 0x000438, "Member 'US40P01::_hinderedEffectClass' has a wrong offset!");
static_assert(offsetof(US40P01, _S40P01HasteEffect) == 0x000440, "Member 'US40P01::_S40P01HasteEffect' has a wrong offset!");
static_assert(offsetof(US40P01, _hasteEffectPercent) == 0x000448, "Member 'US40P01::_hasteEffectPercent' has a wrong offset!");
static_assert(offsetof(US40P01, _hinderedEffectTime) == 0x00044C, "Member 'US40P01::_hinderedEffectTime' has a wrong offset!");
static_assert(offsetof(US40P01, _hinderedEffectPercent) == 0x000450, "Member 'US40P01::_hinderedEffectPercent' has a wrong offset!");
static_assert(offsetof(US40P01, _cooldownTriggerTime) == 0x000454, "Member 'US40P01::_cooldownTriggerTime' has a wrong offset!");

// Class TheS40.S40P02
// 0x0000 (0x0420 - 0x0420)
class US40P02 final : public UPerk
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S40P02">();
	}
	static class US40P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US40P02>();
	}
};
static_assert(alignof(US40P02) == 0x000008, "Wrong alignment on US40P02");
static_assert(sizeof(US40P02) == 0x000420, "Wrong size on US40P02");

}


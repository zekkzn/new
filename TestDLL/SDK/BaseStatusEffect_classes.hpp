#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseStatusEffect

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseStatusEffect.BaseStatusEffect_C
// 0x0000 (0x0380 - 0x0380)
class UBaseStatusEffect_C : public UStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseStatusEffect_C">();
	}
	static class UBaseStatusEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseStatusEffect_C>();
	}
};
static_assert(alignof(UBaseStatusEffect_C) == 0x000008, "Wrong alignment on UBaseStatusEffect_C");
static_assert(sizeof(UBaseStatusEffect_C) == 0x000380, "Wrong size on UBaseStatusEffect_C");

}

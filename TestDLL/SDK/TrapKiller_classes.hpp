#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrapKiller

#include "Basic.hpp"

#include "TheTrapper_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TrapKiller.TrapKiller_C
// 0x0000 (0x0820 - 0x0820)
class UTrapKiller_C final : public UTrapKillerInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrapKiller_C">();
	}
	static class UTrapKiller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrapKiller_C>();
	}
};
static_assert(alignof(UTrapKiller_C) == 0x000010, "Wrong alignment on UTrapKiller_C");
static_assert(sizeof(UTrapKiller_C) == 0x000820, "Wrong size on UTrapKiller_C");

}

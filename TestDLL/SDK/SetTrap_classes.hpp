#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SetTrap

#include "Basic.hpp"

#include "TheTrapper_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SetTrap.SetTrap_C
// 0x0000 (0x09C0 - 0x09C0)
class USetTrap_C final : public USetBearTrap
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SetTrap_C">();
	}
	static class USetTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetTrap_C>();
	}
};
static_assert(alignof(USetTrap_C) == 0x000010, "Wrong alignment on USetTrap_C");
static_assert(sizeof(USetTrap_C) == 0x0009C0, "Wrong size on USetTrap_C");

}

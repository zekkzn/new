#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Map_001

#include "Basic.hpp"

#include "BP_Map_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Map_001.BP_Map_001_C
// 0x0000 (0x0628 - 0x0628)
class ABP_Map_001_C final : public ABP_Map_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Map_001_C">();
	}
	static class ABP_Map_001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Map_001_C>();
	}
};
static_assert(alignof(ABP_Map_001_C) == 0x000008, "Wrong alignment on ABP_Map_001_C");
static_assert(sizeof(ABP_Map_001_C) == 0x000628, "Wrong size on ABP_Map_001_C");

}

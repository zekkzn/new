#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DBDRegionFinder

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DBDRegionFinder.BP_DBDRegionFinder_C
// 0x0000 (0x00A8 - 0x00A8)
class UBP_DBDRegionFinder_C final : public URegionFinder
{
public:
	void ConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DBDRegionFinder_C">();
	}
	static class UBP_DBDRegionFinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DBDRegionFinder_C>();
	}
};
static_assert(alignof(UBP_DBDRegionFinder_C) == 0x000008, "Wrong alignment on UBP_DBDRegionFinder_C");
static_assert(sizeof(UBP_DBDRegionFinder_C) == 0x0000A8, "Wrong size on UBP_DBDRegionFinder_C");

}

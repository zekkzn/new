#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BleedoutKOIndicator

#include "Basic.hpp"

#include "BP_BubbleIndicator_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BleedoutKOIndicator.BleedoutKOIndicator_C
// 0x0000 (0x02F0 - 0x02F0)
class ABleedoutKOIndicator_C final : public ABP_BubbleIndicator_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BleedoutKOIndicator_C">();
	}
	static class ABleedoutKOIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABleedoutKOIndicator_C>();
	}
};
static_assert(alignof(ABleedoutKOIndicator_C) == 0x000008, "Wrong alignment on ABleedoutKOIndicator_C");
static_assert(sizeof(ABleedoutKOIndicator_C) == 0x0002F0, "Wrong size on ABleedoutKOIndicator_C");

}

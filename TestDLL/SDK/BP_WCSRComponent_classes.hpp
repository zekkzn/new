#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WCSRComponent

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WCSRComponent.BP_WCSRComponent_C
// 0x0000 (0x0140 - 0x0140)
class UBP_WCSRComponent_C final : public UWCSRComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WCSRComponent_C">();
	}
	static class UBP_WCSRComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WCSRComponent_C>();
	}
};
static_assert(alignof(UBP_WCSRComponent_C) == 0x000008, "Wrong alignment on UBP_WCSRComponent_C");
static_assert(sizeof(UBP_WCSRComponent_C) == 0x000140, "Wrong size on UBP_WCSRComponent_C");

}

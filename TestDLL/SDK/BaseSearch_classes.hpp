#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseSearch

#include "Basic.hpp"

#include "DBDInteraction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseSearch.BaseSearch_C
// 0x0000 (0x07B0 - 0x07B0)
class UBaseSearch_C : public USearchLockerInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseSearch_C">();
	}
	static class UBaseSearch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseSearch_C>();
	}
};
static_assert(alignof(UBaseSearch_C) == 0x000010, "Wrong alignment on UBaseSearch_C");
static_assert(sizeof(UBaseSearch_C) == 0x0007B0, "Wrong size on UBaseSearch_C");

}


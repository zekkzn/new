#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetHideEnter

#include "Basic.hpp"

#include "DBDGameplay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClosetHideEnter.ClosetHideEnter_C
// 0x0000 (0x07D0 - 0x07D0)
class UClosetHideEnter_C final : public UClosetHideEnterInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClosetHideEnter_C">();
	}
	static class UClosetHideEnter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClosetHideEnter_C>();
	}
};
static_assert(alignof(UClosetHideEnter_C) == 0x000010, "Wrong alignment on UClosetHideEnter_C");
static_assert(sizeof(UClosetHideEnter_C) == 0x0007D0, "Wrong size on UClosetHideEnter_C");

}

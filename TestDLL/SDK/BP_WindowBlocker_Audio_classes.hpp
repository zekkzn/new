#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WindowBlocker_Audio

#include "Basic.hpp"

#include "DBDGameplay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WindowBlocker_Audio.BP_WindowBlocker_Audio_C
// 0x0008 (0x02C8 - 0x02C0)
class ABP_WindowBlocker_Audio_C final : public AAudioBlockFeedback
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WindowBlocker_Audio_C">();
	}
	static class ABP_WindowBlocker_Audio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WindowBlocker_Audio_C>();
	}
};
static_assert(alignof(ABP_WindowBlocker_Audio_C) == 0x000008, "Wrong alignment on ABP_WindowBlocker_Audio_C");
static_assert(sizeof(ABP_WindowBlocker_Audio_C) == 0x0002C8, "Wrong size on ABP_WindowBlocker_Audio_C");
static_assert(offsetof(ABP_WindowBlocker_Audio_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_WindowBlocker_Audio_C::DefaultSceneRoot' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_Killer_AnimNotifies_Handler

#include "Basic.hpp"

#include "AnimationUtilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Audio_Killer_AnimNotifies_Handler.BP_Audio_Killer_AnimNotifies_Handler_C
// 0x0010 (0x0040 - 0x0030)
class UBP_Audio_Killer_AnimNotifies_Handler_C final : public UAnimEffectHandler
{
public:
	class UAkAudioEvent*                          Event;                                             // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Follow;                                            // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool HandleAnimNotify(class AActor* Player, const class FName& NotifyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Audio_Killer_AnimNotifies_Handler_C">();
	}
	static class UBP_Audio_Killer_AnimNotifies_Handler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Audio_Killer_AnimNotifies_Handler_C>();
	}
};
static_assert(alignof(UBP_Audio_Killer_AnimNotifies_Handler_C) == 0x000008, "Wrong alignment on UBP_Audio_Killer_AnimNotifies_Handler_C");
static_assert(sizeof(UBP_Audio_Killer_AnimNotifies_Handler_C) == 0x000040, "Wrong size on UBP_Audio_Killer_AnimNotifies_Handler_C");
static_assert(offsetof(UBP_Audio_Killer_AnimNotifies_Handler_C, Event) == 0x000030, "Member 'UBP_Audio_Killer_AnimNotifies_Handler_C::Event' has a wrong offset!");
static_assert(offsetof(UBP_Audio_Killer_AnimNotifies_Handler_C, Follow) == 0x000038, "Member 'UBP_Audio_Killer_AnimNotifies_Handler_C::Follow' has a wrong offset!");

}

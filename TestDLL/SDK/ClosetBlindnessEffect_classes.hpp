#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetBlindnessEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BlindnessEffect_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClosetBlindnessEffect.ClosetBlindnessEffect_C
// 0x0008 (0x03A0 - 0x0398)
class UClosetBlindnessEffect_C final : public UBlindnessEffect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ClosetBlindnessEffect_C;            // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnInitialized();
	void OnGameEventDispatched(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData);
	void OnAnyPlayerExitCloset(class UObject* Player);
	void ExecuteUbergraph_ClosetBlindnessEffect(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClosetBlindnessEffect_C">();
	}
	static class UClosetBlindnessEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClosetBlindnessEffect_C>();
	}
};
static_assert(alignof(UClosetBlindnessEffect_C) == 0x000008, "Wrong alignment on UClosetBlindnessEffect_C");
static_assert(sizeof(UClosetBlindnessEffect_C) == 0x0003A0, "Wrong size on UClosetBlindnessEffect_C");
static_assert(offsetof(UClosetBlindnessEffect_C, UberGraphFrame_ClosetBlindnessEffect_C) == 0x000398, "Member 'UClosetBlindnessEffect_C::UberGraphFrame_ClosetBlindnessEffect_C' has a wrong offset!");

}

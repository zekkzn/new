#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gesture03

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GestureGeneric_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Gesture03.Gesture03_C
// 0x0020 (0x07B0 - 0x0790)
class UGesture03_C final : public UGestureGeneric_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Gesture03_C;                        // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                ChairRelativePos;                                  // 0x0790(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ChairSpawned;                                      // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DestroyChair();
	void ExecuteUbergraph_Gesture03(int32 EntryPoint);
	void OnInteractionCancelled(class ADBDPlayer* Player);
	void OnInteractionEnterStart(class ADBDPlayer* Player, float ActualSnapTime);
	void OnInteractionExitEnd(class ADBDPlayer* Player);
	void OnInteractionFinished(class ADBDPlayer* Player, bool HasInteractionStarted);
	void OnInteractionInterruptStart(class ADBDPlayer* Player, class UInterruptionDefinition* CurrentInterruption, class ADBDPlayer* InterruptingPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Gesture03_C">();
	}
	static class UGesture03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGesture03_C>();
	}
};
static_assert(alignof(UGesture03_C) == 0x000010, "Wrong alignment on UGesture03_C");
static_assert(sizeof(UGesture03_C) == 0x0007B0, "Wrong size on UGesture03_C");
static_assert(offsetof(UGesture03_C, UberGraphFrame_Gesture03_C) == 0x000788, "Member 'UGesture03_C::UberGraphFrame_Gesture03_C' has a wrong offset!");
static_assert(offsetof(UGesture03_C, ChairRelativePos) == 0x000790, "Member 'UGesture03_C::ChairRelativePos' has a wrong offset!");
static_assert(offsetof(UGesture03_C, ChairSpawned) == 0x0007A8, "Member 'UGesture03_C::ChairSpawned' has a wrong offset!");

}

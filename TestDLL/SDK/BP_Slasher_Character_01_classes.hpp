#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Slasher_Character_01

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Slasher_Character_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Slasher_Character_01.BP_Slasher_Character_01_C
// 0x0030 (0x1EE0 - 0x1EB0)
class ABP_Slasher_Character_01_C final : public ABP_Slasher_Character_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Slasher_Character_01_C;          // 0x1EA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBearTrapKillerComponent*               BearTrapKillerComponent;                           // 0x1EB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPounceAttack_BP_C*                     PounceAttack;                                      // 0x1EB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USlashAttack_BP_C*                      SlashAttack;                                       // 0x1EC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Audio_KLR_01_C*                     BP_Audio_KLR_01;                                   // 0x1EC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObjectPlacerComponent*                 TrapPlacer;                                        // 0x1ED0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TrapMesh_0;                                        // 0x1ED8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void IsTrapPlacementValid(bool* Result);
	void IntroCompleted();
	void ExecuteUbergraph_BP_Slasher_Character_01(int32 EntryPoint);
	void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& SwitchState);
	void Trap_Collected(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Slasher_Character_01_C">();
	}
	static class ABP_Slasher_Character_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Slasher_Character_01_C>();
	}
};
static_assert(alignof(ABP_Slasher_Character_01_C) == 0x000010, "Wrong alignment on ABP_Slasher_Character_01_C");
static_assert(sizeof(ABP_Slasher_Character_01_C) == 0x001EE0, "Wrong size on ABP_Slasher_Character_01_C");
static_assert(offsetof(ABP_Slasher_Character_01_C, UberGraphFrame_BP_Slasher_Character_01_C) == 0x001EA8, "Member 'ABP_Slasher_Character_01_C::UberGraphFrame_BP_Slasher_Character_01_C' has a wrong offset!");
static_assert(offsetof(ABP_Slasher_Character_01_C, BearTrapKillerComponent) == 0x001EB0, "Member 'ABP_Slasher_Character_01_C::BearTrapKillerComponent' has a wrong offset!");
static_assert(offsetof(ABP_Slasher_Character_01_C, PounceAttack) == 0x001EB8, "Member 'ABP_Slasher_Character_01_C::PounceAttack' has a wrong offset!");
static_assert(offsetof(ABP_Slasher_Character_01_C, SlashAttack) == 0x001EC0, "Member 'ABP_Slasher_Character_01_C::SlashAttack' has a wrong offset!");
static_assert(offsetof(ABP_Slasher_Character_01_C, BP_Audio_KLR_01) == 0x001EC8, "Member 'ABP_Slasher_Character_01_C::BP_Audio_KLR_01' has a wrong offset!");
static_assert(offsetof(ABP_Slasher_Character_01_C, TrapPlacer) == 0x001ED0, "Member 'ABP_Slasher_Character_01_C::TrapPlacer' has a wrong offset!");
static_assert(offsetof(ABP_Slasher_Character_01_C, TrapMesh_0) == 0x001ED8, "Member 'ABP_Slasher_Character_01_C::TrapMesh_0' has a wrong offset!");

}


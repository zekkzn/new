#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IND_MediumTree01

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IND_MediumTree01.BP_IND_MediumTree01_C
// 0x0028 (0x02C8 - 0x02A0)
class ABP_IND_MediumTree01_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           AudioEvent_Tree_Needles;                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_IND_TallTree04_Leaves;                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_IND_TallTree04;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Start_Sound(EAkResult Result);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IND_MediumTree01(int32 EntryPoint);
	void Bank_Unloaded(EAkResult Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IND_MediumTree01_C">();
	}
	static class ABP_IND_MediumTree01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IND_MediumTree01_C>();
	}
};
static_assert(alignof(ABP_IND_MediumTree01_C) == 0x000008, "Wrong alignment on ABP_IND_MediumTree01_C");
static_assert(sizeof(ABP_IND_MediumTree01_C) == 0x0002C8, "Wrong size on ABP_IND_MediumTree01_C");
static_assert(offsetof(ABP_IND_MediumTree01_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_IND_MediumTree01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_IND_MediumTree01_C, AudioEvent_Tree_Needles) == 0x0002A8, "Member 'ABP_IND_MediumTree01_C::AudioEvent_Tree_Needles' has a wrong offset!");
static_assert(offsetof(ABP_IND_MediumTree01_C, SM_IND_TallTree04_Leaves) == 0x0002B0, "Member 'ABP_IND_MediumTree01_C::SM_IND_TallTree04_Leaves' has a wrong offset!");
static_assert(offsetof(ABP_IND_MediumTree01_C, SM_IND_TallTree04) == 0x0002B8, "Member 'ABP_IND_MediumTree01_C::SM_IND_TallTree04' has a wrong offset!");
static_assert(offsetof(ABP_IND_MediumTree01_C, Root) == 0x0002C0, "Member 'ABP_IND_MediumTree01_C::Root' has a wrong offset!");

}

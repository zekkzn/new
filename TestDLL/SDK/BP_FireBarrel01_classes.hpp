#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FireBarrel01

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FireBarrel01.BP_FireBarrel01_C
// 0x0028 (0x02C8 - 0x02A0)
class ABP_FireBarrel01_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak_Audio_Barrel_Fire;                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Flashing_Light;                                    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Barrel01;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FireBarrel01(int32 EntryPoint);
	void CustomEvent_1(EAkResult Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FireBarrel01_C">();
	}
	static class ABP_FireBarrel01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FireBarrel01_C>();
	}
};
static_assert(alignof(ABP_FireBarrel01_C) == 0x000008, "Wrong alignment on ABP_FireBarrel01_C");
static_assert(sizeof(ABP_FireBarrel01_C) == 0x0002C8, "Wrong size on ABP_FireBarrel01_C");
static_assert(offsetof(ABP_FireBarrel01_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_FireBarrel01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FireBarrel01_C, Ak_Audio_Barrel_Fire) == 0x0002A8, "Member 'ABP_FireBarrel01_C::Ak_Audio_Barrel_Fire' has a wrong offset!");
static_assert(offsetof(ABP_FireBarrel01_C, Flashing_Light) == 0x0002B0, "Member 'ABP_FireBarrel01_C::Flashing_Light' has a wrong offset!");
static_assert(offsetof(ABP_FireBarrel01_C, Barrel01) == 0x0002B8, "Member 'ABP_FireBarrel01_C::Barrel01' has a wrong offset!");
static_assert(offsetof(ABP_FireBarrel01_C, Root) == 0x0002C0, "Member 'ABP_FireBarrel01_C::Root' has a wrong offset!");

}


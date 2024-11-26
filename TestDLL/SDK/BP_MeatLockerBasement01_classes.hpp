#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeatLockerBasement01

#include "Basic.hpp"

#include "BP_MeatLocker01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MeatLockerBasement01.BP_MeatLockerBasement01_C
// 0x0030 (0x0870 - 0x0840)
class ABP_MeatLockerBasement01_C final : public ABP_MeatLocker01_C
{
public:
	class UDBDSkeletalMeshComponentBudgeted*      SK_BasementDeerHangerMesh;                         // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USleepingSkinnedMeshRegisterer*         SleepingSkinnedMeshRegisterer;                     // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Entity;                                            // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Camper;                                            // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Slasher;                                           // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene_0;                                           // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetMesh(class USkeletalMeshComponent** Mesh) const;
	class AEntity* GetEntity() const;
	class UAnimInstance* GetAnimInstance() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MeatLockerBasement01_C">();
	}
	static class ABP_MeatLockerBasement01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MeatLockerBasement01_C>();
	}
};
static_assert(alignof(ABP_MeatLockerBasement01_C) == 0x000008, "Wrong alignment on ABP_MeatLockerBasement01_C");
static_assert(sizeof(ABP_MeatLockerBasement01_C) == 0x000870, "Wrong size on ABP_MeatLockerBasement01_C");
static_assert(offsetof(ABP_MeatLockerBasement01_C, SK_BasementDeerHangerMesh) == 0x000840, "Member 'ABP_MeatLockerBasement01_C::SK_BasementDeerHangerMesh' has a wrong offset!");
static_assert(offsetof(ABP_MeatLockerBasement01_C, SleepingSkinnedMeshRegisterer) == 0x000848, "Member 'ABP_MeatLockerBasement01_C::SleepingSkinnedMeshRegisterer' has a wrong offset!");
static_assert(offsetof(ABP_MeatLockerBasement01_C, Entity) == 0x000850, "Member 'ABP_MeatLockerBasement01_C::Entity' has a wrong offset!");
static_assert(offsetof(ABP_MeatLockerBasement01_C, Camper) == 0x000858, "Member 'ABP_MeatLockerBasement01_C::Camper' has a wrong offset!");
static_assert(offsetof(ABP_MeatLockerBasement01_C, Slasher) == 0x000860, "Member 'ABP_MeatLockerBasement01_C::Slasher' has a wrong offset!");
static_assert(offsetof(ABP_MeatLockerBasement01_C, Scene_0) == 0x000868, "Member 'ABP_MeatLockerBasement01_C::Scene_0' has a wrong offset!");

}


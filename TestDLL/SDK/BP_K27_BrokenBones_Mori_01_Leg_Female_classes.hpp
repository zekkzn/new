#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_K27_BrokenBones_Mori_01_Leg_Female

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_K27_BrokenBones_Mori_01_Leg_Female.BP_K27_BrokenBones_Mori_01_Leg_Female_C
// 0x0020 (0x02C0 - 0x02A0)
class ABP_K27_BrokenBones_Mori_01_Leg_Female_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDSkeletalMeshComponentBudgeted*      K27_Bone_04Mesh;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDSkeletalMeshComponentBudgeted*      K27_Bone_03Mesh;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_K27_BrokenBones_Mori_01_Leg_Female(int32 EntryPoint);
	void Spawn_BoneOnCamper_02(class USkeletalMeshComponent* Mesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_K27_BrokenBones_Mori_01_Leg_Female_C">();
	}
	static class ABP_K27_BrokenBones_Mori_01_Leg_Female_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_K27_BrokenBones_Mori_01_Leg_Female_C>();
	}
};
static_assert(alignof(ABP_K27_BrokenBones_Mori_01_Leg_Female_C) == 0x000008, "Wrong alignment on ABP_K27_BrokenBones_Mori_01_Leg_Female_C");
static_assert(sizeof(ABP_K27_BrokenBones_Mori_01_Leg_Female_C) == 0x0002C0, "Wrong size on ABP_K27_BrokenBones_Mori_01_Leg_Female_C");
static_assert(offsetof(ABP_K27_BrokenBones_Mori_01_Leg_Female_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_K27_BrokenBones_Mori_01_Leg_Female_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_K27_BrokenBones_Mori_01_Leg_Female_C, K27_Bone_04Mesh) == 0x0002A8, "Member 'ABP_K27_BrokenBones_Mori_01_Leg_Female_C::K27_Bone_04Mesh' has a wrong offset!");
static_assert(offsetof(ABP_K27_BrokenBones_Mori_01_Leg_Female_C, K27_Bone_03Mesh) == 0x0002B0, "Member 'ABP_K27_BrokenBones_Mori_01_Leg_Female_C::K27_Bone_03Mesh' has a wrong offset!");
static_assert(offsetof(ABP_K27_BrokenBones_Mori_01_Leg_Female_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_K27_BrokenBones_Mori_01_Leg_Female_C::DefaultSceneRoot' has a wrong offset!");

}

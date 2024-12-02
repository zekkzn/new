#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrashStack04

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TrashStack04.BP_TrashStack04_C
// 0x0048 (0x02E8 - 0x02A0)
class ABP_TrashStack04_C final : public AActor
{
public:
	class UBoxComponent*                          Collision;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Tape;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          PaperCup03;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Bottle;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Can;                                               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Woodplank;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PaperCup01;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TrashStack04_C">();
	}
	static class ABP_TrashStack04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TrashStack04_C>();
	}
};
static_assert(alignof(ABP_TrashStack04_C) == 0x000008, "Wrong alignment on ABP_TrashStack04_C");
static_assert(sizeof(ABP_TrashStack04_C) == 0x0002E8, "Wrong size on ABP_TrashStack04_C");
static_assert(offsetof(ABP_TrashStack04_C, Collision) == 0x0002A0, "Member 'ABP_TrashStack04_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, Tape) == 0x0002A8, "Member 'ABP_TrashStack04_C::Tape' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, PaperCup03) == 0x0002B0, "Member 'ABP_TrashStack04_C::PaperCup03' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, InstancedStaticMesh) == 0x0002B8, "Member 'ABP_TrashStack04_C::InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, Bottle) == 0x0002C0, "Member 'ABP_TrashStack04_C::Bottle' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, Can) == 0x0002C8, "Member 'ABP_TrashStack04_C::Can' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, Woodplank) == 0x0002D0, "Member 'ABP_TrashStack04_C::Woodplank' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, PaperCup01) == 0x0002D8, "Member 'ABP_TrashStack04_C::PaperCup01' has a wrong offset!");
static_assert(offsetof(ABP_TrashStack04_C, Root) == 0x0002E0, "Member 'ABP_TrashStack04_C::Root' has a wrong offset!");

}


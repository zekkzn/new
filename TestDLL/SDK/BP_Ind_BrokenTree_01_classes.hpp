#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ind_BrokenTree_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Ind_BrokenTree_01.BP_Ind_BrokenTree_01_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_Ind_BrokenTree_01_C final : public AActor
{
public:
	class UConfigurableCollisionComponent*        CharacterBlocker;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* HISM_Stump_01;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ind_BrokenTree_01_C">();
	}
	static class ABP_Ind_BrokenTree_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ind_BrokenTree_01_C>();
	}
};
static_assert(alignof(ABP_Ind_BrokenTree_01_C) == 0x000008, "Wrong alignment on ABP_Ind_BrokenTree_01_C");
static_assert(sizeof(ABP_Ind_BrokenTree_01_C) == 0x0002B8, "Wrong size on ABP_Ind_BrokenTree_01_C");
static_assert(offsetof(ABP_Ind_BrokenTree_01_C, CharacterBlocker) == 0x0002A0, "Member 'ABP_Ind_BrokenTree_01_C::CharacterBlocker' has a wrong offset!");
static_assert(offsetof(ABP_Ind_BrokenTree_01_C, HISM_Stump_01) == 0x0002A8, "Member 'ABP_Ind_BrokenTree_01_C::HISM_Stump_01' has a wrong offset!");
static_assert(offsetof(ABP_Ind_BrokenTree_01_C, Root) == 0x0002B0, "Member 'ABP_Ind_BrokenTree_01_C::Root' has a wrong offset!");

}

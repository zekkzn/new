#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ind_ExitGate_01

#include "Basic.hpp"

#include "BP_COM_ExitGate_01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Ind_ExitGate_01.BP_IND_ExitGate_01_C
// 0x0010 (0x0368 - 0x0358)
class ABP_IND_ExitGate_01_C final : public ABP_COM_ExitGate_01_C
{
public:
	class USceneComponent*                        Ind_SpecialAssets;                                 // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root_0;                                            // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IND_ExitGate_01_C">();
	}
	static class ABP_IND_ExitGate_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IND_ExitGate_01_C>();
	}
};
static_assert(alignof(ABP_IND_ExitGate_01_C) == 0x000008, "Wrong alignment on ABP_IND_ExitGate_01_C");
static_assert(sizeof(ABP_IND_ExitGate_01_C) == 0x000368, "Wrong size on ABP_IND_ExitGate_01_C");
static_assert(offsetof(ABP_IND_ExitGate_01_C, Ind_SpecialAssets) == 0x000358, "Member 'ABP_IND_ExitGate_01_C::Ind_SpecialAssets' has a wrong offset!");
static_assert(offsetof(ABP_IND_ExitGate_01_C, Root_0) == 0x000360, "Member 'ABP_IND_ExitGate_01_C::Root_0' has a wrong offset!");

}

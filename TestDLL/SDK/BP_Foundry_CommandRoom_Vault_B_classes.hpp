#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Foundry_CommandRoom_Vault_B

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Foundry_CommandRoom_Vault_B.BP_Foundry_CommandRoom_Vault_B_C
// 0x0030 (0x02D0 - 0x02A0)
class ABP_Foundry_CommandRoom_Vault_B_C final : public AActor
{
public:
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BoardedWindow02;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BoardedWindow01;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BreakableWall012;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          ActorSpawner;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Foundry_CommandRoom_Vault_B_C">();
	}
	static class ABP_Foundry_CommandRoom_Vault_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Foundry_CommandRoom_Vault_B_C>();
	}
};
static_assert(alignof(ABP_Foundry_CommandRoom_Vault_B_C) == 0x000008, "Wrong alignment on ABP_Foundry_CommandRoom_Vault_B_C");
static_assert(sizeof(ABP_Foundry_CommandRoom_Vault_B_C) == 0x0002D0, "Wrong size on ABP_Foundry_CommandRoom_Vault_B_C");
static_assert(offsetof(ABP_Foundry_CommandRoom_Vault_B_C, Box) == 0x0002A0, "Member 'ABP_Foundry_CommandRoom_Vault_B_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Foundry_CommandRoom_Vault_B_C, SM_BoardedWindow02) == 0x0002A8, "Member 'ABP_Foundry_CommandRoom_Vault_B_C::SM_BoardedWindow02' has a wrong offset!");
static_assert(offsetof(ABP_Foundry_CommandRoom_Vault_B_C, SM_BoardedWindow01) == 0x0002B0, "Member 'ABP_Foundry_CommandRoom_Vault_B_C::SM_BoardedWindow01' has a wrong offset!");
static_assert(offsetof(ABP_Foundry_CommandRoom_Vault_B_C, BreakableWall012) == 0x0002B8, "Member 'ABP_Foundry_CommandRoom_Vault_B_C::BreakableWall012' has a wrong offset!");
static_assert(offsetof(ABP_Foundry_CommandRoom_Vault_B_C, ActorSpawner) == 0x0002C0, "Member 'ABP_Foundry_CommandRoom_Vault_B_C::ActorSpawner' has a wrong offset!");
static_assert(offsetof(ABP_Foundry_CommandRoom_Vault_B_C, Root) == 0x0002C8, "Member 'ABP_Foundry_CommandRoom_Vault_B_C::Root' has a wrong offset!");

}

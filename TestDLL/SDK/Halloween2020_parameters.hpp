#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween2020

#include "Basic.hpp"


namespace SDK::Params
{

// Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
// 0x0008 (0x0008 - 0x0000)
struct BlightedSerumCollisionInteraction_SetCooldownInteraction final
{
public:
	class UBlightedSerumCooldownInteraction*      CooldownInteraction;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightedSerumCollisionInteraction_SetCooldownInteraction) == 0x000008, "Wrong alignment on BlightedSerumCollisionInteraction_SetCooldownInteraction");
static_assert(sizeof(BlightedSerumCollisionInteraction_SetCooldownInteraction) == 0x000008, "Wrong size on BlightedSerumCollisionInteraction_SetCooldownInteraction");
static_assert(offsetof(BlightedSerumCollisionInteraction_SetCooldownInteraction, CooldownInteraction) == 0x000000, "Member 'BlightedSerumCollisionInteraction_SetCooldownInteraction::CooldownInteraction' has a wrong offset!");

// Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
// 0x0008 (0x0008 - 0x0000)
struct BlightedSerumDashInteraction_SetCollisionInteraction final
{
public:
	class UBlightedSerumCollisionInteraction*     CollisionInteraction;                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightedSerumDashInteraction_SetCollisionInteraction) == 0x000008, "Wrong alignment on BlightedSerumDashInteraction_SetCollisionInteraction");
static_assert(sizeof(BlightedSerumDashInteraction_SetCollisionInteraction) == 0x000008, "Wrong size on BlightedSerumDashInteraction_SetCollisionInteraction");
static_assert(offsetof(BlightedSerumDashInteraction_SetCollisionInteraction, CollisionInteraction) == 0x000000, "Member 'BlightedSerumDashInteraction_SetCollisionInteraction::CollisionInteraction' has a wrong offset!");

// Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
// 0x0008 (0x0008 - 0x0000)
struct BlightedSerumDashInteraction_SetCooldownInteraction final
{
public:
	class UBlightedSerumCooldownInteraction*      CooldownInteraction;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightedSerumDashInteraction_SetCooldownInteraction) == 0x000008, "Wrong alignment on BlightedSerumDashInteraction_SetCooldownInteraction");
static_assert(sizeof(BlightedSerumDashInteraction_SetCooldownInteraction) == 0x000008, "Wrong size on BlightedSerumDashInteraction_SetCooldownInteraction");
static_assert(offsetof(BlightedSerumDashInteraction_SetCooldownInteraction, CooldownInteraction) == 0x000000, "Member 'BlightedSerumDashInteraction_SetCooldownInteraction::CooldownInteraction' has a wrong offset!");

// Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
// 0x0001 (0x0001 - 0x0000)
struct ToxinPlantInteractable_SetToxinPlantComplete final
{
public:
	bool                                          IsComplete;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ToxinPlantInteractable_SetToxinPlantComplete) == 0x000001, "Wrong alignment on ToxinPlantInteractable_SetToxinPlantComplete");
static_assert(sizeof(ToxinPlantInteractable_SetToxinPlantComplete) == 0x000001, "Wrong size on ToxinPlantInteractable_SetToxinPlantComplete");
static_assert(offsetof(ToxinPlantInteractable_SetToxinPlantComplete, IsComplete) == 0x000000, "Member 'ToxinPlantInteractable_SetToxinPlantComplete::IsComplete' has a wrong offset!");

// Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
// 0x0001 (0x0001 - 0x0000)
struct ToxinPlantInteractable_IsToxinPlantComplete final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ToxinPlantInteractable_IsToxinPlantComplete) == 0x000001, "Wrong alignment on ToxinPlantInteractable_IsToxinPlantComplete");
static_assert(sizeof(ToxinPlantInteractable_IsToxinPlantComplete) == 0x000001, "Wrong size on ToxinPlantInteractable_IsToxinPlantComplete");
static_assert(offsetof(ToxinPlantInteractable_IsToxinPlantComplete, ReturnValue) == 0x000000, "Member 'ToxinPlantInteractable_IsToxinPlantComplete::ReturnValue' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheHillbilly

#include "Basic.hpp"


namespace SDK::Params
{

// Function TheHillbilly.HillbillyChainsawAttack.Cosmetic_OnAttackFinished
// 0x0008 (0x0008 - 0x0000)
struct HillbillyChainsawAttack_Cosmetic_OnAttackFinished final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HillbillyChainsawAttack_Cosmetic_OnAttackFinished) == 0x000008, "Wrong alignment on HillbillyChainsawAttack_Cosmetic_OnAttackFinished");
static_assert(sizeof(HillbillyChainsawAttack_Cosmetic_OnAttackFinished) == 0x000008, "Wrong size on HillbillyChainsawAttack_Cosmetic_OnAttackFinished");
static_assert(offsetof(HillbillyChainsawAttack_Cosmetic_OnAttackFinished, Player) == 0x000000, "Member 'HillbillyChainsawAttack_Cosmetic_OnAttackFinished::Player' has a wrong offset!");

// Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating
// 0x0001 (0x0001 - 0x0000)
struct HillbillyChainsawOverheatComponent_IsChainsawOverheating final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HillbillyChainsawOverheatComponent_IsChainsawOverheating) == 0x000001, "Wrong alignment on HillbillyChainsawOverheatComponent_IsChainsawOverheating");
static_assert(sizeof(HillbillyChainsawOverheatComponent_IsChainsawOverheating) == 0x000001, "Wrong size on HillbillyChainsawOverheatComponent_IsChainsawOverheating");
static_assert(offsetof(HillbillyChainsawOverheatComponent_IsChainsawOverheating, ReturnValue) == 0x000000, "Member 'HillbillyChainsawOverheatComponent_IsChainsawOverheating::ReturnValue' has a wrong offset!");

// Function TheHillbilly.HillbillyChainsawRevInteraction.OnChargeablePercentChange
// 0x0010 (0x0010 - 0x0000)
struct HillbillyChainsawRevInteraction_OnChargeablePercentChange final
{
public:
	class UChargeableComponent*                   ChargeableComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalPercentComplete;                              // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(HillbillyChainsawRevInteraction_OnChargeablePercentChange) == 0x000008, "Wrong alignment on HillbillyChainsawRevInteraction_OnChargeablePercentChange");
static_assert(sizeof(HillbillyChainsawRevInteraction_OnChargeablePercentChange) == 0x000010, "Wrong size on HillbillyChainsawRevInteraction_OnChargeablePercentChange");
static_assert(offsetof(HillbillyChainsawRevInteraction_OnChargeablePercentChange, ChargeableComponent) == 0x000000, "Member 'HillbillyChainsawRevInteraction_OnChargeablePercentChange::ChargeableComponent' has a wrong offset!");
static_assert(offsetof(HillbillyChainsawRevInteraction_OnChargeablePercentChange, TotalPercentComplete) == 0x000008, "Member 'HillbillyChainsawRevInteraction_OnChargeablePercentChange::TotalPercentComplete' has a wrong offset!");

// Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
// 0x0008 (0x0008 - 0x0000)
struct HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent final
{
public:
	class UHillbillyChainsawOverheatComponent*    HillbillyChainsawOverheatComponent;                // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent) == 0x000008, "Wrong alignment on HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent");
static_assert(sizeof(HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent) == 0x000008, "Wrong size on HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent");
static_assert(offsetof(HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent, HillbillyChainsawOverheatComponent) == 0x000000, "Member 'HillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent::HillbillyChainsawOverheatComponent' has a wrong offset!");

}

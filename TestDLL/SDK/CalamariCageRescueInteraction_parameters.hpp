#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalamariCageRescueInteraction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CalamariCageRescueInteraction.CalamariCageRescueInteraction_C.GetSnapPointPosition
// 0x0038 (0x0038 - 0x0000)
struct CalamariCageRescueInteraction_C_GetSnapPointPosition final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetRescuerSnapPosition_ReturnValue;       // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalamariCageRescueInteraction_C_GetSnapPointPosition) == 0x000008, "Wrong alignment on CalamariCageRescueInteraction_C_GetSnapPointPosition");
static_assert(sizeof(CalamariCageRescueInteraction_C_GetSnapPointPosition) == 0x000038, "Wrong size on CalamariCageRescueInteraction_C_GetSnapPointPosition");
static_assert(offsetof(CalamariCageRescueInteraction_C_GetSnapPointPosition, Player) == 0x000000, "Member 'CalamariCageRescueInteraction_C_GetSnapPointPosition::Player' has a wrong offset!");
static_assert(offsetof(CalamariCageRescueInteraction_C_GetSnapPointPosition, ReturnValue) == 0x000008, "Member 'CalamariCageRescueInteraction_C_GetSnapPointPosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(CalamariCageRescueInteraction_C_GetSnapPointPosition, CallFunc_GetRescuerSnapPosition_ReturnValue) == 0x000020, "Member 'CalamariCageRescueInteraction_C_GetSnapPointPosition::CallFunc_GetRescuerSnapPosition_ReturnValue' has a wrong offset!");

}

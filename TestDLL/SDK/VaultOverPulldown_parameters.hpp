#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultOverPulldown

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function VaultOverPulldown.VaultOverPulldown_C.IsInteractionPossibleBP
// 0x0028 (0x0028 - 0x0000)
struct VaultOverPulldown_C_IsInteractionPossibleBP final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsInteractionPossible;                       // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInteractionPossibleBP_ReturnValue;      // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AInteractable*                          CallFunc_GetInteractable_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APallet*                                K2Node_DynamicCast_AsPallet;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsPulledDown_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultOverPulldown_C_IsInteractionPossibleBP) == 0x000008, "Wrong alignment on VaultOverPulldown_C_IsInteractionPossibleBP");
static_assert(sizeof(VaultOverPulldown_C_IsInteractionPossibleBP) == 0x000028, "Wrong size on VaultOverPulldown_C_IsInteractionPossibleBP");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, Player) == 0x000000, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::Player' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, InteractionType) == 0x000008, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::InteractionType' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, ReturnValue) == 0x000009, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, Param_IsInteractionPossible) == 0x00000A, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::Param_IsInteractionPossible' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, CallFunc_IsInteractionPossibleBP_ReturnValue) == 0x00000B, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::CallFunc_IsInteractionPossibleBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, CallFunc_GetInteractable_ReturnValue) == 0x000010, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::CallFunc_GetInteractable_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, K2Node_DynamicCast_AsPallet) == 0x000018, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::K2Node_DynamicCast_AsPallet' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VaultOverPulldown_C_IsInteractionPossibleBP, CallFunc_GetIsPulledDown_ReturnValue) == 0x000021, "Member 'VaultOverPulldown_C_IsInteractionPossibleBP::CallFunc_GetIsPulledDown_ReturnValue' has a wrong offset!");

}

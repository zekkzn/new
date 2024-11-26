#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DropManualWiggleFree

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function DropManualWiggleFree.DropManualWiggleFree_C.ExecuteUbergraph_DropManualWiggleFree
// 0x0018 (0x0018 - 0x0000)
struct DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCamper_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree) == 0x000008, "Wrong alignment on DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree");
static_assert(sizeof(DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree) == 0x000018, "Wrong size on DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree");
static_assert(offsetof(DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree, EntryPoint) == 0x000000, "Member 'DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree::EntryPoint' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree, CallFunc_GetCamper_ReturnValue) == 0x000008, "Member 'DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree::CallFunc_GetCamper_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree, K2Node_Event_player) == 0x000010, "Member 'DropManualWiggleFree_C_ExecuteUbergraph_DropManualWiggleFree::K2Node_Event_player' has a wrong offset!");

// Function DropManualWiggleFree.DropManualWiggleFree_C.OnInteractionUpdateStart
// 0x0008 (0x0008 - 0x0000)
struct DropManualWiggleFree_C_OnInteractionUpdateStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropManualWiggleFree_C_OnInteractionUpdateStart) == 0x000008, "Wrong alignment on DropManualWiggleFree_C_OnInteractionUpdateStart");
static_assert(sizeof(DropManualWiggleFree_C_OnInteractionUpdateStart) == 0x000008, "Wrong size on DropManualWiggleFree_C_OnInteractionUpdateStart");
static_assert(offsetof(DropManualWiggleFree_C_OnInteractionUpdateStart, Player) == 0x000000, "Member 'DropManualWiggleFree_C_OnInteractionUpdateStart::Player' has a wrong offset!");

// Function DropManualWiggleFree.DropManualWiggleFree_C.IsInteractionPossibleClient
// 0x0038 (0x0038 - 0x0000)
struct DropManualWiggleFree_C_IsInteractionPossibleClient final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTunableValue_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCamper_ReturnValue;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   CallFunc_GetWiggleChargeable_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPercentComplete_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropManualWiggleFree_C_IsInteractionPossibleClient) == 0x000008, "Wrong alignment on DropManualWiggleFree_C_IsInteractionPossibleClient");
static_assert(sizeof(DropManualWiggleFree_C_IsInteractionPossibleClient) == 0x000038, "Wrong size on DropManualWiggleFree_C_IsInteractionPossibleClient");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, Player) == 0x000000, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::Player' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, InteractionType) == 0x000008, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::InteractionType' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, ReturnValue) == 0x000009, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_GetTunableValue_ReturnValue) == 0x00000C, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_GetTunableValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000010, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_GetCamper_ReturnValue) == 0x000018, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_GetCamper_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_GetWiggleChargeable_ReturnValue) == 0x000020, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_GetWiggleChargeable_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_GetPercentComplete_ReturnValue) == 0x00002C, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_GetPercentComplete_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropManualWiggleFree_C_IsInteractionPossibleClient, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'DropManualWiggleFree_C_IsInteractionPossibleClient::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

}


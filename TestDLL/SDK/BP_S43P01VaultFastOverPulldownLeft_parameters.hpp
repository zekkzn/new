#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_S43P01VaultFastOverPulldownLeft

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_S43P01VaultFastOverPulldownLeft.BP_S43P01VaultFastOverPulldownLeft_C.OnInteractionUpdateStart
// 0x0008 (0x0008 - 0x0000)
struct BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart) == 0x000008, "Wrong alignment on BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart");
static_assert(sizeof(BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart) == 0x000008, "Wrong size on BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart, Player) == 0x000000, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_OnInteractionUpdateStart::Player' has a wrong offset!");

// Function BP_S43P01VaultFastOverPulldownLeft.BP_S43P01VaultFastOverPulldownLeft_C.ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft
// 0x0038 (0x0038 - 0x0000)
struct BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft) == 0x000008, "Wrong alignment on BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft");
static_assert(sizeof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft) == 0x000038, "Wrong size on BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft, EntryPoint) == 0x000000, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft, CallFunc_GetTunableValue_ReturnValue) == 0x000028, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft::CallFunc_GetTunableValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft, K2Node_Event_player) == 0x000030, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_ExecuteUbergraph_BP_S43P01VaultFastOverPulldownLeft::K2Node_Event_player' has a wrong offset!");

// Function BP_S43P01VaultFastOverPulldownLeft.BP_S43P01VaultFastOverPulldownLeft_C.IsInteractionPossibleClient
// 0x0010 (0x0010 - 0x0000)
struct BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRunning_ReturnValue;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient) == 0x000008, "Wrong alignment on BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient");
static_assert(sizeof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient) == 0x000010, "Wrong size on BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient, Player) == 0x000000, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient::Player' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient, InteractionType) == 0x000008, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient::InteractionType' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient, ReturnValue) == 0x000009, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient, CallFunc_IsRunning_ReturnValue) == 0x00000A, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleClient::CallFunc_IsRunning_ReturnValue' has a wrong offset!");

// Function BP_S43P01VaultFastOverPulldownLeft.BP_S43P01VaultFastOverPulldownLeft_C.IsInteractionPossibleBP
// 0x0028 (0x0028 - 0x0000)
struct BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP final
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
static_assert(alignof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP) == 0x000008, "Wrong alignment on BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP");
static_assert(sizeof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP) == 0x000028, "Wrong size on BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, Player) == 0x000000, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::Player' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, InteractionType) == 0x000008, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::InteractionType' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, ReturnValue) == 0x000009, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, Param_IsInteractionPossible) == 0x00000A, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::Param_IsInteractionPossible' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, CallFunc_IsInteractionPossibleBP_ReturnValue) == 0x00000B, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::CallFunc_IsInteractionPossibleBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, CallFunc_GetInteractable_ReturnValue) == 0x000010, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::CallFunc_GetInteractable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, K2Node_DynamicCast_AsPallet) == 0x000018, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::K2Node_DynamicCast_AsPallet' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP, CallFunc_GetIsPulledDown_ReturnValue) == 0x000021, "Member 'BP_S43P01VaultFastOverPulldownLeft_C_IsInteractionPossibleBP::CallFunc_GetIsPulledDown_ReturnValue' has a wrong offset!");

}

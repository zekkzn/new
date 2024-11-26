#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrenzySlasherVaultOverPulldown

#include "Basic.hpp"


namespace SDK::Params
{

// Function FrenzySlasherVaultOverPulldown.FrenzySlasherVaultOverPulldown_C.OnInteractionFinished
// 0x0010 (0x0010 - 0x0000)
struct FrenzySlasherVaultOverPulldown_C_OnInteractionFinished final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          HasInteractionStarted;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FrenzySlasherVaultOverPulldown_C_OnInteractionFinished) == 0x000008, "Wrong alignment on FrenzySlasherVaultOverPulldown_C_OnInteractionFinished");
static_assert(sizeof(FrenzySlasherVaultOverPulldown_C_OnInteractionFinished) == 0x000010, "Wrong size on FrenzySlasherVaultOverPulldown_C_OnInteractionFinished");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_OnInteractionFinished, Player) == 0x000000, "Member 'FrenzySlasherVaultOverPulldown_C_OnInteractionFinished::Player' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_OnInteractionFinished, HasInteractionStarted) == 0x000008, "Member 'FrenzySlasherVaultOverPulldown_C_OnInteractionFinished::HasInteractionStarted' has a wrong offset!");

// Function FrenzySlasherVaultOverPulldown.FrenzySlasherVaultOverPulldown_C.ExecuteUbergraph_FrenzySlasherVaultOverPulldown
// 0x0060 (0x0060 - 0x0000)
struct FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_hasInteractionStarted;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPerkFlag_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APallet*                                K2Node_DynamicCast_AsPallet;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDGameState*                          CallFunc_GetDBDGameState_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTheLegion_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown) == 0x000008, "Wrong alignment on FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown");
static_assert(sizeof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown) == 0x000060, "Wrong size on FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, EntryPoint) == 0x000000, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::EntryPoint' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, K2Node_Event_player) == 0x000018, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, K2Node_Event_hasInteractionStarted) == 0x000020, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::K2Node_Event_hasInteractionStarted' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_HasPerkFlag_ReturnValue) == 0x000021, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_HasPerkFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_Add_FloatFloat_ReturnValue) == 0x000024, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, K2Node_DynamicCast_AsPallet) == 0x000038, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::K2Node_DynamicCast_AsPallet' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_GetDBDGameState_ReturnValue) == 0x000048, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_GetDBDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_GetTunableValue_ReturnValue) == 0x000050, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_GetTunableValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_IsValid_ReturnValue) == 0x000054, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown, CallFunc_IsTheLegion_ReturnValue) == 0x00005C, "Member 'FrenzySlasherVaultOverPulldown_C_ExecuteUbergraph_FrenzySlasherVaultOverPulldown::CallFunc_IsTheLegion_ReturnValue' has a wrong offset!");

// Function FrenzySlasherVaultOverPulldown.FrenzySlasherVaultOverPulldown_C.CanOverrideInteraction
// 0x0010 (0x0010 - 0x0000)
struct FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction final
{
public:
	const class UInteractionDefinition*           Interaction;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanOverrideInteraction_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction) == 0x000008, "Wrong alignment on FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction");
static_assert(sizeof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction) == 0x000010, "Wrong size on FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction, Interaction) == 0x000000, "Member 'FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction::Interaction' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction, ReturnValue) == 0x000008, "Member 'FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction, CallFunc_CanOverrideInteraction_ReturnValue) == 0x000009, "Member 'FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction::CallFunc_CanOverrideInteraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x00000A, "Member 'FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'FrenzySlasherVaultOverPulldown_C_CanOverrideInteraction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}


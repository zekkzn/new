#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StunBySkillCheck

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function StunBySkillCheck.StunBySkillCheck_C.OnInteractionEnterStart
// 0x0010 (0x0010 - 0x0000)
struct StunBySkillCheck_C_OnInteractionEnterStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         ActualSnapTime;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StunBySkillCheck_C_OnInteractionEnterStart) == 0x000008, "Wrong alignment on StunBySkillCheck_C_OnInteractionEnterStart");
static_assert(sizeof(StunBySkillCheck_C_OnInteractionEnterStart) == 0x000010, "Wrong size on StunBySkillCheck_C_OnInteractionEnterStart");
static_assert(offsetof(StunBySkillCheck_C_OnInteractionEnterStart, Player) == 0x000000, "Member 'StunBySkillCheck_C_OnInteractionEnterStart::Player' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_OnInteractionEnterStart, ActualSnapTime) == 0x000008, "Member 'StunBySkillCheck_C_OnInteractionEnterStart::ActualSnapTime' has a wrong offset!");

// Function StunBySkillCheck.StunBySkillCheck_C.ExecuteUbergraph_StunBySkillCheck
// 0x0028 (0x0028 - 0x0000)
struct StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCarriedCamper_Camper;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPerkModifierMaxValue_ReturnValue;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_actualSnapTime;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck) == 0x000008, "Wrong alignment on StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck");
static_assert(sizeof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck) == 0x000028, "Wrong size on StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck");
static_assert(offsetof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck, EntryPoint) == 0x000000, "Member 'StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck::EntryPoint' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck, CallFunc_GetCarriedCamper_Camper) == 0x000008, "Member 'StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck::CallFunc_GetCarriedCamper_Camper' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck, CallFunc_GetPerkModifierMaxValue_ReturnValue) == 0x000014, "Member 'StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck::CallFunc_GetPerkModifierMaxValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck, K2Node_Event_player) == 0x000018, "Member 'StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck, K2Node_Event_actualSnapTime) == 0x000020, "Member 'StunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck::K2Node_Event_actualSnapTime' has a wrong offset!");

// Function StunBySkillCheck.StunBySkillCheck_C.IsInteractionPossibleBP
// 0x0030 (0x0030 - 0x0000)
struct StunBySkillCheck_C_IsInteractionPossibleBP final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASlasherPlayer*                         K2Node_DynamicCast_AsSlasher_Player;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCarrying_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCarriedCamper_Camper;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBeingCarried_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StunBySkillCheck_C_IsInteractionPossibleBP) == 0x000008, "Wrong alignment on StunBySkillCheck_C_IsInteractionPossibleBP");
static_assert(sizeof(StunBySkillCheck_C_IsInteractionPossibleBP) == 0x000030, "Wrong size on StunBySkillCheck_C_IsInteractionPossibleBP");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, Player) == 0x000000, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::Player' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, InteractionType) == 0x000008, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::InteractionType' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, ReturnValue) == 0x000009, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, Result) == 0x00000A, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::Result' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, K2Node_DynamicCast_AsSlasher_Player) == 0x000010, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::K2Node_DynamicCast_AsSlasher_Player' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, CallFunc_IsCarrying_ReturnValue) == 0x000019, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::CallFunc_IsCarrying_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, CallFunc_GetCarriedCamper_Camper) == 0x000020, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::CallFunc_GetCarriedCamper_Camper' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, CallFunc_IsBeingCarried_ReturnValue) == 0x000029, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::CallFunc_IsBeingCarried_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_IsInteractionPossibleBP, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'StunBySkillCheck_C_IsInteractionPossibleBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function StunBySkillCheck.StunBySkillCheck_C.GetSlasher
// 0x0028 (0x0028 - 0x0000)
struct StunBySkillCheck_C_GetSlasher final
{
public:
	class ASlasherPlayer*                         Slasher;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AInteractable*                          CallFunc_GetInteractable_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASlasherInteractable_C*                 K2Node_DynamicCast_AsSlasher_Interactable;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASlasherPlayer*                         CallFunc_GetSlasher_Slasher;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StunBySkillCheck_C_GetSlasher) == 0x000008, "Wrong alignment on StunBySkillCheck_C_GetSlasher");
static_assert(sizeof(StunBySkillCheck_C_GetSlasher) == 0x000028, "Wrong size on StunBySkillCheck_C_GetSlasher");
static_assert(offsetof(StunBySkillCheck_C_GetSlasher, Slasher) == 0x000000, "Member 'StunBySkillCheck_C_GetSlasher::Slasher' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetSlasher, CallFunc_GetInteractable_ReturnValue) == 0x000008, "Member 'StunBySkillCheck_C_GetSlasher::CallFunc_GetInteractable_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetSlasher, K2Node_DynamicCast_AsSlasher_Interactable) == 0x000010, "Member 'StunBySkillCheck_C_GetSlasher::K2Node_DynamicCast_AsSlasher_Interactable' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetSlasher, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'StunBySkillCheck_C_GetSlasher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetSlasher, CallFunc_GetSlasher_Slasher) == 0x000020, "Member 'StunBySkillCheck_C_GetSlasher::CallFunc_GetSlasher_Slasher' has a wrong offset!");

// Function StunBySkillCheck.StunBySkillCheck_C.GetCarriedCamper
// 0x0030 (0x0030 - 0x0000)
struct StunBySkillCheck_C_GetCarriedCamper final
{
public:
	class ACamperPlayer*                          Camper;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASlasherPlayer*                         CallFunc_GetSlasher_Slasher;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCarrying_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCarriedCamper_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StunBySkillCheck_C_GetCarriedCamper) == 0x000008, "Wrong alignment on StunBySkillCheck_C_GetCarriedCamper");
static_assert(sizeof(StunBySkillCheck_C_GetCarriedCamper) == 0x000030, "Wrong size on StunBySkillCheck_C_GetCarriedCamper");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, Camper) == 0x000000, "Member 'StunBySkillCheck_C_GetCarriedCamper::Camper' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, CallFunc_GetSlasher_Slasher) == 0x000008, "Member 'StunBySkillCheck_C_GetCarriedCamper::CallFunc_GetSlasher_Slasher' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, CallFunc_IsCarrying_ReturnValue) == 0x000010, "Member 'StunBySkillCheck_C_GetCarriedCamper::CallFunc_IsCarrying_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, CallFunc_GetCarriedCamper_ReturnValue) == 0x000018, "Member 'StunBySkillCheck_C_GetCarriedCamper::CallFunc_GetCarriedCamper_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, K2Node_DynamicCast_AsCamper_Player) == 0x000020, "Member 'StunBySkillCheck_C_GetCarriedCamper::K2Node_DynamicCast_AsCamper_Player' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'StunBySkillCheck_C_GetCarriedCamper::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_GetCarriedCamper, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'StunBySkillCheck_C_GetCarriedCamper::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StunBySkillCheck.StunBySkillCheck_C.CanOverrideInteraction
// 0x0010 (0x0010 - 0x0000)
struct StunBySkillCheck_C_CanOverrideInteraction final
{
public:
	const class UInteractionDefinition*           Interaction;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanOverrideInteraction_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StunBySkillCheck_C_CanOverrideInteraction) == 0x000008, "Wrong alignment on StunBySkillCheck_C_CanOverrideInteraction");
static_assert(sizeof(StunBySkillCheck_C_CanOverrideInteraction) == 0x000010, "Wrong size on StunBySkillCheck_C_CanOverrideInteraction");
static_assert(offsetof(StunBySkillCheck_C_CanOverrideInteraction, Interaction) == 0x000000, "Member 'StunBySkillCheck_C_CanOverrideInteraction::Interaction' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_CanOverrideInteraction, ReturnValue) == 0x000008, "Member 'StunBySkillCheck_C_CanOverrideInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_CanOverrideInteraction, CallFunc_CanOverrideInteraction_ReturnValue) == 0x000009, "Member 'StunBySkillCheck_C_CanOverrideInteraction::CallFunc_CanOverrideInteraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_CanOverrideInteraction, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00000A, "Member 'StunBySkillCheck_C_CanOverrideInteraction::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(StunBySkillCheck_C_CanOverrideInteraction, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'StunBySkillCheck_C_CanOverrideInteraction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

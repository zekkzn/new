#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DropByStunning

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "DeadByDaylight_structs.hpp"


namespace SDK::Params
{

// Function DropByStunning.DropByStunning_C.ExecuteUbergraph_DropByStunning
// 0x00B0 (0x00B0 - 0x0000)
struct DropByStunning_C_ExecuteUbergraph_DropByStunning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCamper_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FScoreEventData                        K2Node_MakeStruct_ScoreEventData;                  // 0x0018(0x0018)(NoDestructor)
	struct FInteractionPlayerProperties           CallFunc_GetInteractionPlayerProperties_ReturnValue; // 0x0030(0x0078)(ConstParm, NoDestructor)
	EPlayerRole                                   CallFunc_GetPlayerRole_ReturnValue;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropByStunning_C_ExecuteUbergraph_DropByStunning) == 0x000008, "Wrong alignment on DropByStunning_C_ExecuteUbergraph_DropByStunning");
static_assert(sizeof(DropByStunning_C_ExecuteUbergraph_DropByStunning) == 0x0000B0, "Wrong size on DropByStunning_C_ExecuteUbergraph_DropByStunning");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, EntryPoint) == 0x000000, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::EntryPoint' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, CallFunc_GetCamper_ReturnValue) == 0x000008, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::CallFunc_GetCamper_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, K2Node_Event_player) == 0x000010, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, K2Node_MakeStruct_ScoreEventData) == 0x000018, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::K2Node_MakeStruct_ScoreEventData' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, CallFunc_GetInteractionPlayerProperties_ReturnValue) == 0x000030, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::CallFunc_GetInteractionPlayerProperties_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, CallFunc_GetPlayerRole_ReturnValue) == 0x0000A8, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::CallFunc_GetPlayerRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000AA, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_ExecuteUbergraph_DropByStunning, CallFunc_BooleanAND_ReturnValue) == 0x0000AB, "Member 'DropByStunning_C_ExecuteUbergraph_DropByStunning::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function DropByStunning.DropByStunning_C.OnInteractionExitEnd
// 0x0008 (0x0008 - 0x0000)
struct DropByStunning_C_OnInteractionExitEnd final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropByStunning_C_OnInteractionExitEnd) == 0x000008, "Wrong alignment on DropByStunning_C_OnInteractionExitEnd");
static_assert(sizeof(DropByStunning_C_OnInteractionExitEnd) == 0x000008, "Wrong size on DropByStunning_C_OnInteractionExitEnd");
static_assert(offsetof(DropByStunning_C_OnInteractionExitEnd, Player) == 0x000000, "Member 'DropByStunning_C_OnInteractionExitEnd::Player' has a wrong offset!");

// Function DropByStunning.DropByStunning_C.CanOverrideInteraction
// 0x0010 (0x0010 - 0x0000)
struct DropByStunning_C_CanOverrideInteraction final
{
public:
	const class UInteractionDefinition*           Interaction;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanOverrideInteraction_ReturnValue;       // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropByStunning_C_CanOverrideInteraction) == 0x000008, "Wrong alignment on DropByStunning_C_CanOverrideInteraction");
static_assert(sizeof(DropByStunning_C_CanOverrideInteraction) == 0x000010, "Wrong size on DropByStunning_C_CanOverrideInteraction");
static_assert(offsetof(DropByStunning_C_CanOverrideInteraction, Interaction) == 0x000000, "Member 'DropByStunning_C_CanOverrideInteraction::Interaction' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_CanOverrideInteraction, ReturnValue) == 0x000008, "Member 'DropByStunning_C_CanOverrideInteraction::ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_CanOverrideInteraction, Result) == 0x000009, "Member 'DropByStunning_C_CanOverrideInteraction::Result' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_CanOverrideInteraction, CallFunc_CanOverrideInteraction_ReturnValue) == 0x00000A, "Member 'DropByStunning_C_CanOverrideInteraction::CallFunc_CanOverrideInteraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_CanOverrideInteraction, CallFunc_Array_Contains_ReturnValue) == 0x00000B, "Member 'DropByStunning_C_CanOverrideInteraction::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_CanOverrideInteraction, CallFunc_BooleanOR_ReturnValue) == 0x00000C, "Member 'DropByStunning_C_CanOverrideInteraction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function DropByStunning.DropByStunning_C.IsInteractionPossibleBP
// 0x0030 (0x0030 - 0x0000)
struct DropByStunning_C_IsInteractionPossibleBP final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASlasherPlayer*                         K2Node_DynamicCast_AsSlasher_Player;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetCarriedCamper_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCarrying_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TestKillerGuidedCamperIsOwner_ReturnValue; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DropByStunning_C_IsInteractionPossibleBP) == 0x000008, "Wrong alignment on DropByStunning_C_IsInteractionPossibleBP");
static_assert(sizeof(DropByStunning_C_IsInteractionPossibleBP) == 0x000030, "Wrong size on DropByStunning_C_IsInteractionPossibleBP");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, Player) == 0x000000, "Member 'DropByStunning_C_IsInteractionPossibleBP::Player' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, InteractionType) == 0x000008, "Member 'DropByStunning_C_IsInteractionPossibleBP::InteractionType' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, ReturnValue) == 0x000009, "Member 'DropByStunning_C_IsInteractionPossibleBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, Result) == 0x00000A, "Member 'DropByStunning_C_IsInteractionPossibleBP::Result' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, K2Node_DynamicCast_AsSlasher_Player) == 0x000010, "Member 'DropByStunning_C_IsInteractionPossibleBP::K2Node_DynamicCast_AsSlasher_Player' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'DropByStunning_C_IsInteractionPossibleBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, CallFunc_GetCarriedCamper_ReturnValue) == 0x000020, "Member 'DropByStunning_C_IsInteractionPossibleBP::CallFunc_GetCarriedCamper_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'DropByStunning_C_IsInteractionPossibleBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, CallFunc_IsCarrying_ReturnValue) == 0x000029, "Member 'DropByStunning_C_IsInteractionPossibleBP::CallFunc_IsCarrying_ReturnValue' has a wrong offset!");
static_assert(offsetof(DropByStunning_C_IsInteractionPossibleBP, CallFunc_TestKillerGuidedCamperIsOwner_ReturnValue) == 0x00002A, "Member 'DropByStunning_C_IsInteractionPossibleBP::CallFunc_TestKillerGuidedCamperIsOwner_ReturnValue' has a wrong offset!");

}

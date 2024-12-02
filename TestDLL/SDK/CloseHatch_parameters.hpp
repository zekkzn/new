#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CloseHatch

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "DeadByDaylight_structs.hpp"


namespace SDK::Params
{

// Function CloseHatch.CloseHatch_C.OnInteractionUpdateStart
// 0x0008 (0x0008 - 0x0000)
struct CloseHatch_C_OnInteractionUpdateStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_OnInteractionUpdateStart) == 0x000008, "Wrong alignment on CloseHatch_C_OnInteractionUpdateStart");
static_assert(sizeof(CloseHatch_C_OnInteractionUpdateStart) == 0x000008, "Wrong size on CloseHatch_C_OnInteractionUpdateStart");
static_assert(offsetof(CloseHatch_C_OnInteractionUpdateStart, Player) == 0x000000, "Member 'CloseHatch_C_OnInteractionUpdateStart::Player' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.OnInteractionUpdateMontageReachedMiddle
// 0x0008 (0x0008 - 0x0000)
struct CloseHatch_C_OnInteractionUpdateMontageReachedMiddle final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_OnInteractionUpdateMontageReachedMiddle) == 0x000008, "Wrong alignment on CloseHatch_C_OnInteractionUpdateMontageReachedMiddle");
static_assert(sizeof(CloseHatch_C_OnInteractionUpdateMontageReachedMiddle) == 0x000008, "Wrong size on CloseHatch_C_OnInteractionUpdateMontageReachedMiddle");
static_assert(offsetof(CloseHatch_C_OnInteractionUpdateMontageReachedMiddle, Player) == 0x000000, "Member 'CloseHatch_C_OnInteractionUpdateMontageReachedMiddle::Player' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.OnInteractionUpdateEnd
// 0x0008 (0x0008 - 0x0000)
struct CloseHatch_C_OnInteractionUpdateEnd final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_OnInteractionUpdateEnd) == 0x000008, "Wrong alignment on CloseHatch_C_OnInteractionUpdateEnd");
static_assert(sizeof(CloseHatch_C_OnInteractionUpdateEnd) == 0x000008, "Wrong size on CloseHatch_C_OnInteractionUpdateEnd");
static_assert(offsetof(CloseHatch_C_OnInteractionUpdateEnd, Player) == 0x000000, "Member 'CloseHatch_C_OnInteractionUpdateEnd::Player' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.ExecuteUbergraph_CloseHatch
// 0x0098 (0x0098 - 0x0000)
struct CloseHatch_C_ExecuteUbergraph_CloseHatch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDGameState*                          CallFunc_GetDBDGameState_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOnePlayerLeft_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player_1;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHatch*                                 CallFunc_GetHatch_Hatch;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FScoreEventData                        K2Node_MakeStruct_ScoreEventData;                  // 0x0028(0x0018)(NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimationMontageSlave*                 CallFunc_GetHatchAnimationMontageSlave_Anim_Montage_Slave; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimationMontageSlave*                 CallFunc_GetHatchAnimationMontageSlave_Anim_Montage_Slave_1; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player_2;                             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASlasherPlayer*                         CallFunc_GetSlasher_ReturnValue;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMontagePlayer*                         CallFunc_GetMontagePlayer_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_ExecuteUbergraph_CloseHatch) == 0x000008, "Wrong alignment on CloseHatch_C_ExecuteUbergraph_CloseHatch");
static_assert(sizeof(CloseHatch_C_ExecuteUbergraph_CloseHatch) == 0x000098, "Wrong size on CloseHatch_C_ExecuteUbergraph_CloseHatch");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, EntryPoint) == 0x000000, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::EntryPoint' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_GetDBDGameState_ReturnValue) == 0x000008, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_GetDBDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_IsOnePlayerLeft_ReturnValue) == 0x000010, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_IsOnePlayerLeft_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, K2Node_Event_player_1) == 0x000018, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_GetHatch_Hatch) == 0x000020, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_GetHatch_Hatch' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, K2Node_MakeStruct_ScoreEventData) == 0x000028, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::K2Node_MakeStruct_ScoreEventData' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_HasAuthority_ReturnValue) == 0x000040, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, K2Node_Event_player) == 0x000048, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_GetHatchAnimationMontageSlave_Anim_Montage_Slave) == 0x000050, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_GetHatchAnimationMontageSlave_Anim_Montage_Slave' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_GetHatchAnimationMontageSlave_Anim_Montage_Slave_1) == 0x000060, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_GetHatchAnimationMontageSlave_Anim_Montage_Slave_1' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, K2Node_Event_player_2) == 0x000070, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_GetSlasher_ReturnValue) == 0x000078, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_GetSlasher_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_IsValid_ReturnValue_3) == 0x000080, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_GetMontagePlayer_ReturnValue) == 0x000088, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_GetMontagePlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_ExecuteUbergraph_CloseHatch, CallFunc_BooleanAND_ReturnValue) == 0x000090, "Member 'CloseHatch_C_ExecuteUbergraph_CloseHatch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.IsInteractionPossibleBP
// 0x0030 (0x0030 - 0x0000)
struct CloseHatch_C_IsInteractionPossibleBP final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanSlasherCloseHatch_canClose;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASlasherPlayer*                         K2Node_DynamicCast_AsSlasher_Player;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCarrying_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHatch*                                 CallFunc_GetHatch_Hatch;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_IsInteractionPossibleBP) == 0x000008, "Wrong alignment on CloseHatch_C_IsInteractionPossibleBP");
static_assert(sizeof(CloseHatch_C_IsInteractionPossibleBP) == 0x000030, "Wrong size on CloseHatch_C_IsInteractionPossibleBP");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, Player) == 0x000000, "Member 'CloseHatch_C_IsInteractionPossibleBP::Player' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, InteractionType) == 0x000008, "Member 'CloseHatch_C_IsInteractionPossibleBP::InteractionType' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, ReturnValue) == 0x000009, "Member 'CloseHatch_C_IsInteractionPossibleBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, CallFunc_CanSlasherCloseHatch_canClose) == 0x00000A, "Member 'CloseHatch_C_IsInteractionPossibleBP::CallFunc_CanSlasherCloseHatch_canClose' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, K2Node_DynamicCast_AsSlasher_Player) == 0x000010, "Member 'CloseHatch_C_IsInteractionPossibleBP::K2Node_DynamicCast_AsSlasher_Player' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CloseHatch_C_IsInteractionPossibleBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, CallFunc_IsCarrying_ReturnValue) == 0x000019, "Member 'CloseHatch_C_IsInteractionPossibleBP::CallFunc_IsCarrying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, CallFunc_GetHatch_Hatch) == 0x000020, "Member 'CloseHatch_C_IsInteractionPossibleBP::CallFunc_GetHatch_Hatch' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'CloseHatch_C_IsInteractionPossibleBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'CloseHatch_C_IsInteractionPossibleBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_IsInteractionPossibleBP, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'CloseHatch_C_IsInteractionPossibleBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.GetHatchAnimationMontageSlave
// 0x0020 (0x0020 - 0x0000)
struct CloseHatch_C_GetHatchAnimationMontageSlave final
{
public:
	class UAnimationMontageSlave*                 Anim_Montage_Slave;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AHatch*                                 CallFunc_GetHatch_Hatch;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimationMontageSlave*                 CallFunc_GetAnimationMontageSlave_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_GetHatchAnimationMontageSlave) == 0x000008, "Wrong alignment on CloseHatch_C_GetHatchAnimationMontageSlave");
static_assert(sizeof(CloseHatch_C_GetHatchAnimationMontageSlave) == 0x000020, "Wrong size on CloseHatch_C_GetHatchAnimationMontageSlave");
static_assert(offsetof(CloseHatch_C_GetHatchAnimationMontageSlave, Anim_Montage_Slave) == 0x000000, "Member 'CloseHatch_C_GetHatchAnimationMontageSlave::Anim_Montage_Slave' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_GetHatchAnimationMontageSlave, CallFunc_GetHatch_Hatch) == 0x000008, "Member 'CloseHatch_C_GetHatchAnimationMontageSlave::CallFunc_GetHatch_Hatch' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_GetHatchAnimationMontageSlave, CallFunc_GetAnimationMontageSlave_ReturnValue) == 0x000010, "Member 'CloseHatch_C_GetHatchAnimationMontageSlave::CallFunc_GetAnimationMontageSlave_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_GetHatchAnimationMontageSlave, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CloseHatch_C_GetHatchAnimationMontageSlave::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.GetHatch
// 0x0020 (0x0020 - 0x0000)
struct CloseHatch_C_GetHatch final
{
public:
	class AHatch*                                 Hatch;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHatch*                                 K2Node_DynamicCast_AsHatch;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_GetHatch) == 0x000008, "Wrong alignment on CloseHatch_C_GetHatch");
static_assert(sizeof(CloseHatch_C_GetHatch) == 0x000020, "Wrong size on CloseHatch_C_GetHatch");
static_assert(offsetof(CloseHatch_C_GetHatch, Hatch) == 0x000000, "Member 'CloseHatch_C_GetHatch::Hatch' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_GetHatch, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'CloseHatch_C_GetHatch::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_GetHatch, K2Node_DynamicCast_AsHatch) == 0x000010, "Member 'CloseHatch_C_GetHatch::K2Node_DynamicCast_AsHatch' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_GetHatch, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CloseHatch_C_GetHatch::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CloseHatch.CloseHatch_C.CanSlasherCloseHatch
// 0x0018 (0x0018 - 0x0000)
struct CloseHatch_C_CanSlasherCloseHatch final
{
public:
	bool                                          CanClose;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHatch*                                 CallFunc_GetHatch_Hatch;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpen_ReturnValue;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseHatch_C_CanSlasherCloseHatch) == 0x000008, "Wrong alignment on CloseHatch_C_CanSlasherCloseHatch");
static_assert(sizeof(CloseHatch_C_CanSlasherCloseHatch) == 0x000018, "Wrong size on CloseHatch_C_CanSlasherCloseHatch");
static_assert(offsetof(CloseHatch_C_CanSlasherCloseHatch, CanClose) == 0x000000, "Member 'CloseHatch_C_CanSlasherCloseHatch::CanClose' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_CanSlasherCloseHatch, CallFunc_GetHatch_Hatch) == 0x000008, "Member 'CloseHatch_C_CanSlasherCloseHatch::CallFunc_GetHatch_Hatch' has a wrong offset!");
static_assert(offsetof(CloseHatch_C_CanSlasherCloseHatch, CallFunc_IsOpen_ReturnValue) == 0x000010, "Member 'CloseHatch_C_CanSlasherCloseHatch::CallFunc_IsOpen_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetBlindnessEffect

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ClosetBlindnessEffect.ClosetBlindnessEffect_C.OnGameEventDispatched
// 0x0040 (0x0040 - 0x0000)
struct ClosetBlindnessEffect_C_OnGameEventDispatched final
{
public:
	struct FGameplayTag                           GameEventType;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(ClosetBlindnessEffect_C_OnGameEventDispatched) == 0x000008, "Wrong alignment on ClosetBlindnessEffect_C_OnGameEventDispatched");
static_assert(sizeof(ClosetBlindnessEffect_C_OnGameEventDispatched) == 0x000040, "Wrong size on ClosetBlindnessEffect_C_OnGameEventDispatched");
static_assert(offsetof(ClosetBlindnessEffect_C_OnGameEventDispatched, GameEventType) == 0x000000, "Member 'ClosetBlindnessEffect_C_OnGameEventDispatched::GameEventType' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_OnGameEventDispatched, GameEventData) == 0x000010, "Member 'ClosetBlindnessEffect_C_OnGameEventDispatched::GameEventData' has a wrong offset!");

// Function ClosetBlindnessEffect.ClosetBlindnessEffect_C.OnAnyPlayerExitCloset
// 0x0018 (0x0018 - 0x0000)
struct ClosetBlindnessEffect_C_OnAnyPlayerExitCloset final
{
public:
	class UObject*                                Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset) == 0x000008, "Wrong alignment on ClosetBlindnessEffect_C_OnAnyPlayerExitCloset");
static_assert(sizeof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset) == 0x000018, "Wrong size on ClosetBlindnessEffect_C_OnAnyPlayerExitCloset");
static_assert(offsetof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset, Player) == 0x000000, "Member 'ClosetBlindnessEffect_C_OnAnyPlayerExitCloset::Player' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'ClosetBlindnessEffect_C_OnAnyPlayerExitCloset::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'ClosetBlindnessEffect_C_OnAnyPlayerExitCloset::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset, CallFunc_HasAuthority_ReturnValue) == 0x000011, "Member 'ClosetBlindnessEffect_C_OnAnyPlayerExitCloset::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_OnAnyPlayerExitCloset, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'ClosetBlindnessEffect_C_OnAnyPlayerExitCloset::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ClosetBlindnessEffect.ClosetBlindnessEffect_C.ExecuteUbergraph_ClosetBlindnessEffect
// 0x0058 (0x0058 - 0x0000)
struct ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_gameEventType;                        // 0x0014(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameEventData                         K2Node_Event_gameEventData;                        // 0x0020(0x0030)(ConstParm, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect) == 0x000008, "Wrong alignment on ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect");
static_assert(sizeof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect) == 0x000058, "Wrong size on ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect");
static_assert(offsetof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect, EntryPoint) == 0x000000, "Member 'ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect, K2Node_Event_gameEventType) == 0x000014, "Member 'ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect::K2Node_Event_gameEventType' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect, K2Node_Event_gameEventData) == 0x000020, "Member 'ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect::K2Node_Event_gameEventData' has a wrong offset!");
static_assert(offsetof(ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000050, "Member 'ClosetBlindnessEffect_C_ExecuteUbergraph_ClosetBlindnessEffect::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");

}

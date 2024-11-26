#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTallyScoreboard

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreTallyScoreboard.WBP_CoreTallyScoreboard_C.SetTallyPlayerStatusWidgets
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets final
{
public:
	EGameType                                     GameType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets) == 0x000001, "Wrong alignment on WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets");
static_assert(sizeof(WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets) == 0x000001, "Wrong size on WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets, GameType) == 0x000000, "Member 'WBP_CoreTallyScoreboard_C_SetTallyPlayerStatusWidgets::GameType' has a wrong offset!");

// Function WBP_CoreTallyScoreboard.WBP_CoreTallyScoreboard_C.ExecuteUbergraph_WBP_CoreTallyScoreboard
// 0x0048 (0x0048 - 0x0000)
struct WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameType                                     K2Node_Event_gameType;                             // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCoreTallyPlayerStatusWidget*>   K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UCoreTallyPlayerStatusWidget*>   K2Node_MakeArray_Array_1;                          // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UCoreTallyPlayerStatusWidget*>   K2Node_MakeArray_Array_2;                          // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UCoreTallyPlayerStatusWidget*>   K2Node_MakeArray_Array_3;                          // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard) == 0x000008, "Wrong alignment on WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard");
static_assert(sizeof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard) == 0x000048, "Wrong size on WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, EntryPoint) == 0x000000, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, K2Node_Event_gameType) == 0x000004, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::K2Node_Event_gameType' has a wrong offset!");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, K2Node_MakeArray_Array_1) == 0x000018, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, K2Node_MakeArray_Array_2) == 0x000028, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard, K2Node_MakeArray_Array_3) == 0x000038, "Member 'WBP_CoreTallyScoreboard_C_ExecuteUbergraph_WBP_CoreTallyScoreboard::K2Node_MakeArray_Array_3' has a wrong offset!");

}


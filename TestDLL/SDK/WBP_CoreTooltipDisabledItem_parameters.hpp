#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTooltipDisabledItem

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreTooltipDisabledItem.WBP_CoreTooltipDisabledItem_C.ExecuteUbergraph_WBP_CoreTooltipDisabledItem
// 0x0028 (0x0028 - 0x0000)
struct WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDisabledItemOption                           K2Node_CustomEvent_disabledItemOption;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_disabledMessage;                // 0x0008(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem) == 0x000008, "Wrong alignment on WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem");
static_assert(sizeof(WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem) == 0x000028, "Wrong size on WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem");
static_assert(offsetof(WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem, EntryPoint) == 0x000000, "Member 'WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem, K2Node_CustomEvent_disabledItemOption) == 0x000004, "Member 'WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem::K2Node_CustomEvent_disabledItemOption' has a wrong offset!");
static_assert(offsetof(WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem, K2Node_CustomEvent_disabledMessage) == 0x000008, "Member 'WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem::K2Node_CustomEvent_disabledMessage' has a wrong offset!");
static_assert(offsetof(WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CoreTooltipDisabledItem.WBP_CoreTooltipDisabledItem_C.SetTooltipData
// 0x0020 (0x0020 - 0x0000)
struct WBP_CoreTooltipDisabledItem_C_SetTooltipData final
{
public:
	EDisabledItemOption                           DisabledItemOption;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisabledMessage;                                   // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CoreTooltipDisabledItem_C_SetTooltipData) == 0x000008, "Wrong alignment on WBP_CoreTooltipDisabledItem_C_SetTooltipData");
static_assert(sizeof(WBP_CoreTooltipDisabledItem_C_SetTooltipData) == 0x000020, "Wrong size on WBP_CoreTooltipDisabledItem_C_SetTooltipData");
static_assert(offsetof(WBP_CoreTooltipDisabledItem_C_SetTooltipData, DisabledItemOption) == 0x000000, "Member 'WBP_CoreTooltipDisabledItem_C_SetTooltipData::DisabledItemOption' has a wrong offset!");
static_assert(offsetof(WBP_CoreTooltipDisabledItem_C_SetTooltipData, DisabledMessage) == 0x000008, "Member 'WBP_CoreTooltipDisabledItem_C_SetTooltipData::DisabledMessage' has a wrong offset!");

}

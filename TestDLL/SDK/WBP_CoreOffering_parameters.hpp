#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreOffering

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreOffering.WBP_CoreOffering_C.SetData
// 0x0070 (0x0070 - 0x0000)
struct WBP_CoreOffering_C_SetData final
{
public:
	struct FOfferingViewData                      Param_OfferingViewData;                            // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CoreOffering_C_SetData) == 0x000008, "Wrong alignment on WBP_CoreOffering_C_SetData");
static_assert(sizeof(WBP_CoreOffering_C_SetData) == 0x000070, "Wrong size on WBP_CoreOffering_C_SetData");
static_assert(offsetof(WBP_CoreOffering_C_SetData, Param_OfferingViewData) == 0x000000, "Member 'WBP_CoreOffering_C_SetData::Param_OfferingViewData' has a wrong offset!");

// Function WBP_CoreOffering.WBP_CoreOffering_C.ExecuteUbergraph_WBP_CoreOffering
// 0x0078 (0x0078 - 0x0000)
struct WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOfferingViewData                      K2Node_Event_offeringViewData;                     // 0x0008(0x0070)(ConstParm)
};
static_assert(alignof(WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering) == 0x000008, "Wrong alignment on WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering");
static_assert(sizeof(WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering) == 0x000078, "Wrong size on WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering");
static_assert(offsetof(WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering, EntryPoint) == 0x000000, "Member 'WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering, K2Node_Event_offeringViewData) == 0x000008, "Member 'WBP_CoreOffering_C_ExecuteUbergraph_WBP_CoreOffering::K2Node_Event_offeringViewData' has a wrong offset!");

}

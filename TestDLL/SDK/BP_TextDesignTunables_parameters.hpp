#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextDesignTunables

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
// 0x0010 (0x0010 - 0x0000)
struct BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSeconds;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables) == 0x000008, "Wrong alignment on BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables");
static_assert(sizeof(BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables) == 0x000010, "Wrong size on BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables");
static_assert(offsetof(BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables, EntryPoint) == 0x000000, "Member 'BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
// 0x0008 (0x0008 - 0x0000)
struct BP_TextDesignTunables_C_ReceiveTick final
{
public:
	double                                        DeltaSeconds;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextDesignTunables_C_ReceiveTick) == 0x000008, "Wrong alignment on BP_TextDesignTunables_C_ReceiveTick");
static_assert(sizeof(BP_TextDesignTunables_C_ReceiveTick) == 0x000008, "Wrong size on BP_TextDesignTunables_C_ReceiveTick");
static_assert(offsetof(BP_TextDesignTunables_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_TextDesignTunables_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

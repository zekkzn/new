#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K24

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_K24.WBP_K24_C.SetKillerData
// 0x0098 (0x0098 - 0x0000)
struct WBP_K24_C_SetKillerData final
{
public:
	struct FPlayerStatusViewData                  Data;                                              // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_K24_C_SetKillerData) == 0x000008, "Wrong alignment on WBP_K24_C_SetKillerData");
static_assert(sizeof(WBP_K24_C_SetKillerData) == 0x000098, "Wrong size on WBP_K24_C_SetKillerData");
static_assert(offsetof(WBP_K24_C_SetKillerData, Data) == 0x000000, "Member 'WBP_K24_C_SetKillerData::Data' has a wrong offset!");

// Function WBP_K24.WBP_K24_C.setContaminationData
// 0x0018 (0x0018 - 0x0000)
struct WBP_K24_C_SetContaminationData final
{
public:
	EPlayerStatus                                 PlayerStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UK24StatusData*                         KillerData;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K24_C_SetContaminationData) == 0x000008, "Wrong alignment on WBP_K24_C_SetContaminationData");
static_assert(sizeof(WBP_K24_C_SetContaminationData) == 0x000018, "Wrong size on WBP_K24_C_SetContaminationData");
static_assert(offsetof(WBP_K24_C_SetContaminationData, PlayerStatus) == 0x000000, "Member 'WBP_K24_C_SetContaminationData::PlayerStatus' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_SetContaminationData, KillerData) == 0x000008, "Member 'WBP_K24_C_SetContaminationData::KillerData' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_SetContaminationData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'WBP_K24_C_SetContaminationData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_SetContaminationData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'WBP_K24_C_SetContaminationData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_SetContaminationData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000012, "Member 'WBP_K24_C_SetContaminationData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_SetContaminationData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000013, "Member 'WBP_K24_C_SetContaminationData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_SetContaminationData, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'WBP_K24_C_SetContaminationData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_K24.WBP_K24_C.ExecuteUbergraph_WBP_K24
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_K24_C_ExecuteUbergraph_WBP_K24 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerStatusViewData                  K2Node_Event_data;                                 // 0x0008(0x0098)(ConstParm)
	class UK24StatusData*                         K2Node_DynamicCast_AsK24Status_Data;               // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K24_C_ExecuteUbergraph_WBP_K24) == 0x000008, "Wrong alignment on WBP_K24_C_ExecuteUbergraph_WBP_K24");
static_assert(sizeof(WBP_K24_C_ExecuteUbergraph_WBP_K24) == 0x0000B0, "Wrong size on WBP_K24_C_ExecuteUbergraph_WBP_K24");
static_assert(offsetof(WBP_K24_C_ExecuteUbergraph_WBP_K24, EntryPoint) == 0x000000, "Member 'WBP_K24_C_ExecuteUbergraph_WBP_K24::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_ExecuteUbergraph_WBP_K24, K2Node_Event_data) == 0x000008, "Member 'WBP_K24_C_ExecuteUbergraph_WBP_K24::K2Node_Event_data' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_ExecuteUbergraph_WBP_K24, K2Node_DynamicCast_AsK24Status_Data) == 0x0000A0, "Member 'WBP_K24_C_ExecuteUbergraph_WBP_K24::K2Node_DynamicCast_AsK24Status_Data' has a wrong offset!");
static_assert(offsetof(WBP_K24_C_ExecuteUbergraph_WBP_K24, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'WBP_K24_C_ExecuteUbergraph_WBP_K24::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreAddon

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreAddon.WBP_CoreAddon_C.SetStatusEffect
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreAddon_C_SetStatusEffect final
{
public:
	EStatusEffectType                             StatusEffectType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAddon_C_SetStatusEffect) == 0x000001, "Wrong alignment on WBP_CoreAddon_C_SetStatusEffect");
static_assert(sizeof(WBP_CoreAddon_C_SetStatusEffect) == 0x000001, "Wrong size on WBP_CoreAddon_C_SetStatusEffect");
static_assert(offsetof(WBP_CoreAddon_C_SetStatusEffect, StatusEffectType) == 0x000000, "Member 'WBP_CoreAddon_C_SetStatusEffect::StatusEffectType' has a wrong offset!");

// Function WBP_CoreAddon.WBP_CoreAddon_C.SetStackCount
// 0x0030 (0x0030 - 0x0000)
struct WBP_CoreAddon_C_SetStackCount final
{
public:
	int32                                         Param_StackCount;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELoadoutPartState                             State;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAddon_C_SetStackCount) == 0x000008, "Wrong alignment on WBP_CoreAddon_C_SetStackCount");
static_assert(sizeof(WBP_CoreAddon_C_SetStackCount) == 0x000030, "Wrong size on WBP_CoreAddon_C_SetStackCount");
static_assert(offsetof(WBP_CoreAddon_C_SetStackCount, Param_StackCount) == 0x000000, "Member 'WBP_CoreAddon_C_SetStackCount::Param_StackCount' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_SetStackCount, State) == 0x000004, "Member 'WBP_CoreAddon_C_SetStackCount::State' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_SetStackCount, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'WBP_CoreAddon_C_SetStackCount::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_SetStackCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_CoreAddon_C_SetStackCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_SetStackCount, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'WBP_CoreAddon_C_SetStackCount::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_SetStackCount, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_CoreAddon_C_SetStackCount::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_CoreAddon.WBP_CoreAddon_C.SetData
// 0x0070 (0x0070 - 0x0000)
struct WBP_CoreAddon_C_SetData final
{
public:
	struct FAddonViewData                         BaseLoadoutPartViewData;                           // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CoreAddon_C_SetData) == 0x000008, "Wrong alignment on WBP_CoreAddon_C_SetData");
static_assert(sizeof(WBP_CoreAddon_C_SetData) == 0x000070, "Wrong size on WBP_CoreAddon_C_SetData");
static_assert(offsetof(WBP_CoreAddon_C_SetData, BaseLoadoutPartViewData) == 0x000000, "Member 'WBP_CoreAddon_C_SetData::BaseLoadoutPartViewData' has a wrong offset!");

// Function WBP_CoreAddon.WBP_CoreAddon_C.Set Progress
// 0x0020 (0x0020 - 0x0000)
struct WBP_CoreAddon_C_Set_Progress final
{
public:
	double                                        Progress;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_A_ImplicitCast;       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAddon_C_Set_Progress) == 0x000008, "Wrong alignment on WBP_CoreAddon_C_Set_Progress");
static_assert(sizeof(WBP_CoreAddon_C_Set_Progress) == 0x000020, "Wrong size on WBP_CoreAddon_C_Set_Progress");
static_assert(offsetof(WBP_CoreAddon_C_Set_Progress, Progress) == 0x000000, "Member 'WBP_CoreAddon_C_Set_Progress::Progress' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_Set_Progress, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'WBP_CoreAddon_C_Set_Progress::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_Set_Progress, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_CoreAddon_C_Set_Progress::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_Set_Progress, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_CoreAddon_C_Set_Progress::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_Set_Progress, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000018, "Member 'WBP_CoreAddon_C_Set_Progress::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_Set_Progress, CallFunc_Multiply_FloatFloat_A_ImplicitCast) == 0x00001C, "Member 'WBP_CoreAddon_C_Set_Progress::CallFunc_Multiply_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function WBP_CoreAddon.WBP_CoreAddon_C.ExecuteUbergraph_WBP_CoreAddon
// 0x0088 (0x0088 - 0x0000)
struct WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAddonViewData                         K2Node_Event_baseLoadoutPartViewData;              // 0x0008(0x0070)(ConstParm)
	EStatusEffectType                             K2Node_Event_statusEffectType;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Set_Progress_Progress_ImplicitCast;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon) == 0x000008, "Wrong alignment on WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon");
static_assert(sizeof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon) == 0x000088, "Wrong size on WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, EntryPoint) == 0x000000, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, Temp_bool_Variable) == 0x000004, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, Temp_byte_Variable) == 0x000005, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, CallFunc_NotEqual_NameName_ReturnValue) == 0x000006, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, Temp_byte_Variable_1) == 0x000007, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, K2Node_Event_baseLoadoutPartViewData) == 0x000008, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::K2Node_Event_baseLoadoutPartViewData' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, K2Node_Event_statusEffectType) == 0x000078, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::K2Node_Event_statusEffectType' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000079, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, K2Node_Select_Default) == 0x00007A, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon, CallFunc_Set_Progress_Progress_ImplicitCast) == 0x000080, "Member 'WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon::CallFunc_Set_Progress_Progress_ImplicitCast' has a wrong offset!");

}

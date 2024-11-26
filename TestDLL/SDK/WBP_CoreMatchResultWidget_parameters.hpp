#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreMatchResultWidget

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.UpdateWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreMatchResultWidget_C_UpdateWidget final
{
public:
	struct FMatchResultViewData                   Data;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_CoreMatchResultWidget_C_UpdateWidget) == 0x000004, "Wrong alignment on WBP_CoreMatchResultWidget_C_UpdateWidget");
static_assert(sizeof(WBP_CoreMatchResultWidget_C_UpdateWidget) == 0x000008, "Wrong size on WBP_CoreMatchResultWidget_C_UpdateWidget");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_UpdateWidget, Data) == 0x000000, "Member 'WBP_CoreMatchResultWidget_C_UpdateWidget::Data' has a wrong offset!");

// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.SetMatchResultText
// 0x0030 (0x0030 - 0x0000)
struct WBP_CoreMatchResultWidget_C_SetMatchResultText final
{
public:
	class FText                                   ResultText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(WBP_CoreMatchResultWidget_C_SetMatchResultText) == 0x000008, "Wrong alignment on WBP_CoreMatchResultWidget_C_SetMatchResultText");
static_assert(sizeof(WBP_CoreMatchResultWidget_C_SetMatchResultText) == 0x000030, "Wrong size on WBP_CoreMatchResultWidget_C_SetMatchResultText");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetMatchResultText, ResultText) == 0x000000, "Member 'WBP_CoreMatchResultWidget_C_SetMatchResultText::ResultText' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetMatchResultText, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'WBP_CoreMatchResultWidget_C_SetMatchResultText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.SetData
// 0x0058 (0x0058 - 0x0000)
struct WBP_CoreMatchResultWidget_C_SetData final
{
public:
	struct FMatchResultViewData                   Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0010(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value_1;                         // 0x0030(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_B_ImplicitCast;       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_delayBeforeFadeout_ImplicitCast; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreMatchResultWidget_C_SetData) == 0x000008, "Wrong alignment on WBP_CoreMatchResultWidget_C_SetData");
static_assert(sizeof(WBP_CoreMatchResultWidget_C_SetData) == 0x000058, "Wrong size on WBP_CoreMatchResultWidget_C_SetData");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, Data) == 0x000000, "Member 'WBP_CoreMatchResultWidget_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000008, "Member 'WBP_CoreMatchResultWidget_C_SetData::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, CallFunc_Map_Find_Value) == 0x000010, "Member 'WBP_CoreMatchResultWidget_C_SetData::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'WBP_CoreMatchResultWidget_C_SetData::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, CallFunc_Map_Find_Value_1) == 0x000030, "Member 'WBP_CoreMatchResultWidget_C_SetData::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, CallFunc_Map_Find_ReturnValue_1) == 0x000048, "Member 'WBP_CoreMatchResultWidget_C_SetData::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, CallFunc_Subtract_FloatFloat_B_ImplicitCast) == 0x00004C, "Member 'WBP_CoreMatchResultWidget_C_SetData::CallFunc_Subtract_FloatFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_SetData, K2Node_VariableSet_delayBeforeFadeout_ImplicitCast) == 0x000050, "Member 'WBP_CoreMatchResultWidget_C_SetData::K2Node_VariableSet_delayBeforeFadeout_ImplicitCast' has a wrong offset!");

// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.ExecuteUbergraph_WBP_CoreMatchResultWidget
// 0x0038 (0x0038 - 0x0000)
struct WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMatchResultViewData                   K2Node_Event_data;                                 // 0x0018(0x0008)(ConstParm, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget) == 0x000008, "Wrong alignment on WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget");
static_assert(sizeof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget) == 0x000038, "Wrong size on WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget, EntryPoint) == 0x000000, "Member 'WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget, K2Node_Event_data) == 0x000018, "Member 'WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget::K2Node_Event_data' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget, CallFunc_Delay_Duration_ImplicitCast) == 0x000030, "Member 'WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K23

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_K23.WBP_K23_C.SetLacerationVisiblity
// 0x0020 (0x0020 - 0x0000)
struct WBP_K23_C_SetLacerationVisiblity final
{
public:
	double                                        Current_Laceration_Level;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_Laceration_Level;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EqualEqual_FloatFloat_A_ImplicitCast;     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Greater_FloatFloat_A_ImplicitCast;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K23_C_SetLacerationVisiblity) == 0x000008, "Wrong alignment on WBP_K23_C_SetLacerationVisiblity");
static_assert(sizeof(WBP_K23_C_SetLacerationVisiblity) == 0x000020, "Wrong size on WBP_K23_C_SetLacerationVisiblity");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, Current_Laceration_Level) == 0x000000, "Member 'WBP_K23_C_SetLacerationVisiblity::Current_Laceration_Level' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, Max_Laceration_Level) == 0x000008, "Member 'WBP_K23_C_SetLacerationVisiblity::Max_Laceration_Level' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000010, "Member 'WBP_K23_C_SetLacerationVisiblity::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000011, "Member 'WBP_K23_C_SetLacerationVisiblity::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000012, "Member 'WBP_K23_C_SetLacerationVisiblity::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, CallFunc_EqualEqual_FloatFloat_A_ImplicitCast) == 0x000014, "Member 'WBP_K23_C_SetLacerationVisiblity::CallFunc_EqualEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationVisiblity, CallFunc_Greater_FloatFloat_A_ImplicitCast) == 0x000018, "Member 'WBP_K23_C_SetLacerationVisiblity::CallFunc_Greater_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function WBP_K23.WBP_K23_C.SetLacerationData
// 0x0068 (0x0068 - 0x0000)
struct WBP_K23_C_SetLacerationData final
{
public:
	class UTricksterStatusData*                   KillerData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Status_Change;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetLacerationVisiblity_Max_Laceration_Level_ImplicitCast; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetLacerationVisiblity_Current_Laceration_Level_ImplicitCast; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_Value_ImplicitCast;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K23_C_SetLacerationData) == 0x000008, "Wrong alignment on WBP_K23_C_SetLacerationData");
static_assert(sizeof(WBP_K23_C_SetLacerationData) == 0x000068, "Wrong size on WBP_K23_C_SetLacerationData");
static_assert(offsetof(WBP_K23_C_SetLacerationData, KillerData) == 0x000000, "Member 'WBP_K23_C_SetLacerationData::KillerData' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, Status_Change) == 0x000008, "Member 'WBP_K23_C_SetLacerationData::Status_Change' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000009, "Member 'WBP_K23_C_SetLacerationData::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_K23_C_SetLacerationData::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000010, "Member 'WBP_K23_C_SetLacerationData::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'WBP_K23_C_SetLacerationData::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_BooleanAND_ReturnValue) == 0x00001C, "Member 'WBP_K23_C_SetLacerationData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_K23_C_SetLacerationData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_K23_C_SetLacerationData::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000030, "Member 'WBP_K23_C_SetLacerationData::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_PlayAnimation_ReturnValue_2) == 0x000038, "Member 'WBP_K23_C_SetLacerationData::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_SetLacerationVisiblity_Max_Laceration_Level_ImplicitCast) == 0x000040, "Member 'WBP_K23_C_SetLacerationData::CallFunc_SetLacerationVisiblity_Max_Laceration_Level_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_SetLacerationVisiblity_Current_Laceration_Level_ImplicitCast) == 0x000048, "Member 'WBP_K23_C_SetLacerationData::CallFunc_SetLacerationVisiblity_Current_Laceration_Level_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_MapRangeUnclamped_Value_ImplicitCast) == 0x000050, "Member 'WBP_K23_C_SetLacerationData::CallFunc_MapRangeUnclamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast) == 0x000058, "Member 'WBP_K23_C_SetLacerationData::CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000060, "Member 'WBP_K23_C_SetLacerationData::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_SetLacerationData, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000064, "Member 'WBP_K23_C_SetLacerationData::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

// Function WBP_K23.WBP_K23_C.SetKillerData
// 0x0098 (0x0098 - 0x0000)
struct WBP_K23_C_SetKillerData final
{
public:
	struct FPlayerStatusViewData                  Data;                                              // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_K23_C_SetKillerData) == 0x000008, "Wrong alignment on WBP_K23_C_SetKillerData");
static_assert(sizeof(WBP_K23_C_SetKillerData) == 0x000098, "Wrong size on WBP_K23_C_SetKillerData");
static_assert(offsetof(WBP_K23_C_SetKillerData, Data) == 0x000000, "Member 'WBP_K23_C_SetKillerData::Data' has a wrong offset!");

// Function WBP_K23.WBP_K23_C.Set Laceration Segments
// 0x0060 (0x0060 - 0x0000)
struct WBP_K23_C_Set_Laceration_Segments final
{
public:
	double                                        Max_Laceration_;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_2;                   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_B_ImplicitCast;       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FFloor_A_ImplicitCast;                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K23_C_Set_Laceration_Segments) == 0x000008, "Wrong alignment on WBP_K23_C_Set_Laceration_Segments");
static_assert(sizeof(WBP_K23_C_Set_Laceration_Segments) == 0x000060, "Wrong size on WBP_K23_C_Set_Laceration_Segments");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, Max_Laceration_) == 0x000000, "Member 'WBP_K23_C_Set_Laceration_Segments::Max_Laceration_' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, Temp_int_Variable) == 0x000008, "Member 'WBP_K23_C_Set_Laceration_Segments::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_K23_C_Set_Laceration_Segments::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, CallFunc_FFloor_ReturnValue) == 0x000010, "Member 'WBP_K23_C_Set_Laceration_Segments::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, K2Node_MakeStruct_LinearColor) == 0x000014, "Member 'WBP_K23_C_Set_Laceration_Segments::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, K2Node_MakeStruct_LinearColor_1) == 0x000024, "Member 'WBP_K23_C_Set_Laceration_Segments::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, K2Node_MakeStruct_LinearColor_2) == 0x000034, "Member 'WBP_K23_C_Set_Laceration_Segments::K2Node_MakeStruct_LinearColor_2' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, K2Node_Select_Default) == 0x000044, "Member 'WBP_K23_C_Set_Laceration_Segments::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, CallFunc_Subtract_FloatFloat_B_ImplicitCast) == 0x000054, "Member 'WBP_K23_C_Set_Laceration_Segments::CallFunc_Subtract_FloatFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_Set_Laceration_Segments, CallFunc_FFloor_A_ImplicitCast) == 0x000058, "Member 'WBP_K23_C_Set_Laceration_Segments::CallFunc_FFloor_A_ImplicitCast' has a wrong offset!");

// Function WBP_K23.WBP_K23_C.ExecuteUbergraph_WBP_K23
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_K23_C_ExecuteUbergraph_WBP_K23 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayerStatusViewData                  K2Node_Event_data;                                 // 0x0020(0x0098)(ConstParm)
	class UTricksterStatusData*                   K2Node_DynamicCast_AsTrickster_Status_Data;        // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C4(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTricksterStatusData*                   CallFunc_SpawnObject_ReturnValue;                  // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K23_C_ExecuteUbergraph_WBP_K23) == 0x000008, "Wrong alignment on WBP_K23_C_ExecuteUbergraph_WBP_K23");
static_assert(sizeof(WBP_K23_C_ExecuteUbergraph_WBP_K23) == 0x0000E8, "Wrong size on WBP_K23_C_ExecuteUbergraph_WBP_K23");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, EntryPoint) == 0x000000, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, K2Node_Event_data) == 0x000020, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::K2Node_Event_data' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, K2Node_DynamicCast_AsTrickster_Status_Data) == 0x0000B8, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::K2Node_DynamicCast_AsTrickster_Status_Data' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, K2Node_CreateDelegate_OutputDelegate) == 0x0000C4, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, CallFunc_SpawnObject_ReturnValue) == 0x0000D8, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K23_C_ExecuteUbergraph_WBP_K23, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000E0, "Member 'WBP_K23_C_ExecuteUbergraph_WBP_K23::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

}


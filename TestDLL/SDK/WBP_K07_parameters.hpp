#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K07

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_K07.WBP_K07_C.SetKillerData
// 0x0098 (0x0098 - 0x0000)
struct WBP_K07_C_SetKillerData final
{
public:
	struct FPlayerStatusViewData                  Data;                                              // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_K07_C_SetKillerData) == 0x000008, "Wrong alignment on WBP_K07_C_SetKillerData");
static_assert(sizeof(WBP_K07_C_SetKillerData) == 0x000098, "Wrong size on WBP_K07_C_SetKillerData");
static_assert(offsetof(WBP_K07_C_SetKillerData, Data) == 0x000000, "Member 'WBP_K07_C_SetKillerData::Data' has a wrong offset!");

// Function WBP_K07.WBP_K07_C.SetDoctorVisibility
// 0x0003 (0x0003 - 0x0000)
struct WBP_K07_C_SetDoctorVisibility final
{
public:
	EAfflictionLevel                              Affliction_Level;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K07_C_SetDoctorVisibility) == 0x000001, "Wrong alignment on WBP_K07_C_SetDoctorVisibility");
static_assert(sizeof(WBP_K07_C_SetDoctorVisibility) == 0x000003, "Wrong size on WBP_K07_C_SetDoctorVisibility");
static_assert(offsetof(WBP_K07_C_SetDoctorVisibility, Affliction_Level) == 0x000000, "Member 'WBP_K07_C_SetDoctorVisibility::Affliction_Level' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_K07_C_SetDoctorVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorVisibility, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000002, "Member 'WBP_K07_C_SetDoctorVisibility::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function WBP_K07.WBP_K07_C.SetDoctorData
// 0x0030 (0x0030 - 0x0000)
struct WBP_K07_C_SetDoctorData final
{
public:
	class UDoctorStatusData*                      DoctorStatusData;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          State_Change;                                      // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAfflictionLevel                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K07_C_SetDoctorData) == 0x000008, "Wrong alignment on WBP_K07_C_SetDoctorData");
static_assert(sizeof(WBP_K07_C_SetDoctorData) == 0x000030, "Wrong size on WBP_K07_C_SetDoctorData");
static_assert(offsetof(WBP_K07_C_SetDoctorData, DoctorStatusData) == 0x000000, "Member 'WBP_K07_C_SetDoctorData::DoctorStatusData' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, State_Change) == 0x000008, "Member 'WBP_K07_C_SetDoctorData::State_Change' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, Temp_object_Variable) == 0x000010, "Member 'WBP_K07_C_SetDoctorData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_K07_C_SetDoctorData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, Temp_byte_Variable) == 0x000019, "Member 'WBP_K07_C_SetDoctorData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'WBP_K07_C_SetDoctorData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, K2Node_Select_Default) == 0x000020, "Member 'WBP_K07_C_SetDoctorData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_SetDoctorData, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_K07_C_SetDoctorData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_K07.WBP_K07_C.ResetDoctorData
// 0x0020 (0x0020 - 0x0000)
struct WBP_K07_C_ResetDoctorData final
{
public:
	EAfflictionLevel                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K07_C_ResetDoctorData) == 0x000008, "Wrong alignment on WBP_K07_C_ResetDoctorData");
static_assert(sizeof(WBP_K07_C_ResetDoctorData) == 0x000020, "Wrong size on WBP_K07_C_ResetDoctorData");
static_assert(offsetof(WBP_K07_C_ResetDoctorData, Temp_byte_Variable) == 0x000000, "Member 'WBP_K07_C_ResetDoctorData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ResetDoctorData, Temp_object_Variable) == 0x000008, "Member 'WBP_K07_C_ResetDoctorData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ResetDoctorData, K2Node_Select_Default) == 0x000010, "Member 'WBP_K07_C_ResetDoctorData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ResetDoctorData, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_K07_C_ResetDoctorData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_K07.WBP_K07_C.ExecuteUbergraph_WBP_K07
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_K07_C_ExecuteUbergraph_WBP_K07 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerStatusViewData                  K2Node_Event_data;                                 // 0x0030(0x0098)(ConstParm)
	class UDoctorStatusData*                      K2Node_DynamicCast_AsDoctor_Status_Data;           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDoctorStatusData*                      CallFunc_SpawnObject_ReturnValue;                  // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_K07_C_ExecuteUbergraph_WBP_K07) == 0x000008, "Wrong alignment on WBP_K07_C_ExecuteUbergraph_WBP_K07");
static_assert(sizeof(WBP_K07_C_ExecuteUbergraph_WBP_K07) == 0x0000E0, "Wrong size on WBP_K07_C_ExecuteUbergraph_WBP_K07");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, EntryPoint) == 0x000000, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000008, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000010, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, K2Node_Event_data) == 0x000030, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::K2Node_Event_data' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, K2Node_DynamicCast_AsDoctor_Status_Data) == 0x0000C8, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::K2Node_DynamicCast_AsDoctor_Status_Data' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_K07_C_ExecuteUbergraph_WBP_K07, CallFunc_SpawnObject_ReturnValue) == 0x0000D8, "Member 'WBP_K07_C_ExecuteUbergraph_WBP_K07::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

}

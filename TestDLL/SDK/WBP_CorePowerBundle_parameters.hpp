#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePowerBundle

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.SetActiveState
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePowerBundle_C_SetActiveState final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_SetActiveState) == 0x000001, "Wrong alignment on WBP_CorePowerBundle_C_SetActiveState");
static_assert(sizeof(WBP_CorePowerBundle_C_SetActiveState) == 0x000001, "Wrong size on WBP_CorePowerBundle_C_SetActiveState");
static_assert(offsetof(WBP_CorePowerBundle_C_SetActiveState, IsActive) == 0x000000, "Member 'WBP_CorePowerBundle_C_SetActiveState::IsActive' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.Set Dynamic Power Data List
// 0x0310 (0x0310 - 0x0000)
struct WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List final
{
public:
	TArray<struct FPowerViewData>                 PowerViewDataList;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UHorizontalBox*                         WidgetContainer;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPowerViewData                         CallFunc_Array_Get_Item;                           // 0x0020(0x0128)()
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0148(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CorePower_C*                       CallFunc_Create_ReturnValue;                       // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPowerViewData                         CallFunc_Array_Get_Item_1;                         // 0x0188(0x0128)()
	TScriptInterface<class IPowerViewInterface>   K2Node_DynamicCast_AsPower_View_Interface;         // 0x02B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item_2;                         // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CorePower_C*                       K2Node_DynamicCast_AsWBP_Core_Power;               // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPowerViewInterface>   K2Node_DynamicCast_AsPower_View_Interface_1;       // 0x02F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List) == 0x000008, "Wrong alignment on WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List");
static_assert(sizeof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List) == 0x000310, "Wrong size on WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, PowerViewDataList) == 0x000000, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::PowerViewDataList' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, WidgetContainer) == 0x000010, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::WidgetContainer' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_GetAllChildren_ReturnValue) == 0x000148, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Length_ReturnValue_1) == 0x00015C, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Length_ReturnValue_2) == 0x000160, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Length_ReturnValue_3) == 0x000164, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000168, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, Temp_int_Loop_Counter_Variable) == 0x00016C, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Add_IntInt_ReturnValue) == 0x000174, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, Temp_int_Array_Index_Variable_1) == 0x000178, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Create_ReturnValue) == 0x000180, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, K2Node_DynamicCast_AsPower_View_Interface) == 0x0002B0, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::K2Node_DynamicCast_AsPower_View_Interface' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, K2Node_DynamicCast_bSuccess) == 0x0002C0, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0002C8, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Array_Get_Item_2) == 0x0002D0, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_IsValid_ReturnValue) == 0x0002D8, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, K2Node_DynamicCast_AsWBP_Core_Power) == 0x0002E0, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::K2Node_DynamicCast_AsWBP_Core_Power' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, K2Node_DynamicCast_bSuccess_1) == 0x0002E8, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, K2Node_DynamicCast_AsPower_View_Interface_1) == 0x0002F0, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::K2Node_DynamicCast_AsPower_View_Interface_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, K2Node_DynamicCast_bSuccess_2) == 0x000300, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, Temp_int_Loop_Counter_Variable_1) == 0x000304, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Less_IntInt_ReturnValue_1) == 0x000308, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x00030C, "Member 'WBP_CorePowerBundle_C_Set_Dynamic_Power_Data_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePowerBundle_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CorePowerBundle_C_PreConstruct");
static_assert(sizeof(WBP_CorePowerBundle_C_PreConstruct) == 0x000001, "Wrong size on WBP_CorePowerBundle_C_PreConstruct");
static_assert(offsetof(WBP_CorePowerBundle_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CorePowerBundle_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.HidePowersCarry
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePowerBundle_C_HidePowersCarry final
{
public:
	bool                                          IsCarrying;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_HidePowersCarry) == 0x000001, "Wrong alignment on WBP_CorePowerBundle_C_HidePowersCarry");
static_assert(sizeof(WBP_CorePowerBundle_C_HidePowersCarry) == 0x000001, "Wrong size on WBP_CorePowerBundle_C_HidePowersCarry");
static_assert(offsetof(WBP_CorePowerBundle_C_HidePowersCarry, IsCarrying) == 0x000000, "Member 'WBP_CorePowerBundle_C_HidePowersCarry::IsCarrying' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.ExecuteUbergraph_WBP_CorePowerBundle
// 0x0258 (0x0258 - 0x0000)
struct WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsActive;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPowerBundleViewData                   K2Node_Event_powerBundleViewData;                  // 0x0018(0x0228)(ConstParm)
	bool                                          K2Node_CustomEvent_IsCarrying;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateScale_scale_ImplicitCast;           // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateScale_scale_ImplicitCast_1;         // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle) == 0x000008, "Wrong alignment on WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle");
static_assert(sizeof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle) == 0x000258, "Wrong size on WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, EntryPoint) == 0x000000, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, K2Node_Event_IsActive) == 0x000011, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::K2Node_Event_IsActive' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, K2Node_Event_powerBundleViewData) == 0x000018, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::K2Node_Event_powerBundleViewData' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, K2Node_CustomEvent_IsCarrying) == 0x000240, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::K2Node_CustomEvent_IsCarrying' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000248, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, CallFunc_UpdateScale_scale_ImplicitCast) == 0x000250, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::CallFunc_UpdateScale_scale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle, CallFunc_UpdateScale_scale_ImplicitCast_1) == 0x000254, "Member 'WBP_CorePowerBundle_C_ExecuteUbergraph_WBP_CorePowerBundle::CallFunc_UpdateScale_scale_ImplicitCast_1' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.SetMainPowerData
// 0x0140 (0x0140 - 0x0000)
struct WBP_CorePowerBundle_C_SetMainPowerData final
{
public:
	struct FPowerViewData                         MainPowerViewData;                                 // 0x0000(0x0128)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TScriptInterface<class IPowerViewInterface>   K2Node_DynamicCast_AsPower_View_Interface;         // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_SetMainPowerData) == 0x000008, "Wrong alignment on WBP_CorePowerBundle_C_SetMainPowerData");
static_assert(sizeof(WBP_CorePowerBundle_C_SetMainPowerData) == 0x000140, "Wrong size on WBP_CorePowerBundle_C_SetMainPowerData");
static_assert(offsetof(WBP_CorePowerBundle_C_SetMainPowerData, MainPowerViewData) == 0x000000, "Member 'WBP_CorePowerBundle_C_SetMainPowerData::MainPowerViewData' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetMainPowerData, K2Node_DynamicCast_AsPower_View_Interface) == 0x000128, "Member 'WBP_CorePowerBundle_C_SetMainPowerData::K2Node_DynamicCast_AsPower_View_Interface' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetMainPowerData, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'WBP_CorePowerBundle_C_SetMainPowerData::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.SetData
// 0x0228 (0x0228 - 0x0000)
struct WBP_CorePowerBundle_C_SetData final
{
public:
	struct FPowerBundleViewData                   PowerBundleViewData;                               // 0x0000(0x0228)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CorePowerBundle_C_SetData) == 0x000008, "Wrong alignment on WBP_CorePowerBundle_C_SetData");
static_assert(sizeof(WBP_CorePowerBundle_C_SetData) == 0x000228, "Wrong size on WBP_CorePowerBundle_C_SetData");
static_assert(offsetof(WBP_CorePowerBundle_C_SetData, PowerBundleViewData) == 0x000000, "Member 'WBP_CorePowerBundle_C_SetData::PowerBundleViewData' has a wrong offset!");

// Function WBP_CorePowerBundle.WBP_CorePowerBundle_C.SetAddonData
// 0x0180 (0x0180 - 0x0000)
struct WBP_CorePowerBundle_C_SetAddonData final
{
public:
	struct FAddonViewData                         AddonOneData;                                      // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAddonViewData                         AddonTwoData;                                      // 0x0070(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAddonViewData                         NewLocalVar;                                       // 0x00E0(0x0070)(Edit, BlueprintVisible)
	TScriptInterface<class IAddonViewInterface>   K2Node_DynamicCast_AsAddon_View_Interface;         // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IAddonViewInterface>   K2Node_DynamicCast_AsAddon_View_Interface_1;       // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePowerBundle_C_SetAddonData) == 0x000008, "Wrong alignment on WBP_CorePowerBundle_C_SetAddonData");
static_assert(sizeof(WBP_CorePowerBundle_C_SetAddonData) == 0x000180, "Wrong size on WBP_CorePowerBundle_C_SetAddonData");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, AddonOneData) == 0x000000, "Member 'WBP_CorePowerBundle_C_SetAddonData::AddonOneData' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, AddonTwoData) == 0x000070, "Member 'WBP_CorePowerBundle_C_SetAddonData::AddonTwoData' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, NewLocalVar) == 0x0000E0, "Member 'WBP_CorePowerBundle_C_SetAddonData::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, K2Node_DynamicCast_AsAddon_View_Interface) == 0x000150, "Member 'WBP_CorePowerBundle_C_SetAddonData::K2Node_DynamicCast_AsAddon_View_Interface' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'WBP_CorePowerBundle_C_SetAddonData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, K2Node_DynamicCast_AsAddon_View_Interface_1) == 0x000168, "Member 'WBP_CorePowerBundle_C_SetAddonData::K2Node_DynamicCast_AsAddon_View_Interface_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePowerBundle_C_SetAddonData, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'WBP_CorePowerBundle_C_SetAddonData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

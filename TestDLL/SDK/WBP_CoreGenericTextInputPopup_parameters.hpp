#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreGenericTextInputPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.ExecuteUbergraph_WBP_CoreGenericTextInputPopup
// 0x0128 (0x0128 - 0x0000)
struct WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasePopupViewData*                     K2Node_Event_data;                                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnalogInputEvent                      K2Node_Event_InAnalogInputEvent;                   // 0x0038(0x0050)(ConstParm)
	struct FKeyEvent                              CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue; // 0x0088(0x0048)()
	float                                         CallFunc_GetAnalogValue_ReturnValue;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x00D8(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_limitReached;                         // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x2];                                       // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00FC(0x0014)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0110(0x0014)()
};
static_assert(alignof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup) == 0x000008, "Wrong alignment on WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup");
static_assert(sizeof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup) == 0x000128, "Wrong size on WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, EntryPoint) == 0x000000, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, Temp_bool_Variable) == 0x000018, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, K2Node_Event_data) == 0x000020, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::K2Node_Event_data' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, K2Node_Event_InAnalogInputEvent) == 0x000038, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::K2Node_Event_InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue) == 0x000088, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, CallFunc_GetAnalogValue_ReturnValue) == 0x0000D0, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::CallFunc_GetAnalogValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, CallFunc_GetKey_ReturnValue) == 0x0000D8, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0000F8, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, K2Node_Event_limitReached) == 0x0000F9, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::K2Node_Event_limitReached' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, K2Node_MakeStruct_SlateColor_1) == 0x0000FC, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup, K2Node_Select_Default) == 0x000110, "Member 'WBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.HandleAnalogInputEvent
// 0x0050 (0x0050 - 0x0000)
struct WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent final
{
public:
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent) == 0x000008, "Wrong alignment on WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent");
static_assert(sizeof(WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent) == 0x000050, "Wrong size on WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent, InAnalogInputEvent) == 0x000000, "Member 'WBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent::InAnalogInputEvent' has a wrong offset!");

// Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Set Header Color
// 0x0090 (0x0090 - 0x0000)
struct WBP_CoreGenericTextInputPopup_C_Set_Header_Color final
{
public:
	class UBasePopupViewData*                     Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPopupPriority                                Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color) == 0x000008, "Wrong alignment on WBP_CoreGenericTextInputPopup_C_Set_Header_Color");
static_assert(sizeof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color) == 0x000090, "Wrong size on WBP_CoreGenericTextInputPopup_C_Set_Header_Color");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Data) == 0x000000, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Data' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_byte_Variable) == 0x000008, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable) == 0x00000C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable_1) == 0x00001C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable_2) == 0x00002C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable_3) == 0x00003C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable_4) == 0x00004C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable_5) == 0x00005C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, Temp_struct_Variable_6) == 0x00006C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Set_Header_Color, K2Node_Select_Default) == 0x00007C, "Member 'WBP_CoreGenericTextInputPopup_C_Set_Header_Color::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.SetHeaderColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_CoreGenericTextInputPopup_C_SetHeaderColor final
{
public:
	class UBasePopupViewData*                     Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      CallFunc_GetPopupHeader_MaterialInstance;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreGenericTextInputPopup_C_SetHeaderColor) == 0x000008, "Wrong alignment on WBP_CoreGenericTextInputPopup_C_SetHeaderColor");
static_assert(sizeof(WBP_CoreGenericTextInputPopup_C_SetHeaderColor) == 0x000010, "Wrong size on WBP_CoreGenericTextInputPopup_C_SetHeaderColor");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_SetHeaderColor, Data) == 0x000000, "Member 'WBP_CoreGenericTextInputPopup_C_SetHeaderColor::Data' has a wrong offset!");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_SetHeaderColor, CallFunc_GetPopupHeader_MaterialInstance) == 0x000008, "Member 'WBP_CoreGenericTextInputPopup_C_SetHeaderColor::CallFunc_GetPopupHeader_MaterialInstance' has a wrong offset!");

// Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Show
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreGenericTextInputPopup_C_Show final
{
public:
	class UBasePopupViewData*                     Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreGenericTextInputPopup_C_Show) == 0x000008, "Wrong alignment on WBP_CoreGenericTextInputPopup_C_Show");
static_assert(sizeof(WBP_CoreGenericTextInputPopup_C_Show) == 0x000008, "Wrong size on WBP_CoreGenericTextInputPopup_C_Show");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_Show, Data) == 0x000000, "Member 'WBP_CoreGenericTextInputPopup_C_Show::Data' has a wrong offset!");

// Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.UpdateCharacterCounterVisual
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual final
{
public:
	bool                                          LimitReached;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual) == 0x000001, "Wrong alignment on WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual");
static_assert(sizeof(WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual) == 0x000001, "Wrong size on WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual");
static_assert(offsetof(WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual, LimitReached) == 0x000000, "Member 'WBP_CoreGenericTextInputPopup_C_UpdateCharacterCounterVisual::LimitReached' has a wrong offset!");

}

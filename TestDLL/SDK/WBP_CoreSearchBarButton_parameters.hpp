#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSearchBarButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.ExecuteUbergraph_WBP_CoreSearchBarButton
// 0x0148 (0x0148 - 0x0000)
struct WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0080)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C0(0x0080)(ConstParm)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton) == 0x000008, "Wrong alignment on WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton");
static_assert(sizeof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton) == 0x000148, "Wrong size on WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton");
static_assert(offsetof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton, EntryPoint) == 0x000000, "Member 'WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton, K2Node_Event_MouseEvent) == 0x0000C0, "Member 'WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000140, "Member 'WBP_CoreSearchBarButton_C_ExecuteUbergraph_WBP_CoreSearchBarButton::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

// Function WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.OnMouseEnter
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_CoreSearchBarButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CoreSearchBarButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_CoreSearchBarButton_C_OnMouseEnter");
static_assert(sizeof(WBP_CoreSearchBarButton_C_OnMouseEnter) == 0x0000B8, "Wrong size on WBP_CoreSearchBarButton_C_OnMouseEnter");
static_assert(offsetof(WBP_CoreSearchBarButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_CoreSearchBarButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_CoreSearchBarButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.OnMouseLeave
// 0x0080 (0x0080 - 0x0000)
struct WBP_CoreSearchBarButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CoreSearchBarButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_CoreSearchBarButton_C_OnMouseLeave");
static_assert(sizeof(WBP_CoreSearchBarButton_C_OnMouseLeave) == 0x000080, "Wrong size on WBP_CoreSearchBarButton_C_OnMouseLeave");
static_assert(offsetof(WBP_CoreSearchBarButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_CoreSearchBarButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreSearchBarButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreSearchBarButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CoreSearchBarButton_C_PreConstruct");
static_assert(sizeof(WBP_CoreSearchBarButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_CoreSearchBarButton_C_PreConstruct");
static_assert(offsetof(WBP_CoreSearchBarButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CoreSearchBarButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.Set Colors
// 0x0010 (0x0010 - 0x0000)
struct WBP_CoreSearchBarButton_C_Set_Colors final
{
public:
	struct FLinearColor                           IconsColors;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreSearchBarButton_C_Set_Colors) == 0x000004, "Wrong alignment on WBP_CoreSearchBarButton_C_Set_Colors");
static_assert(sizeof(WBP_CoreSearchBarButton_C_Set_Colors) == 0x000010, "Wrong size on WBP_CoreSearchBarButton_C_Set_Colors");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Set_Colors, IconsColors) == 0x000000, "Member 'WBP_CoreSearchBarButton_C_Set_Colors::IconsColors' has a wrong offset!");

// Function WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.Update Visuals
// 0x0020 (0x0020 - 0x0000)
struct WBP_CoreSearchBarButton_C_Update_Visuals final
{
public:
	bool                                          Param_IsHovered;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Option_0_ImplicitCast;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Option_1_ImplicitCast;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreSearchBarButton_C_Update_Visuals) == 0x000004, "Wrong alignment on WBP_CoreSearchBarButton_C_Update_Visuals");
static_assert(sizeof(WBP_CoreSearchBarButton_C_Update_Visuals) == 0x000020, "Wrong size on WBP_CoreSearchBarButton_C_Update_Visuals");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, Param_IsHovered) == 0x000000, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, Temp_bool_Variable) == 0x000001, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, Temp_bool_Variable_1) == 0x000002, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, K2Node_Select_Default) == 0x000004, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, K2Node_Select_Default_1) == 0x000008, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, K2Node_Select_Option_0_ImplicitCast) == 0x000018, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreSearchBarButton_C_Update_Visuals, K2Node_Select_Option_1_ImplicitCast) == 0x00001C, "Member 'WBP_CoreSearchBarButton_C_Update_Visuals::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

}

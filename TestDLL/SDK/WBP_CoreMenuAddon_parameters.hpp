#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreMenuAddon

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.SetWhitePlusIconVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility) == 0x000001, "Wrong alignment on WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility");
static_assert(sizeof(WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility) == 0x000001, "Wrong size on WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility");
static_assert(offsetof(WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility, Param_IsVisible) == 0x000000, "Member 'WBP_CoreMenuAddon_C_SetWhitePlusIconVisibility::Param_IsVisible' has a wrong offset!");

// Function WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreMenuAddon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreMenuAddon_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CoreMenuAddon_C_PreConstruct");
static_assert(sizeof(WBP_CoreMenuAddon_C_PreConstruct) == 0x000001, "Wrong size on WBP_CoreMenuAddon_C_PreConstruct");
static_assert(offsetof(WBP_CoreMenuAddon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CoreMenuAddon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.ExecuteUbergraph_WBP_CoreMenuAddon
// 0x000C (0x000C - 0x0000)
struct WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isVisible;                            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon) == 0x000004, "Wrong alignment on WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon");
static_assert(sizeof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon) == 0x00000C, "Wrong size on WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, EntryPoint) == 0x000000, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, Temp_bool_Variable) == 0x000004, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, Temp_byte_Variable) == 0x000005, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, K2Node_Event_isVisible) == 0x000007, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::K2Node_Event_isVisible' has a wrong offset!");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, K2Node_Event_IsDesignTime) == 0x000008, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon, K2Node_Select_Default) == 0x000009, "Member 'WBP_CoreMenuAddon_C_ExecuteUbergraph_WBP_CoreMenuAddon::K2Node_Select_Default' has a wrong offset!");

}

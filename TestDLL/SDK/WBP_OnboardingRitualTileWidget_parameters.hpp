#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OnboardingRitualTileWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.ExecuteUbergraph_WBP_OnboardingRitualTileWidget
// 0x0080 (0x0080 - 0x0000)
struct WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget) == 0x000008, "Wrong alignment on WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget");
static_assert(sizeof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget) == 0x000080, "Wrong size on WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, EntryPoint) == 0x000000, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000040, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000048, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000050, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000058, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000068, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000070, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'WBP_OnboardingRitualTileWidget_C_ExecuteUbergraph_WBP_OnboardingRitualTileWidget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

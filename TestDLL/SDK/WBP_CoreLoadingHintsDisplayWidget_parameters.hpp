#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreLoadingHintsDisplayWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CoreLoadingHintsDisplayWidget.WBP_CoreLoadingHintsDisplayWidget_C.ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget
// 0x0080 (0x0080 - 0x0000)
struct WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_fadeOutDelay;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUITweenInstance*                       K2Node_CustomEvent_tween_1;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       K2Node_CustomEvent_tween;                          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUITweenInstance* Tween)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUITween*                               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToOpacity_ReturnValue;                    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUITweenInstance* Tween)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUITween*                               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_Create_ReturnValue_1;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToOpacity_ReturnValue_1;                  // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget) == 0x000008, "Wrong alignment on WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget");
static_assert(sizeof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget) == 0x000080, "Wrong size on WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, EntryPoint) == 0x000000, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, K2Node_Event_fadeOutDelay) == 0x000004, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::K2Node_Event_fadeOutDelay' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, K2Node_Event_IsDesignTime) == 0x000008, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, K2Node_CustomEvent_tween_1) == 0x000010, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::K2Node_CustomEvent_tween_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, K2Node_CustomEvent_tween) == 0x000018, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::K2Node_CustomEvent_tween' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000038, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, CallFunc_ToOpacity_ReturnValue) == 0x000048, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::CallFunc_ToOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000068, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, CallFunc_Create_ReturnValue_1) == 0x000070, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget, CallFunc_ToOpacity_ReturnValue_1) == 0x000078, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_ExecuteUbergraph_WBP_CoreLoadingHintsDisplayWidget::CallFunc_ToOpacity_ReturnValue_1' has a wrong offset!");

// Function WBP_CoreLoadingHintsDisplayWidget.WBP_CoreLoadingHintsDisplayWidget_C.OnFadeInComplete
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete final
{
public:
	class UUITweenInstance*                       Tween;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete) == 0x000008, "Wrong alignment on WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete");
static_assert(sizeof(WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete) == 0x000008, "Wrong size on WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete, Tween) == 0x000000, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_OnFadeInComplete::Tween' has a wrong offset!");

// Function WBP_CoreLoadingHintsDisplayWidget.WBP_CoreLoadingHintsDisplayWidget_C.OnFadeOutComplete
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete final
{
public:
	class UUITweenInstance*                       Tween;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete) == 0x000008, "Wrong alignment on WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete");
static_assert(sizeof(WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete) == 0x000008, "Wrong size on WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete, Tween) == 0x000000, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_OnFadeOutComplete::Tween' has a wrong offset!");

// Function WBP_CoreLoadingHintsDisplayWidget.WBP_CoreLoadingHintsDisplayWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct");
static_assert(sizeof(WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct) == 0x000001, "Wrong size on WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CoreLoadingHintsDisplayWidget.WBP_CoreLoadingHintsDisplayWidget_C.StartFadeSequence
// 0x0004 (0x0004 - 0x0000)
struct WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence final
{
public:
	float                                         FadeOutDelay;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence) == 0x000004, "Wrong alignment on WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence");
static_assert(sizeof(WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence) == 0x000004, "Wrong size on WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence");
static_assert(offsetof(WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence, FadeOutDelay) == 0x000000, "Member 'WBP_CoreLoadingHintsDisplayWidget_C_StartFadeSequence::FadeOutDelay' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreBinkVideoPlayerWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CoreBinkVideoPlayerWidget.WBP_CoreBinkVideoPlayerWidget_C.ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isVisible;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget) == 0x000004, "Wrong alignment on WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget");
static_assert(sizeof(WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget) == 0x000008, "Wrong size on WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget, EntryPoint) == 0x000000, "Member 'WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget, K2Node_Event_isVisible) == 0x000004, "Member 'WBP_CoreBinkVideoPlayerWidget_C_ExecuteUbergraph_WBP_CoreBinkVideoPlayerWidget::K2Node_Event_isVisible' has a wrong offset!");

// Function WBP_CoreBinkVideoPlayerWidget.WBP_CoreBinkVideoPlayerWidget_C.GetBinkVideoPlayer
// 0x0028 (0x0028 - 0x0000)
struct WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer final
{
public:
	class UBinkMediaPlayer*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaTexture*                      K2Node_DynamicCast_AsBink_Media_Texture;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer) == 0x000008, "Wrong alignment on WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer");
static_assert(sizeof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer) == 0x000028, "Wrong size on WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer, ReturnValue) == 0x000000, "Member 'WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer, CallFunc_K2_GetTextureParameterValue_ReturnValue) == 0x000010, "Member 'WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer::CallFunc_K2_GetTextureParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer, K2Node_DynamicCast_AsBink_Media_Texture) == 0x000018, "Member 'WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer::K2Node_DynamicCast_AsBink_Media_Texture' has a wrong offset!");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_CoreBinkVideoPlayerWidget_C_GetBinkVideoPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_CoreBinkVideoPlayerWidget.WBP_CoreBinkVideoPlayerWidget_C.SetSkipInputSwitcherVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility) == 0x000001, "Wrong alignment on WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility");
static_assert(sizeof(WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility) == 0x000001, "Wrong size on WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility");
static_assert(offsetof(WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility, Param_IsVisible) == 0x000000, "Member 'WBP_CoreBinkVideoPlayerWidget_C_SetSkipInputSwitcherVisibility::Param_IsVisible' has a wrong offset!");

}

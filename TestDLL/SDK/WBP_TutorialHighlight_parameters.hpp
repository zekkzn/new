#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialHighlight

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TutorialHighlight.WBP_TutorialHighlight_C.Show Highlight Animation
// 0x0010 (0x0010 - 0x0000)
struct WBP_TutorialHighlight_C_Show_Highlight_Animation final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LayoutSpace;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialHighlight_C_Show_Highlight_Animation) == 0x000008, "Wrong alignment on WBP_TutorialHighlight_C_Show_Highlight_Animation");
static_assert(sizeof(WBP_TutorialHighlight_C_Show_Highlight_Animation) == 0x000010, "Wrong size on WBP_TutorialHighlight_C_Show_Highlight_Animation");
static_assert(offsetof(WBP_TutorialHighlight_C_Show_Highlight_Animation, Param_IsVisible) == 0x000000, "Member 'WBP_TutorialHighlight_C_Show_Highlight_Animation::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_TutorialHighlight_C_Show_Highlight_Animation, LayoutSpace) == 0x000001, "Member 'WBP_TutorialHighlight_C_Show_Highlight_Animation::LayoutSpace' has a wrong offset!");
static_assert(offsetof(WBP_TutorialHighlight_C_Show_Highlight_Animation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_TutorialHighlight_C_Show_Highlight_Animation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

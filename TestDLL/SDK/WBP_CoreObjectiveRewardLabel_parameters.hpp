#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreObjectiveRewardLabel

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreObjectiveRewardLabel.WBP_CoreObjectiveRewardLabel_C.ExecuteUbergraph_WBP_CoreObjectiveRewardLabel
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIDataManager*                         CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FObjectiveRewardLabelViewData          K2Node_Event_viewData;                             // 0x0018(0x000C)(ConstParm, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCurrencyIcon_ReturnValue;              // 0x0038(0x0038)(UObjectWrapper, HasGetValueTypeHash)
	class FText                                   CallFunc_AsPercent_Float_ReturnValue;              // 0x0070(0x0018)()
	class FText                                   CallFunc_GetBeautifiedNumericText_ReturnValue;     // 0x0088(0x0018)()
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel) == 0x000008, "Wrong alignment on WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel");
static_assert(sizeof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel) == 0x0000A8, "Wrong size on WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, EntryPoint) == 0x000000, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000008, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, K2Node_Event_viewData) == 0x000018, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::K2Node_Event_viewData' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_BooleanAND_ReturnValue) == 0x000024, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_SelectFloat_ReturnValue_1) == 0x000030, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_GetCurrencyIcon_ReturnValue) == 0x000038, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_GetCurrencyIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_AsPercent_Float_ReturnValue) == 0x000070, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_AsPercent_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_GetBeautifiedNumericText_ReturnValue) == 0x000088, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_GetBeautifiedNumericText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000A0, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000A4, "Member 'WBP_CoreObjectiveRewardLabel_C_ExecuteUbergraph_WBP_CoreObjectiveRewardLabel::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_CoreObjectiveRewardLabel.WBP_CoreObjectiveRewardLabel_C.SetData
// 0x000C (0x000C - 0x0000)
struct WBP_CoreObjectiveRewardLabel_C_SetData final
{
public:
	struct FObjectiveRewardLabelViewData          ViewData;                                          // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_CoreObjectiveRewardLabel_C_SetData) == 0x000004, "Wrong alignment on WBP_CoreObjectiveRewardLabel_C_SetData");
static_assert(sizeof(WBP_CoreObjectiveRewardLabel_C_SetData) == 0x00000C, "Wrong size on WBP_CoreObjectiveRewardLabel_C_SetData");
static_assert(offsetof(WBP_CoreObjectiveRewardLabel_C_SetData, ViewData) == 0x000000, "Member 'WBP_CoreObjectiveRewardLabel_C_SetData::ViewData' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreAimingCrosshair

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetTextAnim
// 0x0003 (0x0003 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetTextAnim final
{
public:
	EAimingCrosshairState                         State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetTextAnim) == 0x000001, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetTextAnim");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetTextAnim) == 0x000003, "Wrong size on WBP_CoreAimingCrosshair_C_SetTextAnim");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetTextAnim, State) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetTextAnim::State' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetTextAnim, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'WBP_CoreAimingCrosshair_C_SetTextAnim::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetTextAnim, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'WBP_CoreAimingCrosshair_C_SetTextAnim::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetState
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetState final
{
public:
	EAimingCrosshairState                         NewState;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetState) == 0x000001, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetState");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetState) == 0x000001, "Wrong size on WBP_CoreAimingCrosshair_C_SetState");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetState, NewState) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetState::NewState' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetReticleColour
// 0x0030 (0x0030 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetReticleColour final
{
public:
	struct FLinearColor                           MainColor;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ReticleColor;                                      // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DecorColor;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetReticleColour) == 0x000004, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetReticleColour");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetReticleColour) == 0x000030, "Wrong size on WBP_CoreAimingCrosshair_C_SetReticleColour");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetReticleColour, MainColor) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetReticleColour::MainColor' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetReticleColour, ReticleColor) == 0x000010, "Member 'WBP_CoreAimingCrosshair_C_SetReticleColour::ReticleColor' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetReticleColour, DecorColor) == 0x000020, "Member 'WBP_CoreAimingCrosshair_C_SetReticleColour::DecorColor' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetProgress
// 0x0004 (0x0004 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetProgress final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetProgress) == 0x000004, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetProgress");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetProgress) == 0x000004, "Wrong size on WBP_CoreAimingCrosshair_C_SetProgress");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetProgress, Progress) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetProgress::Progress' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetGlitch
// 0x0018 (0x0018 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetGlitch final
{
public:
	EAimingCrosshairState                         State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetGlitch) == 0x000008, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetGlitch");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetGlitch) == 0x000018, "Wrong size on WBP_CoreAimingCrosshair_C_SetGlitch");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, State) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::State' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000003, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_BooleanOR_ReturnValue_1) == 0x000005, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGlitch, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000010, "Member 'WBP_CoreAimingCrosshair_C_SetGlitch::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetGauge
// 0x0058 (0x0058 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetGauge final
{
public:
	bool                                          IsTargetting;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AreGaugeVisible;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AreGaugeVertical;                                  // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToMaterialScalarParameter_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_Create_ReturnValue_1;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToMaterialScalarParameter_ReturnValue_1;  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ToMaterialScalarParameter_targetValue_ImplicitCast; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ToMaterialScalarParameter_targetValue_ImplicitCast_1; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetGauge) == 0x000008, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetGauge");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetGauge) == 0x000058, "Wrong size on WBP_CoreAimingCrosshair_C_SetGauge");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, IsTargetting) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::IsTargetting' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, AreGaugeVisible) == 0x000001, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::AreGaugeVisible' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, AreGaugeVertical) == 0x000002, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::AreGaugeVertical' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_SelectFloat_ReturnValue_1) == 0x000010, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_SelectFloat_ReturnValue_2) == 0x000020, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_SelectFloat_ReturnValue_3) == 0x000028, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_ToMaterialScalarParameter_ReturnValue) == 0x000030, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_ToMaterialScalarParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_Create_ReturnValue_1) == 0x000038, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_ToMaterialScalarParameter_ReturnValue_1) == 0x000040, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_ToMaterialScalarParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000048, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_ToMaterialScalarParameter_targetValue_ImplicitCast) == 0x00004C, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_ToMaterialScalarParameter_targetValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000050, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetGauge, CallFunc_ToMaterialScalarParameter_targetValue_ImplicitCast_1) == 0x000054, "Member 'WBP_CoreAimingCrosshair_C_SetGauge::CallFunc_ToMaterialScalarParameter_targetValue_ImplicitCast_1' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.SetCross
// 0x0020 (0x0020 - 0x0000)
struct WBP_CoreAimingCrosshair_C_SetCross final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasReticleGauge;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_SetCross) == 0x000008, "Wrong alignment on WBP_CoreAimingCrosshair_C_SetCross");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_SetCross) == 0x000020, "Wrong size on WBP_CoreAimingCrosshair_C_SetCross");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetCross, IsActive) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_SetCross::IsActive' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetCross, HasReticleGauge) == 0x000001, "Member 'WBP_CoreAimingCrosshair_C_SetCross::HasReticleGauge' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetCross, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_CoreAimingCrosshair_C_SetCross::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetCross, CallFunc_SelectFloat_ReturnValue_1) == 0x000010, "Member 'WBP_CoreAimingCrosshair_C_SetCross::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetCross, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000018, "Member 'WBP_CoreAimingCrosshair_C_SetCross::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_SetCross, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00001C, "Member 'WBP_CoreAimingCrosshair_C_SetCross::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreAimingCrosshair_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CoreAimingCrosshair_C_PreConstruct");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_PreConstruct) == 0x000001, "Wrong size on WBP_CoreAimingCrosshair_C_PreConstruct");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.PlayOpeningAnim
// 0x0038 (0x0038 - 0x0000)
struct WBP_CoreAimingCrosshair_C_PlayOpeningAnim final
{
public:
	EAimingCrosshairState                         State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAimingCrosshairState                         CallFunc_GetPreviousState_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableRowHandleValue_ReturnValue;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToMaterialScalarParameter_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_B_ImplicitCast;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim) == 0x000008, "Wrong alignment on WBP_CoreAimingCrosshair_C_PlayOpeningAnim");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim) == 0x000038, "Wrong size on WBP_CoreAimingCrosshair_C_PlayOpeningAnim");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, State) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::State' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_GetPreviousState_ReturnValue) == 0x000001, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_GetPreviousState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_GetTunableRowHandleValue_ReturnValue) == 0x000010, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_GetTunableRowHandleValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00001C, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_ToMaterialScalarParameter_ReturnValue) == 0x000028, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_ToMaterialScalarParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_PlayOpeningAnim, CallFunc_Divide_FloatFloat_B_ImplicitCast) == 0x000030, "Member 'WBP_CoreAimingCrosshair_C_PlayOpeningAnim::CallFunc_Divide_FloatFloat_B_ImplicitCast' has a wrong offset!");

// Function WBP_CoreAimingCrosshair.WBP_CoreAimingCrosshair_C.ExecuteUbergraph_WBP_CoreAimingCrosshair
// 0x0028 (0x0028 - 0x0000)
struct WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAimingCrosshairState                         CallFunc_GetState_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_progress;                             // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAimingCrosshairState                         K2Node_Event_newState;                             // 0x001C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair) == 0x000008, "Wrong alignment on WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair");
static_assert(sizeof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair) == 0x000028, "Wrong size on WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, EntryPoint) == 0x000000, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, CallFunc_GetState_ReturnValue) == 0x000004, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::CallFunc_GetState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, K2Node_Event_IsDesignTime) == 0x000005, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000007, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, K2Node_Event_progress) == 0x000018, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::K2Node_Event_progress' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, K2Node_Event_newState) == 0x00001C, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::K2Node_Event_newState' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, K2Node_SwitchEnum_CmpSuccess) == 0x00001D, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000020, "Member 'WBP_CoreAimingCrosshair_C_ExecuteUbergraph_WBP_CoreAimingCrosshair::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SacrificeCam

#include "Basic.hpp"

#include "TheClown_structs.hpp"


namespace SDK::Params
{

// Function SacrificeCam.SacrificeCam_C.ActivateEndGameVignette
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_ActivateEndGameVignette final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_ActivateEndGameVignette) == 0x000001, "Wrong alignment on SacrificeCam_C_ActivateEndGameVignette");
static_assert(sizeof(SacrificeCam_C_ActivateEndGameVignette) == 0x000001, "Wrong size on SacrificeCam_C_ActivateEndGameVignette");
static_assert(offsetof(SacrificeCam_C_ActivateEndGameVignette, IsActive) == 0x000000, "Member 'SacrificeCam_C_ActivateEndGameVignette::IsActive' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.ActivatePlayerGlitchVFX
// 0x0010 (0x0010 - 0x0000)
struct SacrificeCam_C_ActivatePlayerGlitchVFX final
{
public:
	const class UMaterialInstanceDynamic*         GlitchFX;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Face;                                              // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Madness;                                           // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Killer;                                            // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_ActivatePlayerGlitchVFX) == 0x000008, "Wrong alignment on SacrificeCam_C_ActivatePlayerGlitchVFX");
static_assert(sizeof(SacrificeCam_C_ActivatePlayerGlitchVFX) == 0x000010, "Wrong size on SacrificeCam_C_ActivatePlayerGlitchVFX");
static_assert(offsetof(SacrificeCam_C_ActivatePlayerGlitchVFX, GlitchFX) == 0x000000, "Member 'SacrificeCam_C_ActivatePlayerGlitchVFX::GlitchFX' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ActivatePlayerGlitchVFX, Face) == 0x000008, "Member 'SacrificeCam_C_ActivatePlayerGlitchVFX::Face' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ActivatePlayerGlitchVFX, Madness) == 0x000009, "Member 'SacrificeCam_C_ActivatePlayerGlitchVFX::Madness' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ActivatePlayerGlitchVFX, Killer) == 0x00000A, "Member 'SacrificeCam_C_ActivatePlayerGlitchVFX::Killer' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.ActivatePlayerLightningVFX
// 0x0010 (0x0010 - 0x0000)
struct SacrificeCam_C_ActivatePlayerLightningVFX final
{
public:
	const class UMaterialInstanceDynamic*         LightningFX;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Intense;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_ActivatePlayerLightningVFX) == 0x000008, "Wrong alignment on SacrificeCam_C_ActivatePlayerLightningVFX");
static_assert(sizeof(SacrificeCam_C_ActivatePlayerLightningVFX) == 0x000010, "Wrong size on SacrificeCam_C_ActivatePlayerLightningVFX");
static_assert(offsetof(SacrificeCam_C_ActivatePlayerLightningVFX, LightningFX) == 0x000000, "Member 'SacrificeCam_C_ActivatePlayerLightningVFX::LightningFX' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ActivatePlayerLightningVFX, Intense) == 0x000008, "Member 'SacrificeCam_C_ActivatePlayerLightningVFX::Intense' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.ExecuteUbergraph_SacrificeCam
// 0x0058 (0x0058 - 0x0000)
struct SacrificeCam_C_ExecuteUbergraph_SacrificeCam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsActive;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	const class UMaterialInstanceDynamic*         K2Node_Event_LightningFX;                          // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Intense;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UMaterialInstanceDynamic*         K2Node_Event_GlitchFX;                             // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Face;                                 // 0x0030(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Madness;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Killer;                               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDormantMain_;                       // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDormant_;                           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Wrong_Landing;                        // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_WrongLanding;                         // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBombType                                     K2Node_Event_Bomb_Type;                            // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsAttachedLocker;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetBloodFramePlayRate_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam) == 0x000008, "Wrong alignment on SacrificeCam_C_ExecuteUbergraph_SacrificeCam");
static_assert(sizeof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam) == 0x000058, "Wrong size on SacrificeCam_C_ExecuteUbergraph_SacrificeCam");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, EntryPoint) == 0x000000, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::EntryPoint' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, Temp_bool_IsClosed_Variable) == 0x000011, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_IsActive) == 0x000012, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_IsActive' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_LightningFX) == 0x000018, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_LightningFX' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_Intense) == 0x000020, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_Intense' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_GlitchFX) == 0x000028, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_GlitchFX' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_Face) == 0x000030, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_Face' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_Madness) == 0x000031, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_Madness' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_Killer) == 0x000032, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_Killer' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_IsDormantMain_) == 0x000033, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_IsDormantMain_' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_IsDormant_) == 0x000034, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_IsDormant_' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_Wrong_Landing) == 0x000035, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_Wrong_Landing' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_WrongLanding) == 0x000036, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_WrongLanding' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_Bomb_Type) == 0x000037, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_Bomb_Type' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, K2Node_Event_IsAttachedLocker) == 0x000038, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::K2Node_Event_IsAttachedLocker' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, CallFunc_GetBloodFramePlayRate_ReturnValue) == 0x000040, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::CallFunc_GetBloodFramePlayRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000048, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000050, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SacrificeCam_C_ExecuteUbergraph_SacrificeCam, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000054, "Member 'SacrificeCam_C_ExecuteUbergraph_SacrificeCam::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.K12_GetToxinVignette
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_K12_GetToxinVignette final
{
public:
	EBombType                                     Bomb_Type;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_K12_GetToxinVignette) == 0x000001, "Wrong alignment on SacrificeCam_C_K12_GetToxinVignette");
static_assert(sizeof(SacrificeCam_C_K12_GetToxinVignette) == 0x000001, "Wrong size on SacrificeCam_C_K12_GetToxinVignette");
static_assert(offsetof(SacrificeCam_C_K12_GetToxinVignette, Bomb_Type) == 0x000000, "Member 'SacrificeCam_C_K12_GetToxinVignette::Bomb_Type' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.K22_HighlightDormant
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_K22_HighlightDormant final
{
public:
	bool                                          IsDormant_;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_K22_HighlightDormant) == 0x000001, "Wrong alignment on SacrificeCam_C_K22_HighlightDormant");
static_assert(sizeof(SacrificeCam_C_K22_HighlightDormant) == 0x000001, "Wrong size on SacrificeCam_C_K22_HighlightDormant");
static_assert(offsetof(SacrificeCam_C_K22_HighlightDormant, IsDormant_) == 0x000000, "Member 'SacrificeCam_C_K22_HighlightDormant::IsDormant_' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.K22_HighlightDormantMain
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_K22_HighlightDormantMain final
{
public:
	bool                                          IsDormantMain_;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_K22_HighlightDormantMain) == 0x000001, "Wrong alignment on SacrificeCam_C_K22_HighlightDormantMain");
static_assert(sizeof(SacrificeCam_C_K22_HighlightDormantMain) == 0x000001, "Wrong size on SacrificeCam_C_K22_HighlightDormantMain");
static_assert(offsetof(SacrificeCam_C_K22_HighlightDormantMain, IsDormantMain_) == 0x000000, "Member 'SacrificeCam_C_K22_HighlightDormantMain::IsDormantMain_' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.K22_IsAttachedLocker
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_K22_IsAttachedLocker final
{
public:
	bool                                          IsAttachedLocker;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_K22_IsAttachedLocker) == 0x000001, "Wrong alignment on SacrificeCam_C_K22_IsAttachedLocker");
static_assert(sizeof(SacrificeCam_C_K22_IsAttachedLocker) == 0x000001, "Wrong size on SacrificeCam_C_K22_IsAttachedLocker");
static_assert(offsetof(SacrificeCam_C_K22_IsAttachedLocker, IsAttachedLocker) == 0x000000, "Member 'SacrificeCam_C_K22_IsAttachedLocker::IsAttachedLocker' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.K22_WrongLanding
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_K22_WrongLanding final
{
public:
	bool                                          Wrong_Landing;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_K22_WrongLanding) == 0x000001, "Wrong alignment on SacrificeCam_C_K22_WrongLanding");
static_assert(sizeof(SacrificeCam_C_K22_WrongLanding) == 0x000001, "Wrong size on SacrificeCam_C_K22_WrongLanding");
static_assert(offsetof(SacrificeCam_C_K22_WrongLanding, Wrong_Landing) == 0x000000, "Member 'SacrificeCam_C_K22_WrongLanding::Wrong_Landing' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.K22_WrongLandingVignette
// 0x0001 (0x0001 - 0x0000)
struct SacrificeCam_C_K22_WrongLandingVignette final
{
public:
	bool                                          WrongLanding;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_K22_WrongLandingVignette) == 0x000001, "Wrong alignment on SacrificeCam_C_K22_WrongLandingVignette");
static_assert(sizeof(SacrificeCam_C_K22_WrongLandingVignette) == 0x000001, "Wrong size on SacrificeCam_C_K22_WrongLandingVignette");
static_assert(offsetof(SacrificeCam_C_K22_WrongLandingVignette, WrongLanding) == 0x000000, "Member 'SacrificeCam_C_K22_WrongLandingVignette::WrongLanding' has a wrong offset!");

// Function SacrificeCam.SacrificeCam_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct SacrificeCam_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SacrificeCam_C_UserConstructionScript) == 0x000008, "Wrong alignment on SacrificeCam_C_UserConstructionScript");
static_assert(sizeof(SacrificeCam_C_UserConstructionScript) == 0x000008, "Wrong size on SacrificeCam_C_UserConstructionScript");
static_assert(offsetof(SacrificeCam_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'SacrificeCam_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

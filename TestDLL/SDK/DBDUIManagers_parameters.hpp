#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDUIManagers

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIManagers_structs.hpp"


namespace SDK::Params
{

// Function DBDUIManagers.DBDTextManager.GetLargeTextEnabled
// 0x0001 (0x0001 - 0x0000)
struct DBDTextManager_GetLargeTextEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DBDTextManager_GetLargeTextEnabled) == 0x000001, "Wrong alignment on DBDTextManager_GetLargeTextEnabled");
static_assert(sizeof(DBDTextManager_GetLargeTextEnabled) == 0x000001, "Wrong size on DBDTextManager_GetLargeTextEnabled");
static_assert(offsetof(DBDTextManager_GetLargeTextEnabled, ReturnValue) == 0x000000, "Member 'DBDTextManager_GetLargeTextEnabled::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetChallengeTrackerSkinData
// 0x0060 (0x0060 - 0x0000)
struct UIDataManager_GetChallengeTrackerSkinData final
{
public:
	EChallengeSetType                             ChallengeSetType;                                  // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChallengeTrackerSkinData              ReturnValue;                                       // 0x0008(0x0058)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetChallengeTrackerSkinData) == 0x000008, "Wrong alignment on UIDataManager_GetChallengeTrackerSkinData");
static_assert(sizeof(UIDataManager_GetChallengeTrackerSkinData) == 0x000060, "Wrong size on UIDataManager_GetChallengeTrackerSkinData");
static_assert(offsetof(UIDataManager_GetChallengeTrackerSkinData, ChallengeSetType) == 0x000000, "Member 'UIDataManager_GetChallengeTrackerSkinData::ChallengeSetType' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetChallengeTrackerSkinData, ReturnValue) == 0x000008, "Member 'UIDataManager_GetChallengeTrackerSkinData::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetAlertRewardEventBackground
// 0x0018 (0x0018 - 0x0000)
struct UIDataManager_GetAlertRewardEventBackground final
{
public:
	class FString                                 EventThemeLabel;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetAlertRewardEventBackground) == 0x000008, "Wrong alignment on UIDataManager_GetAlertRewardEventBackground");
static_assert(sizeof(UIDataManager_GetAlertRewardEventBackground) == 0x000018, "Wrong size on UIDataManager_GetAlertRewardEventBackground");
static_assert(offsetof(UIDataManager_GetAlertRewardEventBackground, EventThemeLabel) == 0x000000, "Member 'UIDataManager_GetAlertRewardEventBackground::EventThemeLabel' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetAlertRewardEventBackground, ReturnValue) == 0x000010, "Member 'UIDataManager_GetAlertRewardEventBackground::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetCurrencyIcon
// 0x0040 (0x0040 - 0x0000)
struct UIDataManager_GetCurrencyIcon final
{
public:
	ECurrencyType                                 CurrencyType;                                      // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              ReturnValue;                                       // 0x0008(0x0038)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetCurrencyIcon) == 0x000008, "Wrong alignment on UIDataManager_GetCurrencyIcon");
static_assert(sizeof(UIDataManager_GetCurrencyIcon) == 0x000040, "Wrong size on UIDataManager_GetCurrencyIcon");
static_assert(offsetof(UIDataManager_GetCurrencyIcon, CurrencyType) == 0x000000, "Member 'UIDataManager_GetCurrencyIcon::CurrencyType' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetCurrencyIcon, ReturnValue) == 0x000008, "Member 'UIDataManager_GetCurrencyIcon::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetCustomizationRarityMaterial
// 0x0010 (0x0010 - 0x0000)
struct UIDataManager_GetCustomizationRarityMaterial final
{
public:
	EItemRarity                                   Rarity;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetCustomizationRarityMaterial) == 0x000008, "Wrong alignment on UIDataManager_GetCustomizationRarityMaterial");
static_assert(sizeof(UIDataManager_GetCustomizationRarityMaterial) == 0x000010, "Wrong size on UIDataManager_GetCustomizationRarityMaterial");
static_assert(offsetof(UIDataManager_GetCustomizationRarityMaterial, Rarity) == 0x000000, "Member 'UIDataManager_GetCustomizationRarityMaterial::Rarity' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetCustomizationRarityMaterial, ReturnValue) == 0x000008, "Member 'UIDataManager_GetCustomizationRarityMaterial::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetLoadoutPartRarityMaterial
// 0x0010 (0x0010 - 0x0000)
struct UIDataManager_GetLoadoutPartRarityMaterial final
{
public:
	EItemRarity                                   Rarity;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetLoadoutPartRarityMaterial) == 0x000008, "Wrong alignment on UIDataManager_GetLoadoutPartRarityMaterial");
static_assert(sizeof(UIDataManager_GetLoadoutPartRarityMaterial) == 0x000010, "Wrong size on UIDataManager_GetLoadoutPartRarityMaterial");
static_assert(offsetof(UIDataManager_GetLoadoutPartRarityMaterial, Rarity) == 0x000000, "Member 'UIDataManager_GetLoadoutPartRarityMaterial::Rarity' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetLoadoutPartRarityMaterial, ReturnValue) == 0x000008, "Member 'UIDataManager_GetLoadoutPartRarityMaterial::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetLoadoutPartStatusEffectMaterial
// 0x0010 (0x0010 - 0x0000)
struct UIDataManager_GetLoadoutPartStatusEffectMaterial final
{
public:
	EStatusEffectType                             StatusEffect;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetLoadoutPartStatusEffectMaterial) == 0x000008, "Wrong alignment on UIDataManager_GetLoadoutPartStatusEffectMaterial");
static_assert(sizeof(UIDataManager_GetLoadoutPartStatusEffectMaterial) == 0x000010, "Wrong size on UIDataManager_GetLoadoutPartStatusEffectMaterial");
static_assert(offsetof(UIDataManager_GetLoadoutPartStatusEffectMaterial, StatusEffect) == 0x000000, "Member 'UIDataManager_GetLoadoutPartStatusEffectMaterial::StatusEffect' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetLoadoutPartStatusEffectMaterial, ReturnValue) == 0x000008, "Member 'UIDataManager_GetLoadoutPartStatusEffectMaterial::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetProgressionIcon
// 0x0040 (0x0040 - 0x0000)
struct UIDataManager_GetProgressionIcon final
{
public:
	EProgressionType                              ProgressionType;                                   // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              ReturnValue;                                       // 0x0008(0x0038)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetProgressionIcon) == 0x000008, "Wrong alignment on UIDataManager_GetProgressionIcon");
static_assert(sizeof(UIDataManager_GetProgressionIcon) == 0x000040, "Wrong size on UIDataManager_GetProgressionIcon");
static_assert(offsetof(UIDataManager_GetProgressionIcon, ProgressionType) == 0x000000, "Member 'UIDataManager_GetProgressionIcon::ProgressionType' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetProgressionIcon, ReturnValue) == 0x000008, "Member 'UIDataManager_GetProgressionIcon::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetRarityTint
// 0x0014 (0x0014 - 0x0000)
struct UIDataManager_GetRarityTint final
{
public:
	EItemRarity                                   Rarity;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ReturnValue;                                       // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetRarityTint) == 0x000004, "Wrong alignment on UIDataManager_GetRarityTint");
static_assert(sizeof(UIDataManager_GetRarityTint) == 0x000014, "Wrong size on UIDataManager_GetRarityTint");
static_assert(offsetof(UIDataManager_GetRarityTint, Rarity) == 0x000000, "Member 'UIDataManager_GetRarityTint::Rarity' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetRarityTint, ReturnValue) == 0x000004, "Member 'UIDataManager_GetRarityTint::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetTooltipEventHeader
// 0x0018 (0x0018 - 0x0000)
struct UIDataManager_GetTooltipEventHeader final
{
public:
	class FString                                 EventBannerLabel;                                  // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetTooltipEventHeader) == 0x000008, "Wrong alignment on UIDataManager_GetTooltipEventHeader");
static_assert(sizeof(UIDataManager_GetTooltipEventHeader) == 0x000018, "Wrong size on UIDataManager_GetTooltipEventHeader");
static_assert(offsetof(UIDataManager_GetTooltipEventHeader, EventBannerLabel) == 0x000000, "Member 'UIDataManager_GetTooltipEventHeader::EventBannerLabel' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetTooltipEventHeader, ReturnValue) == 0x000010, "Member 'UIDataManager_GetTooltipEventHeader::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIDataManager.GetTooltipRarityMaterial
// 0x0010 (0x0010 - 0x0000)
struct UIDataManager_GetTooltipRarityMaterial final
{
public:
	EItemRarity                                   Rarity;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIDataManager_GetTooltipRarityMaterial) == 0x000008, "Wrong alignment on UIDataManager_GetTooltipRarityMaterial");
static_assert(sizeof(UIDataManager_GetTooltipRarityMaterial) == 0x000010, "Wrong size on UIDataManager_GetTooltipRarityMaterial");
static_assert(offsetof(UIDataManager_GetTooltipRarityMaterial, Rarity) == 0x000000, "Member 'UIDataManager_GetTooltipRarityMaterial::Rarity' has a wrong offset!");
static_assert(offsetof(UIDataManager_GetTooltipRarityMaterial, ReturnValue) == 0x000008, "Member 'UIDataManager_GetTooltipRarityMaterial::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio
// 0x0001 (0x0001 - 0x0000)
struct UIScaleManager_GetDPIScaleCurveRatio final
{
public:
	EDPIScaleCurveRatio                           ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIScaleManager_GetDPIScaleCurveRatio) == 0x000001, "Wrong alignment on UIScaleManager_GetDPIScaleCurveRatio");
static_assert(sizeof(UIScaleManager_GetDPIScaleCurveRatio) == 0x000001, "Wrong size on UIScaleManager_GetDPIScaleCurveRatio");
static_assert(offsetof(UIScaleManager_GetDPIScaleCurveRatio, ReturnValue) == 0x000000, "Member 'UIScaleManager_GetDPIScaleCurveRatio::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIScaleManager.GetHudScaleFactor
// 0x0004 (0x0004 - 0x0000)
struct UIScaleManager_GetHudScaleFactor final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIScaleManager_GetHudScaleFactor) == 0x000004, "Wrong alignment on UIScaleManager_GetHudScaleFactor");
static_assert(sizeof(UIScaleManager_GetHudScaleFactor) == 0x000004, "Wrong size on UIScaleManager_GetHudScaleFactor");
static_assert(offsetof(UIScaleManager_GetHudScaleFactor, ReturnValue) == 0x000000, "Member 'UIScaleManager_GetHudScaleFactor::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIScaleManager.GetMenuScaleFactor
// 0x0004 (0x0004 - 0x0000)
struct UIScaleManager_GetMenuScaleFactor final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIScaleManager_GetMenuScaleFactor) == 0x000004, "Wrong alignment on UIScaleManager_GetMenuScaleFactor");
static_assert(sizeof(UIScaleManager_GetMenuScaleFactor) == 0x000004, "Wrong size on UIScaleManager_GetMenuScaleFactor");
static_assert(offsetof(UIScaleManager_GetMenuScaleFactor, ReturnValue) == 0x000000, "Member 'UIScaleManager_GetMenuScaleFactor::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIScaleManager.GetScaleFactor
// 0x0008 (0x0008 - 0x0000)
struct UIScaleManager_GetScaleFactor final
{
public:
	EScaleType                                    Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIScaleManager_GetScaleFactor) == 0x000004, "Wrong alignment on UIScaleManager_GetScaleFactor");
static_assert(sizeof(UIScaleManager_GetScaleFactor) == 0x000008, "Wrong size on UIScaleManager_GetScaleFactor");
static_assert(offsetof(UIScaleManager_GetScaleFactor, Type) == 0x000000, "Member 'UIScaleManager_GetScaleFactor::Type' has a wrong offset!");
static_assert(offsetof(UIScaleManager_GetScaleFactor, ReturnValue) == 0x000004, "Member 'UIScaleManager_GetScaleFactor::ReturnValue' has a wrong offset!");

// Function DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor
// 0x0004 (0x0004 - 0x0000)
struct UIScaleManager_GetSkillCheckScaleFactor final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIScaleManager_GetSkillCheckScaleFactor) == 0x000004, "Wrong alignment on UIScaleManager_GetSkillCheckScaleFactor");
static_assert(sizeof(UIScaleManager_GetSkillCheckScaleFactor) == 0x000004, "Wrong size on UIScaleManager_GetSkillCheckScaleFactor");
static_assert(offsetof(UIScaleManager_GetSkillCheckScaleFactor, ReturnValue) == 0x000000, "Member 'UIScaleManager_GetSkillCheckScaleFactor::ReturnValue' has a wrong offset!");

}

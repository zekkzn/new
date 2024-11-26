#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerLevelTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CorePlayerLevelTooltip.WBP_CorePlayerLevelTooltip_C
// 0x0058 (0x03C8 - 0x0370)
class UWBP_CorePlayerLevelTooltip_C final : public UCorePlayerLevelTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              LevelProgressFill;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          PlayerLevelTB;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PrestigeContainer;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          PrestigeTB;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              TitleBgIMG;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          XPCurrentTB;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          XPMaxTB;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          XPNextInTB;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Current_XP;                                        // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BC[0x4];                                      // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               XpGaugeMaterial;                                   // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CorePlayerLevelTooltip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetTooltipData(const struct FCorePlayerLevelTooltipViewData& ViewData);
	void SetViewData(const struct FCorePlayerLevelTooltipViewData& CorePlayerLevelTooltipViewData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CorePlayerLevelTooltip_C">();
	}
	static class UWBP_CorePlayerLevelTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CorePlayerLevelTooltip_C>();
	}
};
static_assert(alignof(UWBP_CorePlayerLevelTooltip_C) == 0x000008, "Wrong alignment on UWBP_CorePlayerLevelTooltip_C");
static_assert(sizeof(UWBP_CorePlayerLevelTooltip_C) == 0x0003C8, "Wrong size on UWBP_CorePlayerLevelTooltip_C");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, UberGraphFrame) == 0x000370, "Member 'UWBP_CorePlayerLevelTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, LevelProgressFill) == 0x000378, "Member 'UWBP_CorePlayerLevelTooltip_C::LevelProgressFill' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, PlayerLevelTB) == 0x000380, "Member 'UWBP_CorePlayerLevelTooltip_C::PlayerLevelTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, PrestigeContainer) == 0x000388, "Member 'UWBP_CorePlayerLevelTooltip_C::PrestigeContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, PrestigeTB) == 0x000390, "Member 'UWBP_CorePlayerLevelTooltip_C::PrestigeTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, TitleBgIMG) == 0x000398, "Member 'UWBP_CorePlayerLevelTooltip_C::TitleBgIMG' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, XPCurrentTB) == 0x0003A0, "Member 'UWBP_CorePlayerLevelTooltip_C::XPCurrentTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, XPMaxTB) == 0x0003A8, "Member 'UWBP_CorePlayerLevelTooltip_C::XPMaxTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, XPNextInTB) == 0x0003B0, "Member 'UWBP_CorePlayerLevelTooltip_C::XPNextInTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, Current_XP) == 0x0003B8, "Member 'UWBP_CorePlayerLevelTooltip_C::Current_XP' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerLevelTooltip_C, XpGaugeMaterial) == 0x0003C0, "Member 'UWBP_CorePlayerLevelTooltip_C::XpGaugeMaterial' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileMenuStatsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C
// 0x0058 (0x03E8 - 0x0390)
class UWBP_ProfileMenuStatsWidget_C final : public UProfileMenuStatsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              Fog_background;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerRankWrapper_C*           KillerRank;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              LineHorizontal;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              LineVertical;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDRichTextBlock*                      PlayerLevelDescriptionRTB;                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          PlayerLevelTB;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDRichTextBlock*                      RankDescriptionRTB;                                // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerRankWrapper_C*           SurvivorRank;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerLevel_C*                 WBP_CorePlayerLevel;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerLevelExpGauge_C*         WBP_CorePlayerLevelExpGauge;                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ProfileMenuStatsWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetPlayerLevel(const struct FPlayerLevelViewData& ViewData);
	void SetPlayerRanks(const struct FRankViewData& SurvivorViewData, const struct FRankViewData& KillerViewData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ProfileMenuStatsWidget_C">();
	}
	static class UWBP_ProfileMenuStatsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ProfileMenuStatsWidget_C>();
	}
};
static_assert(alignof(UWBP_ProfileMenuStatsWidget_C) == 0x000008, "Wrong alignment on UWBP_ProfileMenuStatsWidget_C");
static_assert(sizeof(UWBP_ProfileMenuStatsWidget_C) == 0x0003E8, "Wrong size on UWBP_ProfileMenuStatsWidget_C");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, UberGraphFrame) == 0x000390, "Member 'UWBP_ProfileMenuStatsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, Fog_background) == 0x000398, "Member 'UWBP_ProfileMenuStatsWidget_C::Fog_background' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, KillerRank) == 0x0003A0, "Member 'UWBP_ProfileMenuStatsWidget_C::KillerRank' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, LineHorizontal) == 0x0003A8, "Member 'UWBP_ProfileMenuStatsWidget_C::LineHorizontal' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, LineVertical) == 0x0003B0, "Member 'UWBP_ProfileMenuStatsWidget_C::LineVertical' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, PlayerLevelDescriptionRTB) == 0x0003B8, "Member 'UWBP_ProfileMenuStatsWidget_C::PlayerLevelDescriptionRTB' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, PlayerLevelTB) == 0x0003C0, "Member 'UWBP_ProfileMenuStatsWidget_C::PlayerLevelTB' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, RankDescriptionRTB) == 0x0003C8, "Member 'UWBP_ProfileMenuStatsWidget_C::RankDescriptionRTB' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, SurvivorRank) == 0x0003D0, "Member 'UWBP_ProfileMenuStatsWidget_C::SurvivorRank' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, WBP_CorePlayerLevel) == 0x0003D8, "Member 'UWBP_ProfileMenuStatsWidget_C::WBP_CorePlayerLevel' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuStatsWidget_C, WBP_CorePlayerLevelExpGauge) == 0x0003E0, "Member 'UWBP_ProfileMenuStatsWidget_C::WBP_CorePlayerLevelExpGauge' has a wrong offset!");

}

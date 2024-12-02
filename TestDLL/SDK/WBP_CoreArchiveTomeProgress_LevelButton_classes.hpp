#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreArchiveTomeProgress_LevelButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C
// 0x0138 (0x0638 - 0x0500)
class UWBP_CoreArchiveTomeProgress_LevelButton_C final : public UCoreStoryLevelButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Highlighted;                                       // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Unlocked;                                          // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BackgroundSwitcher;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Bkg_Completed;                                     // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Bkg_Default;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Bkg_Mastered;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Border_Completed;                                  // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Border_Default;                                    // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Border_Mastered;                                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Border_Unavailable;                                // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BorderSwitcher;                                    // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BottomLeft;                                        // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BottomRight;                                       // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Diamond;                                           // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Divider_Completed;                                 // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Divider_Default;                                   // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Divider_Mastered;                                  // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Divider_Unavailable;                               // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DividerSwitcher;                                   // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Hover;                                             // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Indicator_Completed;                               // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Indicator_Locked;                                  // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Indicator_Unavailable;                             // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IndicatorSwitcher;                                 // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Roman1;                                            // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Roman2;                                            // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Roman3;                                            // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Roman4;                                            // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Roman5;                                            // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Roman6;                                            // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RomanNumberSwitcher;                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SelectedContainer;                                 // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Sheen;                                             // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              TopLeft;                                           // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              TopRight;                                          // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CachedLevel;                                       // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EArchivesStoryLevelStatus                     CachedStatus;                                      // 0x062C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedNewlyUnlocked;                               // 0x062D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasBeenHighlighted;                                // 0x062E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62F[0x1];                                      // 0x062F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UArchiveStoryLevelViewData*             View_Data;                                         // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateVisualStatus(EArchivesStoryLevelStatus NewStatus, bool NewlyUnlocked);
	void UpdateVisual(const class UArchiveStoryLevelViewData* ViewData, bool NewlyUnlocked);
	void UpdateStatus();
	void UpdateRomanLevel();
	void UpdateDividerVisibility();
	void TriggerNewlyUnlockedEffect();
	void SwitchSwitcher(int32 Param_Index, class UWidgetSwitcher* Switcher);
	void SwitchIndicator(int32 Param_Index);
	void SwitchDivider(int32 Param_Index);
	void SwitchBorder(int32 Param_Index);
	void SwitchBackground(int32 Param_Index);
	void PlayStatusAnimation();
	void OnUnhovered();
	void OnSelectedChanged(bool Param_IsSelected, bool WithAnimation);
	void OnHovered();
	void OnClicked();
	void Finished_3189EDB64C798B60FCDE528131E81AE0();
	void ExecuteUbergraph_WBP_CoreArchiveTomeProgress_LevelButton(int32 EntryPoint);
	void ColorActiveRomanNumber(const struct FSlateColor& Tint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreArchiveTomeProgress_LevelButton_C">();
	}
	static class UWBP_CoreArchiveTomeProgress_LevelButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreArchiveTomeProgress_LevelButton_C>();
	}
};
static_assert(alignof(UWBP_CoreArchiveTomeProgress_LevelButton_C) == 0x000008, "Wrong alignment on UWBP_CoreArchiveTomeProgress_LevelButton_C");
static_assert(sizeof(UWBP_CoreArchiveTomeProgress_LevelButton_C) == 0x000638, "Wrong size on UWBP_CoreArchiveTomeProgress_LevelButton_C");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, UberGraphFrame) == 0x000500, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Highlighted) == 0x000508, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Highlighted' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Unlocked) == 0x000510, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Unlocked' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Hovered) == 0x000518, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, BackgroundSwitcher) == 0x000520, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::BackgroundSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Bkg_Completed) == 0x000528, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Bkg_Completed' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Bkg_Default) == 0x000530, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Bkg_Default' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Bkg_Mastered) == 0x000538, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Bkg_Mastered' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Border_Completed) == 0x000540, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Border_Completed' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Border_Default) == 0x000548, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Border_Default' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Border_Mastered) == 0x000550, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Border_Mastered' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Border_Unavailable) == 0x000558, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Border_Unavailable' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, BorderSwitcher) == 0x000560, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::BorderSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, BottomLeft) == 0x000568, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::BottomLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, BottomRight) == 0x000570, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::BottomRight' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Diamond) == 0x000578, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Diamond' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Divider_Completed) == 0x000580, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Divider_Completed' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Divider_Default) == 0x000588, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Divider_Default' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Divider_Mastered) == 0x000590, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Divider_Mastered' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Divider_Unavailable) == 0x000598, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Divider_Unavailable' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, DividerSwitcher) == 0x0005A0, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::DividerSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Hover) == 0x0005A8, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Indicator_Completed) == 0x0005B0, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Indicator_Completed' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Indicator_Locked) == 0x0005B8, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Indicator_Locked' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Indicator_Unavailable) == 0x0005C0, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Indicator_Unavailable' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, IndicatorSwitcher) == 0x0005C8, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::IndicatorSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Roman1) == 0x0005D0, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Roman1' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Roman2) == 0x0005D8, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Roman2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Roman3) == 0x0005E0, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Roman3' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Roman4) == 0x0005E8, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Roman4' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Roman5) == 0x0005F0, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Roman5' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Roman6) == 0x0005F8, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Roman6' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, RomanNumberSwitcher) == 0x000600, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::RomanNumberSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, SelectedContainer) == 0x000608, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::SelectedContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, Sheen) == 0x000610, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::Sheen' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, TopLeft) == 0x000618, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::TopLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, TopRight) == 0x000620, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::TopRight' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, CachedLevel) == 0x000628, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::CachedLevel' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, CachedStatus) == 0x00062C, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::CachedStatus' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, CachedNewlyUnlocked) == 0x00062D, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::CachedNewlyUnlocked' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, HasBeenHighlighted) == 0x00062E, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::HasBeenHighlighted' has a wrong offset!");
static_assert(offsetof(UWBP_CoreArchiveTomeProgress_LevelButton_C, View_Data) == 0x000630, "Member 'UWBP_CoreArchiveTomeProgress_LevelButton_C::View_Data' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileMenuCustomizationWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ProfileMenuCustomizationWidget.WBP_ProfileMenuCustomizationWidget_C
// 0x0050 (0x0468 - 0x0418)
class UWBP_ProfileMenuCustomizationWidget_C final : public UProfileMenuCustomizationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               ContainerSize;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              DefaultTextBG;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NoCustomizationEquippedContainer;                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          NoCustomizationEquippedTB;                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            TintColor;                                         // 0x0440(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BadgeContainerSize;                                // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BannerContainerSize;                               // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ProfileMenuCustomizationWidget(int32 EntryPoint);
	void SetPreviewAreaData(const struct FCustomizationItemPreviewAreaViewData& ViewData, const bool NoCustomizationEquipped);
	void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ProfileMenuCustomizationWidget_C">();
	}
	static class UWBP_ProfileMenuCustomizationWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ProfileMenuCustomizationWidget_C>();
	}
};
static_assert(alignof(UWBP_ProfileMenuCustomizationWidget_C) == 0x000008, "Wrong alignment on UWBP_ProfileMenuCustomizationWidget_C");
static_assert(sizeof(UWBP_ProfileMenuCustomizationWidget_C) == 0x000468, "Wrong size on UWBP_ProfileMenuCustomizationWidget_C");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, UberGraphFrame) == 0x000418, "Member 'UWBP_ProfileMenuCustomizationWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, ContainerSize) == 0x000420, "Member 'UWBP_ProfileMenuCustomizationWidget_C::ContainerSize' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, DefaultTextBG) == 0x000428, "Member 'UWBP_ProfileMenuCustomizationWidget_C::DefaultTextBG' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, NoCustomizationEquippedContainer) == 0x000430, "Member 'UWBP_ProfileMenuCustomizationWidget_C::NoCustomizationEquippedContainer' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, NoCustomizationEquippedTB) == 0x000438, "Member 'UWBP_ProfileMenuCustomizationWidget_C::NoCustomizationEquippedTB' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, TintColor) == 0x000440, "Member 'UWBP_ProfileMenuCustomizationWidget_C::TintColor' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, BadgeContainerSize) == 0x000458, "Member 'UWBP_ProfileMenuCustomizationWidget_C::BadgeContainerSize' has a wrong offset!");
static_assert(offsetof(UWBP_ProfileMenuCustomizationWidget_C, BannerContainerSize) == 0x000460, "Member 'UWBP_ProfileMenuCustomizationWidget_C::BannerContainerSize' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreEquippedItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreEquippedItem.WBP_CoreEquippedItem_C
// 0x0058 (0x03A8 - 0x0350)
class UWBP_CoreEquippedItem_C final : public UCoreEquippedItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DEBUG_NEW_ANIM;                                    // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FakeItemAnim;                                      // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              FakeItemBG;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              FakeItemIcon;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreInputPrompt_C*                 FakeItempInputPrompt;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreItemBundle_C*                  ItemBundle;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              LayoutIconScale;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Separator;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          TextStackCount;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WasHoldingFakeItem;                                // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateFakeItemVisuals(TSoftObjectPtr<class UTexture2D> Param_FakeItemIcon, const struct FKey& InputKey, int32 Count);
	void OnControlModeChangedBP(EControlMode ControlMode);
	void UpdateControlMode(EControlMode NewControlMode);
	void ExecuteUbergraph_WBP_CoreEquippedItem(int32 EntryPoint);
	void SetFakeItem(bool IsHoldingFakeItem, const TSoftObjectPtr<class UTexture2D>& Param_FakeItemIcon, const struct FKey& InputKey, int32 Count);
	void SetData(const struct FItemBundleViewData& ItemBundleData);
	void SetActiveState(bool IsActive);
	void PlayFakeItemAnimation(bool IsHoldingFakeItem);
	void ClearData(bool FullClear);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreEquippedItem_C">();
	}
	static class UWBP_CoreEquippedItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreEquippedItem_C>();
	}
};
static_assert(alignof(UWBP_CoreEquippedItem_C) == 0x000008, "Wrong alignment on UWBP_CoreEquippedItem_C");
static_assert(sizeof(UWBP_CoreEquippedItem_C) == 0x0003A8, "Wrong size on UWBP_CoreEquippedItem_C");
static_assert(offsetof(UWBP_CoreEquippedItem_C, UberGraphFrame) == 0x000350, "Member 'UWBP_CoreEquippedItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, DEBUG_NEW_ANIM) == 0x000358, "Member 'UWBP_CoreEquippedItem_C::DEBUG_NEW_ANIM' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, FakeItemAnim) == 0x000360, "Member 'UWBP_CoreEquippedItem_C::FakeItemAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, FakeItemBG) == 0x000368, "Member 'UWBP_CoreEquippedItem_C::FakeItemBG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, FakeItemIcon) == 0x000370, "Member 'UWBP_CoreEquippedItem_C::FakeItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, FakeItempInputPrompt) == 0x000378, "Member 'UWBP_CoreEquippedItem_C::FakeItempInputPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, ItemBundle) == 0x000380, "Member 'UWBP_CoreEquippedItem_C::ItemBundle' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, LayoutIconScale) == 0x000388, "Member 'UWBP_CoreEquippedItem_C::LayoutIconScale' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, Separator) == 0x000390, "Member 'UWBP_CoreEquippedItem_C::Separator' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, TextStackCount) == 0x000398, "Member 'UWBP_CoreEquippedItem_C::TextStackCount' has a wrong offset!");
static_assert(offsetof(UWBP_CoreEquippedItem_C, WasHoldingFakeItem) == 0x0003A0, "Member 'UWBP_CoreEquippedItem_C::WasHoldingFakeItem' has a wrong offset!");

}

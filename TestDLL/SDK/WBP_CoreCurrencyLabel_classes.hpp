#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCurrencyLabel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C
// 0x0070 (0x0510 - 0x04A0)
class UWBP_CoreCurrencyLabel_C final : public UCoreCurrencyLabelWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UpdateCurrencyAnimation;                           // 0x04A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x04B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BonusAnimation;                                    // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               BonusAnimationContainer;                           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BuyShortcutIMG;                                    // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              CurrencyIMG;                                       // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          RemovedLabelTB;                                    // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TestInt;                                           // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            DefaultTextColor;                                  // 0x04E4(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NegativeTextColor;                                 // 0x04F8(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnHovered();
	void ExecuteUbergraph_WBP_CoreCurrencyLabel(int32 EntryPoint);
	void UpdateCurrency(int32 NewBalance, int32 PreviousBalance);
	void Destruct();
	void SetData(const struct FCurrencyLabelViewData& ViewData);
	void Construct();
	void OnUnhovered();
	void CheckNegativeValue(int32 Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreCurrencyLabel_C">();
	}
	static class UWBP_CoreCurrencyLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreCurrencyLabel_C>();
	}
};
static_assert(alignof(UWBP_CoreCurrencyLabel_C) == 0x000008, "Wrong alignment on UWBP_CoreCurrencyLabel_C");
static_assert(sizeof(UWBP_CoreCurrencyLabel_C) == 0x000510, "Wrong size on UWBP_CoreCurrencyLabel_C");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, UberGraphFrame) == 0x0004A0, "Member 'UWBP_CoreCurrencyLabel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, UpdateCurrencyAnimation) == 0x0004A8, "Member 'UWBP_CoreCurrencyLabel_C::UpdateCurrencyAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, Hover) == 0x0004B0, "Member 'UWBP_CoreCurrencyLabel_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, BonusAnimation) == 0x0004B8, "Member 'UWBP_CoreCurrencyLabel_C::BonusAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, BonusAnimationContainer) == 0x0004C0, "Member 'UWBP_CoreCurrencyLabel_C::BonusAnimationContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, BuyShortcutIMG) == 0x0004C8, "Member 'UWBP_CoreCurrencyLabel_C::BuyShortcutIMG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, CurrencyIMG) == 0x0004D0, "Member 'UWBP_CoreCurrencyLabel_C::CurrencyIMG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, RemovedLabelTB) == 0x0004D8, "Member 'UWBP_CoreCurrencyLabel_C::RemovedLabelTB' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, TestInt) == 0x0004E0, "Member 'UWBP_CoreCurrencyLabel_C::TestInt' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, DefaultTextColor) == 0x0004E4, "Member 'UWBP_CoreCurrencyLabel_C::DefaultTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyLabel_C, NegativeTextColor) == 0x0004F8, "Member 'UWBP_CoreCurrencyLabel_C::NegativeTextColor' has a wrong offset!");

}


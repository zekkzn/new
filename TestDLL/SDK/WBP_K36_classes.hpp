#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K36

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K36.WBP_K36_C
// 0x0040 (0x0378 - 0x0338)
class UWBP_K36_C final : public UCorePlayerStatusKillerEffectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_K36_ItemSlot_C*                    Boots;                                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_K36_ItemSlot_C*                    Bracers;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Gauge;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_K36_ItemSlot_C*                    VecnaEye;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_K36_ItemSlot_C*                    VecnaHand;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     SpellIcons;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetVecnaItem(class UWBP_K36_ItemSlot_C* ItemSlotWidget, bool HasVecnaItem, bool IsActive, class UTexture2D* SlotIcon);
	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void SetK36Data(class UK36StatusData* ViewData, bool IsLocalKiller);
	void SetItem(class UWBP_K36_ItemSlot_C* ItemSlotWidget, bool IsKiller, bool HasItem, bool IsDetected, int32 SpellID, class UTexture2D* SlotIcon, class UTexture2D* SpellIcon, bool ShouldKillerSeeCounterSpell);
	void SetGauge(double Progress);
	void ExecuteUbergraph_WBP_K36(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K36_C">();
	}
	static class UWBP_K36_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K36_C>();
	}
};
static_assert(alignof(UWBP_K36_C) == 0x000008, "Wrong alignment on UWBP_K36_C");
static_assert(sizeof(UWBP_K36_C) == 0x000378, "Wrong size on UWBP_K36_C");
static_assert(offsetof(UWBP_K36_C, UberGraphFrame) == 0x000338, "Member 'UWBP_K36_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_K36_C, Boots) == 0x000340, "Member 'UWBP_K36_C::Boots' has a wrong offset!");
static_assert(offsetof(UWBP_K36_C, Bracers) == 0x000348, "Member 'UWBP_K36_C::Bracers' has a wrong offset!");
static_assert(offsetof(UWBP_K36_C, Gauge) == 0x000350, "Member 'UWBP_K36_C::Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_K36_C, VecnaEye) == 0x000358, "Member 'UWBP_K36_C::VecnaEye' has a wrong offset!");
static_assert(offsetof(UWBP_K36_C, VecnaHand) == 0x000360, "Member 'UWBP_K36_C::VecnaHand' has a wrong offset!");
static_assert(offsetof(UWBP_K36_C, SpellIcons) == 0x000368, "Member 'UWBP_K36_C::SpellIcons' has a wrong offset!");

}

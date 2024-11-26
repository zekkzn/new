#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Objectives_Hatch

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Objectives_Hatch.WBP_Objectives_Hatch_C
// 0x0018 (0x02C0 - 0x02A8)
class UWBP_Objectives_Hatch_C final : public UUserWidget
{
public:
	class UDBDImage*                              HatchIcon;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Highlight;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TutorialHighlight_C*               WBP_TutorialHighlight;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Objectives_Hatch_C">();
	}
	static class UWBP_Objectives_Hatch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Objectives_Hatch_C>();
	}
};
static_assert(alignof(UWBP_Objectives_Hatch_C) == 0x000008, "Wrong alignment on UWBP_Objectives_Hatch_C");
static_assert(sizeof(UWBP_Objectives_Hatch_C) == 0x0002C0, "Wrong size on UWBP_Objectives_Hatch_C");
static_assert(offsetof(UWBP_Objectives_Hatch_C, HatchIcon) == 0x0002A8, "Member 'UWBP_Objectives_Hatch_C::HatchIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_Hatch_C, Highlight) == 0x0002B0, "Member 'UWBP_Objectives_Hatch_C::Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_Hatch_C, WBP_TutorialHighlight) == 0x0002B8, "Member 'UWBP_Objectives_Hatch_C::WBP_TutorialHighlight' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DailyRitualsContainerWidget

#include "Basic.hpp"

#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DailyRitualsContainerWidget.WBP_DailyRitualsContainerWidget_C
// 0x0018 (0x03E0 - 0x03C8)
class UWBP_DailyRitualsContainerWidget_C final : public UDailyRitualsContainerWidget
{
public:
	class UWBP_DailyRitualTileWidget_C*           WBP_DailyRitualTileWidget;                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DailyRitualTileWidget_C*           WBP_DailyRitualTileWidget_1;                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DailyRitualTileWidget_C*           WBP_DailyRitualTileWidget_2;                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DailyRitualsContainerWidget_C">();
	}
	static class UWBP_DailyRitualsContainerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DailyRitualsContainerWidget_C>();
	}
};
static_assert(alignof(UWBP_DailyRitualsContainerWidget_C) == 0x000008, "Wrong alignment on UWBP_DailyRitualsContainerWidget_C");
static_assert(sizeof(UWBP_DailyRitualsContainerWidget_C) == 0x0003E0, "Wrong size on UWBP_DailyRitualsContainerWidget_C");
static_assert(offsetof(UWBP_DailyRitualsContainerWidget_C, WBP_DailyRitualTileWidget) == 0x0003C8, "Member 'UWBP_DailyRitualsContainerWidget_C::WBP_DailyRitualTileWidget' has a wrong offset!");
static_assert(offsetof(UWBP_DailyRitualsContainerWidget_C, WBP_DailyRitualTileWidget_1) == 0x0003D0, "Member 'UWBP_DailyRitualsContainerWidget_C::WBP_DailyRitualTileWidget_1' has a wrong offset!");
static_assert(offsetof(UWBP_DailyRitualsContainerWidget_C, WBP_DailyRitualTileWidget_2) == 0x0003D8, "Member 'UWBP_DailyRitualsContainerWidget_C::WBP_DailyRitualTileWidget_2' has a wrong offset!");

}

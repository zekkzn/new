#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DailyRitualTileRemoveButtonWidget

#include "Basic.hpp"

#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DailyRitualTileRemoveButtonWidget.WBP_DailyRitualTileRemoveButtonWidget_C
// 0x0008 (0x04A8 - 0x04A0)
class UWBP_DailyRitualTileRemoveButtonWidget_C final : public UCoreButtonWidget
{
public:
	class UDBDImage*                              Icon;                                              // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DailyRitualTileRemoveButtonWidget_C">();
	}
	static class UWBP_DailyRitualTileRemoveButtonWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DailyRitualTileRemoveButtonWidget_C>();
	}
};
static_assert(alignof(UWBP_DailyRitualTileRemoveButtonWidget_C) == 0x000008, "Wrong alignment on UWBP_DailyRitualTileRemoveButtonWidget_C");
static_assert(sizeof(UWBP_DailyRitualTileRemoveButtonWidget_C) == 0x0004A8, "Wrong size on UWBP_DailyRitualTileRemoveButtonWidget_C");
static_assert(offsetof(UWBP_DailyRitualTileRemoveButtonWidget_C, Icon) == 0x0004A0, "Member 'UWBP_DailyRitualTileRemoveButtonWidget_C::Icon' has a wrong offset!");

}


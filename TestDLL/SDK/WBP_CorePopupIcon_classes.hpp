#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePopupIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CorePopupIcon.WBP_CorePopupIcon_C
// 0x0008 (0x02B0 - 0x02A8)
class UWBP_CorePopupIcon_C final : public UUserWidget
{
public:
	class UDBDImage*                              IconImage;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CorePopupIcon_C">();
	}
	static class UWBP_CorePopupIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CorePopupIcon_C>();
	}
};
static_assert(alignof(UWBP_CorePopupIcon_C) == 0x000008, "Wrong alignment on UWBP_CorePopupIcon_C");
static_assert(sizeof(UWBP_CorePopupIcon_C) == 0x0002B0, "Wrong size on UWBP_CorePopupIcon_C");
static_assert(offsetof(UWBP_CorePopupIcon_C, IconImage) == 0x0002A8, "Member 'UWBP_CorePopupIcon_C::IconImage' has a wrong offset!");

}

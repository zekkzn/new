#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HandCursor

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_HandCursor.BP_HandCursor_C
// 0x0008 (0x02B8 - 0x02B0)
class UBP_HandCursor_C final : public UCoreCursor
{
public:
	class UImage*                                 Image_10;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HandCursor_C">();
	}
	static class UBP_HandCursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HandCursor_C>();
	}
};
static_assert(alignof(UBP_HandCursor_C) == 0x000008, "Wrong alignment on UBP_HandCursor_C");
static_assert(sizeof(UBP_HandCursor_C) == 0x0002B8, "Wrong size on UBP_HandCursor_C");
static_assert(offsetof(UBP_HandCursor_C, Image_10) == 0x0002B0, "Member 'UBP_HandCursor_C::Image_10' has a wrong offset!");

}

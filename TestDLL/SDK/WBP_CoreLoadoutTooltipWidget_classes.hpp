#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreLoadoutTooltipWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreLoadoutTooltipWidget.WBP_CoreLoadoutTooltipWidget_C
// 0x0028 (0x03B0 - 0x0388)
class UWBP_CoreLoadoutTooltipWidget_C final : public ULoadoutTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              Bg;                                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         InstructionContainer;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              InstructionIcon;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SpecialEventContainer;                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CoreLoadoutTooltipWidget(int32 EntryPoint);
	void SetLoadoutTooltipLockedState();
	void SetLoadoutTooltipPerkLevel(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreLoadoutTooltipWidget_C">();
	}
	static class UWBP_CoreLoadoutTooltipWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreLoadoutTooltipWidget_C>();
	}
};
static_assert(alignof(UWBP_CoreLoadoutTooltipWidget_C) == 0x000008, "Wrong alignment on UWBP_CoreLoadoutTooltipWidget_C");
static_assert(sizeof(UWBP_CoreLoadoutTooltipWidget_C) == 0x0003B0, "Wrong size on UWBP_CoreLoadoutTooltipWidget_C");
static_assert(offsetof(UWBP_CoreLoadoutTooltipWidget_C, UberGraphFrame) == 0x000388, "Member 'UWBP_CoreLoadoutTooltipWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreLoadoutTooltipWidget_C, Bg) == 0x000390, "Member 'UWBP_CoreLoadoutTooltipWidget_C::Bg' has a wrong offset!");
static_assert(offsetof(UWBP_CoreLoadoutTooltipWidget_C, InstructionContainer) == 0x000398, "Member 'UWBP_CoreLoadoutTooltipWidget_C::InstructionContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreLoadoutTooltipWidget_C, InstructionIcon) == 0x0003A0, "Member 'UWBP_CoreLoadoutTooltipWidget_C::InstructionIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CoreLoadoutTooltipWidget_C, SpecialEventContainer) == 0x0003A8, "Member 'UWBP_CoreLoadoutTooltipWidget_C::SpecialEventContainer' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreAntiCampSelfUnhookMeter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreAntiCampSelfUnhookMeter.WBP_CoreAntiCampSelfUnhookMeter_C
// 0x0080 (0x03C8 - 0x0348)
class UWBP_CoreAntiCampSelfUnhookMeter_C final : public UCoreHudAntiCampSelfUnhookMeterWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       barFadeOutAnim;                                    // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barFadeInAnim;                                     // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barFullGlowAnim;                                   // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barStoppedAnim;                                    // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              BarBG;                                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BarGlow;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ProgressBar;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ProgressBarContainer;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ProgressBarMarker;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           DefaultLeftColor;                                  // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultRightColor;                                 // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FullColor;                                         // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetVisualState(const EAntiCampSelfUnhookMeterState NewState);
	void SetProgress(const float Progress);
	void SetIsFull();
	void Set_Marker_Position(double Progress);
	void Reset();
	void PreConstruct(bool IsDesignTime);
	void Finished_18B58D7D4EE358FC44EC139A48F433DF();
	void ExecuteUbergraph_WBP_CoreAntiCampSelfUnhookMeter(int32 EntryPoint);
	void Event_Play_Show_Animation(bool ShouldBeVisible);
	void Event_Play_Hide_Animation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreAntiCampSelfUnhookMeter_C">();
	}
	static class UWBP_CoreAntiCampSelfUnhookMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreAntiCampSelfUnhookMeter_C>();
	}
};
static_assert(alignof(UWBP_CoreAntiCampSelfUnhookMeter_C) == 0x000008, "Wrong alignment on UWBP_CoreAntiCampSelfUnhookMeter_C");
static_assert(sizeof(UWBP_CoreAntiCampSelfUnhookMeter_C) == 0x0003C8, "Wrong size on UWBP_CoreAntiCampSelfUnhookMeter_C");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, UberGraphFrame) == 0x000348, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, barFadeOutAnim) == 0x000350, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::barFadeOutAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, barFadeInAnim) == 0x000358, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::barFadeInAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, barFullGlowAnim) == 0x000360, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::barFullGlowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, barStoppedAnim) == 0x000368, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::barStoppedAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, BarBG) == 0x000370, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::BarBG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, BarGlow) == 0x000378, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::BarGlow' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, ProgressBar) == 0x000380, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, ProgressBarContainer) == 0x000388, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::ProgressBarContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, ProgressBarMarker) == 0x000390, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::ProgressBarMarker' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, DefaultLeftColor) == 0x000398, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::DefaultLeftColor' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, DefaultRightColor) == 0x0003A8, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::DefaultRightColor' has a wrong offset!");
static_assert(offsetof(UWBP_CoreAntiCampSelfUnhookMeter_C, FullColor) == 0x0003B8, "Member 'UWBP_CoreAntiCampSelfUnhookMeter_C::FullColor' has a wrong offset!");

}


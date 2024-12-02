#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DailyRitualTileWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C
// 0x0028 (0x0480 - 0x0458)
class UWBP_DailyRitualTileWidget_C final : public UDailyRitualTileWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SheenAnim;                                         // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              RewardIcon;                                        // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_DailyRitualTileWidget(int32 EntryPoint);
	void Finished_138C48CA45BF3996E8DAF7814D16D1ED();
	void Finished_97337F834CE4F10F60F9458FA83EBF61();
	void Finished_F2C6128D460D972B729F1FB6DE6530D6();
	void PlayFadeInAnimation();
	void PlayFadeOutAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DailyRitualTileWidget_C">();
	}
	static class UWBP_DailyRitualTileWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DailyRitualTileWidget_C>();
	}
};
static_assert(alignof(UWBP_DailyRitualTileWidget_C) == 0x000008, "Wrong alignment on UWBP_DailyRitualTileWidget_C");
static_assert(sizeof(UWBP_DailyRitualTileWidget_C) == 0x000480, "Wrong size on UWBP_DailyRitualTileWidget_C");
static_assert(offsetof(UWBP_DailyRitualTileWidget_C, UberGraphFrame) == 0x000458, "Member 'UWBP_DailyRitualTileWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DailyRitualTileWidget_C, SheenAnim) == 0x000460, "Member 'UWBP_DailyRitualTileWidget_C::SheenAnim' has a wrong offset!");
static_assert(offsetof(UWBP_DailyRitualTileWidget_C, FadeIn) == 0x000468, "Member 'UWBP_DailyRitualTileWidget_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_DailyRitualTileWidget_C, FadeOut) == 0x000470, "Member 'UWBP_DailyRitualTileWidget_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_DailyRitualTileWidget_C, RewardIcon) == 0x000478, "Member 'UWBP_DailyRitualTileWidget_C::RewardIcon' has a wrong offset!");

}


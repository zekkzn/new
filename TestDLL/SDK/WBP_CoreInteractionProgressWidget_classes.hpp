#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInteractionProgressWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "SlateCore_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreInteractionProgressWidget.WBP_CoreInteractionProgressWidget_C
// 0x09D8 (0x0D40 - 0x0368)
class UWBP_CoreInteractionProgressWidget_C final : public UCoreInteractionProgressWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EndRegression;                                     // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ProgressionBlockedAnim;                            // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HemorrhageAnim;                                    // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NormalPosition;                                    // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WigglePosition;                                    // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BGProgress;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ContainerCanvasPanel;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HemorrhageEffect;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           InteractProgressBar;                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemChargeGauge_C*                 ItemChargeGauge;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ItemImage;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreStatusEffects_Item_C*          Proficiency_01;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreStatusEffects_Item_C*          Proficiency_02;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreStatusEffects_Item_C*          Proficiency_03;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreStatusEffects_Item_C*          Proficiency_04;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreStatusEffects_Item_C*          Proficiency_05;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ProficiencyBox;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ProgressBarContainer;                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ProgressBarMarker;                                 // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TutorialHighlight_C*               ProgressHighlight;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          ProgressText;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RegressionMarkerContainer;                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          SecondaryMessageText;                              // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SparkFx;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            BG_ALPHAZERO;                                      // 0x0430(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EBarColor, class UTexture2D*>            FillTextures;                                      // 0x0500(0x0050)(Edit, BlueprintVisible)
	double                                        DimmedOpacity;                                     // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_558[0x8];                                      // 0x0558(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FProgressBarStyle                      ProgressBarDefault;                                // 0x0560(0x0290)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                      ProgressBarDebuff;                                 // 0x07F0(0x0290)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                      ProgressBarBuff;                                   // 0x0A80(0x0290)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             HandIcon;                                          // 0x0D10(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CachedPermanentProgress;                           // 0x0D18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             SelfUnhookHandIcon;                                // 0x0D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          StopDechargeReached;                               // 0x0D28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D29[0x7];                                      // 0x0D29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CachedRegressionProgress;                          // 0x0D30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateInputProgress(const float Progress, const float ItemCharge, bool IsBlocked, float PercentageStopDischarge);
	void Update_Progress(double Progress, double PercentageStopDischarge, double ChargeProgress, bool IsBlocked);
	void TriggerHemorrhageAnim(bool Play);
	void SetTutorialHighlight(const bool Show, const EHudComponent& ComponentId);
	void SetRegressionBar(double PercentageStopDecharge);
	void SetInputProgressPrompt(const struct FInteractionProgressViewData& Data);
	void SetData(const struct FInteractionProgressViewData& ViewData);
	void Set_Position(class FString& View_Data_Message);
	void SequenceEvent__ENTRYPOINTWBP_CoreInteractionProgressWidget();
	void PreConstruct(bool IsDesignTime);
	void PlayHemorrhageAnimation();
	void HideInputProgressPrompt();
	void HemorrhageAnimationComplete();
	void ExecuteUbergraph_WBP_CoreInteractionProgressWidget(int32 EntryPoint);
	void BuildProficiencyArray();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreInteractionProgressWidget_C">();
	}
	static class UWBP_CoreInteractionProgressWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreInteractionProgressWidget_C>();
	}
};
static_assert(alignof(UWBP_CoreInteractionProgressWidget_C) == 0x000010, "Wrong alignment on UWBP_CoreInteractionProgressWidget_C");
static_assert(sizeof(UWBP_CoreInteractionProgressWidget_C) == 0x000D40, "Wrong size on UWBP_CoreInteractionProgressWidget_C");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, UberGraphFrame) == 0x000368, "Member 'UWBP_CoreInteractionProgressWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, EndRegression) == 0x000370, "Member 'UWBP_CoreInteractionProgressWidget_C::EndRegression' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressionBlockedAnim) == 0x000378, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressionBlockedAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, HemorrhageAnim) == 0x000380, "Member 'UWBP_CoreInteractionProgressWidget_C::HemorrhageAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, NormalPosition) == 0x000388, "Member 'UWBP_CoreInteractionProgressWidget_C::NormalPosition' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, WigglePosition) == 0x000390, "Member 'UWBP_CoreInteractionProgressWidget_C::WigglePosition' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, BGProgress) == 0x000398, "Member 'UWBP_CoreInteractionProgressWidget_C::BGProgress' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ContainerCanvasPanel) == 0x0003A0, "Member 'UWBP_CoreInteractionProgressWidget_C::ContainerCanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, HemorrhageEffect) == 0x0003A8, "Member 'UWBP_CoreInteractionProgressWidget_C::HemorrhageEffect' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, InteractProgressBar) == 0x0003B0, "Member 'UWBP_CoreInteractionProgressWidget_C::InteractProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ItemChargeGauge) == 0x0003B8, "Member 'UWBP_CoreInteractionProgressWidget_C::ItemChargeGauge' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ItemImage) == 0x0003C0, "Member 'UWBP_CoreInteractionProgressWidget_C::ItemImage' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, Proficiency_01) == 0x0003C8, "Member 'UWBP_CoreInteractionProgressWidget_C::Proficiency_01' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, Proficiency_02) == 0x0003D0, "Member 'UWBP_CoreInteractionProgressWidget_C::Proficiency_02' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, Proficiency_03) == 0x0003D8, "Member 'UWBP_CoreInteractionProgressWidget_C::Proficiency_03' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, Proficiency_04) == 0x0003E0, "Member 'UWBP_CoreInteractionProgressWidget_C::Proficiency_04' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, Proficiency_05) == 0x0003E8, "Member 'UWBP_CoreInteractionProgressWidget_C::Proficiency_05' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProficiencyBox) == 0x0003F0, "Member 'UWBP_CoreInteractionProgressWidget_C::ProficiencyBox' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressBarContainer) == 0x0003F8, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressBarContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressBarMarker) == 0x000400, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressBarMarker' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressHighlight) == 0x000408, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressText) == 0x000410, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressText' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, RegressionMarkerContainer) == 0x000418, "Member 'UWBP_CoreInteractionProgressWidget_C::RegressionMarkerContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, SecondaryMessageText) == 0x000420, "Member 'UWBP_CoreInteractionProgressWidget_C::SecondaryMessageText' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, SparkFx) == 0x000428, "Member 'UWBP_CoreInteractionProgressWidget_C::SparkFx' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, BG_ALPHAZERO) == 0x000430, "Member 'UWBP_CoreInteractionProgressWidget_C::BG_ALPHAZERO' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, FillTextures) == 0x000500, "Member 'UWBP_CoreInteractionProgressWidget_C::FillTextures' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, DimmedOpacity) == 0x000550, "Member 'UWBP_CoreInteractionProgressWidget_C::DimmedOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressBarDefault) == 0x000560, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressBarDefault' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressBarDebuff) == 0x0007F0, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressBarDebuff' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, ProgressBarBuff) == 0x000A80, "Member 'UWBP_CoreInteractionProgressWidget_C::ProgressBarBuff' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, HandIcon) == 0x000D10, "Member 'UWBP_CoreInteractionProgressWidget_C::HandIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, CachedPermanentProgress) == 0x000D18, "Member 'UWBP_CoreInteractionProgressWidget_C::CachedPermanentProgress' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, SelfUnhookHandIcon) == 0x000D20, "Member 'UWBP_CoreInteractionProgressWidget_C::SelfUnhookHandIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, StopDechargeReached) == 0x000D28, "Member 'UWBP_CoreInteractionProgressWidget_C::StopDechargeReached' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInteractionProgressWidget_C, CachedRegressionProgress) == 0x000D30, "Member 'UWBP_CoreInteractionProgressWidget_C::CachedRegressionProgress' has a wrong offset!");

}


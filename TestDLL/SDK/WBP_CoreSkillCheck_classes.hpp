#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSkillCheck

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreSkillCheck.WBP_CoreSkillCheck_C
// 0x0130 (0x0470 - 0x0340)
class UWBP_CoreSkillCheck_C final : public UCoreSkillCheckWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       WiggleSuccessNormal;                               // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WiggleSuccessBonus;                                // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WiggleFail;                                        // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                DoubleInputSpacer;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreInputPrompt_C*                 InputPrompt;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreInputPrompt_C*                 InputPrompt2;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         InputPromptsContainer;                             // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               LeftPromptSB;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RightPromptSB;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SkillBG;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             SkillCheckContainer;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SkillCheckScaleBox;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SkillMarker;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SkillRing;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SkillRingBonus;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SkillRingSDFCap;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SkillRingSuccess;                                  // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        MarkerAngle;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RingRadius;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        bonusPercentf;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        bonusAnglePos;                                     // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SuccessPercentf;                                   // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SuccessAnglePos;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHexed;                                           // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CapHexedTexture;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CapNormalTexture;                                  // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             SuccessRingHexedTexture;                           // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             SuccessRingNormalTexture;                          // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             BonusRingHexedTexture;                             // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             BonusRingNormalTexture;                            // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             RingHexedTexture;                                  // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             RingNormalTexture;                                 // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 RingBonusNormal;                                   // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 RingBonusHexed;                                    // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MarkerNormalMaterial;                              // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MarkerHexedMaterial;                               // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        HideDelay;                                         // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInsane;                                          // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMirrored;                                        // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReversed;                                        // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateProgress(float Value);
	void UpdatePositionOffset(int32 X, int32 Y);
	void ShowSkillCheckSuccess(bool IsBonus);
	void ShowSkillCheckFail();
	void ShowSkillCheck(const struct FSkillCheckViewData& SkillCheckData);
	void SetWiggleSuccess(bool& IsGreatZone);
	void SetWiggleFail();
	void SetSkillCheckMaterialData(double Success_Start_Area, double Success_Length, double Bonus_Start_Area, double Bonus_Length, bool Is_Mirroed);
	void SetSkillCheckData(struct FSkillCheckViewData& SkillCheckViewData);
	void SetPosFromAngle(class UImage* ImageWidget, double Angle);
	void SetMaterialData(class UImage* Image, double& StartArea, double& Length, double& MirrorOpacity);
	void ReverseDirection();
	void ResetAnimationStates();
	void PreConstruct(bool IsDesignTime);
	void HideSkillCheck();
	void ExecuteUbergraph_WBP_CoreSkillCheck(int32 EntryPoint);
	void ApplyScaleFactor(float Scale);
	void ApplyHexStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreSkillCheck_C">();
	}
	static class UWBP_CoreSkillCheck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreSkillCheck_C>();
	}
};
static_assert(alignof(UWBP_CoreSkillCheck_C) == 0x000008, "Wrong alignment on UWBP_CoreSkillCheck_C");
static_assert(sizeof(UWBP_CoreSkillCheck_C) == 0x000470, "Wrong size on UWBP_CoreSkillCheck_C");
static_assert(offsetof(UWBP_CoreSkillCheck_C, UberGraphFrame) == 0x000340, "Member 'UWBP_CoreSkillCheck_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, WiggleSuccessNormal) == 0x000348, "Member 'UWBP_CoreSkillCheck_C::WiggleSuccessNormal' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, WiggleSuccessBonus) == 0x000350, "Member 'UWBP_CoreSkillCheck_C::WiggleSuccessBonus' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, WiggleFail) == 0x000358, "Member 'UWBP_CoreSkillCheck_C::WiggleFail' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, DoubleInputSpacer) == 0x000360, "Member 'UWBP_CoreSkillCheck_C::DoubleInputSpacer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, InputPrompt) == 0x000368, "Member 'UWBP_CoreSkillCheck_C::InputPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, InputPrompt2) == 0x000370, "Member 'UWBP_CoreSkillCheck_C::InputPrompt2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, InputPromptsContainer) == 0x000378, "Member 'UWBP_CoreSkillCheck_C::InputPromptsContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, LeftPromptSB) == 0x000380, "Member 'UWBP_CoreSkillCheck_C::LeftPromptSB' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, RightPromptSB) == 0x000388, "Member 'UWBP_CoreSkillCheck_C::RightPromptSB' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillBG) == 0x000390, "Member 'UWBP_CoreSkillCheck_C::SkillBG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillCheckContainer) == 0x000398, "Member 'UWBP_CoreSkillCheck_C::SkillCheckContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillCheckScaleBox) == 0x0003A0, "Member 'UWBP_CoreSkillCheck_C::SkillCheckScaleBox' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillMarker) == 0x0003A8, "Member 'UWBP_CoreSkillCheck_C::SkillMarker' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillRing) == 0x0003B0, "Member 'UWBP_CoreSkillCheck_C::SkillRing' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillRingBonus) == 0x0003B8, "Member 'UWBP_CoreSkillCheck_C::SkillRingBonus' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillRingSDFCap) == 0x0003C0, "Member 'UWBP_CoreSkillCheck_C::SkillRingSDFCap' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SkillRingSuccess) == 0x0003C8, "Member 'UWBP_CoreSkillCheck_C::SkillRingSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, MarkerAngle) == 0x0003D0, "Member 'UWBP_CoreSkillCheck_C::MarkerAngle' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, RingRadius) == 0x0003D8, "Member 'UWBP_CoreSkillCheck_C::RingRadius' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, bonusPercentf) == 0x0003E0, "Member 'UWBP_CoreSkillCheck_C::bonusPercentf' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, bonusAnglePos) == 0x0003E8, "Member 'UWBP_CoreSkillCheck_C::bonusAnglePos' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SuccessPercentf) == 0x0003F0, "Member 'UWBP_CoreSkillCheck_C::SuccessPercentf' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SuccessAnglePos) == 0x0003F8, "Member 'UWBP_CoreSkillCheck_C::SuccessAnglePos' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, IsHexed) == 0x000400, "Member 'UWBP_CoreSkillCheck_C::IsHexed' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, CapHexedTexture) == 0x000408, "Member 'UWBP_CoreSkillCheck_C::CapHexedTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, CapNormalTexture) == 0x000410, "Member 'UWBP_CoreSkillCheck_C::CapNormalTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SuccessRingHexedTexture) == 0x000418, "Member 'UWBP_CoreSkillCheck_C::SuccessRingHexedTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, SuccessRingNormalTexture) == 0x000420, "Member 'UWBP_CoreSkillCheck_C::SuccessRingNormalTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, BonusRingHexedTexture) == 0x000428, "Member 'UWBP_CoreSkillCheck_C::BonusRingHexedTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, BonusRingNormalTexture) == 0x000430, "Member 'UWBP_CoreSkillCheck_C::BonusRingNormalTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, RingHexedTexture) == 0x000438, "Member 'UWBP_CoreSkillCheck_C::RingHexedTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, RingNormalTexture) == 0x000440, "Member 'UWBP_CoreSkillCheck_C::RingNormalTexture' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, RingBonusNormal) == 0x000448, "Member 'UWBP_CoreSkillCheck_C::RingBonusNormal' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, RingBonusHexed) == 0x00044C, "Member 'UWBP_CoreSkillCheck_C::RingBonusHexed' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, MarkerNormalMaterial) == 0x000450, "Member 'UWBP_CoreSkillCheck_C::MarkerNormalMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, MarkerHexedMaterial) == 0x000458, "Member 'UWBP_CoreSkillCheck_C::MarkerHexedMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, HideDelay) == 0x000460, "Member 'UWBP_CoreSkillCheck_C::HideDelay' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, IsInsane) == 0x000468, "Member 'UWBP_CoreSkillCheck_C::IsInsane' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, IsMirrored) == 0x000469, "Member 'UWBP_CoreSkillCheck_C::IsMirrored' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSkillCheck_C, IsReversed) == 0x00046A, "Member 'UWBP_CoreSkillCheck_C::IsReversed' has a wrong offset!");

}


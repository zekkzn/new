#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TerrorRadiusHeart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDGameplay_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TerrorRadiusHeart.BP_TerrorRadiusHeart_C
// 0x0130 (0x03D8 - 0x02A8)
class ABP_TerrorRadiusHeart_C final : public ADBDBaseActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_HeartDarkGlow;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrorRadiusScreenIndicatorComponent*  TerrorRadiusScreenIndicator;                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_HeartGlow;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialHelper*                        MaterialHelper;                                    // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Heart;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrorRadiusVisualFeedbackComponent*   TerrorRadiusVisualFeedback;                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_F8ABC37B472682307E9E439827613329; // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_F8ABC37B472682307E9E439827613329; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TML_ShapeDecision_NewTrack_0_4ECC49EC432BB60CA4C5C4ACA75B6646; // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TML_ShapeDecision__Direction_4ECC49EC432BB60CA4C5C4ACA75B6646; // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F5[0x3];                                      // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TML_ShapeDecision;                                 // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TML_ChaseEmissiveBurst_NewTrack_0_A9E7A444431E3B17FA6F89A3A9D1ABCC; // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TML_ChaseEmissiveBurst__Direction_A9E7A444431E3B17FA6F89A3A9D1ABCC; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TML_ChaseEmissiveBurst;                            // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TML_UpdateHeartColor_NewTrack_0_B4604680482CC1B09C25D898AF0BB8D0; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TML_UpdateHeartColor__Direction_B4604680482CC1B09C25D898AF0BB8D0; // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TML_UpdateHeartColor;                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TML_UpdateHeartOpacity_NewTrack_0_46DD5B5C4A8D7BB595180AA2180BD63D; // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TML_UpdateHeartOpacity__Direction_46DD5B5C4A8D7BB595180AA2180BD63D; // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_325[0x3];                                      // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TML_UpdateHeartOpacity;                            // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TML_TransformHeartSize_NewTrack_0_D33D8FE94194A3C7CCF7FDAB68002266; // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TML_TransformHeartSize__Direction_D33D8FE94194A3C7CCF7FDAB68002266; // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335[0x3];                                      // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TML_TransformHeartSize;                            // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_0_9A1C8BE341424894F0D494AD6E94AAEE; // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_9A1C8BE341424894F0D494AD6E94AAEE; // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_345[0x3];                                      // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         TerrorLevel;                                       // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NewHeartSize;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HeartColor;                                        // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLullaby;                                         // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NewHeartOpacity;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewHeartFresnelColor;                              // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChase;                                           // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NewGlowEmissive;                                   // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewGlowSize;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewVeinsColor;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewGlowShape;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewOuterFresnelIntensity;                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewBackgroundSize;                                 // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewBackgroundOpacity;                              // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_TerrorRadiusHeart_TerrorRadiusVisualFeedback_K2Node_ComponentBoundEvent_0_OnHeartStateChanged__DelegateSignature(const struct FGameplayTag& HeartState);
	void BndEvt__BP_TerrorRadiusHeart_TerrorRadiusVisualFeedback_K2Node_ComponentBoundEvent_1_OnHeartBeat__DelegateSignature(float bpmIntensityPercentage);
	void ExecuteUbergraph_BP_TerrorRadiusHeart(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void TML_ChaseEmissiveBurst__FinishedFunc();
	void TML_ChaseEmissiveBurst__UpdateFunc();
	void TML_ShapeDecision__FinishedFunc();
	void TML_ShapeDecision__UpdateFunc();
	void TML_TransformHeartSize__FinishedFunc();
	void TML_TransformHeartSize__UpdateFunc();
	void TML_UpdateHeartColor__FinishedFunc();
	void TML_UpdateHeartColor__UpdateFunc();
	void TML_UpdateHeartOpacity__FinishedFunc();
	void TML_UpdateHeartOpacity__UpdateFunc();
	void UpdateHeartValues();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TerrorRadiusHeart_C">();
	}
	static class ABP_TerrorRadiusHeart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TerrorRadiusHeart_C>();
	}
};
static_assert(alignof(ABP_TerrorRadiusHeart_C) == 0x000008, "Wrong alignment on ABP_TerrorRadiusHeart_C");
static_assert(sizeof(ABP_TerrorRadiusHeart_C) == 0x0003D8, "Wrong size on ABP_TerrorRadiusHeart_C");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_TerrorRadiusHeart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NS_HeartDarkGlow) == 0x0002B0, "Member 'ABP_TerrorRadiusHeart_C::NS_HeartDarkGlow' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TerrorRadiusScreenIndicator) == 0x0002B8, "Member 'ABP_TerrorRadiusHeart_C::TerrorRadiusScreenIndicator' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NS_HeartGlow) == 0x0002C0, "Member 'ABP_TerrorRadiusHeart_C::NS_HeartGlow' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, MaterialHelper) == 0x0002C8, "Member 'ABP_TerrorRadiusHeart_C::MaterialHelper' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, SM_Heart) == 0x0002D0, "Member 'ABP_TerrorRadiusHeart_C::SM_Heart' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TerrorRadiusVisualFeedback) == 0x0002D8, "Member 'ABP_TerrorRadiusHeart_C::TerrorRadiusVisualFeedback' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, Timeline_0_NewTrack_0_F8ABC37B472682307E9E439827613329) == 0x0002E0, "Member 'ABP_TerrorRadiusHeart_C::Timeline_0_NewTrack_0_F8ABC37B472682307E9E439827613329' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, Timeline_0__Direction_F8ABC37B472682307E9E439827613329) == 0x0002E4, "Member 'ABP_TerrorRadiusHeart_C::Timeline_0__Direction_F8ABC37B472682307E9E439827613329' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, Timeline_0) == 0x0002E8, "Member 'ABP_TerrorRadiusHeart_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_ShapeDecision_NewTrack_0_4ECC49EC432BB60CA4C5C4ACA75B6646) == 0x0002F0, "Member 'ABP_TerrorRadiusHeart_C::TML_ShapeDecision_NewTrack_0_4ECC49EC432BB60CA4C5C4ACA75B6646' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_ShapeDecision__Direction_4ECC49EC432BB60CA4C5C4ACA75B6646) == 0x0002F4, "Member 'ABP_TerrorRadiusHeart_C::TML_ShapeDecision__Direction_4ECC49EC432BB60CA4C5C4ACA75B6646' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_ShapeDecision) == 0x0002F8, "Member 'ABP_TerrorRadiusHeart_C::TML_ShapeDecision' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_ChaseEmissiveBurst_NewTrack_0_A9E7A444431E3B17FA6F89A3A9D1ABCC) == 0x000300, "Member 'ABP_TerrorRadiusHeart_C::TML_ChaseEmissiveBurst_NewTrack_0_A9E7A444431E3B17FA6F89A3A9D1ABCC' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_ChaseEmissiveBurst__Direction_A9E7A444431E3B17FA6F89A3A9D1ABCC) == 0x000304, "Member 'ABP_TerrorRadiusHeart_C::TML_ChaseEmissiveBurst__Direction_A9E7A444431E3B17FA6F89A3A9D1ABCC' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_ChaseEmissiveBurst) == 0x000308, "Member 'ABP_TerrorRadiusHeart_C::TML_ChaseEmissiveBurst' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_UpdateHeartColor_NewTrack_0_B4604680482CC1B09C25D898AF0BB8D0) == 0x000310, "Member 'ABP_TerrorRadiusHeart_C::TML_UpdateHeartColor_NewTrack_0_B4604680482CC1B09C25D898AF0BB8D0' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_UpdateHeartColor__Direction_B4604680482CC1B09C25D898AF0BB8D0) == 0x000314, "Member 'ABP_TerrorRadiusHeart_C::TML_UpdateHeartColor__Direction_B4604680482CC1B09C25D898AF0BB8D0' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_UpdateHeartColor) == 0x000318, "Member 'ABP_TerrorRadiusHeart_C::TML_UpdateHeartColor' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_UpdateHeartOpacity_NewTrack_0_46DD5B5C4A8D7BB595180AA2180BD63D) == 0x000320, "Member 'ABP_TerrorRadiusHeart_C::TML_UpdateHeartOpacity_NewTrack_0_46DD5B5C4A8D7BB595180AA2180BD63D' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_UpdateHeartOpacity__Direction_46DD5B5C4A8D7BB595180AA2180BD63D) == 0x000324, "Member 'ABP_TerrorRadiusHeart_C::TML_UpdateHeartOpacity__Direction_46DD5B5C4A8D7BB595180AA2180BD63D' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_UpdateHeartOpacity) == 0x000328, "Member 'ABP_TerrorRadiusHeart_C::TML_UpdateHeartOpacity' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_TransformHeartSize_NewTrack_0_D33D8FE94194A3C7CCF7FDAB68002266) == 0x000330, "Member 'ABP_TerrorRadiusHeart_C::TML_TransformHeartSize_NewTrack_0_D33D8FE94194A3C7CCF7FDAB68002266' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_TransformHeartSize__Direction_D33D8FE94194A3C7CCF7FDAB68002266) == 0x000334, "Member 'ABP_TerrorRadiusHeart_C::TML_TransformHeartSize__Direction_D33D8FE94194A3C7CCF7FDAB68002266' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TML_TransformHeartSize) == 0x000338, "Member 'ABP_TerrorRadiusHeart_C::TML_TransformHeartSize' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, Timeline_2_NewTrack_0_9A1C8BE341424894F0D494AD6E94AAEE) == 0x000340, "Member 'ABP_TerrorRadiusHeart_C::Timeline_2_NewTrack_0_9A1C8BE341424894F0D494AD6E94AAEE' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, Timeline_2__Direction_9A1C8BE341424894F0D494AD6E94AAEE) == 0x000344, "Member 'ABP_TerrorRadiusHeart_C::Timeline_2__Direction_9A1C8BE341424894F0D494AD6E94AAEE' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, Timeline_2) == 0x000348, "Member 'ABP_TerrorRadiusHeart_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, TerrorLevel) == 0x000350, "Member 'ABP_TerrorRadiusHeart_C::TerrorLevel' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewHeartSize) == 0x000358, "Member 'ABP_TerrorRadiusHeart_C::NewHeartSize' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, HeartColor) == 0x000360, "Member 'ABP_TerrorRadiusHeart_C::HeartColor' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, IsLullaby) == 0x000370, "Member 'ABP_TerrorRadiusHeart_C::IsLullaby' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewHeartOpacity) == 0x000378, "Member 'ABP_TerrorRadiusHeart_C::NewHeartOpacity' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewHeartFresnelColor) == 0x000380, "Member 'ABP_TerrorRadiusHeart_C::NewHeartFresnelColor' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, IsChase) == 0x000390, "Member 'ABP_TerrorRadiusHeart_C::IsChase' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewGlowEmissive) == 0x000398, "Member 'ABP_TerrorRadiusHeart_C::NewGlowEmissive' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewGlowSize) == 0x0003A0, "Member 'ABP_TerrorRadiusHeart_C::NewGlowSize' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewVeinsColor) == 0x0003A8, "Member 'ABP_TerrorRadiusHeart_C::NewVeinsColor' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewGlowShape) == 0x0003B8, "Member 'ABP_TerrorRadiusHeart_C::NewGlowShape' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewOuterFresnelIntensity) == 0x0003C0, "Member 'ABP_TerrorRadiusHeart_C::NewOuterFresnelIntensity' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewBackgroundSize) == 0x0003C8, "Member 'ABP_TerrorRadiusHeart_C::NewBackgroundSize' has a wrong offset!");
static_assert(offsetof(ABP_TerrorRadiusHeart_C, NewBackgroundOpacity) == 0x0003D0, "Member 'ABP_TerrorRadiusHeart_C::NewBackgroundOpacity' has a wrong offset!");

}

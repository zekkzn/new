#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BubbleIndicator

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "DBDGameplay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BubbleIndicator.BP_BubbleIndicator_C
// 0x0040 (0x02F0 - 0x02B0)
class ABP_BubbleIndicator_C : public ABubbleIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak_Audio_Loud_Noise_Reveal_Survivor;               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               IndicatorParticleSystem;                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RevealedSilhouette;                                // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Opacity_EE6D7FEB4675CFFE6D3D8F9B56C31F52;  // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Opacity__Direction_EE6D7FEB4675CFFE6D3D8F9B56C31F52; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Opacity;                                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Silhouette;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           bubbleIndicatorDurationHandle;                     // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBubbleFX(const float Duration);
	void ExecuteUbergraph_BP_BubbleIndicator(int32 EntryPoint);
	void OnBeginFadeOut();
	void Opacity__FinishedFunc();
	void Opacity__UpdateFunc();
	void ReceiveBeginPlay();
	void RefreshBubbleVisibility(const bool IsVisible);
	void SetSilhouette(class UStaticMesh* StaticMesh);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BubbleIndicator_C">();
	}
	static class ABP_BubbleIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BubbleIndicator_C>();
	}
};
static_assert(alignof(ABP_BubbleIndicator_C) == 0x000008, "Wrong alignment on ABP_BubbleIndicator_C");
static_assert(sizeof(ABP_BubbleIndicator_C) == 0x0002F0, "Wrong size on ABP_BubbleIndicator_C");
static_assert(offsetof(ABP_BubbleIndicator_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_BubbleIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, Ak_Audio_Loud_Noise_Reveal_Survivor) == 0x0002B8, "Member 'ABP_BubbleIndicator_C::Ak_Audio_Loud_Noise_Reveal_Survivor' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, IndicatorParticleSystem) == 0x0002C0, "Member 'ABP_BubbleIndicator_C::IndicatorParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, RevealedSilhouette) == 0x0002C8, "Member 'ABP_BubbleIndicator_C::RevealedSilhouette' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, Opacity_Opacity_EE6D7FEB4675CFFE6D3D8F9B56C31F52) == 0x0002D0, "Member 'ABP_BubbleIndicator_C::Opacity_Opacity_EE6D7FEB4675CFFE6D3D8F9B56C31F52' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, Opacity__Direction_EE6D7FEB4675CFFE6D3D8F9B56C31F52) == 0x0002D4, "Member 'ABP_BubbleIndicator_C::Opacity__Direction_EE6D7FEB4675CFFE6D3D8F9B56C31F52' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, Opacity) == 0x0002D8, "Member 'ABP_BubbleIndicator_C::Opacity' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, Silhouette) == 0x0002E0, "Member 'ABP_BubbleIndicator_C::Silhouette' has a wrong offset!");
static_assert(offsetof(ABP_BubbleIndicator_C, bubbleIndicatorDurationHandle) == 0x0002E8, "Member 'ABP_BubbleIndicator_C::bubbleIndicatorDurationHandle' has a wrong offset!");

}

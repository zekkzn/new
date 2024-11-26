#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Objectives_HookCount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Objectives_HookCount.WBP_Objectives_HookCount_C
// 0x0088 (0x03C8 - 0x0340)
class UWBP_Objectives_HookCount_C final : public UCoreHookCountWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FillHooks;                                         // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MaxHooks;                                          // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              Bg;                                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BloodSplatter01;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BloodSplatter02;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CounterContainer;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              HookCountIcon;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_CoreSingleHookCount_C*>     HookElements;                                      // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Counter;                                           // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       HookAnimation;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDataSet;                                         // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSettingsVisible;                                 // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfHookSegments;                              // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Radius;                                            // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>      HookCounterTextures;                               // 0x03B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                             MainIconTexture;                                   // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateVisibility();
	void ShouldPlayAnimation(int32& CurrentHookCount, int32& MaxHookCount);
	void SetupSingleHookCounter(int32 Param_Index);
	void SetMainIcon(EGameType GameType);
	void SetHookCountVisibility(bool Visible);
	void SetData(const int32 CurrentHookCount, const int32 MaxHookCount, const int32 InitialMaxHookCount, const TSet<int32>& AssistedHookIndices, const bool IsFinisherMoriAvailable);
	void PreConstruct(bool IsDesignTime);
	void InitWidget(const EGameType GameType, const int32 NumberOfSegments);
	void HideUnusedHookCounters();
	void ExecuteUbergraph_WBP_Objectives_HookCount(int32 EntryPoint);
	void EvaluateSingleHookCount(int32 Param_Index, class UWBP_CoreSingleHookCount_C* CurrentSingleHook, int32 CurrentHooks, int32 Param_MaxHooks, int32 InitMaxHooks, const TSet<int32>& AssistedHookIndices);
	void ClearData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Objectives_HookCount_C">();
	}
	static class UWBP_Objectives_HookCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Objectives_HookCount_C>();
	}
};
static_assert(alignof(UWBP_Objectives_HookCount_C) == 0x000008, "Wrong alignment on UWBP_Objectives_HookCount_C");
static_assert(sizeof(UWBP_Objectives_HookCount_C) == 0x0003C8, "Wrong size on UWBP_Objectives_HookCount_C");
static_assert(offsetof(UWBP_Objectives_HookCount_C, UberGraphFrame) == 0x000340, "Member 'UWBP_Objectives_HookCount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, FillHooks) == 0x000348, "Member 'UWBP_Objectives_HookCount_C::FillHooks' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, MaxHooks) == 0x000350, "Member 'UWBP_Objectives_HookCount_C::MaxHooks' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, Bg) == 0x000358, "Member 'UWBP_Objectives_HookCount_C::Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, BloodSplatter01) == 0x000360, "Member 'UWBP_Objectives_HookCount_C::BloodSplatter01' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, BloodSplatter02) == 0x000368, "Member 'UWBP_Objectives_HookCount_C::BloodSplatter02' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, CounterContainer) == 0x000370, "Member 'UWBP_Objectives_HookCount_C::CounterContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, HookCountIcon) == 0x000378, "Member 'UWBP_Objectives_HookCount_C::HookCountIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, HookElements) == 0x000380, "Member 'UWBP_Objectives_HookCount_C::HookElements' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, Counter) == 0x000390, "Member 'UWBP_Objectives_HookCount_C::Counter' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, HookAnimation) == 0x000398, "Member 'UWBP_Objectives_HookCount_C::HookAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, IsDataSet) == 0x0003A0, "Member 'UWBP_Objectives_HookCount_C::IsDataSet' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, IsSettingsVisible) == 0x0003A1, "Member 'UWBP_Objectives_HookCount_C::IsSettingsVisible' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, NumberOfHookSegments) == 0x0003A4, "Member 'UWBP_Objectives_HookCount_C::NumberOfHookSegments' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, Radius) == 0x0003A8, "Member 'UWBP_Objectives_HookCount_C::Radius' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, HookCounterTextures) == 0x0003B0, "Member 'UWBP_Objectives_HookCount_C::HookCounterTextures' has a wrong offset!");
static_assert(offsetof(UWBP_Objectives_HookCount_C, MainIconTexture) == 0x0003C0, "Member 'UWBP_Objectives_HookCount_C::MainIconTexture' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreHUD_Objectives

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDUIViewInterfaces_structs.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreHUD_Objectives.WBP_CoreHUD_Objectives_C
// 0x0048 (0x0398 - 0x0350)
class UWBP_CoreHUD_Objectives_C final : public UCoreHudObjectivesWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Objectives_Exit_C*                 WBP_Objectives_Exit;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Objectives_Generator_C*            WBP_Objectives_Generator;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Objectives_Hatch_C*                WBP_Objectives_Hatch;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Objectives_HookCount_C*            WBP_Objectives_HookCount;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FHudObjectivesViewData                 HudObjectivesData;                                 // 0x0378(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        FocusableChildren;                                 // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void UpdateSpacers();
	void UpdateHatchObjective();
	void UpdateGeneratorsObjective();
	void UpdateExitObjective();
	void SetTutorialHighlight(const bool Show, const EHudComponent& ComponentId);
	void SetHudObjectiveData(const struct FHudObjectivesViewData& HudObjectiveViewData);
	void PlayCustomFocusAnimation();
	void InitWidget(const EGameType GameType, const int32 NumberOfSegments);
	void InitFocusableChildrenArray();
	void ExecuteUbergraph_WBP_CoreHUD_Objectives(int32 EntryPoint);
	void Construct();
	void ClearHookCountData();
	void SetHookCountVisibility(bool Visible);
	void SetHookCountData(const int32 CurrentHookCount, const int32 MaxHookCount, const int32 InitialMaxHookCount, const TSet<int32>& AssistedHookIndices, const bool IsFinisherMoriAvailable);
	void PlayFocusAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreHUD_Objectives_C">();
	}
	static class UWBP_CoreHUD_Objectives_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreHUD_Objectives_C>();
	}
};
static_assert(alignof(UWBP_CoreHUD_Objectives_C) == 0x000008, "Wrong alignment on UWBP_CoreHUD_Objectives_C");
static_assert(sizeof(UWBP_CoreHUD_Objectives_C) == 0x000398, "Wrong size on UWBP_CoreHUD_Objectives_C");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, UberGraphFrame) == 0x000350, "Member 'UWBP_CoreHUD_Objectives_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, WBP_Objectives_Exit) == 0x000358, "Member 'UWBP_CoreHUD_Objectives_C::WBP_Objectives_Exit' has a wrong offset!");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, WBP_Objectives_Generator) == 0x000360, "Member 'UWBP_CoreHUD_Objectives_C::WBP_Objectives_Generator' has a wrong offset!");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, WBP_Objectives_Hatch) == 0x000368, "Member 'UWBP_CoreHUD_Objectives_C::WBP_Objectives_Hatch' has a wrong offset!");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, WBP_Objectives_HookCount) == 0x000370, "Member 'UWBP_CoreHUD_Objectives_C::WBP_Objectives_HookCount' has a wrong offset!");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, HudObjectivesData) == 0x000378, "Member 'UWBP_CoreHUD_Objectives_C::HudObjectivesData' has a wrong offset!");
static_assert(offsetof(UWBP_CoreHUD_Objectives_C, FocusableChildren) == 0x000388, "Member 'UWBP_CoreHUD_Objectives_C::FocusableChildren' has a wrong offset!");

}


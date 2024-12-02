#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTallyRoot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreTallyRoot.WBP_CoreTallyRoot_C
// 0x0038 (0x0360 - 0x0328)
class UWBP_CoreTallyRoot_C final : public UCoreTallyMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              BackgroundFog_1;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BackgroundFog_2;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               EmptyTab;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              NoMoveSmoke;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TabContentSwitcher;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreTallyScoreboard_C*             WBP_CoreTallyScoreboard;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTabSelected(const ETallyTabState& TabState);
	void SetBackgroundVisibility(bool Param_IsVisible);
	void ExecuteUbergraph_WBP_CoreTallyRoot(int32 EntryPoint);

	TScriptInterface<class ITallyScoreboardViewInterface> GetTallyScoreboardInterface() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreTallyRoot_C">();
	}
	static class UWBP_CoreTallyRoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreTallyRoot_C>();
	}
};
static_assert(alignof(UWBP_CoreTallyRoot_C) == 0x000008, "Wrong alignment on UWBP_CoreTallyRoot_C");
static_assert(sizeof(UWBP_CoreTallyRoot_C) == 0x000360, "Wrong size on UWBP_CoreTallyRoot_C");
static_assert(offsetof(UWBP_CoreTallyRoot_C, UberGraphFrame) == 0x000328, "Member 'UWBP_CoreTallyRoot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyRoot_C, BackgroundFog_1) == 0x000330, "Member 'UWBP_CoreTallyRoot_C::BackgroundFog_1' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyRoot_C, BackgroundFog_2) == 0x000338, "Member 'UWBP_CoreTallyRoot_C::BackgroundFog_2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyRoot_C, EmptyTab) == 0x000340, "Member 'UWBP_CoreTallyRoot_C::EmptyTab' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyRoot_C, NoMoveSmoke) == 0x000348, "Member 'UWBP_CoreTallyRoot_C::NoMoveSmoke' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyRoot_C, TabContentSwitcher) == 0x000350, "Member 'UWBP_CoreTallyRoot_C::TabContentSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyRoot_C, WBP_CoreTallyScoreboard) == 0x000358, "Member 'UWBP_CoreTallyRoot_C::WBP_CoreTallyScoreboard' has a wrong offset!");

}


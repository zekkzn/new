#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreKillerStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreKillerStatus.WBP_CoreKillerStatus_C
// 0x00B0 (0x03F0 - 0x0340)
class UWBP_CoreKillerStatus_C final : public UCoreKillerStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              ObjectiveSeparator;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerStatus_C*                WBP_CorePlayerStatus;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerStatusViewData                  CachedViewData;                                    // 0x0358(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetPlayerNameVisibility(bool Visible);
	void SetData(const struct FPlayerStatusViewData& Data);
	void ExecuteUbergraph_WBP_CoreKillerStatus(int32 EntryPoint);
	void Construct();
	void ClearData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreKillerStatus_C">();
	}
	static class UWBP_CoreKillerStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreKillerStatus_C>();
	}
};
static_assert(alignof(UWBP_CoreKillerStatus_C) == 0x000008, "Wrong alignment on UWBP_CoreKillerStatus_C");
static_assert(sizeof(UWBP_CoreKillerStatus_C) == 0x0003F0, "Wrong size on UWBP_CoreKillerStatus_C");
static_assert(offsetof(UWBP_CoreKillerStatus_C, UberGraphFrame) == 0x000340, "Member 'UWBP_CoreKillerStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreKillerStatus_C, ObjectiveSeparator) == 0x000348, "Member 'UWBP_CoreKillerStatus_C::ObjectiveSeparator' has a wrong offset!");
static_assert(offsetof(UWBP_CoreKillerStatus_C, WBP_CorePlayerStatus) == 0x000350, "Member 'UWBP_CoreKillerStatus_C::WBP_CorePlayerStatus' has a wrong offset!");
static_assert(offsetof(UWBP_CoreKillerStatus_C, CachedViewData) == 0x000358, "Member 'UWBP_CoreKillerStatus_C::CachedViewData' has a wrong offset!");

}


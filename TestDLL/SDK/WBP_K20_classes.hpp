#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K20

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K20.WBP_K20_C
// 0x0020 (0x0358 - 0x0338)
class UWBP_K20_C final : public UCorePlayerStatusKillerEffectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AgonyAnimation;                                    // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              AgonyIcon;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExecutionerStatusData*                 CacheData;                                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void SetExecutionerVisibility(bool& Param_IsVisible);
	void SetExecutionerData(class UExecutionerStatusData* KillerData);
	void ExecuteUbergraph_WBP_K20(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K20_C">();
	}
	static class UWBP_K20_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K20_C>();
	}
};
static_assert(alignof(UWBP_K20_C) == 0x000008, "Wrong alignment on UWBP_K20_C");
static_assert(sizeof(UWBP_K20_C) == 0x000358, "Wrong size on UWBP_K20_C");
static_assert(offsetof(UWBP_K20_C, UberGraphFrame) == 0x000338, "Member 'UWBP_K20_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_K20_C, AgonyAnimation) == 0x000340, "Member 'UWBP_K20_C::AgonyAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_K20_C, AgonyIcon) == 0x000348, "Member 'UWBP_K20_C::AgonyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_K20_C, CacheData) == 0x000350, "Member 'UWBP_K20_C::CacheData' has a wrong offset!");

}

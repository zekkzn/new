#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCurrencyProgressionReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C
// 0x0058 (0x06F8 - 0x06A0)
class UWBP_CoreCurrencyProgressionReward_C final : public UCoreCurrencyProgressionRewardWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDTextBlock*                          AmountTB;                                          // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ItemIMG;                                           // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              TintIMG;                                           // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGeometry                              NewVar_0;                                          // 0x06C0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_CoreCurrencyProgressionReward(int32 EntryPoint);
	void SetCurrencyProgressionRewardData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreCurrencyProgressionReward_C">();
	}
	static class UWBP_CoreCurrencyProgressionReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreCurrencyProgressionReward_C>();
	}
};
static_assert(alignof(UWBP_CoreCurrencyProgressionReward_C) == 0x000008, "Wrong alignment on UWBP_CoreCurrencyProgressionReward_C");
static_assert(sizeof(UWBP_CoreCurrencyProgressionReward_C) == 0x0006F8, "Wrong size on UWBP_CoreCurrencyProgressionReward_C");
static_assert(offsetof(UWBP_CoreCurrencyProgressionReward_C, UberGraphFrame) == 0x0006A0, "Member 'UWBP_CoreCurrencyProgressionReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyProgressionReward_C, AmountTB) == 0x0006A8, "Member 'UWBP_CoreCurrencyProgressionReward_C::AmountTB' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyProgressionReward_C, ItemIMG) == 0x0006B0, "Member 'UWBP_CoreCurrencyProgressionReward_C::ItemIMG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyProgressionReward_C, TintIMG) == 0x0006B8, "Member 'UWBP_CoreCurrencyProgressionReward_C::TintIMG' has a wrong offset!");
static_assert(offsetof(UWBP_CoreCurrencyProgressionReward_C, NewVar_0) == 0x0006C0, "Member 'UWBP_CoreCurrencyProgressionReward_C::NewVar_0' has a wrong offset!");

}

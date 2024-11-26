#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K30

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K30.WBP_K30_C
// 0x0010 (0x0348 - 0x0338)
class UWBP_K30_C final : public UCorePlayerStatusKillerEffectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              HuntGauge;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void Set_K30_View_Data(class UK30StatusData* Killer_Data);
	void ExecuteUbergraph_WBP_K30(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K30_C">();
	}
	static class UWBP_K30_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K30_C>();
	}
};
static_assert(alignof(UWBP_K30_C) == 0x000008, "Wrong alignment on UWBP_K30_C");
static_assert(sizeof(UWBP_K30_C) == 0x000348, "Wrong size on UWBP_K30_C");
static_assert(offsetof(UWBP_K30_C, UberGraphFrame) == 0x000338, "Member 'UWBP_K30_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_K30_C, HuntGauge) == 0x000340, "Member 'UWBP_K30_C::HuntGauge' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K29

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K29.WBP_K29_C
// 0x0040 (0x0378 - 0x0338)
class UWBP_K29_C final : public UCorePlayerStatusKillerEffectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              Gauge;                                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               K29Container;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           InfectionActiveColor;                              // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InfectionMaxxedOutColor;                           // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMaterial;                                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void SetInfection(class UK29StatusData* KillerData, bool IsKiller);
	void SetColor(bool IsMaxxedOut);
	void ExecuteUbergraph_WBP_K29(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K29_C">();
	}
	static class UWBP_K29_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K29_C>();
	}
};
static_assert(alignof(UWBP_K29_C) == 0x000008, "Wrong alignment on UWBP_K29_C");
static_assert(sizeof(UWBP_K29_C) == 0x000378, "Wrong size on UWBP_K29_C");
static_assert(offsetof(UWBP_K29_C, UberGraphFrame) == 0x000338, "Member 'UWBP_K29_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_K29_C, Gauge) == 0x000340, "Member 'UWBP_K29_C::Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_K29_C, K29Container) == 0x000348, "Member 'UWBP_K29_C::K29Container' has a wrong offset!");
static_assert(offsetof(UWBP_K29_C, InfectionActiveColor) == 0x000350, "Member 'UWBP_K29_C::InfectionActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_K29_C, InfectionMaxxedOutColor) == 0x000360, "Member 'UWBP_K29_C::InfectionMaxxedOutColor' has a wrong offset!");
static_assert(offsetof(UWBP_K29_C, GaugeMaterial) == 0x000370, "Member 'UWBP_K29_C::GaugeMaterial' has a wrong offset!");

}


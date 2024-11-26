#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePerkCooldown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CorePerkCooldown.WBP_CorePerkCooldown_C
// 0x0050 (0x02F8 - 0x02A8)
class UWBP_CorePerkCooldown_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              CooldownFill;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveColor;                                       // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Transparent;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             ShapeTexture;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateRechargeablePerk(double Percent, bool IsActive, bool* IsDisplayed);
	void UpdateNormalPerk(double Percent, bool* IsDisplayed);
	void SetPercentage(double Percent, bool IsRechargeable, bool IsRechargeableActive);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CorePerkCooldown(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CorePerkCooldown_C">();
	}
	static class UWBP_CorePerkCooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CorePerkCooldown_C>();
	}
};
static_assert(alignof(UWBP_CorePerkCooldown_C) == 0x000008, "Wrong alignment on UWBP_CorePerkCooldown_C");
static_assert(sizeof(UWBP_CorePerkCooldown_C) == 0x0002F8, "Wrong size on UWBP_CorePerkCooldown_C");
static_assert(offsetof(UWBP_CorePerkCooldown_C, UberGraphFrame) == 0x0002A8, "Member 'UWBP_CorePerkCooldown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CorePerkCooldown_C, CooldownFill) == 0x0002B0, "Member 'UWBP_CorePerkCooldown_C::CooldownFill' has a wrong offset!");
static_assert(offsetof(UWBP_CorePerkCooldown_C, DynamicMaterial) == 0x0002B8, "Member 'UWBP_CorePerkCooldown_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CorePerkCooldown_C, ActiveColor) == 0x0002C0, "Member 'UWBP_CorePerkCooldown_C::ActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_CorePerkCooldown_C, BackgroundColor) == 0x0002D0, "Member 'UWBP_CorePerkCooldown_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_CorePerkCooldown_C, Transparent) == 0x0002E0, "Member 'UWBP_CorePerkCooldown_C::Transparent' has a wrong offset!");
static_assert(offsetof(UWBP_CorePerkCooldown_C, ShapeTexture) == 0x0002F0, "Member 'UWBP_CorePerkCooldown_C::ShapeTexture' has a wrong offset!");

}


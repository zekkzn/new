#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePingStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CorePingStatus.WBP_CorePingStatus_C
// 0x0070 (0x03B0 - 0x0340)
class UWBP_CorePingStatus_C final : public UCorePingStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Container;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              KillerPingIcon;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              PacketLossIcon;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              PingIcon;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           WarningPingColor;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CriticalPingColor;                                 // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseColor;                                         // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PingMaterial;                                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PacketLossMaterial;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               KillerPingMaterial;                                // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateVisibility(class UDBDImage* Image, EConnectionQuality Status, bool IsCriticalOnly);
	void UpdatePing(EConnectionQuality Status);
	void UpdatePacketLoss(EConnectionQuality Status);
	void UpdateKillerPing(EConnectionQuality Status);
	void SetLocalPingStatus(const EConnectionQuality& LocalPing);
	void SetLocalPacketLossStatus(const EConnectionQuality& LocalPacketLoss);
	void SetKillerConnectionQualityStatus(const EConnectionQuality& KillerConnectionQuality);
	void PreConstruct(bool IsDesignTime);
	void InitPingStatus(const int32 NumberOfSurvivors);
	void ExecuteUbergraph_WBP_CorePingStatus(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CorePingStatus_C">();
	}
	static class UWBP_CorePingStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CorePingStatus_C>();
	}
};
static_assert(alignof(UWBP_CorePingStatus_C) == 0x000008, "Wrong alignment on UWBP_CorePingStatus_C");
static_assert(sizeof(UWBP_CorePingStatus_C) == 0x0003B0, "Wrong size on UWBP_CorePingStatus_C");
static_assert(offsetof(UWBP_CorePingStatus_C, UberGraphFrame) == 0x000340, "Member 'UWBP_CorePingStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, Container) == 0x000348, "Member 'UWBP_CorePingStatus_C::Container' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, KillerPingIcon) == 0x000350, "Member 'UWBP_CorePingStatus_C::KillerPingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, PacketLossIcon) == 0x000358, "Member 'UWBP_CorePingStatus_C::PacketLossIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, PingIcon) == 0x000360, "Member 'UWBP_CorePingStatus_C::PingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, WarningPingColor) == 0x000368, "Member 'UWBP_CorePingStatus_C::WarningPingColor' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, CriticalPingColor) == 0x000378, "Member 'UWBP_CorePingStatus_C::CriticalPingColor' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, BaseColor) == 0x000388, "Member 'UWBP_CorePingStatus_C::BaseColor' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, PingMaterial) == 0x000398, "Member 'UWBP_CorePingStatus_C::PingMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, PacketLossMaterial) == 0x0003A0, "Member 'UWBP_CorePingStatus_C::PacketLossMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CorePingStatus_C, KillerPingMaterial) == 0x0003A8, "Member 'UWBP_CorePingStatus_C::KillerPingMaterial' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Medkit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDGameplay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Medkit.BP_Medkit_C
// 0x0020 (0x05F8 - 0x05D8)
class ABP_Medkit_C : public AMedkit
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USleepingSkinnedMeshRegisterer*         SleepingSkinnedMeshRegisterer;                     // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TML_Dissolve_Opacity_Dissolve_81DFF7C145C967D0D4BFDDA833513710; // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TML_Dissolve__Direction_81DFF7C145C967D0D4BFDDA833513710; // 0x05EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ED[0x3];                                      // 0x05ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TML_dissolve;                                      // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void TML_dissolve__UpdateFunc();
	void TML_dissolve__FinishedFunc();
	void TML_dissolve__Event_dissolve__EventFunc();
	void OnActivateDissolveItem();
	void ExecuteUbergraph_BP_Medkit(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Medkit_C">();
	}
	static class ABP_Medkit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Medkit_C>();
	}
};
static_assert(alignof(ABP_Medkit_C) == 0x000008, "Wrong alignment on ABP_Medkit_C");
static_assert(sizeof(ABP_Medkit_C) == 0x0005F8, "Wrong size on ABP_Medkit_C");
static_assert(offsetof(ABP_Medkit_C, UberGraphFrame) == 0x0005D8, "Member 'ABP_Medkit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Medkit_C, SleepingSkinnedMeshRegisterer) == 0x0005E0, "Member 'ABP_Medkit_C::SleepingSkinnedMeshRegisterer' has a wrong offset!");
static_assert(offsetof(ABP_Medkit_C, TML_Dissolve_Opacity_Dissolve_81DFF7C145C967D0D4BFDDA833513710) == 0x0005E8, "Member 'ABP_Medkit_C::TML_Dissolve_Opacity_Dissolve_81DFF7C145C967D0D4BFDDA833513710' has a wrong offset!");
static_assert(offsetof(ABP_Medkit_C, TML_Dissolve__Direction_81DFF7C145C967D0D4BFDDA833513710) == 0x0005EC, "Member 'ABP_Medkit_C::TML_Dissolve__Direction_81DFF7C145C967D0D4BFDDA833513710' has a wrong offset!");
static_assert(offsetof(ABP_Medkit_C, TML_dissolve) == 0x0005F0, "Member 'ABP_Medkit_C::TML_dissolve' has a wrong offset!");

}


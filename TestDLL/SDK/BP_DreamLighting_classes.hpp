#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DreamLighting

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Sky_Post_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DreamLighting.BP_DreamLighting_C
// 0x0048 (0x06A8 - 0x0660)
class ABP_DreamLighting_C final : public ABP_Sky_Post_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DreamLighting_C;                 // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                               Rotation_Rate;                                     // 0x0668(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Pivot_Translation;                                 // 0x0680(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rotation_in_Local_Space;                           // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_699[0x7];                                      // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      Light;                                             // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DreamLighting(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DreamLighting_C">();
	}
	static class ABP_DreamLighting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DreamLighting_C>();
	}
};
static_assert(alignof(ABP_DreamLighting_C) == 0x000008, "Wrong alignment on ABP_DreamLighting_C");
static_assert(sizeof(ABP_DreamLighting_C) == 0x0006A8, "Wrong size on ABP_DreamLighting_C");
static_assert(offsetof(ABP_DreamLighting_C, UberGraphFrame_BP_DreamLighting_C) == 0x000660, "Member 'ABP_DreamLighting_C::UberGraphFrame_BP_DreamLighting_C' has a wrong offset!");
static_assert(offsetof(ABP_DreamLighting_C, Rotation_Rate) == 0x000668, "Member 'ABP_DreamLighting_C::Rotation_Rate' has a wrong offset!");
static_assert(offsetof(ABP_DreamLighting_C, Pivot_Translation) == 0x000680, "Member 'ABP_DreamLighting_C::Pivot_Translation' has a wrong offset!");
static_assert(offsetof(ABP_DreamLighting_C, Rotation_in_Local_Space) == 0x000698, "Member 'ABP_DreamLighting_C::Rotation_in_Local_Space' has a wrong offset!");
static_assert(offsetof(ABP_DreamLighting_C, Light) == 0x0006A0, "Member 'ABP_DreamLighting_C::Light' has a wrong offset!");

}

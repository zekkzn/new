#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreamBlueprintFunctionLibrary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ScreamBlueprintFunctionLibrary.ScreamBlueprintFunctionLibrary_C.ScreamRevealSurvivor
// 0x0030 (0x0030 - 0x0000)
struct ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor final
{
public:
	class ADBDPlayer*                             SurvivorPlayer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ScreamRevealDuration;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnBubbleIndicator;                              // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TriggerScreamEventsIfPossible_ReturnValue; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor) == 0x000008, "Wrong alignment on ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor");
static_assert(sizeof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor) == 0x000030, "Wrong size on ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, SurvivorPlayer) == 0x000000, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::SurvivorPlayer' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, ScreamRevealDuration) == 0x000008, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::ScreamRevealDuration' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, SpawnBubbleIndicator) == 0x000010, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::SpawnBubbleIndicator' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, __WorldContext) == 0x000018, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::__WorldContext' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, K2Node_DynamicCast_AsCamper_Player) == 0x000020, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::K2Node_DynamicCast_AsCamper_Player' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor, CallFunc_TriggerScreamEventsIfPossible_ReturnValue) == 0x00002A, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor::CallFunc_TriggerScreamEventsIfPossible_ReturnValue' has a wrong offset!");

// Function ScreamBlueprintFunctionLibrary.ScreamBlueprintFunctionLibrary_C.ScreamRevealSurvivor3D
// 0x0028 (0x0028 - 0x0000)
struct ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D final
{
public:
	class ACamperPlayer*                          Camper;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ScreamRevealDuration;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnBubbleIndicator;                              // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TriggerScreamEventsIfPossible_ReturnValue; // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D) == 0x000008, "Wrong alignment on ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D");
static_assert(sizeof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D) == 0x000028, "Wrong size on ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D, Camper) == 0x000000, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D::Camper' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D, ScreamRevealDuration) == 0x000008, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D::ScreamRevealDuration' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D, SpawnBubbleIndicator) == 0x000010, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D::SpawnBubbleIndicator' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D, __WorldContext) == 0x000018, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D::__WorldContext' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D, CallFunc_TriggerScreamEventsIfPossible_ReturnValue) == 0x000021, "Member 'ScreamBlueprintFunctionLibrary_C_ScreamRevealSurvivor3D::CallFunc_TriggerScreamEventsIfPossible_ReturnValue' has a wrong offset!");

// Function ScreamBlueprintFunctionLibrary.ScreamBlueprintFunctionLibrary_C.TriggerScreamAnimation
// 0x00B0 (0x00B0 - 0x0000)
struct ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation final
{
public:
	class ACamperPlayer*                          SurvivorPlayer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ScreamRevealDuration;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnBubbleIndicator;                              // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractionDefinition*                 CallFunc_GetCurrentInteraction_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayTagContainerComponent*         CallFunc_GetObjectState_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCamperHealthComponent*                 CallFunc_GetHealthComponent_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVaulting_ReturnValue;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKO_ReturnValue;                         // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnBubbleIndicator_lifetime_ImplicitCast; // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation) == 0x000010, "Wrong alignment on ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation");
static_assert(sizeof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation) == 0x0000B0, "Wrong size on ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, SurvivorPlayer) == 0x000000, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::SurvivorPlayer' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, ScreamRevealDuration) == 0x000008, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::ScreamRevealDuration' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, SpawnBubbleIndicator) == 0x000010, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::SpawnBubbleIndicator' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, __WorldContext) == 0x000018, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::__WorldContext' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_GetCurrentInteraction_ReturnValue) == 0x000020, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_GetCurrentInteraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_GetObjectState_ReturnValue) == 0x000090, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_GetObjectState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_GetHealthComponent_ReturnValue) == 0x000098, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_GetHealthComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_IsVaulting_ReturnValue) == 0x0000A0, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_IsVaulting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_IsKO_ReturnValue) == 0x0000A1, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_IsKO_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_BooleanOR_ReturnValue) == 0x0000A2, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x0000A3, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation, CallFunc_SpawnBubbleIndicator_lifetime_ImplicitCast) == 0x0000A4, "Member 'ScreamBlueprintFunctionLibrary_C_TriggerScreamAnimation::CallFunc_SpawnBubbleIndicator_lifetime_ImplicitCast' has a wrong offset!");

}

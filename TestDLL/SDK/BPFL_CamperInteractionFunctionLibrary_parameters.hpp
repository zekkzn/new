#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_CamperInteractionFunctionLibrary

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPFL_CamperInteractionFunctionLibrary.BPFL_CamperInteractionFunctionLibrary_C.GetCamperOwner
// 0x0048 (0x0048 - 0x0000)
struct BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner final
{
public:
	class UInteractionDefinition*                 InteractionDefinition;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACamperPlayer*                          Camper;                                            // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AInteractable*                          CallFunc_GetInteractable_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperInteractable*                    K2Node_DynamicCast_AsCamper_Interactable;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          CallFunc_GetOwningSurvivor_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner) == 0x000008, "Wrong alignment on BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner");
static_assert(sizeof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner) == 0x000048, "Wrong size on BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, InteractionDefinition) == 0x000000, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::InteractionDefinition' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, __WorldContext) == 0x000008, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, Camper) == 0x000010, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::Camper' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, CallFunc_GetInteractable_ReturnValue) == 0x000018, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::CallFunc_GetInteractable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, K2Node_DynamicCast_AsCamper_Interactable) == 0x000028, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::K2Node_DynamicCast_AsCamper_Interactable' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, CallFunc_GetOwningSurvivor_ReturnValue) == 0x000038, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::CallFunc_GetOwningSurvivor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

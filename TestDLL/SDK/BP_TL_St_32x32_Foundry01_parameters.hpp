#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TL_St_32x32_Foundry01

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TL_St_32x32_Foundry01.BP_TL_St_32x32_Foundry01_C.UserConstructionScript
// 0x0048 (0x0048 - 0x0000)
struct BP_TL_St_32x32_Foundry01_C_UserConstructionScript final
{
public:
	TArray<class ULightComponent*>                K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                 CallFunc_K2_GetChildActor_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMultipleLightsFader*                   K2Node_DynamicCast_AsMultiple_Lights_Fader;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UActorSpawner*>                  K2Node_MakeArray_Array_1;                          // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UActorSpawner*>                  K2Node_MakeArray_Array_2;                          // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_TL_St_32x32_Foundry01_C_UserConstructionScript");
static_assert(sizeof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript) == 0x000048, "Wrong size on BP_TL_St_32x32_Foundry01_C_UserConstructionScript");
static_assert(offsetof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000000, "Member 'BP_TL_St_32x32_Foundry01_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript, CallFunc_K2_GetChildActor_ReturnValue) == 0x000010, "Member 'BP_TL_St_32x32_Foundry01_C_UserConstructionScript::CallFunc_K2_GetChildActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript, K2Node_DynamicCast_AsMultiple_Lights_Fader) == 0x000018, "Member 'BP_TL_St_32x32_Foundry01_C_UserConstructionScript::K2Node_DynamicCast_AsMultiple_Lights_Fader' has a wrong offset!");
static_assert(offsetof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_TL_St_32x32_Foundry01_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript, K2Node_MakeArray_Array_1) == 0x000028, "Member 'BP_TL_St_32x32_Foundry01_C_UserConstructionScript::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_TL_St_32x32_Foundry01_C_UserConstructionScript, K2Node_MakeArray_Array_2) == 0x000038, "Member 'BP_TL_St_32x32_Foundry01_C_UserConstructionScript::K2Node_MakeArray_Array_2' has a wrong offset!");

}


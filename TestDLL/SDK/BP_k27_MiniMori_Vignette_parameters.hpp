#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_k27_MiniMori_Vignette

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_k27_MiniMori_Vignette.BP_k27_MiniMori_Vignette_C.ExecuteUbergraph_BP_k27_MiniMori_Vignette
// 0x0028 (0x0028 - 0x0000)
struct BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0010(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette) == 0x000008, "Wrong alignment on BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette");
static_assert(sizeof(BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette) == 0x000028, "Wrong size on BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette");
static_assert(offsetof(BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette, EntryPoint) == 0x000000, "Member 'BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette, K2Node_MakeStruct_WeightedBlendable) == 0x000010, "Member 'BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette, CallFunc_Array_AddUnique_ReturnValue) == 0x000020, "Member 'BP_k27_MiniMori_Vignette_C_ExecuteUbergraph_BP_k27_MiniMori_Vignette::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

}

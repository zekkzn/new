#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TL_ST_Basement

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TL_ST_Basement.BP_TL_ST_Basement_C.ExecuteUbergraph_BP_TL_ST_Basement
// 0x0040 (0x0040 - 0x0000)
struct BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_K2_GetChildActor_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogOverride_C*                      K2Node_DynamicCast_AsBP_Fog_Override;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDGameState*                          CallFunc_GetDBDGameState_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement) == 0x000008, "Wrong alignment on BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement");
static_assert(sizeof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement) == 0x000040, "Wrong size on BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement");
static_assert(offsetof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement, EntryPoint) == 0x000000, "Member 'BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement, CallFunc_K2_GetChildActor_ReturnValue) == 0x000008, "Member 'BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement::CallFunc_K2_GetChildActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement, K2Node_DynamicCast_AsBP_Fog_Override) == 0x000028, "Member 'BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement::K2Node_DynamicCast_AsBP_Fog_Override' has a wrong offset!");
static_assert(offsetof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement, CallFunc_GetDBDGameState_ReturnValue) == 0x000038, "Member 'BP_TL_ST_Basement_C_ExecuteUbergraph_BP_TL_ST_Basement::CallFunc_GetDBDGameState_ReturnValue' has a wrong offset!");

// Function BP_TL_ST_Basement.BP_TL_ST_Basement_C.OverrideExposure
// 0x0004 (0x0004 - 0x0000)
struct BP_TL_ST_Basement_C_OverrideExposure final
{
public:
	int32                                         Loopcount;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TL_ST_Basement_C_OverrideExposure) == 0x000004, "Wrong alignment on BP_TL_ST_Basement_C_OverrideExposure");
static_assert(sizeof(BP_TL_ST_Basement_C_OverrideExposure) == 0x000004, "Wrong size on BP_TL_ST_Basement_C_OverrideExposure");
static_assert(offsetof(BP_TL_ST_Basement_C_OverrideExposure, Loopcount) == 0x000000, "Member 'BP_TL_ST_Basement_C_OverrideExposure::Loopcount' has a wrong offset!");

// Function BP_TL_ST_Basement.BP_TL_ST_Basement_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct BP_TL_ST_Basement_C_UserConstructionScript final
{
public:
	TArray<class UActorSpawner*>                  K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_TL_ST_Basement_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_TL_ST_Basement_C_UserConstructionScript");
static_assert(sizeof(BP_TL_ST_Basement_C_UserConstructionScript) == 0x000010, "Wrong size on BP_TL_ST_Basement_C_UserConstructionScript");
static_assert(offsetof(BP_TL_ST_Basement_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000000, "Member 'BP_TL_ST_Basement_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");

}


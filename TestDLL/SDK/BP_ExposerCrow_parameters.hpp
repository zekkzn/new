#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExposerCrow

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_ExposerCrow.BP_ExposerCrow_C.StartSpawnSequence
// 0x0001 (0x0001 - 0x0000)
struct BP_ExposerCrow_C_StartSpawnSequence final
{
public:
	bool                                          WithRandomDelay;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExposerCrow_C_StartSpawnSequence) == 0x000001, "Wrong alignment on BP_ExposerCrow_C_StartSpawnSequence");
static_assert(sizeof(BP_ExposerCrow_C_StartSpawnSequence) == 0x000001, "Wrong size on BP_ExposerCrow_C_StartSpawnSequence");
static_assert(offsetof(BP_ExposerCrow_C_StartSpawnSequence, WithRandomDelay) == 0x000000, "Member 'BP_ExposerCrow_C_StartSpawnSequence::WithRandomDelay' has a wrong offset!");

// Function BP_ExposerCrow.BP_ExposerCrow_C.StartExitSequence
// 0x0001 (0x0001 - 0x0000)
struct BP_ExposerCrow_C_StartExitSequence final
{
public:
	bool                                          WithRandomDelay;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExposerCrow_C_StartExitSequence) == 0x000001, "Wrong alignment on BP_ExposerCrow_C_StartExitSequence");
static_assert(sizeof(BP_ExposerCrow_C_StartExitSequence) == 0x000001, "Wrong size on BP_ExposerCrow_C_StartExitSequence");
static_assert(offsetof(BP_ExposerCrow_C_StartExitSequence, WithRandomDelay) == 0x000000, "Member 'BP_ExposerCrow_C_StartExitSequence::WithRandomDelay' has a wrong offset!");

// Function BP_ExposerCrow.BP_ExposerCrow_C.SetTunableValues
// 0x0048 (0x0048 - 0x0000)
struct BP_ExposerCrow_C_SetTunableValues final
{
public:
	class UDBDDesignTunables*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue_2;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue_3;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue_4;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue_5;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_CirclingSpeed_ImplicitCast;     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExposerCrow_C_SetTunableValues) == 0x000008, "Wrong alignment on BP_ExposerCrow_C_SetTunableValues");
static_assert(sizeof(BP_ExposerCrow_C_SetTunableValues) == 0x000048, "Wrong size on BP_ExposerCrow_C_SetTunableValues");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000000, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetTunableValue_ReturnValue) == 0x000008, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetTunableValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetTunableValue_ReturnValue_1) == 0x00000C, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetTunableValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetTunableValue_ReturnValue_2) == 0x000010, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetTunableValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetTunableValue_ReturnValue_3) == 0x000020, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetTunableValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetTunableValue_ReturnValue_4) == 0x000024, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetTunableValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_GetTunableValue_ReturnValue_5) == 0x000028, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_GetTunableValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_RandomFloatInRange_Max_ImplicitCast) == 0x000030, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_RandomFloatInRange_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, CallFunc_RandomFloatInRange_Min_ImplicitCast) == 0x000038, "Member 'BP_ExposerCrow_C_SetTunableValues::CallFunc_RandomFloatInRange_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_SetTunableValues, K2Node_VariableSet_CirclingSpeed_ImplicitCast) == 0x000040, "Member 'BP_ExposerCrow_C_SetTunableValues::K2Node_VariableSet_CirclingSpeed_ImplicitCast' has a wrong offset!");

// Function BP_ExposerCrow.BP_ExposerCrow_C.SetIsInteriorBP
// 0x0001 (0x0001 - 0x0000)
struct BP_ExposerCrow_C_SetIsInteriorBP final
{
public:
	bool                                          Interior;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExposerCrow_C_SetIsInteriorBP) == 0x000001, "Wrong alignment on BP_ExposerCrow_C_SetIsInteriorBP");
static_assert(sizeof(BP_ExposerCrow_C_SetIsInteriorBP) == 0x000001, "Wrong size on BP_ExposerCrow_C_SetIsInteriorBP");
static_assert(offsetof(BP_ExposerCrow_C_SetIsInteriorBP, Interior) == 0x000000, "Member 'BP_ExposerCrow_C_SetIsInteriorBP::Interior' has a wrong offset!");

// Function BP_ExposerCrow.BP_ExposerCrow_C.ExecuteUbergraph_BP_ExposerCrow
// 0x0068 (0x0068 - 0x0000)
struct BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkResult Result)>             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x002C(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_withRandomDelay_1;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_withRandomDelay;                      // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_interior;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAkResult                                     K2Node_CustomEvent_Result;                         // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_A_ImplicitCast;       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_A_ImplicitCast_1;     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow) == 0x000008, "Wrong alignment on BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow");
static_assert(sizeof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow) == 0x000068, "Wrong size on BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, EntryPoint) == 0x000000, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, Temp_delegate_Variable) == 0x000004, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, Temp_delegate_Variable_1) == 0x00002C, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_PostAkEvent_ReturnValue) == 0x000040, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, K2Node_Event_withRandomDelay_1) == 0x000044, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::K2Node_Event_withRandomDelay_1' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, K2Node_Event_withRandomDelay) == 0x000045, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::K2Node_Event_withRandomDelay' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_RandomFloat_ReturnValue) == 0x000048, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000054, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, K2Node_Event_interior) == 0x000058, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::K2Node_Event_interior' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, K2Node_CustomEvent_Result) == 0x00005A, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_PostAkEvent_ReturnValue_1) == 0x00005C, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_Multiply_FloatFloat_A_ImplicitCast) == 0x000060, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_Multiply_FloatFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow, CallFunc_Multiply_FloatFloat_A_ImplicitCast_1) == 0x000064, "Member 'BP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow::CallFunc_Multiply_FloatFloat_A_ImplicitCast_1' has a wrong offset!");

// Function BP_ExposerCrow.BP_ExposerCrow_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct BP_ExposerCrow_C_CustomEvent_1 final
{
public:
	EAkResult                                     Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExposerCrow_C_CustomEvent_1) == 0x000001, "Wrong alignment on BP_ExposerCrow_C_CustomEvent_1");
static_assert(sizeof(BP_ExposerCrow_C_CustomEvent_1) == 0x000001, "Wrong size on BP_ExposerCrow_C_CustomEvent_1");
static_assert(offsetof(BP_ExposerCrow_C_CustomEvent_1, Result) == 0x000000, "Member 'BP_ExposerCrow_C_CustomEvent_1::Result' has a wrong offset!");

}


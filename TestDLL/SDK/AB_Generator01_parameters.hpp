#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Generator01

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_Generator01.AB_Generator01_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_Generator01_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_Generator01_C_AnimGraph) == 0x000008, "Wrong alignment on AB_Generator01_C_AnimGraph");
static_assert(sizeof(AB_Generator01_C_AnimGraph) == 0x000010, "Wrong size on AB_Generator01_C_AnimGraph");
static_assert(offsetof(AB_Generator01_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_Generator01_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function AB_Generator01.AB_Generator01_C.ExecuteUbergraph_AB_Generator01
// 0x0040 (0x0040 - 0x0000)
struct AB_Generator01_C_ExecuteUbergraph_AB_Generator01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Option_0_ImplicitCast;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet___FloatProperty_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01) == 0x000008, "Wrong alignment on AB_Generator01_C_ExecuteUbergraph_AB_Generator01");
static_assert(sizeof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01) == 0x000040, "Wrong size on AB_Generator01_C_ExecuteUbergraph_AB_Generator01");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, EntryPoint) == 0x000000, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000004, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000009, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, Temp_real_Variable) == 0x000010, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, Temp_bool_Variable) == 0x000018, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, Temp_bool_Variable_1) == 0x000019, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, K2Node_Select_Default) == 0x000020, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000028, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, K2Node_Select_Option_0_ImplicitCast) == 0x000030, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AB_Generator01_C_ExecuteUbergraph_AB_Generator01, K2Node_StructMemberSet___FloatProperty_ImplicitCast) == 0x000038, "Member 'AB_Generator01_C_ExecuteUbergraph_AB_Generator01::K2Node_StructMemberSet___FloatProperty_ImplicitCast' has a wrong offset!");

}


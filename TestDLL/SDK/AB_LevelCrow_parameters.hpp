#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_LevelCrow

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_LevelCrow.AB_LevelCrow_C.ExecuteUbergraph_AB_LevelCrow
// 0x0004 (0x0004 - 0x0000)
struct AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow) == 0x000004, "Wrong alignment on AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow");
static_assert(sizeof(AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow) == 0x000004, "Wrong size on AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow");
static_assert(offsetof(AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow, EntryPoint) == 0x000000, "Member 'AB_LevelCrow_C_ExecuteUbergraph_AB_LevelCrow::EntryPoint' has a wrong offset!");

// Function AB_LevelCrow.AB_LevelCrow_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_LevelCrow_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_LevelCrow_C_AnimGraph) == 0x000008, "Wrong alignment on AB_LevelCrow_C_AnimGraph");
static_assert(sizeof(AB_LevelCrow_C_AnimGraph) == 0x000010, "Wrong size on AB_LevelCrow_C_AnimGraph");
static_assert(offsetof(AB_LevelCrow_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_LevelCrow_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

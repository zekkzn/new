#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Entity_Endgame

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_Entity_Endgame.AB_Entity_Endgame_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_Entity_Endgame_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_Entity_Endgame_C_AnimGraph) == 0x000008, "Wrong alignment on AB_Entity_Endgame_C_AnimGraph");
static_assert(sizeof(AB_Entity_Endgame_C_AnimGraph) == 0x000010, "Wrong size on AB_Entity_Endgame_C_AnimGraph");
static_assert(offsetof(AB_Entity_Endgame_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_Entity_Endgame_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function AB_Entity_Endgame.AB_Entity_Endgame_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_Entity_Endgame_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Entity_Endgame_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_Entity_Endgame_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_Entity_Endgame_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_Entity_Endgame_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_Entity_Endgame_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_Entity_Endgame_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_Entity_Endgame.AB_Entity_Endgame_C.ExecuteUbergraph_AB_Entity_Endgame
// 0x0040 (0x0040 - 0x0000)
struct AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EndGameEntity_C*                    K2Node_DynamicCast_AsBP_End_Game_Entity;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EndGameEntity_C*                    K2Node_DynamicCast_AsBP_End_Game_Entity_1;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame) == 0x000008, "Wrong alignment on AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame");
static_assert(sizeof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame) == 0x000040, "Wrong size on AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, EntryPoint) == 0x000000, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, K2Node_DynamicCast_AsBP_End_Game_Entity) == 0x000018, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::K2Node_DynamicCast_AsBP_End_Game_Entity' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, CallFunc_GetOwningActor_ReturnValue_1) == 0x000028, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, K2Node_DynamicCast_AsBP_End_Game_Entity_1) == 0x000030, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::K2Node_DynamicCast_AsBP_End_Game_Entity_1' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'AB_Entity_Endgame_C_ExecuteUbergraph_AB_Entity_Endgame::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}


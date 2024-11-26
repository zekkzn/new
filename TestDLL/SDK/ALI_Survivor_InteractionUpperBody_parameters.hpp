#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_Survivor_InteractionUpperBody

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ALI_Survivor_InteractionUpperBody.ALI_Survivor_InteractionUpperBody_C.Survivor_InteractionUpperBody_Layer
// 0x0020 (0x0020 - 0x0000)
struct ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_Survivor_InteractionUpperBody_Layer;         // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer) == 0x000008, "Wrong alignment on ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer");
static_assert(sizeof(ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer) == 0x000020, "Wrong size on ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer");
static_assert(offsetof(ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer, InPose) == 0x000000, "Member 'ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer::InPose' has a wrong offset!");
static_assert(offsetof(ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer, Param_Survivor_InteractionUpperBody_Layer) == 0x000010, "Member 'ALI_Survivor_InteractionUpperBody_C_Survivor_InteractionUpperBody_Layer::Param_Survivor_InteractionUpperBody_Layer' has a wrong offset!");

}


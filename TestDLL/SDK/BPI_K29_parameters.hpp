#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_K29

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_K29.BPI_K29_C.K29 Get Rush Survivor Detector Box
// 0x0008 (0x0008 - 0x0000)
struct BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box final
{
public:
	class UStaticMeshComponent*                   Survivor_Detector_Box;                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box) == 0x000008, "Wrong alignment on BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box");
static_assert(sizeof(BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box) == 0x000008, "Wrong size on BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box");
static_assert(offsetof(BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box, Survivor_Detector_Box) == 0x000000, "Member 'BPI_K29_C_K29_Get_Rush_Survivor_Detector_Box::Survivor_Detector_Box' has a wrong offset!");

}


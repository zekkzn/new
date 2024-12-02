#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDProceduralCamera

#include "Basic.hpp"

#include "DBDProceduralCamera_structs.hpp"


namespace SDK::Params
{

// Function DBDProceduralCamera.ProceduralCameraRaD.ComputeTrackObstructionScore
// 0x0018 (0x0018 - 0x0000)
struct ProceduralCameraRaD_ComputeTrackObstructionScore final
{
public:
	struct FCameraShot                            CameraShot;                                        // 0x0000(0x0018)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ProceduralCameraRaD_ComputeTrackObstructionScore) == 0x000008, "Wrong alignment on ProceduralCameraRaD_ComputeTrackObstructionScore");
static_assert(sizeof(ProceduralCameraRaD_ComputeTrackObstructionScore) == 0x000018, "Wrong size on ProceduralCameraRaD_ComputeTrackObstructionScore");
static_assert(offsetof(ProceduralCameraRaD_ComputeTrackObstructionScore, CameraShot) == 0x000000, "Member 'ProceduralCameraRaD_ComputeTrackObstructionScore::CameraShot' has a wrong offset!");

// Function DBDProceduralCamera.ProceduralCameraRaD.OnCameraTransition
// 0x0008 (0x0008 - 0x0000)
struct ProceduralCameraRaD_OnCameraTransition final
{
public:
	float                                         TransitionDuration;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BeginAt;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ProceduralCameraRaD_OnCameraTransition) == 0x000004, "Wrong alignment on ProceduralCameraRaD_OnCameraTransition");
static_assert(sizeof(ProceduralCameraRaD_OnCameraTransition) == 0x000008, "Wrong size on ProceduralCameraRaD_OnCameraTransition");
static_assert(offsetof(ProceduralCameraRaD_OnCameraTransition, TransitionDuration) == 0x000000, "Member 'ProceduralCameraRaD_OnCameraTransition::TransitionDuration' has a wrong offset!");
static_assert(offsetof(ProceduralCameraRaD_OnCameraTransition, BeginAt) == 0x000004, "Member 'ProceduralCameraRaD_OnCameraTransition::BeginAt' has a wrong offset!");

}


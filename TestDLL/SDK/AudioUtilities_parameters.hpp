#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioUtilities

#include "Basic.hpp"


namespace SDK::Params
{

// Function AudioUtilities.SplineAudioEmitterActor.GetEmitterComponent
// 0x0008 (0x0008 - 0x0000)
struct SplineAudioEmitterActor_GetEmitterComponent final
{
public:
	class UAkComponent*                           ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SplineAudioEmitterActor_GetEmitterComponent) == 0x000008, "Wrong alignment on SplineAudioEmitterActor_GetEmitterComponent");
static_assert(sizeof(SplineAudioEmitterActor_GetEmitterComponent) == 0x000008, "Wrong size on SplineAudioEmitterActor_GetEmitterComponent");
static_assert(offsetof(SplineAudioEmitterActor_GetEmitterComponent, ReturnValue) == 0x000000, "Member 'SplineAudioEmitterActor_GetEmitterComponent::ReturnValue' has a wrong offset!");

// Function AudioUtilities.SplineAudioEmitterActor.GetSplineComponent
// 0x0008 (0x0008 - 0x0000)
struct SplineAudioEmitterActor_GetSplineComponent final
{
public:
	class USplineComponent*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SplineAudioEmitterActor_GetSplineComponent) == 0x000008, "Wrong alignment on SplineAudioEmitterActor_GetSplineComponent");
static_assert(sizeof(SplineAudioEmitterActor_GetSplineComponent) == 0x000008, "Wrong size on SplineAudioEmitterActor_GetSplineComponent");
static_assert(offsetof(SplineAudioEmitterActor_GetSplineComponent, ReturnValue) == 0x000000, "Member 'SplineAudioEmitterActor_GetSplineComponent::ReturnValue' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseCinematicCam

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseCinematicCam.BaseCinematicCam_C
// 0x0010 (0x09C0 - 0x09B0)
#pragma pack(push, 0x1)
class alignas(0x10) ABaseCinematicCam_C : public ACameraActor
{
public:
	class UParticleSystemComponent*               P_FullscreenBlood;                                 // 0x09B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateFullscreenBlood();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseCinematicCam_C">();
	}
	static class ABaseCinematicCam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseCinematicCam_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABaseCinematicCam_C) == 0x000010, "Wrong alignment on ABaseCinematicCam_C");
static_assert(sizeof(ABaseCinematicCam_C) == 0x0009C0, "Wrong size on ABaseCinematicCam_C");
static_assert(offsetof(ABaseCinematicCam_C, P_FullscreenBlood) == 0x0009B0, "Member 'ABaseCinematicCam_C::P_FullscreenBlood' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParadiseCam

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParadiseCam.ParadiseCam_C
// 0x0000 (0x09B0 - 0x09B0)
class AParadiseCam_C final : public ACameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParadiseCam_C">();
	}
	static class AParadiseCam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParadiseCam_C>();
	}
};
static_assert(alignof(AParadiseCam_C) == 0x000010, "Wrong alignment on AParadiseCam_C");
static_assert(sizeof(AParadiseCam_C) == 0x0009B0, "Wrong size on AParadiseCam_C");

}

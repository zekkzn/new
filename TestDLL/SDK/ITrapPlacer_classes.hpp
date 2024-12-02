#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITrapPlacer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ITrapPlacer.ITrapPlacer_C
// 0x0000 (0x0030 - 0x0030)
class IITrapPlacer_C final : public IInterface
{
public:
	void IsTrapPlacementValid(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITrapPlacer_C">();
	}
	static class IITrapPlacer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IITrapPlacer_C>();
	}
};
static_assert(alignof(IITrapPlacer_C) == 0x000008, "Wrong alignment on IITrapPlacer_C");
static_assert(sizeof(IITrapPlacer_C) == 0x000030, "Wrong size on IITrapPlacer_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDGraphics

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class DBDGraphics.FogOverrideComponent
// 0x0068 (0x0110 - 0x00A8)
class UFogOverrideComponent final : public UActorComponent
{
public:
	float                                         _interpolationDistance;                            // 0x00A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_AC[0x5C];                                      // 0x00AC(0x005C)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          _canBeDisabledByGameType;                          // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetInterpolationDistance(const float Distance);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FogOverrideComponent">();
	}
	static class UFogOverrideComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFogOverrideComponent>();
	}
};
static_assert(alignof(UFogOverrideComponent) == 0x000008, "Wrong alignment on UFogOverrideComponent");
static_assert(sizeof(UFogOverrideComponent) == 0x000110, "Wrong size on UFogOverrideComponent");
static_assert(offsetof(UFogOverrideComponent, _interpolationDistance) == 0x0000A8, "Member 'UFogOverrideComponent::_interpolationDistance' has a wrong offset!");
static_assert(offsetof(UFogOverrideComponent, _canBeDisabledByGameType) == 0x000108, "Member 'UFogOverrideComponent::_canBeDisabledByGameType' has a wrong offset!");

// Class DBDGraphics.FogOverrideManager
// 0x0030 (0x00D8 - 0x00A8)
class UFogOverrideManager final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x30];                                      // 0x00A8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FogOverrideManager">();
	}
	static class UFogOverrideManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFogOverrideManager>();
	}
};
static_assert(alignof(UFogOverrideManager) == 0x000008, "Wrong alignment on UFogOverrideManager");
static_assert(sizeof(UFogOverrideManager) == 0x0000D8, "Wrong size on UFogOverrideManager");

}

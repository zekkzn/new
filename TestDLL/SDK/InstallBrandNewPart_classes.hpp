#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InstallBrandNewPart

#include "Basic.hpp"

#include "DBDInteraction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InstallBrandNewPart.InstallBrandNewPart_C
// 0x0000 (0x0A20 - 0x0A20)
class UInstallBrandNewPart_C final : public UInstallBrandNewPartInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InstallBrandNewPart_C">();
	}
	static class UInstallBrandNewPart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInstallBrandNewPart_C>();
	}
};
static_assert(alignof(UInstallBrandNewPart_C) == 0x000010, "Wrong alignment on UInstallBrandNewPart_C");
static_assert(sizeof(UInstallBrandNewPart_C) == 0x000A20, "Wrong size on UInstallBrandNewPart_C");

}

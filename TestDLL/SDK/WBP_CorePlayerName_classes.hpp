#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerName

#include "Basic.hpp"

#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CorePlayerName.WBP_CorePlayerName_C
// 0x0000 (0x0328 - 0x0328)
class UWBP_CorePlayerName_C final : public UCorePlayerNameWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CorePlayerName_C">();
	}
	static class UWBP_CorePlayerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CorePlayerName_C>();
	}
};
static_assert(alignof(UWBP_CorePlayerName_C) == 0x000008, "Wrong alignment on UWBP_CorePlayerName_C");
static_assert(sizeof(UWBP_CorePlayerName_C) == 0x000328, "Wrong size on UWBP_CorePlayerName_C");

}


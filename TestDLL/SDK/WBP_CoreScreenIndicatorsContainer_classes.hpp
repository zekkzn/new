#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreScreenIndicatorsContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreScreenIndicatorsContainer.WBP_CoreScreenIndicatorsContainer_C
// 0x0008 (0x03C0 - 0x03B8)
class UWBP_CoreScreenIndicatorsContainer_C final : public UCoreScreenIndicatorsContainerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_CoreScreenIndicatorsContainer(int32 EntryPoint);
	void Check_Inactive_Items(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreScreenIndicatorsContainer_C">();
	}
	static class UWBP_CoreScreenIndicatorsContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreScreenIndicatorsContainer_C>();
	}
};
static_assert(alignof(UWBP_CoreScreenIndicatorsContainer_C) == 0x000008, "Wrong alignment on UWBP_CoreScreenIndicatorsContainer_C");
static_assert(sizeof(UWBP_CoreScreenIndicatorsContainer_C) == 0x0003C0, "Wrong size on UWBP_CoreScreenIndicatorsContainer_C");
static_assert(offsetof(UWBP_CoreScreenIndicatorsContainer_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_CoreScreenIndicatorsContainer_C::UberGraphFrame' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInputPrompt_WiggleThumbstick

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreInputPrompt_WiggleThumbstick.WBP_CoreInputPrompt_WiggleThumbstick_C
// 0x0018 (0x03F0 - 0x03D8)
class UWBP_CoreInputPrompt_WiggleThumbstick_C final : public UCoreInteractionPromptActionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IdleAnimation;                                     // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              ArrowsImage;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CoreInputPrompt_WiggleThumbstick(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreInputPrompt_WiggleThumbstick_C">();
	}
	static class UWBP_CoreInputPrompt_WiggleThumbstick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreInputPrompt_WiggleThumbstick_C>();
	}
};
static_assert(alignof(UWBP_CoreInputPrompt_WiggleThumbstick_C) == 0x000008, "Wrong alignment on UWBP_CoreInputPrompt_WiggleThumbstick_C");
static_assert(sizeof(UWBP_CoreInputPrompt_WiggleThumbstick_C) == 0x0003F0, "Wrong size on UWBP_CoreInputPrompt_WiggleThumbstick_C");
static_assert(offsetof(UWBP_CoreInputPrompt_WiggleThumbstick_C, UberGraphFrame) == 0x0003D8, "Member 'UWBP_CoreInputPrompt_WiggleThumbstick_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInputPrompt_WiggleThumbstick_C, IdleAnimation) == 0x0003E0, "Member 'UWBP_CoreInputPrompt_WiggleThumbstick_C::IdleAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInputPrompt_WiggleThumbstick_C, ArrowsImage) == 0x0003E8, "Member 'UWBP_CoreInputPrompt_WiggleThumbstick_C::ArrowsImage' has a wrong offset!");

}


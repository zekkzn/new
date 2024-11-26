#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInputPrompt_MovementThumbstick

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreInputPrompt_MovementThumbstick.WBP_CoreInputPrompt_MovementThumbstick_C
// 0x0020 (0x03F8 - 0x03D8)
class UWBP_CoreInputPrompt_MovementThumbstick_C final : public UCoreInteractionPromptActionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IdleAnimation;                                     // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              ArrowsImage;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ArrowsImage_1;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CoreInputPrompt_MovementThumbstick(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreInputPrompt_MovementThumbstick_C">();
	}
	static class UWBP_CoreInputPrompt_MovementThumbstick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreInputPrompt_MovementThumbstick_C>();
	}
};
static_assert(alignof(UWBP_CoreInputPrompt_MovementThumbstick_C) == 0x000008, "Wrong alignment on UWBP_CoreInputPrompt_MovementThumbstick_C");
static_assert(sizeof(UWBP_CoreInputPrompt_MovementThumbstick_C) == 0x0003F8, "Wrong size on UWBP_CoreInputPrompt_MovementThumbstick_C");
static_assert(offsetof(UWBP_CoreInputPrompt_MovementThumbstick_C, UberGraphFrame) == 0x0003D8, "Member 'UWBP_CoreInputPrompt_MovementThumbstick_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInputPrompt_MovementThumbstick_C, IdleAnimation) == 0x0003E0, "Member 'UWBP_CoreInputPrompt_MovementThumbstick_C::IdleAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInputPrompt_MovementThumbstick_C, ArrowsImage) == 0x0003E8, "Member 'UWBP_CoreInputPrompt_MovementThumbstick_C::ArrowsImage' has a wrong offset!");
static_assert(offsetof(UWBP_CoreInputPrompt_MovementThumbstick_C, ArrowsImage_1) == 0x0003F0, "Member 'UWBP_CoreInputPrompt_MovementThumbstick_C::ArrowsImage_1' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDInput

#include "Basic.hpp"

#include "DBDInput_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function DBDInput.DBDInputManager.AddPresenterRootWidget
// 0x0008 (0x0008 - 0x0000)
struct DBDInputManager_AddPresenterRootWidget final
{
public:
	class UUserWidget*                            PresenterRootWidget;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DBDInputManager_AddPresenterRootWidget) == 0x000008, "Wrong alignment on DBDInputManager_AddPresenterRootWidget");
static_assert(sizeof(DBDInputManager_AddPresenterRootWidget) == 0x000008, "Wrong size on DBDInputManager_AddPresenterRootWidget");
static_assert(offsetof(DBDInputManager_AddPresenterRootWidget, PresenterRootWidget) == 0x000000, "Member 'DBDInputManager_AddPresenterRootWidget::PresenterRootWidget' has a wrong offset!");

// Function DBDInput.DBDInputManager.RemovePresenterRootWidget
// 0x0008 (0x0008 - 0x0000)
struct DBDInputManager_RemovePresenterRootWidget final
{
public:
	const class UUserWidget*                      PresenterRootWidget;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DBDInputManager_RemovePresenterRootWidget) == 0x000008, "Wrong alignment on DBDInputManager_RemovePresenterRootWidget");
static_assert(sizeof(DBDInputManager_RemovePresenterRootWidget) == 0x000008, "Wrong size on DBDInputManager_RemovePresenterRootWidget");
static_assert(offsetof(DBDInputManager_RemovePresenterRootWidget, PresenterRootWidget) == 0x000000, "Member 'DBDInputManager_RemovePresenterRootWidget::PresenterRootWidget' has a wrong offset!");

// Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
// 0x0050 (0x0050 - 0x0000)
struct InteractiveWidgetInterface_HandleAnalogInputEvent final
{
public:
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InteractiveWidgetInterface_HandleAnalogInputEvent) == 0x000008, "Wrong alignment on InteractiveWidgetInterface_HandleAnalogInputEvent");
static_assert(sizeof(InteractiveWidgetInterface_HandleAnalogInputEvent) == 0x000050, "Wrong size on InteractiveWidgetInterface_HandleAnalogInputEvent");
static_assert(offsetof(InteractiveWidgetInterface_HandleAnalogInputEvent, InAnalogInputEvent) == 0x000000, "Member 'InteractiveWidgetInterface_HandleAnalogInputEvent::InAnalogInputEvent' has a wrong offset!");

// Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
// 0x0048 (0x0048 - 0x0000)
struct InteractiveWidgetInterface_HandleKeyDownEvent final
{
public:
	struct FKeyEvent                              InKeyEvent;                                        // 0x0000(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InteractiveWidgetInterface_HandleKeyDownEvent) == 0x000008, "Wrong alignment on InteractiveWidgetInterface_HandleKeyDownEvent");
static_assert(sizeof(InteractiveWidgetInterface_HandleKeyDownEvent) == 0x000048, "Wrong size on InteractiveWidgetInterface_HandleKeyDownEvent");
static_assert(offsetof(InteractiveWidgetInterface_HandleKeyDownEvent, InKeyEvent) == 0x000000, "Member 'InteractiveWidgetInterface_HandleKeyDownEvent::InKeyEvent' has a wrong offset!");

// Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
// 0x0048 (0x0048 - 0x0000)
struct InteractiveWidgetInterface_HandleKeyHoldEvent final
{
public:
	struct FKeyEvent                              InKeyEvent;                                        // 0x0000(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InteractiveWidgetInterface_HandleKeyHoldEvent) == 0x000008, "Wrong alignment on InteractiveWidgetInterface_HandleKeyHoldEvent");
static_assert(sizeof(InteractiveWidgetInterface_HandleKeyHoldEvent) == 0x000048, "Wrong size on InteractiveWidgetInterface_HandleKeyHoldEvent");
static_assert(offsetof(InteractiveWidgetInterface_HandleKeyHoldEvent, InKeyEvent) == 0x000000, "Member 'InteractiveWidgetInterface_HandleKeyHoldEvent::InKeyEvent' has a wrong offset!");

// Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
// 0x0048 (0x0048 - 0x0000)
struct InteractiveWidgetInterface_HandleKeyUpEvent final
{
public:
	struct FKeyEvent                              InKeyEvent;                                        // 0x0000(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InteractiveWidgetInterface_HandleKeyUpEvent) == 0x000008, "Wrong alignment on InteractiveWidgetInterface_HandleKeyUpEvent");
static_assert(sizeof(InteractiveWidgetInterface_HandleKeyUpEvent) == 0x000048, "Wrong size on InteractiveWidgetInterface_HandleKeyUpEvent");
static_assert(offsetof(InteractiveWidgetInterface_HandleKeyUpEvent, InKeyEvent) == 0x000000, "Member 'InteractiveWidgetInterface_HandleKeyUpEvent::InKeyEvent' has a wrong offset!");

// Function DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched
// 0x0001 (0x0001 - 0x0000)
struct UIInputUtilities_AreGamepadButtonsXOSwitched final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIInputUtilities_AreGamepadButtonsXOSwitched) == 0x000001, "Wrong alignment on UIInputUtilities_AreGamepadButtonsXOSwitched");
static_assert(sizeof(UIInputUtilities_AreGamepadButtonsXOSwitched) == 0x000001, "Wrong size on UIInputUtilities_AreGamepadButtonsXOSwitched");
static_assert(offsetof(UIInputUtilities_AreGamepadButtonsXOSwitched, ReturnValue) == 0x000000, "Member 'UIInputUtilities_AreGamepadButtonsXOSwitched::ReturnValue' has a wrong offset!");

// Function DBDInput.UIInputUtilities.GetKeyFromUIAction
// 0x0028 (0x0028 - 0x0000)
struct UIInputUtilities_GetKeyFromUIAction final
{
public:
	EUIActionType                                 ActionType;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUsingGamepad;                                    // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UIInputUtilities_GetKeyFromUIAction) == 0x000008, "Wrong alignment on UIInputUtilities_GetKeyFromUIAction");
static_assert(sizeof(UIInputUtilities_GetKeyFromUIAction) == 0x000028, "Wrong size on UIInputUtilities_GetKeyFromUIAction");
static_assert(offsetof(UIInputUtilities_GetKeyFromUIAction, ActionType) == 0x000000, "Member 'UIInputUtilities_GetKeyFromUIAction::ActionType' has a wrong offset!");
static_assert(offsetof(UIInputUtilities_GetKeyFromUIAction, IsUsingGamepad) == 0x000001, "Member 'UIInputUtilities_GetKeyFromUIAction::IsUsingGamepad' has a wrong offset!");
static_assert(offsetof(UIInputUtilities_GetKeyFromUIAction, ReturnValue) == 0x000008, "Member 'UIInputUtilities_GetKeyFromUIAction::ReturnValue' has a wrong offset!");

// Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
// 0x0028 (0x0028 - 0x0000)
struct UIInputUtilities_IsInputKeyControlModePairValid final
{
public:
	struct FKey                                   InputKey;                                          // 0x0000(0x0020)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControlMode                                  ControlMode;                                       // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(UIInputUtilities_IsInputKeyControlModePairValid) == 0x000008, "Wrong alignment on UIInputUtilities_IsInputKeyControlModePairValid");
static_assert(sizeof(UIInputUtilities_IsInputKeyControlModePairValid) == 0x000028, "Wrong size on UIInputUtilities_IsInputKeyControlModePairValid");
static_assert(offsetof(UIInputUtilities_IsInputKeyControlModePairValid, InputKey) == 0x000000, "Member 'UIInputUtilities_IsInputKeyControlModePairValid::InputKey' has a wrong offset!");
static_assert(offsetof(UIInputUtilities_IsInputKeyControlModePairValid, ControlMode) == 0x000020, "Member 'UIInputUtilities_IsInputKeyControlModePairValid::ControlMode' has a wrong offset!");
static_assert(offsetof(UIInputUtilities_IsInputKeyControlModePairValid, ReturnValue) == 0x000021, "Member 'UIInputUtilities_IsInputKeyControlModePairValid::ReturnValue' has a wrong offset!");

// Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
// 0x0010 (0x0010 - 0x0000)
struct UIInputUtilities_ShouldUseAtlantaControls final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(UIInputUtilities_ShouldUseAtlantaControls) == 0x000008, "Wrong alignment on UIInputUtilities_ShouldUseAtlantaControls");
static_assert(sizeof(UIInputUtilities_ShouldUseAtlantaControls) == 0x000010, "Wrong size on UIInputUtilities_ShouldUseAtlantaControls");
static_assert(offsetof(UIInputUtilities_ShouldUseAtlantaControls, WorldContextObject) == 0x000000, "Member 'UIInputUtilities_ShouldUseAtlantaControls::WorldContextObject' has a wrong offset!");
static_assert(offsetof(UIInputUtilities_ShouldUseAtlantaControls, ReturnValue) == 0x000008, "Member 'UIInputUtilities_ShouldUseAtlantaControls::ReturnValue' has a wrong offset!");

}

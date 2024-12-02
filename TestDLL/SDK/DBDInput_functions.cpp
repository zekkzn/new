#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDInput

#include "Basic.hpp"

#include "DBDInput_classes.hpp"
#include "DBDInput_parameters.hpp"


namespace SDK
{

// Function DBDInput.DBDInputManager.AddPresenterRootWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      PresenterRootWidget                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDBDInputManager::AddPresenterRootWidget(class UUserWidget* PresenterRootWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBDInputManager", "AddPresenterRootWidget");

	Params::DBDInputManager_AddPresenterRootWidget Parms{};

	Parms.PresenterRootWidget = PresenterRootWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.DBDInputManager.RemovePresenterRootWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      PresenterRootWidget                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDBDInputManager::RemovePresenterRootWidget(const class UUserWidget* PresenterRootWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBDInputManager", "RemovePresenterRootWidget");

	Params::DBDInputManager_RemovePresenterRootWidget Parms{};

	Parms.PresenterRootWidget = PresenterRootWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAnalogInputEvent                InAnalogInputEvent                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractiveWidgetInterface", "HandleAnalogInputEvent");

	Params::InteractiveWidgetInterface_HandleAnalogInputEvent Parms{};

	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        InKeyEvent                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractiveWidgetInterface", "HandleKeyDownEvent");

	Params::InteractiveWidgetInterface_HandleKeyDownEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        InKeyEvent                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractiveWidgetInterface", "HandleKeyHoldEvent");

	Params::InteractiveWidgetInterface_HandleKeyHoldEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        InKeyEvent                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractiveWidgetInterface", "HandleKeyUpEvent");

	Params::InteractiveWidgetInterface_HandleKeyUpEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIInputUtilities::AreGamepadButtonsXOSwitched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "AreGamepadButtonsXOSwitched");

	Params::UIInputUtilities_AreGamepadButtonsXOSwitched Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDInput.UIInputUtilities.GetKeyFromUIAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUIActionType                           ActionType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    IsUsingGamepad                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                             ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FKey UUIInputUtilities::GetKeyFromUIAction(const EUIActionType ActionType, bool IsUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "GetKeyFromUIAction");

	Params::UIInputUtilities_GetKeyFromUIAction Parms{};

	Parms.ActionType = ActionType;
	Parms.IsUsingGamepad = IsUsingGamepad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FKey                             InputKey                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EControlMode                            ControlMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIInputUtilities::IsInputKeyControlModePairValid(const struct FKey& InputKey, EControlMode ControlMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "IsInputKeyControlModePairValid");

	Params::UIInputUtilities_IsInputKeyControlModePairValid Parms{};

	Parms.InputKey = std::move(InputKey);
	Parms.ControlMode = ControlMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIInputUtilities::ShouldUseAtlantaControls(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "ShouldUseAtlantaControls");

	Params::UIInputUtilities_ShouldUseAtlantaControls Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


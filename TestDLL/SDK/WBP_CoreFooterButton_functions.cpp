#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreFooterButton

#include "Basic.hpp"

#include "WBP_CoreFooterButton_classes.hpp"
#include "WBP_CoreFooterButton_parameters.hpp"


namespace SDK
{

// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CoreFooterButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.ExecuteUbergraph_WBP_CoreFooterButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreFooterButton_C::ExecuteUbergraph_WBP_CoreFooterButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "ExecuteUbergraph_WBP_CoreFooterButton");

	Params::WBP_CoreFooterButton_C_ExecuteUbergraph_WBP_CoreFooterButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UWBP_CoreFooterButton_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnPressed
// (Event, Protected, BlueprintEvent)

void UWBP_CoreFooterButton_C::OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnReleased
// (Event, Protected, BlueprintEvent)

void UWBP_CoreFooterButton_C::OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWBP_CoreFooterButton_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreFooterButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "PreConstruct");

	Params::WBP_CoreFooterButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetBetaFeatureOverlayVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreFooterButton_C::SetBetaFeatureOverlayVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "SetBetaFeatureOverlayVisible");

	Params::WBP_CoreFooterButton_C_SetBetaFeatureOverlayVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetButtonDisableState
// (Event, Public, BlueprintEvent)
// Parameters:
// EButtonDisableState                     buttonDisableState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreFooterButton_C::SetButtonDisableState(EButtonDisableState buttonDisableState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "SetButtonDisableState");

	Params::WBP_CoreFooterButton_C_SetButtonDisableState Parms{};

	Parms.buttonDisableState = buttonDisableState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetHoveredColor
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreFooterButton_C::SetHoveredColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "SetHoveredColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetNotificationVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreFooterButton_C::SetNotificationVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "SetNotificationVisibility");

	Params::WBP_CoreFooterButton_C_SetNotificationVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetSubPanelText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Description                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreFooterButton_C::SetSubPanelText(const class FText& Title, const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "SetSubPanelText");

	Params::WBP_CoreFooterButton_C_SetSubPanelText Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetUnhoveredColor
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreFooterButton_C::SetUnhoveredColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "SetUnhoveredColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.ShowSubPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreFooterButton_C::ShowSubPanel(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "ShowSubPanel");

	Params::WBP_CoreFooterButton_C_ShowSubPanel Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.UpdateDisableVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreFooterButton_C::UpdateDisableVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "UpdateDisableVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreFooterButton.WBP_CoreFooterButton_C.UpdateInteractability
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreFooterButton_C::UpdateInteractability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreFooterButton_C", "UpdateInteractability");

	UObject::ProcessEvent(Func, nullptr);
}

}

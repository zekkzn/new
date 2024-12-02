#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreEquippedItem

#include "Basic.hpp"

#include "WBP_CoreEquippedItem_classes.hpp"
#include "WBP_CoreEquippedItem_parameters.hpp"


namespace SDK
{

// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.UpdateFakeItemVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Param_FakeItemIcon                                     (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// struct FKey                             InputKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::UpdateFakeItemVisuals(TSoftObjectPtr<class UTexture2D> Param_FakeItemIcon, const struct FKey& InputKey, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "UpdateFakeItemVisuals");

	Params::WBP_CoreEquippedItem_C_UpdateFakeItemVisuals Parms{};

	Parms.Param_FakeItemIcon = Param_FakeItemIcon;
	Parms.InputKey = std::move(InputKey);
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.OnControlModeChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EControlMode                            ControlMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::OnControlModeChangedBP(EControlMode ControlMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "OnControlModeChangedBP");

	Params::WBP_CoreEquippedItem_C_OnControlModeChangedBP Parms{};

	Parms.ControlMode = ControlMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.UpdateControlMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControlMode                            NewControlMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::UpdateControlMode(EControlMode NewControlMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "UpdateControlMode");

	Params::WBP_CoreEquippedItem_C_UpdateControlMode Parms{};

	Parms.NewControlMode = NewControlMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.ExecuteUbergraph_WBP_CoreEquippedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::ExecuteUbergraph_WBP_CoreEquippedItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "ExecuteUbergraph_WBP_CoreEquippedItem");

	Params::WBP_CoreEquippedItem_C_ExecuteUbergraph_WBP_CoreEquippedItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.SetFakeItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHoldingFakeItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Param_FakeItemIcon                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// struct FKey                             InputKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::SetFakeItem(bool IsHoldingFakeItem, const TSoftObjectPtr<class UTexture2D>& Param_FakeItemIcon, const struct FKey& InputKey, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "SetFakeItem");

	Params::WBP_CoreEquippedItem_C_SetFakeItem Parms{};

	Parms.IsHoldingFakeItem = IsHoldingFakeItem;
	Parms.Param_FakeItemIcon = Param_FakeItemIcon;
	Parms.InputKey = std::move(InputKey);
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.SetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemBundleViewData              ItemBundleData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreEquippedItem_C::SetData(const struct FItemBundleViewData& ItemBundleData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "SetData");

	Params::WBP_CoreEquippedItem_C_SetData Parms{};

	Parms.ItemBundleData = std::move(ItemBundleData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.SetActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::SetActiveState(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "SetActiveState");

	Params::WBP_CoreEquippedItem_C_SetActiveState Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.PlayFakeItemAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHoldingFakeItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::PlayFakeItemAnimation(bool IsHoldingFakeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "PlayFakeItemAnimation");

	Params::WBP_CoreEquippedItem_C_PlayFakeItemAnimation Parms{};

	Parms.IsHoldingFakeItem = IsHoldingFakeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FullClear                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreEquippedItem_C::ClearData(bool FullClear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "ClearData");

	Params::WBP_CoreEquippedItem_C_ClearData Parms{};

	Parms.FullClear = FullClear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreEquippedItem.WBP_CoreEquippedItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CoreEquippedItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreEquippedItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


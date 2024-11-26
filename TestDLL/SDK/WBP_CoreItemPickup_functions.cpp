#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreItemPickup

#include "Basic.hpp"

#include "WBP_CoreItemPickup_classes.hpp"
#include "WBP_CoreItemPickup_parameters.hpp"


namespace SDK
{

// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.ShowItemPickupPrompt
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreItemPickup_C::ShowItemPickupPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "ShowItemPickupPrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.SetRegularItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemPickupViewData              PickupItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemPickupViewData              CurrentItemData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CoreItemPickup_C::SetRegularItems(const struct FItemPickupViewData& PickupItemData, const struct FItemPickupViewData& CurrentItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "SetRegularItems");

	Params::WBP_CoreItemPickup_C_SetRegularItems Parms{};

	Parms.PickupItemData = std::move(PickupItemData);
	Parms.CurrentItemData = std::move(CurrentItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.SetK36Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemPickupViewData              PickupK36Data                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemPickupViewData              CurrentK36Data                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CoreItemPickup_C::SetK36Items(const struct FItemPickupViewData& PickupK36Data, const struct FItemPickupViewData& CurrentK36Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "SetK36Items");

	Params::WBP_CoreItemPickup_C_SetK36Items Parms{};

	Parms.PickupK36Data = std::move(PickupK36Data);
	Parms.CurrentK36Data = std::move(CurrentK36Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.SetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemPickupViewData              ItemToPickUpData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FItemPickupViewData              Param_CurrentItem                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreItemPickup_C::SetData(const struct FItemPickupViewData& ItemToPickUpData, const struct FItemPickupViewData& Param_CurrentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "SetData");

	Params::WBP_CoreItemPickup_C_SetData Parms{};

	Parms.ItemToPickUpData = std::move(ItemToPickUpData);
	Parms.Param_CurrentItem = std::move(Param_CurrentItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreItemPickup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "PreConstruct");

	Params::WBP_CoreItemPickup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.HideItemPickupPrompt
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreItemPickup_C::HideItemPickupPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "HideItemPickupPrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.ExecuteUbergraph_WBP_CoreItemPickup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreItemPickup_C::ExecuteUbergraph_WBP_CoreItemPickup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "ExecuteUbergraph_WBP_CoreItemPickup");

	Params::WBP_CoreItemPickup_C_ExecuteUbergraph_WBP_CoreItemPickup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemPickup.WBP_CoreItemPickup_C.ClearItemWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreItemPickup_C::ClearItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemPickup_C", "ClearItemWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

}


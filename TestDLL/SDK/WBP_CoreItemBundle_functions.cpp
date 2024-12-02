#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreItemBundle

#include "Basic.hpp"

#include "WBP_CoreItemBundle_classes.hpp"
#include "WBP_CoreItemBundle_parameters.hpp"


namespace SDK
{

// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.SetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemBundleViewData              Param_ItemBundleViewData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreItemBundle_C::SetData(const struct FItemBundleViewData& Param_ItemBundleViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "SetData");

	Params::WBP_CoreItemBundle_C_SetData Parms{};

	Parms.Param_ItemBundleViewData = std::move(Param_ItemBundleViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.SetActivateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreItemBundle_C::SetActivateState(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "SetActivateState");

	Params::WBP_CoreItemBundle_C_SetActivateState Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreItemBundle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "PreConstruct");

	Params::WBP_CoreItemBundle_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.OnLongPressEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CoreItemBundle_C::OnLongPressEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "OnLongPressEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.IsEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsEmpty                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreItemBundle_C::IsEmpty(bool* Param_IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "IsEmpty");

	Params::WBP_CoreItemBundle_C_IsEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsEmpty != nullptr)
		*Param_IsEmpty = Parms.Param_IsEmpty;
}


// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.ExecuteUbergraph_WBP_CoreItemBundle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreItemBundle_C::ExecuteUbergraph_WBP_CoreItemBundle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "ExecuteUbergraph_WBP_CoreItemBundle");

	Params::WBP_CoreItemBundle_C_ExecuteUbergraph_WBP_CoreItemBundle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreItemBundle.WBP_CoreItemBundle_C.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreItemBundle_C::ClearData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreItemBundle_C", "ClearData");

	UObject::ProcessEvent(Func, nullptr);
}

}


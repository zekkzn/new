#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePingStatus

#include "Basic.hpp"

#include "WBP_CorePingStatus_classes.hpp"
#include "WBP_CorePingStatus_parameters.hpp"


namespace SDK
{

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDImage*                        Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EConnectionQuality                      Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCriticalOnly                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdateVisibility(class UDBDImage* Image, EConnectionQuality Status, bool IsCriticalOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdateVisibility");

	Params::WBP_CorePingStatus_C_UpdateVisibility Parms{};

	Parms.Image = Image;
	Parms.Status = Status;
	Parms.IsCriticalOnly = IsCriticalOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdatePing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdatePing(EConnectionQuality Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdatePing");

	Params::WBP_CorePingStatus_C_UpdatePing Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdatePacketLoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdatePacketLoss(EConnectionQuality Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdatePacketLoss");

	Params::WBP_CorePingStatus_C_UpdatePacketLoss Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdateKillerPing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdateKillerPing(EConnectionQuality Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdateKillerPing");

	Params::WBP_CorePingStatus_C_UpdateKillerPing Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetLocalPingStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      LocalPing                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::SetLocalPingStatus(const EConnectionQuality& LocalPing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "SetLocalPingStatus");

	Params::WBP_CorePingStatus_C_SetLocalPingStatus Parms{};

	Parms.LocalPing = LocalPing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetLocalPacketLossStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      LocalPacketLoss                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::SetLocalPacketLossStatus(const EConnectionQuality& LocalPacketLoss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "SetLocalPacketLossStatus");

	Params::WBP_CorePingStatus_C_SetLocalPacketLossStatus Parms{};

	Parms.LocalPacketLoss = LocalPacketLoss;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetKillerConnectionQualityStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      KillerConnectionQuality                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::SetKillerConnectionQualityStatus(const EConnectionQuality& KillerConnectionQuality)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "SetKillerConnectionQualityStatus");

	Params::WBP_CorePingStatus_C_SetKillerConnectionQualityStatus Parms{};

	Parms.KillerConnectionQuality = KillerConnectionQuality;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "PreConstruct");

	Params::WBP_CorePingStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.InitPingStatus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumberOfSurvivors                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::InitPingStatus(const int32 NumberOfSurvivors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "InitPingStatus");

	Params::WBP_CorePingStatus_C_InitPingStatus Parms{};

	Parms.NumberOfSurvivors = NumberOfSurvivors;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.ExecuteUbergraph_WBP_CorePingStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::ExecuteUbergraph_WBP_CorePingStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "ExecuteUbergraph_WBP_CorePingStatus");

	Params::WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

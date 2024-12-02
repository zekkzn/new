#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheHuntress

#include "Basic.hpp"

#include "TheHuntress_classes.hpp"
#include "TheHuntress_parameters.hpp"


namespace SDK
{

// Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATheHuntressPower*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATheHuntressPower* UHatchetThrow::GetOwningHatchetSpawner() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatchetThrow", "GetOwningHatchetSpawner");

	Params::HatchetThrow_GetOwningHatchetSpawner Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHatchetLauncher::IsLaunchedHatchetFullyCharged() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatchetLauncher", "IsLaunchedHatchetFullyCharged");

	Params::HatchetLauncher_IsLaunchedHatchetFullyCharged Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHatchetRack::SetMovableHatchetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatchetRack", "SetMovableHatchetVisibility");

	Params::HatchetRack_SetMovableHatchetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*                       Player                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReloadHatchet::IsInteractionPossible_Shared(const class ADBDPlayer* Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReloadHatchet", "IsInteractionPossible_Shared");

	Params::ReloadHatchet_IsInteractionPossible_Shared Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheHuntress.TerritorialImperative.Multicast_OnPerkTriggered
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ADBDPlayer*                       Triggerer                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTerritorialImperative::Multicast_OnPerkTriggered(class ADBDPlayer* Triggerer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TerritorialImperative", "Multicast_OnPerkTriggered");

	Params::TerritorialImperative_Multicast_OnPerkTriggered Parms{};

	Parms.Triggerer = Triggerer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATheHuntressPower::Cosmetic_OnThrowInteractionCancelled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "Cosmetic_OnThrowInteractionCancelled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATheHuntressPower::Cosmetic_OnThrowInteractionStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "Cosmetic_OnThrowInteractionStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
// (Event, Public, BlueprintEvent)

void ATheHuntressPower::PrintDebugThrowInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "PrintDebugThrowInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TheHuntress.TheHuntressPower.SetHatchetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATheHuntressPower::SetHatchetVisible(const bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "SetHatchetVisible");

	Params::TheHuntressPower_SetHatchetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   PercentStrength                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATheHuntressPower::SetPercentThrowStrength(const float PercentStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "SetPercentThrowStrength");

	Params::TheHuntressPower_SetPercentThrowStrength Parms{};

	Parms.PercentStrength = PercentStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ATheHuntressPower::StartHatchetShineCosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "StartHatchetShineCosmetic");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*                     ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkComponent* ATheHuntressPower::GetAkAudioHatchetSpawner() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "GetAkAudioHatchetSpawner");

	Params::TheHuntressPower_GetAkAudioHatchetSpawner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetHatchetCooldown
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UHatchetCooldown*                 ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHatchetCooldown* ATheHuntressPower::GetHatchetCooldown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "GetHatchetCooldown");

	Params::TheHuntressPower_GetHatchetCooldown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBaseProjectileLauncher*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBaseProjectileLauncher* ATheHuntressPower::GetHatchetProjectileLauncher() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "GetHatchetProjectileLauncher");

	Params::TheHuntressPower_GetHatchetProjectileLauncher Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetOwningKiller
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASlasherPlayer*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASlasherPlayer* ATheHuntressPower::GetOwningKiller() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "GetOwningKiller");

	Params::TheHuntressPower_GetOwningKiller Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.HasHatchet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATheHuntressPower::HasHatchet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "HasHatchet");

	Params::TheHuntressPower_HasHatchet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATheHuntressPower::IsHatchetThrowFullyCharged() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TheHuntressPower", "IsHatchetThrowFullyCharged");

	Params::TheHuntressPower_IsHatchetThrowFullyCharged Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


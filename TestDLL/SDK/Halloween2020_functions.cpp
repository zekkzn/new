#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween2020

#include "Basic.hpp"

#include "Halloween2020_classes.hpp"
#include "Halloween2020_parameters.hpp"


namespace SDK
{

// Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBlightedSerumAddon::OnBlightedDashEnabledVfxSfx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightedSerumAddon", "OnBlightedDashEnabledVfxSfx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Halloween2020.BlightedSerumAddon.OnRep_BlightPowerPickedUp
// (Final, Native, Private)

void UBlightedSerumAddon::OnRep_BlightPowerPickedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightedSerumAddon", "OnRep_BlightPowerPickedUp");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
// (Final, Native, Private)

void UBlightedSerumAddon::OnRep_DashInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightedSerumAddon", "OnRep_DashInteraction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlightedSerumCooldownInteraction*CooldownInteraction                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlightedSerumCollisionInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* CooldownInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightedSerumCollisionInteraction", "SetCooldownInteraction");

	Params::BlightedSerumCollisionInteraction_SetCooldownInteraction Parms{};

	Parms.CooldownInteraction = CooldownInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlightedSerumCollisionInteraction*CollisionInteraction                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlightedSerumDashInteraction::SetCollisionInteraction(class UBlightedSerumCollisionInteraction* CollisionInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightedSerumDashInteraction", "SetCollisionInteraction");

	Params::BlightedSerumDashInteraction_SetCollisionInteraction Parms{};

	Parms.CollisionInteraction = CollisionInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlightedSerumCooldownInteraction*CooldownInteraction                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlightedSerumDashInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* CooldownInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightedSerumDashInteraction", "SetCooldownInteraction");

	Params::BlightedSerumDashInteraction_SetCooldownInteraction Parms{};

	Parms.CooldownInteraction = CooldownInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToxinPlantInteractable::OnSalvageInteractionFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToxinPlantInteractable", "OnSalvageInteractionFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToxinPlantInteractable::OnSalvageInteractionStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToxinPlantInteractable", "OnSalvageInteractionStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToxinPlantInteractable::OnToxinPlantComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToxinPlantInteractable", "OnToxinPlantComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsComplete                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AToxinPlantInteractable::SetToxinPlantComplete(const bool IsComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToxinPlantInteractable", "SetToxinPlantComplete");

	Params::ToxinPlantInteractable_SetToxinPlantComplete Parms{};

	Parms.IsComplete = IsComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AToxinPlantInteractable::IsToxinPlantComplete() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToxinPlantInteractable", "IsToxinPlantComplete");

	Params::ToxinPlantInteractable_IsToxinPlantComplete Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

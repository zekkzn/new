#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDAttack

#include "Basic.hpp"

#include "DBDAttack_classes.hpp"
#include "DBDAttack_parameters.hpp"


namespace SDK
{

// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged
// (Final, Native, Private)
// Parameters:
// class ADBDPlayer*                       Killer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChanged(class ADBDPlayer* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PounceAttackOpenSubstateCosmetic", "OnLocallyObservedChanged");

	Params::PounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged Parms{};

	Parms.Killer = Killer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Killer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChangedCosmetic(class ADBDPlayer* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PounceAttackOpenSubstateCosmetic", "OnLocallyObservedChangedCosmetic");

	Params::PounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Killer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPounceAttackOpenSubstateCosmetic::OnLungeAttackEndCosmetic(class ADBDPlayer* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PounceAttackOpenSubstateCosmetic", "OnLungeAttackEndCosmetic");

	Params::PounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Killer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPounceAttackOpenSubstateCosmetic::OnLungeAttackStartCosmetic(class ADBDPlayer* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PounceAttackOpenSubstateCosmetic", "OnLungeAttackStartCosmetic");

	Params::PounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*                       Killer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPounceAttackOpenSubstateCosmetic::IsLungeAttackAugmented(class ADBDPlayer* Killer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PounceAttackOpenSubstateCosmetic", "IsLungeAttackAugmented");

	Params::PounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented Parms{};

	Parms.Killer = Killer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

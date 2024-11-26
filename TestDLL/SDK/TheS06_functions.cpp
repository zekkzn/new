#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS06

#include "Basic.hpp"

#include "TheS06_classes.hpp"
#include "TheS06_parameters.hpp"


namespace SDK
{

// Function TheS06.ObjectOfObsession.Authority_OnDamageStateChanged
// (Final, Native, Private)
// Parameters:
// ECamperDamageState                      OldDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECamperDamageState                      CurrentDamageState                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectOfObsession::Authority_OnDamageStateChanged(ECamperDamageState OldDamageState, ECamperDamageState CurrentDamageState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectOfObsession", "Authority_OnDamageStateChanged");

	Params::ObjectOfObsession_Authority_OnDamageStateChanged Parms{};

	Parms.OldDamageState = OldDamageState;
	Parms.CurrentDamageState = CurrentDamageState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS06.ObjectOfObsession.Authority_OnPlayerImmobilizeStateChanged
// (Final, Native, Private)
// Parameters:
// EImmobilizedState                       OldImmobilizeState                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EImmobilizedState                       NewImmobilizeState                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectOfObsession::Authority_OnPlayerImmobilizeStateChanged(const EImmobilizedState OldImmobilizeState, const EImmobilizedState NewImmobilizeState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectOfObsession", "Authority_OnPlayerImmobilizeStateChanged");

	Params::ObjectOfObsession_Authority_OnPlayerImmobilizeStateChanged Parms{};

	Parms.OldImmobilizeState = OldImmobilizeState;
	Parms.NewImmobilizeState = NewImmobilizeState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


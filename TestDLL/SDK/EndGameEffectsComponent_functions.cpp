#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndGameEffectsComponent

#include "Basic.hpp"

#include "EndGameEffectsComponent_classes.hpp"
#include "EndGameEffectsComponent_parameters.hpp"


namespace SDK
{

// Function EndGameEffectsComponent.EndGameEffectsComponent_C.EndGameOver
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameEventType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameEventData                   GameEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UEndGameEffectsComponent_C::EndGameOver(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "EndGameOver");

	Params::EndGameEffectsComponent_C_EndGameOver Parms{};

	Parms.GameEventType = std::move(GameEventType);
	Parms.GameEventData = std::move(GameEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.ExecuteUbergraph_EndGameEffectsComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndGameEffectsComponent_C::ExecuteUbergraph_EndGameEffectsComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "ExecuteUbergraph_EndGameEffectsComponent");

	Params::EndGameEffectsComponent_C_ExecuteUbergraph_EndGameEffectsComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.GetDBDPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADBDPlayer*                       Player                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEndGameEffectsComponent_C::GetDBDPlayer(class ADBDPlayer** Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "GetDBDPlayer");

	Params::EndGameEffectsComponent_C_GetDBDPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnLocallyObservedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEndGameEffectsComponent_C::OnLocallyObservedChanged(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "OnLocallyObservedChanged");

	Params::EndGameEffectsComponent_C_OnLocallyObservedChanged Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnTimeDilationChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameEventType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameEventData                   GameEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UEndGameEffectsComponent_C::OnTimeDilationChanged(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "OnTimeDilationChanged");

	Params::EndGameEffectsComponent_C_OnTimeDilationChanged Parms{};

	Parms.GameEventType = std::move(GameEventType);
	Parms.GameEventData = std::move(GameEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.PlayCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           CameraShake                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEndGameEffectsComponent_C::PlayCameraShake(class UClass* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "PlayCameraShake");

	Params::EndGameEffectsComponent_C_PlayCameraShake Parms{};

	Parms.CameraShake = CameraShake;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndGameEffectsComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "ReceiveTick");

	Params::EndGameEffectsComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.RegisterLocallyObservedEvents
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UEndGameEffectsComponent_C::RegisterLocallyObservedEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "RegisterLocallyObservedEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReminderEffect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameEventType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameEventData                   GameEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UEndGameEffectsComponent_C::ReminderEffect(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "ReminderEffect");

	Params::EndGameEffectsComponent_C_ReminderEffect Parms{};

	Parms.GameEventType = std::move(GameEventType);
	Parms.GameEventData = std::move(GameEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartEndGameEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    JustStarted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndGameEffectsComponent_C::StartEndGameEffects(bool JustStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "StartEndGameEffects");

	Params::EndGameEffectsComponent_C_StartEndGameEffects Parms{};

	Parms.JustStarted = JustStarted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartUpdateTimer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameEventType                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameEventData                   GameEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UEndGameEffectsComponent_C::StartUpdateTimer(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "StartUpdateTimer");

	Params::EndGameEffectsComponent_C_StartUpdateTimer Parms{};

	Parms.GameEventType = std::move(GameEventType);
	Parms.GameEventData = std::move(GameEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.StopCameraShake
// (Public, BlueprintCallable, BlueprintEvent)

void UEndGameEffectsComponent_C::StopCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "StopCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndGameEffectsComponent.EndGameEffectsComponent_C.UnregisterLocallyObservedEvents
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UEndGameEffectsComponent_C::UnregisterLocallyObservedEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndGameEffectsComponent_C", "UnregisterLocallyObservedEvents");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Anniversary2024

#include "Basic.hpp"

#include "Anniversary2024_classes.hpp"
#include "Anniversary2024_parameters.hpp"


namespace SDK
{

// Function Anniversary2024.Anniversary2024EventCheatComponent.DBD_ActivateNextTryksCard
// (Final, Exec, Native, Public)

void UAnniversary2024EventCheatComponent::DBD_ActivateNextTryksCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024EventCheatComponent", "DBD_ActivateNextTryksCard");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.Anniversary2024EventCheatComponent.Multicast_ActivateNextCard
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void UAnniversary2024EventCheatComponent::Multicast_ActivateNextCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024EventCheatComponent", "Multicast_ActivateNextCard");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.Anniversary2024EventCheatComponent.DBD_ForceTryksDraw
// (Final, Exec, Native, Public, HasOutParams, Const)
// Parameters:
// class FString                           CardIds                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnniversary2024EventCheatComponent::DBD_ForceTryksDraw(class FString* CardIds) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024EventCheatComponent", "DBD_ForceTryksDraw");

	Params::Anniversary2024EventCheatComponent_DBD_ForceTryksDraw Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CardIds != nullptr)
		*CardIds = std::move(Parms.CardIds);
}


// Function Anniversary2024.Anniversary2024EventCheatComponent.DBD_ForceTryksRedraw
// (Final, Exec, Native, Public, Const)

void UAnniversary2024EventCheatComponent::DBD_ForceTryksRedraw() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024EventCheatComponent", "DBD_ForceTryksRedraw");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.Anniversary2024EventCheatComponent.DBD_TriggerTryksEndGameEvent
// (Final, Exec, Native, Public, Const)

void UAnniversary2024EventCheatComponent::DBD_TriggerTryksEndGameEvent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024EventCheatComponent", "DBD_TriggerTryksEndGameEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.Anniversary2024EventCheatComponent.DBD_TriggerTryksNearby
// (Final, Exec, Native, Public, Const)

void UAnniversary2024EventCheatComponent::DBD_TriggerTryksNearby() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024EventCheatComponent", "DBD_TriggerTryksNearby");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.Anniversary2024TryksBase.Cosmetic_TryksHidden
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnniversary2024TryksBase::Cosmetic_TryksHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "Cosmetic_TryksHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anniversary2024.Anniversary2024TryksBase.Cosmetic_TryksInitialized
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnniversary2024TryksBase::Cosmetic_TryksInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "Cosmetic_TryksInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anniversary2024.Anniversary2024TryksBase.Cosmetic_TryksShown
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnniversary2024TryksBase::Cosmetic_TryksShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "Cosmetic_TryksShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anniversary2024.Anniversary2024TryksBase.HideTryks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAnniversary2024TryksBase::HideTryks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "HideTryks");

	Params::Anniversary2024TryksBase_HideTryks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Anniversary2024.Anniversary2024TryksBase.SetNextTryksAudioFromGameEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     EventTag                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAnniversary2024TryksBase::SetNextTryksAudioFromGameEvent(const struct FGameplayTag& EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "SetNextTryksAudioFromGameEvent");

	Params::Anniversary2024TryksBase_SetNextTryksAudioFromGameEvent Parms{};

	Parms.EventTag = std::move(EventTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Anniversary2024.Anniversary2024TryksBase.ShowTryks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAnniversary2024TryksBase::ShowTryks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "ShowTryks");

	Params::Anniversary2024TryksBase_ShowTryks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Anniversary2024.Anniversary2024TryksBase.IsTryksAudioSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAnniversary2024TryksBase::IsTryksAudioSet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024TryksBase", "IsTryksAudioSet");

	Params::Anniversary2024TryksBase_IsTryksAudioSet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Anniversary2024.Anniversary2024LobbyTryks.K2_TryksPeek
// (Event, Protected, BlueprintEvent)
// Parameters:
// EDBDCameraViewType                      ViewType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAnniversary2024LobbyTryks::K2_TryksPeek(const EDBDCameraViewType ViewType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024LobbyTryks", "K2_TryksPeek");

	Params::Anniversary2024LobbyTryks_K2_TryksPeek Parms{};

	Parms.ViewType = ViewType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.Anniversary2024Tryks.Cosmetic_SetupAnimationType
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    EndGameVariant                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAnniversary2024Tryks::Cosmetic_SetupAnimationType(const class ADBDPlayer* Player, const bool EndGameVariant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024Tryks", "Cosmetic_SetupAnimationType");

	Params::Anniversary2024Tryks_Cosmetic_SetupAnimationType Parms{};

	Parms.Player = Player;
	Parms.EndGameVariant = EndGameVariant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.Anniversary2024Tryks.Cosmetic_TryksTookOverMarionette
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class AAnniversaryMarionette*           Marionette                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAnniversary2024Tryks::Cosmetic_TryksTookOverMarionette(const class AAnniversaryMarionette* Marionette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anniversary2024Tryks", "Cosmetic_TryksTookOverMarionette");

	Params::Anniversary2024Tryks_Cosmetic_TryksTookOverMarionette Parms{};

	Parms.Marionette = Marionette;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.QuietModeInteraction.Authority_OnDamageStateChanged
// (Final, Native, Private)
// Parameters:
// ECamperDamageState                      OldDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECamperDamageState                      NewDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuietModeInteraction::Authority_OnDamageStateChanged(ECamperDamageState OldDamageState, ECamperDamageState NewDamageState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuietModeInteraction", "Authority_OnDamageStateChanged");

	Params::QuietModeInteraction_Authority_OnDamageStateChanged Parms{};

	Parms.OldDamageState = OldDamageState;
	Parms.NewDamageState = NewDamageState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.QuietModeInteraction.Cosmetic_Activated
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ACamperPlayer*                    ActivatingSurvivor                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuietModeInteraction::Cosmetic_Activated(class ACamperPlayer* ActivatingSurvivor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuietModeInteraction", "Cosmetic_Activated");

	Params::QuietModeInteraction_Cosmetic_Activated Parms{};

	Parms.ActivatingSurvivor = ActivatingSurvivor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.QuietModeInteraction.Cosmetic_Deactivated
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ACamperPlayer*                    ActivatingSurvivor                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuietModeInteraction::Cosmetic_Deactivated(class ACamperPlayer* ActivatingSurvivor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuietModeInteraction", "Cosmetic_Deactivated");

	Params::QuietModeInteraction_Cosmetic_Deactivated Parms{};

	Parms.ActivatingSurvivor = ActivatingSurvivor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.QuietModeInteraction.OnRep_IsQuietModeActive
// (Final, Native, Private)

void UQuietModeInteraction::OnRep_IsQuietModeActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuietModeInteraction", "OnRep_IsQuietModeActive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.RemoteHookInteraction.Cosmetic_BeginRemoteHook
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ACamperPlayer*                    SurvivorBeingHooked                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteHookInteraction::Cosmetic_BeginRemoteHook(class ACamperPlayer* SurvivorBeingHooked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RemoteHookInteraction", "Cosmetic_BeginRemoteHook");

	Params::RemoteHookInteraction_Cosmetic_BeginRemoteHook Parms{};

	Parms.SurvivorBeingHooked = SurvivorBeingHooked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.RemoteHookInteraction.Cosmetic_RemoteHookSurvivor
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ACamperPlayer*                    SurvivorBeingHooked                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteHookInteraction::Cosmetic_RemoteHookSurvivor(class ACamperPlayer* SurvivorBeingHooked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RemoteHookInteraction", "Cosmetic_RemoteHookSurvivor");

	Params::RemoteHookInteraction_Cosmetic_RemoteHookSurvivor Parms{};

	Parms.SurvivorBeingHooked = SurvivorBeingHooked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.RemoteHookInteraction.Multicast_RemoteHook
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ACamperPlayer*                    SurvivorBeingHooked                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMeatHook*                        SelectedHook                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteHookInteraction::Multicast_RemoteHook(class ACamperPlayer* SurvivorBeingHooked, class AMeatHook* SelectedHook)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RemoteHookInteraction", "Multicast_RemoteHook");

	Params::RemoteHookInteraction_Multicast_RemoteHook Parms{};

	Parms.SurvivorBeingHooked = SurvivorBeingHooked;
	Parms.SelectedHook = SelectedHook;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.TryksCard.Cosmetic_OnCardActivation
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UTryksCard::Cosmetic_OnCardActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksCard", "Cosmetic_OnCardActivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anniversary2024.TryksCard.Cosmetic_OnCardActivationNothingHappened
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UTryksCard::Cosmetic_OnCardActivationNothingHappened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksCard", "Cosmetic_OnCardActivationNothingHappened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anniversary2024.TryksCard.Cosmetic_OnCardDeactivation
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UTryksCard::Cosmetic_OnCardDeactivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksCard", "Cosmetic_OnCardDeactivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Cosmetic_OnCardActivated
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UTryksCard*                       Card                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Cosmetic_OnCardActivated(class UTryksCard* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Cosmetic_OnCardActivated");

	Params::TryksEffectCardsControllerComponent_Cosmetic_OnCardActivated Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Cosmetic_OnCardDeactivated
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UTryksCard*                       Card                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Cosmetic_OnCardDeactivated(class UTryksCard* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Cosmetic_OnCardDeactivated");

	Params::TryksEffectCardsControllerComponent_Cosmetic_OnCardDeactivated Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Cosmetic_OnCardDeactivatedDueToNothingHappened
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UTryksCard*                       Card                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Cosmetic_OnCardDeactivatedDueToNothingHappened(class UTryksCard* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Cosmetic_OnCardDeactivatedDueToNothingHappened");

	Params::TryksEffectCardsControllerComponent_Cosmetic_OnCardDeactivatedDueToNothingHappened Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Cosmetic_OnCardEffectCompleted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UTryksCard*                       Card                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Cosmetic_OnCardEffectCompleted(class UTryksCard* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Cosmetic_OnCardEffectCompleted");

	Params::TryksEffectCardsControllerComponent_Cosmetic_OnCardEffectCompleted Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Cosmetic_OnPointGained
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   CurrentPoints                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Cosmetic_OnPointGained(const int32 CurrentPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Cosmetic_OnPointGained");

	Params::TryksEffectCardsControllerComponent_Cosmetic_OnPointGained Parms{};

	Parms.CurrentPoints = CurrentPoints;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Multicast_CreateCards
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<class FString>                   DrawnCardsNames                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Multicast_CreateCards(const TArray<class FString>& DrawnCardsNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Multicast_CreateCards");

	Params::TryksEffectCardsControllerComponent_Multicast_CreateCards Parms{};

	Parms.DrawnCardsNames = std::move(DrawnCardsNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.Multicast_RedrawCards
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<class FString>                   DrawnCardsNames                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTryksEffectCardsControllerComponent::Multicast_RedrawCards(const TArray<class FString>& DrawnCardsNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "Multicast_RedrawCards");

	Params::TryksEffectCardsControllerComponent_Multicast_RedrawCards Parms{};

	Parms.DrawnCardsNames = std::move(DrawnCardsNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Anniversary2024.TryksEffectCardsControllerComponent.OnIntroComplete
// (Final, Native, Private)

void UTryksEffectCardsControllerComponent::OnIntroComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TryksEffectCardsControllerComponent", "OnIntroComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

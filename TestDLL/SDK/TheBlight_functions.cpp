#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheBlight

#include "Basic.hpp"

#include "TheBlight_classes.hpp"
#include "TheBlight_parameters.hpp"


namespace SDK
{

// Function TheBlight.BlightPower.OnPowerStateChanged
// (Final, Native, Private)
// Parameters:
// EWallGrabState                          PreviousState                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWallGrabState                          NewState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABlightPower::OnPowerStateChanged(const EWallGrabState PreviousState, const EWallGrabState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPower", "OnPowerStateChanged");

	Params::BlightPower_OnPowerStateChanged Parms{};

	Parms.PreviousState = PreviousState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABlightPowerEstimatedCollisionIndicator::OnHideIndicator_Cosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerEstimatedCollisionIndicator", "OnHideIndicator_Cosmetic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABlightPowerEstimatedCollisionIndicator::OnShowIndicator_Cosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerEstimatedCollisionIndicator", "OnShowIndicator_Cosmetic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TheBlight.BlightPowerState.GetStateDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlightPowerState::GetStateDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerState", "GetStateDuration");

	Params::BlightPowerState_GetStateDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EWallGrabState                          NewState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlightPowerStateComponent::Multicast_SetWallGrabState(const EWallGrabState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "Multicast_SetWallGrabState");

	Params::BlightPowerStateComponent_Multicast_SetWallGrabState Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay
// (Final, Native, Private)

void UBlightPowerStateComponent::OnLevelReadyToPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "OnLevelReadyToPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer
// (Final, Native, Private)

void UBlightPowerStateComponent::OnRep_StateTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "OnRep_StateTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// EWallGrabState                          NewState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlightPowerStateComponent::Server_SetWallGrabState(const EWallGrabState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "Server_SetWallGrabState");

	Params::BlightPowerStateComponent_Server_SetWallGrabState Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.BlightPowerStateComponent.CanDash
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlightPowerStateComponent::CanDash() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "CanDash");

	Params::BlightPowerStateComponent_CanDash Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlightPowerState*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlightPowerState* UBlightPowerStateComponent::GetCurrentPowerState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetCurrentPowerState");

	Params::BlightPowerStateComponent_GetCurrentPowerState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlightPowerStateComponent::GetLookAngleDegrees() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetLookAngleDegrees");

	Params::BlightPowerStateComponent_GetLookAngleDegrees Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetPowerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWallGrabState                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EWallGrabState UBlightPowerStateComponent::GetPowerState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetPowerState");

	Params::BlightPowerStateComponent_GetPowerState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWallGrabState                          StateEnum                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlightPowerState*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlightPowerState* UBlightPowerStateComponent::GetPowerStateByEnum(const EWallGrabState StateEnum) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetPowerStateByEnum");

	Params::BlightPowerStateComponent_GetPowerStateByEnum Parms{};

	Parms.StateEnum = StateEnum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlightPowerStateComponent::GetStateTimeElapsed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetStateTimeElapsed");

	Params::BlightPowerStateComponent_GetStateTimeElapsed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetStateTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTimerObject*                     ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTimerObject* UBlightPowerStateComponent::GetStateTimer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetStateTimer");

	Params::BlightPowerStateComponent_GetStateTimer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlightPowerStateComponent::GetStateTimeRemaining() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "GetStateTimeRemaining");

	Params::BlightPowerStateComponent_GetStateTimeRemaining Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens
// (Final, Native, Private, Const)

void UBlightPowerStateComponent::OnRep_DashTokens() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlightPowerStateComponent", "OnRep_DashTokens");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ADBDPlayer*                       Survivor                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonsGrip::Multicast_OnRevealSurvivor(class ADBDPlayer* Survivor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragonsGrip", "Multicast_OnRevealSurvivor");

	Params::DragonsGrip_Multicast_OnRevealSurvivor Parms{};

	Parms.Survivor = Survivor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.DragonsGrip.OnRevealSurvivor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Instigator                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonsGrip::OnRevealSurvivor(class ADBDPlayer* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragonsGrip", "OnRevealSurvivor");

	Params::DragonsGrip_OnRevealSurvivor Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheBlight.DragonsGrip.GetActivationDurationAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDragonsGrip::GetActivationDurationAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragonsGrip", "GetActivationDurationAtLevel");

	Params::DragonsGrip_GetActivationDurationAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.DragonsGrip.GetCooldownDurationAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDragonsGrip::GetCooldownDurationAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragonsGrip", "GetCooldownDurationAtLevel");

	Params::DragonsGrip_GetCooldownDurationAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.DragonsGrip.GetExposedEffectDurationAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDragonsGrip::GetExposedEffectDurationAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DragonsGrip", "GetExposedEffectDurationAtLevel");

	Params::DragonsGrip_GetExposedEffectDurationAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.HexBloodFavor.GetPalletInRangeAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHexBloodFavor::GetPalletInRangeAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexBloodFavor", "GetPalletInRangeAtLevel");

	Params::HexBloodFavor_GetPalletInRangeAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.HexBloodFavor.GetPalletPulldownBlockTimeAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHexBloodFavor::GetPalletPulldownBlockTimeAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexBloodFavor", "GetPalletPulldownBlockTimeAtLevel");

	Params::HexBloodFavor_GetPalletPulldownBlockTimeAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameEventData                   GameEventData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHexUndying::Authority_OnCamperCleansedHexPerk(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexUndying", "Authority_OnCamperCleansedHexPerk");

	Params::HexUndying_Authority_OnCamperCleansedHexPerk Parms{};

	Parms.GameplayTag = std::move(GameplayTag);
	Parms.GameEventData = std::move(GameEventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.HexUndying.Authority_OnSurvivorAdded
// (Final, Native, Private)
// Parameters:
// class ACamperPlayer*                    Survivor                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHexUndying::Authority_OnSurvivorAdded(class ACamperPlayer* Survivor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexUndying", "Authority_OnSurvivorAdded");

	Params::HexUndying_Authority_OnSurvivorAdded Parms{};

	Parms.Survivor = Survivor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
// (Final, Native, Private)
// Parameters:
// class UGameplayModifierContainer*       GameplayModifierContainer                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Param_IsApplicable                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHexUndying::Authority_UpdateHexPerkStatusView(class UGameplayModifierContainer* GameplayModifierContainer, bool Param_IsApplicable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexUndying", "Authority_UpdateHexPerkStatusView");

	Params::HexUndying_Authority_UpdateHexPerkStatusView Parms{};

	Parms.GameplayModifierContainer = GameplayModifierContainer;
	Parms.Param_IsApplicable = Param_IsApplicable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheBlight.HexUndying.GetRevealAuraDistanceFromTotemAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHexUndying::GetRevealAuraDistanceFromTotemAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexUndying", "GetRevealAuraDistanceFromTotemAtLevel");

	Params::HexUndying_GetRevealAuraDistanceFromTotemAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

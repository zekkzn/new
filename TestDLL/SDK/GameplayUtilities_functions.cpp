#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayUtilities

#include "Basic.hpp"

#include "GameplayUtilities_classes.hpp"
#include "GameplayUtilities_parameters.hpp"


namespace SDK
{

// Function GameplayUtilities.CharacterPusherComponent.Construct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCapsuleComponent*                CharacterDetector                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCapsuleComponent*                CharacterCollision                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBasePushStrategyComponent*       PushStrategy                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterPusherComponent::Construct(class UCapsuleComponent* CharacterDetector, class UCapsuleComponent* CharacterCollision, class UBasePushStrategyComponent* PushStrategy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterPusherComponent", "Construct");

	Params::CharacterPusherComponent_Construct Parms{};

	Parms.CharacterDetector = CharacterDetector;
	Parms.CharacterCollision = CharacterCollision;
	Parms.PushStrategy = PushStrategy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterPusherComponent::OnCharacterDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterPusherComponent", "OnCharacterDetectorOverlapExit");

	Params::CharacterPusherComponent_OnCharacterDetectorOverlapExit Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACharacter*                       Character                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Ignore                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterPusherComponent::SetIgnoredCharacter(class ACharacter* Character, const bool Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterPusherComponent", "SetIgnoredCharacter");

	Params::CharacterPusherComponent_SetIgnoredCharacter Parms{};

	Parms.Character = Character;
	Parms.Ignore = Ignore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.ActorPoolComponent.OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                           DestroyedActor                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActorPoolComponent::OnActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorPoolComponent", "OnActorDestroyed");

	Params::ActorPoolComponent_OnActorDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.ActorPoolComponent.OnActorsInPoolAcquiredChanged
// (Final, Native, Protected)
// Parameters:
// bool                                    Acquired                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActorPoolComponent::OnActorsInPoolAcquiredChanged(bool Acquired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorPoolComponent", "OnActorsInPoolAcquiredChanged");

	Params::ActorPoolComponent_OnActorsInPoolAcquiredChanged Parms{};

	Parms.Acquired = Acquired;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_ReplicatedPool
// (Final, Native, Private)

void UAuthoritativeActorPoolComponent::OnRep_ReplicatedPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuthoritativeActorPoolComponent", "OnRep_ReplicatedPool");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.BasePoolableActorComponent.SetAcquired
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Active                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBasePoolableActorComponent::SetAcquired(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePoolableActorComponent", "SetAcquired");

	Params::BasePoolableActorComponent_SetAcquired Parms{};

	Parms.Active = Active;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.BasePoolableActorComponent.IsAcquired
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBasePoolableActorComponent::IsAcquired() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePoolableActorComponent", "IsAcquired");

	Params::BasePoolableActorComponent_IsAcquired Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
// (Final, Native, Private)

void UAuthoritativePoolableActorComponent::OnRep_Acquired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuthoritativePoolableActorComponent", "OnRep_Acquired");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBoxOcclusionQueryComponent::GetEstimatedRenderedPixelCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoxOcclusionQueryComponent", "GetEstimatedRenderedPixelCount");

	Params::BoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBoxOcclusionQueryComponent::GetNumberOfVisiblePixels() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoxOcclusionQueryComponent", "GetNumberOfVisiblePixels");

	Params::BoxOcclusionQueryComponent_GetNumberOfVisiblePixels Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBoxOcclusionQueryComponent::GetVisiblePercentOfScreen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoxOcclusionQueryComponent", "GetVisiblePercentOfScreen");

	Params::BoxOcclusionQueryComponent_GetVisiblePercentOfScreen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// ESightStatus                            Status                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterSightableComponent::OnHighestSightStatusChangedBP__DelegateSignature(ESightStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightableComponent", "OnHighestSightStatusChangedBP__DelegateSignature");

	Params::CharacterSightableComponent_OnHighestSightStatusChangedBP__DelegateSignature Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESightStatus                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ESightStatus UCharacterSightableComponent::GetHighestSightStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightableComponent", "GetHighestSightStatus");

	Params::CharacterSightableComponent_GetHighestSightStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
// (Final, Native, Private)

void UCharacterSightComponent::OnRep_CanSee()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "OnRep_CanSee");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
// (Final, Native, Private)

void UCharacterSightComponent::OnRep_DiscernibleCharacters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "OnRep_DiscernibleCharacters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// TArray<class ACharacter*>               Characters                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCharacterSightComponent::Server_UpdateDiscernedCharacters(const TArray<class ACharacter*>& Characters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "Server_UpdateDiscernedCharacters");

	Params::CharacterSightComponent_Server_UpdateDiscernedCharacters Parms{};

	Parms.Characters = std::move(Characters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterSightComponent::SetMaximumSightDistance(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "SetMaximumSightDistance");

	Params::CharacterSightComponent_SetMaximumSightDistance Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentInZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Trigger                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Untrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterSightComponent::SetMinimumCharacterScreenPercentInZone(float Trigger, float Untrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "SetMinimumCharacterScreenPercentInZone");

	Params::CharacterSightComponent_SetMinimumCharacterScreenPercentInZone Parms{};

	Parms.Trigger = Trigger;
	Parms.Untrigger = Untrigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentNotInZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Trigger                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Untrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterSightComponent::SetMinimumCharacterScreenPercentNotInZone(float Trigger, float Untrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "SetMinimumCharacterScreenPercentNotInZone");

	Params::CharacterSightComponent_SetMinimumCharacterScreenPercentNotInZone Parms{};

	Parms.Trigger = Trigger;
	Parms.Untrigger = Untrigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Trigger                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Untrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float Trigger, float Untrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "SetMinimumCharacterVisiblePixelsPercent");

	Params::CharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent Parms{};

	Parms.Trigger = Trigger;
	Parms.Untrigger = Untrigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   ValueX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ValueY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float ValueX, float ValueY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSightComponent", "SetScreenVisibilityZoneRadiusPercent");

	Params::CharacterSightComponent_SetScreenVisibilityZoneRadiusPercent Parms{};

	Parms.ValueX = ValueX;
	Parms.ValueY = ValueY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   SecondsToAdd                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   baseMaxSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   baseRate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChargeableUtilities::ConvertSecondsToAddToRateMultiplier(float SecondsToAdd, float baseMaxSeconds, float baseRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChargeableUtilities", "ConvertSecondsToAddToRateMultiplier");

	Params::ChargeableUtilities_ConvertSecondsToAddToRateMultiplier Parms{};

	Parms.SecondsToAdd = SecondsToAdd;
	Parms.baseMaxSeconds = baseMaxSeconds;
	Parms.baseRate = baseRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.MovementUtilities.Local_MoveActorTo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          Location                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         Rotation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                                   Duration                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementUtilities::Local_MoveActorTo(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, const float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovementUtilities", "Local_MoveActorTo");

	Params::MovementUtilities_Local_MoveActorTo Parms{};

	Parms.Actor = Actor;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UPawnUtilities::GetLocallyObservedPawn(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PawnUtilities", "GetLocallyObservedPawn");

	Params::PawnUtilities_GetLocallyObservedPawn Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.PawnUtilities.GetOwningPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                           Origin                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UPawnUtilities::GetOwningPawn(const class AActor* Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PawnUtilities", "GetOwningPawn");

	Params::PawnUtilities_GetOwningPawn Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayUtilities.StateController.OnRep_AuthorityRepCurrentState
// (Final, Native, Private)

void UStateController::OnRep_AuthorityRepCurrentState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateController", "OnRep_AuthorityRepCurrentState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GameplayUtilities.StateController.OnRep_States
// (Final, Native, Private)

void UStateController::OnRep_States()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateController", "OnRep_States");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction GameplayUtilities.StateController.OnStateChangedBlueprintEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                     OldState                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                     NewState                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateController::OnStateChangedBlueprintEvent__DelegateSignature(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateController", "OnStateChangedBlueprintEvent__DelegateSignature");

	Params::StateController_OnStateChangedBlueprintEvent__DelegateSignature Parms{};

	Parms.OldState = std::move(OldState);
	Parms.NewState = std::move(NewState);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameplayUtilities.StateController.GetCurrentStateID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UStateController::GetCurrentStateID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateController", "GetCurrentStateID");

	Params::StateController_GetCurrentStateID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

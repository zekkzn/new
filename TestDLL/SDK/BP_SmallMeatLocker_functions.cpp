#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmallMeatLocker

#include "Basic.hpp"

#include "BP_SmallMeatLocker_classes.hpp"
#include "BP_SmallMeatLocker_parameters.hpp"


namespace SDK
{

// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.UseEnergyToolbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChargeableInteractionDefinition* Definition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Initial_Charge                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::UseEnergyToolbox(class UChargeableInteractionDefinition* Definition, class ADBDPlayer* Player, double Initial_Charge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "UseEnergyToolbox");

	Params::BP_SmallMeatLocker_C_UseEnergyToolbox Parms{};

	Parms.Definition = Definition;
	Parms.Player = Player;
	Parms.Initial_Charge = Initial_Charge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.StopMontages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::StopMontages(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "StopMontages");

	Params::BP_SmallMeatLocker_C_StopMontages Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.ReflectVectorAroundPlaneWithNormal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          VectorToReflect                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReflectedVector                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::ReflectVectorAroundPlaneWithNormal(const struct FVector& VectorToReflect, const struct FVector& Normal, struct FVector* ReflectedVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "ReflectVectorAroundPlaneWithNormal");

	Params::BP_SmallMeatLocker_C_ReflectVectorAroundPlaneWithNormal Parms{};

	Parms.VectorToReflect = std::move(VectorToReflect);
	Parms.Normal = std::move(Normal);

	UObject::ProcessEvent(Func, &Parms);

	if (ReflectedVector != nullptr)
		*ReflectedVector = std::move(Parms.ReflectedVector);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SmallMeatLocker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.OnAutoRepair
// (Event, Protected, BlueprintEvent)

void ABP_SmallMeatLocker_C::OnAutoRepair()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "OnAutoRepair");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.ExecuteUbergraph_BP_SmallMeatLocker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::ExecuteUbergraph_BP_SmallMeatLocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "ExecuteUbergraph_BP_SmallMeatLocker");

	Params::BP_SmallMeatLocker_C_ExecuteUbergraph_BP_SmallMeatLocker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.Cosmetic_SetAsScourgeHookStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABP_SmallMeatLocker_C::Cosmetic_SetAsScourgeHookStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "Cosmetic_SetAsScourgeHookStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.BndEvt__Break Chargeable_K2Node_ComponentBoundEvent_335_ChargeableSkillCheckResponse__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Bonus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    TriggerLoudNoise                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HadInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillCheckCustomType                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ChargeChange                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::BndEvt__Break_Chargeable_K2Node_ComponentBoundEvent_335_ChargeableSkillCheckResponse__DelegateSignature(bool Success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool HadInput, ESkillCheckCustomType Type, float ChargeChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "BndEvt__Break Chargeable_K2Node_ComponentBoundEvent_335_ChargeableSkillCheckResponse__DelegateSignature");

	Params::BP_SmallMeatLocker_C_BndEvt__Break_Chargeable_K2Node_ComponentBoundEvent_335_ChargeableSkillCheckResponse__DelegateSignature Parms{};

	Parms.Success = Success;
	Parms.Bonus = Bonus;
	Parms.Player = Player;
	Parms.TriggerLoudNoise = TriggerLoudNoise;
	Parms.HadInput = HadInput;
	Parms.Type = Type;
	Parms.ChargeChange = ChargeChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.BndEvt__Break Chargeable_K2Node_ComponentBoundEvent_330_ChargeableSkillCheckResponse__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Bonus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    TriggerLoudNoise                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HadInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillCheckCustomType                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ChargeChange                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::BndEvt__Break_Chargeable_K2Node_ComponentBoundEvent_330_ChargeableSkillCheckResponse__DelegateSignature(bool Success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool HadInput, ESkillCheckCustomType Type, float ChargeChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "BndEvt__Break Chargeable_K2Node_ComponentBoundEvent_330_ChargeableSkillCheckResponse__DelegateSignature");

	Params::BP_SmallMeatLocker_C_BndEvt__Break_Chargeable_K2Node_ComponentBoundEvent_330_ChargeableSkillCheckResponse__DelegateSignature Parms{};

	Parms.Success = Success;
	Parms.Bonus = Bonus;
	Parms.Player = Player;
	Parms.TriggerLoudNoise = TriggerLoudNoise;
	Parms.HadInput = HadInput;
	Parms.Type = Type;
	Parms.ChargeChange = ChargeChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.IsBroken
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SmallMeatLocker_C::IsBroken() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "IsBroken");

	Params::BP_SmallMeatLocker_C_IsBroken Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.Has Toolbox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Possible                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::Has_Toolbox(class ADBDPlayer* Player, bool* Is_Possible) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "Has Toolbox");

	Params::BP_SmallMeatLocker_C_Has_Toolbox Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Possible != nullptr)
		*Is_Possible = Parms.Is_Possible;
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.GetHookPosition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_SmallMeatLocker_C::GetHookPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "GetHookPosition");

	Params::BP_SmallMeatLocker_C_GetHookPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.GetEntity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEntity*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AEntity* ABP_SmallMeatLocker_C::GetEntity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "GetEntity");

	Params::BP_SmallMeatLocker_C_GetEntity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.GetAnimInstance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UAnimInstance* ABP_SmallMeatLocker_C::GetAnimInstance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "GetAnimInstance");

	Params::BP_SmallMeatLocker_C_GetAnimInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SmallMeatLocker.BP_SmallMeatLocker_C.FireHookSoundEvent
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             NoiseRangeTunable                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       SoundInstigator                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SmallMeatLocker_C::FireHookSoundEvent(const class FName NoiseRangeTunable, const class ADBDPlayer* SoundInstigator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SmallMeatLocker_C", "FireHookSoundEvent");

	Params::BP_SmallMeatLocker_C_FireHookSoundEvent Parms{};

	Parms.NoiseRangeTunable = NoiseRangeTunable;
	Parms.SoundInstigator = SoundInstigator;

	UObject::ProcessEvent(Func, &Parms);
}

}

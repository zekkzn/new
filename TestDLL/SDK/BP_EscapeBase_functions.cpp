#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EscapeBase

#include "Basic.hpp"

#include "BP_EscapeBase_classes.hpp"
#include "BP_EscapeBase_parameters.hpp"


namespace SDK
{

// Function BP_EscapeBase.BP_EscapeBase_C.ActivateSwitchSpark
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::ActivateSwitchSpark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "ActivateSwitchSpark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt___openChargeable_K2Node_ComponentBoundEvent_5_ChargeableCompletionPercentChangeCosmeticDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChargeableComponent*             ChargeableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                                   TotalPercentComplete                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::BndEvt___openChargeable_K2Node_ComponentBoundEvent_5_ChargeableCompletionPercentChangeCosmeticDelegate__DelegateSignature(class UChargeableComponent* ChargeableComponent, float TotalPercentComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt___openChargeable_K2Node_ComponentBoundEvent_5_ChargeableCompletionPercentChangeCosmeticDelegate__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt___openChargeable_K2Node_ComponentBoundEvent_5_ChargeableCompletionPercentChangeCosmeticDelegate__DelegateSignature Parms{};

	Parms.ChargeableComponent = ChargeableComponent;
	Parms.TotalPercentComplete = TotalPercentComplete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt___openChargeable_K2Node_ComponentBoundEvent_7_DechargeBegin__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChargeableComponent*             ChargeableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::BndEvt___openChargeable_K2Node_ComponentBoundEvent_7_DechargeBegin__DelegateSignature(class UChargeableComponent* ChargeableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt___openChargeable_K2Node_ComponentBoundEvent_7_DechargeBegin__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt___openChargeable_K2Node_ComponentBoundEvent_7_DechargeBegin__DelegateSignature Parms{};

	Parms.ChargeableComponent = ChargeableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt___openChargeable_K2Node_ComponentBoundEvent_8_DechargeEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChargeableComponent*             ChargeableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::BndEvt___openChargeable_K2Node_ComponentBoundEvent_8_DechargeEnd__DelegateSignature(class UChargeableComponent* ChargeableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt___openChargeable_K2Node_ComponentBoundEvent_8_DechargeEnd__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt___openChargeable_K2Node_ComponentBoundEvent_8_DechargeEnd__DelegateSignature Parms{};

	Parms.ChargeableComponent = ChargeableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt__EscapeZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::BndEvt__EscapeZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt__EscapeZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt__EscapeZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt__EscapeZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EscapeBase_C::BndEvt__EscapeZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt__EscapeZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt__EscapeZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt__ExitArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EscapeBase_C::BndEvt__ExitArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt__ExitArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt__ExitArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.BndEvt__ExitArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::BndEvt__ExitArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "BndEvt__ExitArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_EscapeBase_C_BndEvt__ExitArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.ExecuteUbergraph_BP_EscapeBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::ExecuteUbergraph_BP_EscapeBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "ExecuteUbergraph_BP_EscapeBase");

	Params::BP_EscapeBase_C_ExecuteUbergraph_BP_EscapeBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetOpenEscapeInteraction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChargeableInteractionDefinition* ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UChargeableInteractionDefinition* ABP_EscapeBase_C::GetOpenEscapeInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetOpenEscapeInteraction");

	Params::BP_EscapeBase_C_GetOpenEscapeInteraction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.LightAllLights
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::LightAllLights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "LightAllLights");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.OnBlockDoorSwitchCosmetic
// (Event, Protected, BlueprintEvent)

void ABP_EscapeBase_C::OnBlockDoorSwitchCosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "OnBlockDoorSwitchCosmetic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.OnExitActivationChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Activated                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::OnExitActivationChanged(bool Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "OnExitActivationChanged");

	Params::BP_EscapeBase_C_OnExitActivationChanged Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.OnExitOpenChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    OPENED                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::OnExitOpenChanged(bool OPENED)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "OnExitOpenChanged");

	Params::BP_EscapeBase_C_OnExitOpenChanged Parms{};

	Parms.OPENED = OPENED;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.OnUnblockDoorSwitchCosmetic
// (Event, Protected, BlueprintEvent)

void ABP_EscapeBase_C::OnUnblockDoorSwitchCosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "OnUnblockDoorSwitchCosmetic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EscapeBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.SetMontage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::SetMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "SetMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.SetPlaySound1
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::SetPlaySound1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "SetPlaySound1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.SetPlaySound2
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::SetPlaySound2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "SetPlaySound2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.SetPlaySound3
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::SetPlaySound3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "SetPlaySound3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.TML_EscapeBlocker__FinishedFunc
// (BlueprintEvent)

void ABP_EscapeBase_C::TML_EscapeBlocker__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "TML_EscapeBlocker__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.TML_EscapeBlocker__UpdateFunc
// (BlueprintEvent)

void ABP_EscapeBase_C::TML_EscapeBlocker__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "TML_EscapeBlocker__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.UpdateLightProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CompletionPercent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EscapeBase_C::UpdateLightProgress(double CompletionPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "UpdateLightProgress");

	Params::BP_EscapeBase_C_UpdateLightProgress Parms{};

	Parms.CompletionPercent = CompletionPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EscapeBase.BP_EscapeBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EscapeBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetDoorSkeletalMeshComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_EscapeBase_C::GetDoorSkeletalMeshComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetDoorSkeletalMeshComponent");

	Params::BP_EscapeBase_C_GetDoorSkeletalMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetEscapeSwitchFloorLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_EscapeBase_C::GetEscapeSwitchFloorLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetEscapeSwitchFloorLocation");

	Params::BP_EscapeBase_C_GetEscapeSwitchFloorLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetExitArea
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UBoxComponent* ABP_EscapeBase_C::GetExitArea() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetExitArea");

	Params::BP_EscapeBase_C_GetExitArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetFocalPointPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*                       Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractionDefinition*           Definition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_EscapeBase_C::GetFocalPointPosition(const class ADBDPlayer* Player, const class UInteractionDefinition* Definition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetFocalPointPosition");

	Params::BP_EscapeBase_C_GetFocalPointPosition Parms{};

	Parms.Player = Player;
	Parms.Definition = Definition;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetParadiseServerLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_EscapeBase_C::GetParadiseServerLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetParadiseServerLocation");

	Params::BP_EscapeBase_C_GetParadiseServerLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.GetSwitchSceneComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_EscapeBase_C::GetSwitchSceneComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "GetSwitchSceneComponent");

	Params::BP_EscapeBase_C_GetSwitchSceneComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EscapeBase.BP_EscapeBase_C.IsInterruptionPossible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer*                       Interruptor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       Interruptee                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractor*                      Interactor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInteractionDefinition*           Definition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInterruptionDefinition*          Interruption                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_EscapeBase_C::IsInterruptionPossible(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee, const class UInteractor* Interactor, const class UInteractionDefinition* Definition, const class UInterruptionDefinition* Interruption) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EscapeBase_C", "IsInterruptionPossible");

	Params::BP_EscapeBase_C_IsInterruptionPossible Parms{};

	Parms.Interruptor = Interruptor;
	Parms.Interruptee = Interruptee;
	Parms.Interactor = Interactor;
	Parms.Definition = Definition;
	Parms.Interruption = Interruption;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

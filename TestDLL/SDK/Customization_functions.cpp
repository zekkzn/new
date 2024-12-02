#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Customization

#include "Basic.hpp"

#include "Customization_classes.hpp"
#include "Customization_parameters.hpp"


namespace SDK
{

// Function Customization.Accessory.BP_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*                  ComponentToDestroy                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAccessory::BP_DestroyComponent(class UActorComponent* ComponentToDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Accessory", "BP_DestroyComponent");

	Params::Accessory_BP_DestroyComponent Parms{};

	Parms.ComponentToDestroy = ComponentToDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Customization.AccessoryUtilities.AddBoneSocketLocalVelocityEvaluatorToAccessory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAccessory*                       Accessory                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                     TrackedBoneSocketNames                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UBoneSocketLocalVelocityEvaluator*ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoneSocketLocalVelocityEvaluator* UAccessoryUtilities::AddBoneSocketLocalVelocityEvaluatorToAccessory(class UAccessory* Accessory, const TArray<class FName>& TrackedBoneSocketNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AccessoryUtilities", "AddBoneSocketLocalVelocityEvaluatorToAccessory");

	Params::AccessoryUtilities_AddBoneSocketLocalVelocityEvaluatorToAccessory Parms{};

	Parms.Accessory = Accessory;
	Parms.TrackedBoneSocketNames = std::move(TrackedBoneSocketNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeatLockerBasement04

#include "Basic.hpp"

#include "BP_MeatLockerBasement04_classes.hpp"
#include "BP_MeatLockerBasement04_parameters.hpp"


namespace SDK
{

// Function BP_MeatLockerBasement04.BP_MeatLockerBasement04_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MeatLockerBasement04_C::GetMesh(class USkeletalMeshComponent** Mesh) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement04_C", "GetMesh");

	Params::BP_MeatLockerBasement04_C_GetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}


// Function BP_MeatLockerBasement04.BP_MeatLockerBasement04_C.GetEntity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEntity*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AEntity* ABP_MeatLockerBasement04_C::GetEntity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement04_C", "GetEntity");

	Params::BP_MeatLockerBasement04_C_GetEntity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeatLockerBasement04.BP_MeatLockerBasement04_C.GetAnimInstance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UAnimInstance* ABP_MeatLockerBasement04_C::GetAnimInstance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement04_C", "GetAnimInstance");

	Params::BP_MeatLockerBasement04_C_GetAnimInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


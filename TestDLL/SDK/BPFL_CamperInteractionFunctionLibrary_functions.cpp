#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_CamperInteractionFunctionLibrary

#include "Basic.hpp"

#include "BPFL_CamperInteractionFunctionLibrary_classes.hpp"
#include "BPFL_CamperInteractionFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BPFL_CamperInteractionFunctionLibrary.BPFL_CamperInteractionFunctionLibrary_C.GetCamperOwner
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInteractionDefinition*           InteractionDefinition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACamperPlayer*                    Camper                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_CamperInteractionFunctionLibrary_C::GetCamperOwner(class UInteractionDefinition* InteractionDefinition, class UObject* __WorldContext, class ACamperPlayer** Camper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_CamperInteractionFunctionLibrary_C", "GetCamperOwner");

	Params::BPFL_CamperInteractionFunctionLibrary_C_GetCamperOwner Parms{};

	Parms.InteractionDefinition = InteractionDefinition;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Camper != nullptr)
		*Camper = Parms.Camper;
}

}

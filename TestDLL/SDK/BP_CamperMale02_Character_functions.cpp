#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CamperMale02_Character

#include "Basic.hpp"

#include "BP_CamperMale02_Character_classes.hpp"
#include "BP_CamperMale02_Character_parameters.hpp"


namespace SDK
{

// Function BP_CamperMale02_Character.BP_CamperMale02_Character_C.ExecuteUbergraph_BP_CamperMale02_Character
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CamperMale02_Character_C::ExecuteUbergraph_BP_CamperMale02_Character(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CamperMale02_Character_C", "ExecuteUbergraph_BP_CamperMale02_Character");

	Params::BP_CamperMale02_Character_C_ExecuteUbergraph_BP_CamperMale02_Character Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CamperMale02_Character.BP_CamperMale02_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CamperMale02_Character_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CamperMale02_Character_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

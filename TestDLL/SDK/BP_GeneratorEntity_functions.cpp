#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GeneratorEntity

#include "Basic.hpp"

#include "BP_GeneratorEntity_classes.hpp"
#include "BP_GeneratorEntity_parameters.hpp"


namespace SDK
{

// Function BP_GeneratorEntity.BP_GeneratorEntity_C.ExecuteUbergraph_BP_GeneratorEntity
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GeneratorEntity_C::ExecuteUbergraph_BP_GeneratorEntity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "ExecuteUbergraph_BP_GeneratorEntity");

	Params::BP_GeneratorEntity_C_ExecuteUbergraph_BP_GeneratorEntity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.MakeEntityAppear
// (BlueprintCallable, BlueprintEvent)

void ABP_GeneratorEntity_C::MakeEntityAppear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "MakeEntityAppear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.MakeEntityDisappear
// (BlueprintCallable, BlueprintEvent)

void ABP_GeneratorEntity_C::MakeEntityDisappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "MakeEntityDisappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.MakeSmokeAppear
// (BlueprintCallable, BlueprintEvent)

void ABP_GeneratorEntity_C::MakeSmokeAppear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "MakeSmokeAppear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.MakeSmokeDisappear
// (BlueprintCallable, BlueprintEvent)

void ABP_GeneratorEntity_C::MakeSmokeDisappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "MakeSmokeDisappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.TML_dissolve__FinishedFunc
// (BlueprintEvent)

void ABP_GeneratorEntity_C::TML_dissolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "TML_dissolve__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.TML_dissolve__UpdateFunc
// (BlueprintEvent)

void ABP_GeneratorEntity_C::TML_dissolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "TML_dissolve__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.TML_Smoke__FinishedFunc
// (BlueprintEvent)

void ABP_GeneratorEntity_C::TML_Smoke__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "TML_Smoke__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.TML_Smoke__UpdateFunc
// (BlueprintEvent)

void ABP_GeneratorEntity_C::TML_Smoke__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "TML_Smoke__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GeneratorEntity.BP_GeneratorEntity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GeneratorEntity_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneratorEntity_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

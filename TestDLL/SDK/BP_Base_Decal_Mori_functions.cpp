#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Base_Decal_Mori

#include "Basic.hpp"

#include "BP_Base_Decal_Mori_classes.hpp"
#include "BP_Base_Decal_Mori_parameters.hpp"


namespace SDK
{

// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.CreateMaterialInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         MatInst                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Base_Decal_Mori_C::CreateMaterialInstance(class UMaterialInstanceDynamic** MatInst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "CreateMaterialInstance");

	Params::BP_Base_Decal_Mori_C_CreateMaterialInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MatInst != nullptr)
		*MatInst = Parms.MatInst;
}


// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.ExecuteUbergraph_BP_Base_Decal_Mori
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Base_Decal_Mori_C::ExecuteUbergraph_BP_Base_Decal_Mori(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "ExecuteUbergraph_BP_Base_Decal_Mori");

	Params::BP_Base_Decal_Mori_C_ExecuteUbergraph_BP_Base_Decal_Mori Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.FadeOut__FinishedFunc
// (BlueprintEvent)

void ABP_Base_Decal_Mori_C::FadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "FadeOut__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.FadeOut__UpdateFunc
// (BlueprintEvent)

void ABP_Base_Decal_Mori_C::FadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "FadeOut__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.GetPhysmat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*                PhysMat                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Base_Decal_Mori_C::GetPhysmat(class UPhysicalMaterial** PhysMat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "GetPhysmat");

	Params::BP_Base_Decal_Mori_C_GetPhysmat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PhysMat != nullptr)
		*PhysMat = Parms.PhysMat;
}


// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Base_Decal_Mori_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Base_Decal_Mori.BP_Base_Decal_Mori_C.SaveOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         MaterialInstance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Base_Decal_Mori_C::SaveOpacity(class UMaterialInstanceDynamic* MaterialInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Decal_Mori_C", "SaveOpacity");

	Params::BP_Base_Decal_Mori_C_SaveOpacity Parms{};

	Parms.MaterialInstance = MaterialInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}

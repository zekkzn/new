#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VFX_Function_Lib_AnimNotifies

#include "Basic.hpp"

#include "VFX_Function_Lib_AnimNotifies_classes.hpp"
#include "VFX_Function_Lib_AnimNotifies_parameters.hpp"


namespace SDK
{

// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trickster
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASlasherPlayer*                   MySlasher                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Trickster(class FName Selection, class ASlasherPlayer* MySlasher, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Trickster");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Trickster Parms{};

	Parms.Selection = Selection;
	Parms.MySlasher = MySlasher;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trapper
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Trapper(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Trapper");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Trapper Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Oni
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Get_Killer1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Oni(class UObject* Target, class UObject* Get_Killer1, class FName Selection, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Oni");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Oni Parms{};

	Parms.Target = Target;
	Parms.Get_Killer1 = Get_Killer1;
	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_WallBreak
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_WallBreak(class FName Selection, class UObject* WorldContextObject, class UObject* __WorldContext, bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_WallBreak");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_WallBreak Parms{};

	Parms.Selection = Selection;
	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Blight
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASlasherPlayer*                   My_Slasher1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Blight(class ASlasherPlayer* My_Slasher1, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Blight");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Blight Parms{};

	Parms.My_Slasher1 = My_Slasher1;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Nurse
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASlasherPlayer*                   My_Slasher1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Nurse(class FName Selection, class ASlasherPlayer* My_Slasher1, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Nurse");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Nurse Parms{};

	Parms.Selection = Selection;
	Parms.My_Slasher1 = My_Slasher1;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Hag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASlasherPlayer*                   My_Slasher1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Hag(class FName Selection, class ASlasherPlayer* My_Slasher1, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Hag");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Hag Parms{};

	Parms.Selection = Selection;
	Parms.My_Slasher1 = My_Slasher1;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_General
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASlasherPlayer*                   My_Slasher1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_General(class ASlasherPlayer* My_Slasher1, class FName Selection, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_General");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_General Parms{};

	Parms.My_Slasher1 = My_Slasher1;
	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Footsteps
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASlasherPlayer*                   Slasher                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Footsteps(class FName Selection, class ASlasherPlayer* Slasher, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Footsteps");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Footsteps Parms{};

	Parms.Selection = Selection;
	Parms.Slasher = Slasher;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Demogorgon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Demogorgon(class FName Selection, class UObject* Target, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Demogorgon");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Demogorgon Parms{};

	Parms.Selection = Selection;
	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Deathslinger
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASlasherPlayer*                   My_Slasher1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVFX_Function_Lib_AnimNotifies_C::HandleKillerNotifies_Deathslinger(class ASlasherPlayer* My_Slasher1, class FName Selection, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFX_Function_Lib_AnimNotifies_C", "HandleKillerNotifies_Deathslinger");

	Params::VFX_Function_Lib_AnimNotifies_C_HandleKillerNotifies_Deathslinger Parms{};

	Parms.My_Slasher1 = My_Slasher1;
	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

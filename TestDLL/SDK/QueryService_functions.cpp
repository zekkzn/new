#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QueryService

#include "Basic.hpp"

#include "QueryService_classes.hpp"
#include "QueryService_parameters.hpp"


namespace SDK
{

// Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged
// (Final, Native, Public)
// Parameters:
// bool                                    InRange                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AActorPairQueryEvaluatorSubscriberTest::OnRangeChanged(const bool InRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorPairQueryEvaluatorSubscriberTest", "OnRangeChanged");

	Params::ActorPairQueryEvaluatorSubscriberTest_OnRangeChanged Parms{};

	Parms.InRange = InRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengeTracker

#include "Basic.hpp"

#include "WBP_ChallengeTracker_classes.hpp"
#include "WBP_ChallengeTracker_parameters.hpp"


namespace SDK
{

// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.UpdateWidgetProgression
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchiveNodeObjectiveViewData    Param_ProgressionData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ChallengeTracker_C::UpdateWidgetProgression(const struct FArchiveNodeObjectiveViewData& Param_ProgressionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "UpdateWidgetProgression");

	Params::WBP_ChallengeTracker_C_UpdateWidgetProgression Parms{};

	Parms.Param_ProgressionData = std::move(Param_ProgressionData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.TweenAnimationDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUITweenInstance*                 Tween                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeTracker_C::TweenAnimationDone(class UUITweenInstance* Tween)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "TweenAnimationDone");

	Params::WBP_ChallengeTracker_C_TweenAnimationDone Parms{};

	Parms.Tween = Tween;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.SetWidgetVisuals
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChallengeTrackerSkinData        SkinData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_ChallengeTracker_C::SetWidgetVisuals(const struct FChallengeTrackerSkinData& SkinData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "SetWidgetVisuals");

	Params::WBP_ChallengeTracker_C_SetWidgetVisuals Parms{};

	Parms.SkinData = std::move(SkinData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.SetWidgetProgression
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchiveNodeObjectiveViewData    Param_ProgressionData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ChallengeTracker_C::SetWidgetProgression(const struct FArchiveNodeObjectiveViewData& Param_ProgressionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "SetWidgetProgression");

	Params::WBP_ChallengeTracker_C_SetWidgetProgression Parms{};

	Parms.Param_ProgressionData = std::move(Param_ProgressionData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.SetDisplayedData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::SetDisplayedData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "SetDisplayedData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.OpenWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "OpenWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.InitWidgetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChallengeTrackerViewData        ViewData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ChallengeTracker_C::InitWidgetData(const struct FChallengeTrackerViewData& ViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "InitWidgetData");

	Params::WBP_ChallengeTracker_C_InitWidgetData Parms{};

	Parms.ViewData = std::move(ViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.Finished_5108B7D945640A2E081D94BF87288FDC
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::Finished_5108B7D945640A2E081D94BF87288FDC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "Finished_5108B7D945640A2E081D94BF87288FDC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.Finished_30AF06C34C338FE1F55B44806190EC34
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::Finished_30AF06C34C338FE1F55B44806190EC34()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "Finished_30AF06C34C338FE1F55B44806190EC34");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.Finished_1B8BFB1B4A4102EF33FFBA8D54F2FB59
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::Finished_1B8BFB1B4A4102EF33FFBA8D54F2FB59()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "Finished_1B8BFB1B4A4102EF33FFBA8D54F2FB59");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.Finished_157DBB1B4531592B06F1EA9FEE536EBC
// (BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::Finished_157DBB1B4531592B06F1EA9FEE536EBC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "Finished_157DBB1B4531592B06F1EA9FEE536EBC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.ExecuteUbergraph_WBP_ChallengeTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeTracker_C::ExecuteUbergraph_WBP_ChallengeTracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "ExecuteUbergraph_WBP_ChallengeTracker");

	Params::WBP_ChallengeTracker_C_ExecuteUbergraph_WBP_ChallengeTracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ChallengeTracker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengeTracker.WBP_ChallengeTracker_C.CloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_ChallengeTracker_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengeTracker_C", "CloseWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

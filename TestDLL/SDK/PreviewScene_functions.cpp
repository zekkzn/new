#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PreviewScene

#include "Basic.hpp"

#include "PreviewScene_classes.hpp"
#include "PreviewScene_parameters.hpp"


namespace SDK
{

// Function PreviewScene.PreviewSceneHandleLibrary.GetPreviewSceneActorsOfClassFromHandle
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>               ActorClass                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   OutActors                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewSceneHandleLibrary::GetPreviewSceneActorsOfClassFromHandle(const struct FPreviewSceneHandle& Handle, const TSubclassOf<class AActor>& ActorClass, TArray<class AActor*>* OutActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "GetPreviewSceneActorsOfClassFromHandle");

	Params::PreviewSceneHandleLibrary_GetPreviewSceneActorsOfClassFromHandle Parms{};

	Parms.Handle = std::move(Handle);
	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutActors != nullptr)
		*OutActors = std::move(Parms.OutActors);

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.GetPreviewSceneCaptureActorFromHandle
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class ASceneCapture2D*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASceneCapture2D* UPreviewSceneHandleLibrary::GetPreviewSceneCaptureActorFromHandle(const struct FPreviewSceneHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "GetPreviewSceneCaptureActorFromHandle");

	Params::PreviewSceneHandleLibrary_GetPreviewSceneCaptureActorFromHandle Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.GetPreviewSceneCaptureComponentFromHandle
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USceneCaptureComponent2D*         ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneCaptureComponent2D* UPreviewSceneHandleLibrary::GetPreviewSceneCaptureComponentFromHandle(const struct FPreviewSceneHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "GetPreviewSceneCaptureComponentFromHandle");

	Params::PreviewSceneHandleLibrary_GetPreviewSceneCaptureComponentFromHandle Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.GetPreviewSceneFirstActorOfClassFromHandle
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>               ActorClass                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UPreviewSceneHandleLibrary::GetPreviewSceneFirstActorOfClassFromHandle(const struct FPreviewSceneHandle& Handle, const TSubclassOf<class AActor>& ActorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "GetPreviewSceneFirstActorOfClassFromHandle");

	Params::PreviewSceneHandleLibrary_GetPreviewSceneFirstActorOfClassFromHandle Parms{};

	Parms.Handle = std::move(Handle);
	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.GetPreviewSceneFromHandle
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPreviewRenderScene              ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPreviewRenderScene UPreviewSceneHandleLibrary::GetPreviewSceneFromHandle(const struct FPreviewSceneHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "GetPreviewSceneFromHandle");

	Params::PreviewSceneHandleLibrary_GetPreviewSceneFromHandle Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.GetPreviewSceneNameFromHandle
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UPreviewSceneHandleLibrary::GetPreviewSceneNameFromHandle(const struct FPreviewSceneHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "GetPreviewSceneNameFromHandle");

	Params::PreviewSceneHandleLibrary_GetPreviewSceneNameFromHandle Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.IsPreviewSceneHandleValid
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewSceneHandleLibrary::IsPreviewSceneHandleValid(const struct FPreviewSceneHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "IsPreviewSceneHandleValid");

	Params::PreviewSceneHandleLibrary_IsPreviewSceneHandleValid Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneHandleLibrary.IsPreviewSceneHandleValidExec
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPreviewSceneHandle              Handle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewSceneHandleLibrary::IsPreviewSceneHandleValidExec(const struct FPreviewSceneHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneHandleLibrary", "IsPreviewSceneHandleValidExec");

	Params::PreviewSceneHandleLibrary_IsPreviewSceneHandleValidExec Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PreviewScene.PreviewSceneProvider.GetScenes
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, struct FPreviewSceneList>ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FPreviewSceneList> IPreviewSceneProvider::GetScenes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewSceneProvider", "GetScenes");

	Params::PreviewSceneProvider_GetScenes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


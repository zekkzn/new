#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseNiagara

#include "Basic.hpp"

#include "Niagara_classes.hpp"


namespace SDK
{

// Class WwiseNiagara.NiagaraDataInterfaceWwiseEvent
// 0x0028 (0x0068 - 0x0040)
class UNiagaraDataInterfaceWwiseEvent final : public UNiagaraDataInterface
{
public:
	class UAkAudioEvent*                          EventToPost;                                       // 0x0040(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkRtpc*>                        GameParameters;                                    // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bLimitPostsPerTick;                                // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxPostsPerTick;                                   // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStopWhenComponentIsDestroyed;                     // 0x0060(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceWwiseEvent">();
	}
	static class UNiagaraDataInterfaceWwiseEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceWwiseEvent>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceWwiseEvent) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceWwiseEvent");
static_assert(sizeof(UNiagaraDataInterfaceWwiseEvent) == 0x000068, "Wrong size on UNiagaraDataInterfaceWwiseEvent");
static_assert(offsetof(UNiagaraDataInterfaceWwiseEvent, EventToPost) == 0x000040, "Member 'UNiagaraDataInterfaceWwiseEvent::EventToPost' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceWwiseEvent, GameParameters) == 0x000048, "Member 'UNiagaraDataInterfaceWwiseEvent::GameParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceWwiseEvent, bLimitPostsPerTick) == 0x000058, "Member 'UNiagaraDataInterfaceWwiseEvent::bLimitPostsPerTick' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceWwiseEvent, MaxPostsPerTick) == 0x00005C, "Member 'UNiagaraDataInterfaceWwiseEvent::MaxPostsPerTick' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceWwiseEvent, bStopWhenComponentIsDestroyed) == 0x000060, "Member 'UNiagaraDataInterfaceWwiseEvent::bStopWhenComponentIsDestroyed' has a wrong offset!");

}

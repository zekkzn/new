#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NS_UK_SpawnDecal

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NS_UK_SpawnDecal.BP_NS_UK_SpawnDecal_C
// 0x0000 (0x0038 - 0x0038)
class UBP_NS_UK_SpawnDecal_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NS_UK_SpawnDecal_C">();
	}
	static class UBP_NS_UK_SpawnDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NS_UK_SpawnDecal_C>();
	}
};
static_assert(alignof(UBP_NS_UK_SpawnDecal_C) == 0x000008, "Wrong alignment on UBP_NS_UK_SpawnDecal_C");
static_assert(sizeof(UBP_NS_UK_SpawnDecal_C) == 0x000038, "Wrong size on UBP_NS_UK_SpawnDecal_C");

}

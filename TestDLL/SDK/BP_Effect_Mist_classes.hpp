#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Effect_Mist

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "VFXUtilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Effect_Mist.BP_Effect_Mist_C
// 0x0018 (0x02C0 - 0x02A8)
class ABP_Effect_Mist_C final : public ABaseVFX
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDAggregateParticleLocatorComponent*  DBDAggregateParticleLocator;                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Effect_Mist(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Effect_Mist_C">();
	}
	static class ABP_Effect_Mist_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Effect_Mist_C>();
	}
};
static_assert(alignof(ABP_Effect_Mist_C) == 0x000008, "Wrong alignment on ABP_Effect_Mist_C");
static_assert(sizeof(ABP_Effect_Mist_C) == 0x0002C0, "Wrong size on ABP_Effect_Mist_C");
static_assert(offsetof(ABP_Effect_Mist_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Effect_Mist_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Effect_Mist_C, DBDAggregateParticleLocator) == 0x0002B0, "Member 'ABP_Effect_Mist_C::DBDAggregateParticleLocator' has a wrong offset!");
static_assert(offsetof(ABP_Effect_Mist_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_Effect_Mist_C::DefaultSceneRoot' has a wrong offset!");

}

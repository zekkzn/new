#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrenzySlasherVaultOverPulldown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FrenzySlasherVault_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrenzySlasherVaultOverPulldown.FrenzySlasherVaultOverPulldown_C
// 0x0000 (0x0890 - 0x0890)
class UFrenzySlasherVaultOverPulldown_C final : public UFrenzySlasherVault_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_FrenzySlasherVaultOverPulldown_C;   // 0x0888(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void OnSlasherSet_Event();
	void OnInteractionFinished(class ADBDPlayer* Player, bool HasInteractionStarted);
	void ExecuteUbergraph_FrenzySlasherVaultOverPulldown(int32 EntryPoint);

	bool CanOverrideInteraction(const class UInteractionDefinition* Interaction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrenzySlasherVaultOverPulldown_C">();
	}
	static class UFrenzySlasherVaultOverPulldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrenzySlasherVaultOverPulldown_C>();
	}
};
static_assert(alignof(UFrenzySlasherVaultOverPulldown_C) == 0x000010, "Wrong alignment on UFrenzySlasherVaultOverPulldown_C");
static_assert(sizeof(UFrenzySlasherVaultOverPulldown_C) == 0x000890, "Wrong size on UFrenzySlasherVaultOverPulldown_C");
static_assert(offsetof(UFrenzySlasherVaultOverPulldown_C, UberGraphFrame_FrenzySlasherVaultOverPulldown_C) == 0x000888, "Member 'UFrenzySlasherVaultOverPulldown_C::UberGraphFrame_FrenzySlasherVaultOverPulldown_C' has a wrong offset!");

}

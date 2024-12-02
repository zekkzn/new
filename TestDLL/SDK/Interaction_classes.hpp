#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Interaction

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Interaction.AIInteractableTargetInterface
// 0x0000 (0x0030 - 0x0030)
class IAIInteractableTargetInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIInteractableTargetInterface">();
	}
	static class IAIInteractableTargetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAIInteractableTargetInterface>();
	}
};
static_assert(alignof(IAIInteractableTargetInterface) == 0x000008, "Wrong alignment on IAIInteractableTargetInterface");
static_assert(sizeof(IAIInteractableTargetInterface) == 0x000030, "Wrong size on IAIInteractableTargetInterface");

// Class Interaction.Interaction
// 0x0000 (0x0030 - 0x0030)
class IInteraction final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Interaction">();
	}
	static class IInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInteraction>();
	}
};
static_assert(alignof(IInteraction) == 0x000008, "Wrong alignment on IInteraction");
static_assert(sizeof(IInteraction) == 0x000030, "Wrong size on IInteraction");

// Class Interaction.InteractionPerformer
// 0x0000 (0x0030 - 0x0030)
class IInteractionPerformer final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractionPerformer">();
	}
	static class IInteractionPerformer* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInteractionPerformer>();
	}
};
static_assert(alignof(IInteractionPerformer) == 0x000008, "Wrong alignment on IInteractionPerformer");
static_assert(sizeof(IInteractionPerformer) == 0x000030, "Wrong size on IInteractionPerformer");

}


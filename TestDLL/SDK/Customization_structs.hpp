#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Customization

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Customization.CharacterCustomization
// 0x0024 (0x0024 - 0x0000)
struct FCharacterCustomization final
{
public:
	class FName                                   Head;                                              // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TorsoOrBody;                                       // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LegsOrWeapon;                                      // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharacterCustomization) == 0x000004, "Wrong alignment on FCharacterCustomization");
static_assert(sizeof(FCharacterCustomization) == 0x000024, "Wrong size on FCharacterCustomization");
static_assert(offsetof(FCharacterCustomization, Head) == 0x000000, "Member 'FCharacterCustomization::Head' has a wrong offset!");
static_assert(offsetof(FCharacterCustomization, TorsoOrBody) == 0x00000C, "Member 'FCharacterCustomization::TorsoOrBody' has a wrong offset!");
static_assert(offsetof(FCharacterCustomization, LegsOrWeapon) == 0x000018, "Member 'FCharacterCustomization::LegsOrWeapon' has a wrong offset!");

// ScriptStruct Customization.CharmIdSlot
// 0x0010 (0x0010 - 0x0000)
struct FCharmIdSlot final
{
public:
	int8                                          SlotIndex;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CharmId;                                           // 0x0004(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharmIdSlot) == 0x000004, "Wrong alignment on FCharmIdSlot");
static_assert(sizeof(FCharmIdSlot) == 0x000010, "Wrong size on FCharmIdSlot");
static_assert(offsetof(FCharmIdSlot, SlotIndex) == 0x000000, "Member 'FCharmIdSlot::SlotIndex' has a wrong offset!");
static_assert(offsetof(FCharmIdSlot, CharmId) == 0x000004, "Member 'FCharmIdSlot::CharmId' has a wrong offset!");

// ScriptStruct Customization.EquippedPlayerCustomization
// 0x0038 (0x0038 - 0x0000)
struct FEquippedPlayerCustomization final
{
public:
	struct FCharacterCustomization                _equippedCustomization;                            // 0x0000(0x0024)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCharmIdSlot>                   _equippedCharms;                                   // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FEquippedPlayerCustomization) == 0x000008, "Wrong alignment on FEquippedPlayerCustomization");
static_assert(sizeof(FEquippedPlayerCustomization) == 0x000038, "Wrong size on FEquippedPlayerCustomization");
static_assert(offsetof(FEquippedPlayerCustomization, _equippedCustomization) == 0x000000, "Member 'FEquippedPlayerCustomization::_equippedCustomization' has a wrong offset!");
static_assert(offsetof(FEquippedPlayerCustomization, _equippedCharms) == 0x000028, "Member 'FEquippedPlayerCustomization::_equippedCharms' has a wrong offset!");

}

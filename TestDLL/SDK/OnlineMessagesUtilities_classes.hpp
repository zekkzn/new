#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineMessagesUtilities

#include "Basic.hpp"

#include "OnlineMessagesUtilities_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class OnlineMessagesUtilities.OnlineMessagesSubsystem
// 0x0030 (0x0068 - 0x0038)
class UOnlineMessagesSubsystem final : public UGameInstanceSubsystem
{
public:
	TArray<struct FInboxMessageData>              _messages;                                         // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x20];                                      // 0x0048(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineMessagesSubsystem">();
	}
	static class UOnlineMessagesSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineMessagesSubsystem>();
	}
};
static_assert(alignof(UOnlineMessagesSubsystem) == 0x000008, "Wrong alignment on UOnlineMessagesSubsystem");
static_assert(sizeof(UOnlineMessagesSubsystem) == 0x000068, "Wrong size on UOnlineMessagesSubsystem");
static_assert(offsetof(UOnlineMessagesSubsystem, _messages) == 0x000038, "Member 'UOnlineMessagesSubsystem::_messages' has a wrong offset!");

}

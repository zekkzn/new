#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RemoteContentCache

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum RemoteContentCache.ERemoteContentDownloadStrategy
// NumValues: 0x0003
enum class ERemoteContentDownloadStrategy : uint8
{
	PreferRemote                             = 0,
	PreferPackaged                           = 1,
	ERemoteContentDownloadStrategy_MAX       = 2,
};

// ScriptStruct RemoteContentCache.SoftRemoteContentCacheObjectPtr
// 0x0070 (0x0070 - 0x0000)
struct alignas(0x08) FSoftRemoteContentCacheObjectPtr final
{
public:
	uint8                                         Pad_0[0x70];                                       // 0x0000(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSoftRemoteContentCacheObjectPtr) == 0x000008, "Wrong alignment on FSoftRemoteContentCacheObjectPtr");
static_assert(sizeof(FSoftRemoteContentCacheObjectPtr) == 0x000070, "Wrong size on FSoftRemoteContentCacheObjectPtr");

// ScriptStruct RemoteContentCache.RemoteContentCacheEntry
// 0x0068 (0x0068 - 0x0000)
struct FRemoteContentCacheEntry final
{
public:
	class FString                                 Schema;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Uri;                                               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ContentVersion;                                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableChecksum;                                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        PackagedObjectPath;                                // 0x0038(0x0028)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemoteContentDownloadStrategy                DownloadStrategy;                                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          _isPackaged;                                       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteContentCacheEntry) == 0x000008, "Wrong alignment on FRemoteContentCacheEntry");
static_assert(sizeof(FRemoteContentCacheEntry) == 0x000068, "Wrong size on FRemoteContentCacheEntry");
static_assert(offsetof(FRemoteContentCacheEntry, Schema) == 0x000000, "Member 'FRemoteContentCacheEntry::Schema' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheEntry, Uri) == 0x000010, "Member 'FRemoteContentCacheEntry::Uri' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheEntry, ContentVersion) == 0x000020, "Member 'FRemoteContentCacheEntry::ContentVersion' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheEntry, EnableChecksum) == 0x000030, "Member 'FRemoteContentCacheEntry::EnableChecksum' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheEntry, PackagedObjectPath) == 0x000038, "Member 'FRemoteContentCacheEntry::PackagedObjectPath' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheEntry, DownloadStrategy) == 0x000060, "Member 'FRemoteContentCacheEntry::DownloadStrategy' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheEntry, _isPackaged) == 0x000061, "Member 'FRemoteContentCacheEntry::_isPackaged' has a wrong offset!");

// ScriptStruct RemoteContentCache.RemoteContentCacheLocalManifestEntry
// 0x0020 (0x0020 - 0x0000)
struct FRemoteContentCacheLocalManifestEntry final
{
public:
	class FString                                 Uri;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ContentVersion;                                    // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteContentCacheLocalManifestEntry) == 0x000008, "Wrong alignment on FRemoteContentCacheLocalManifestEntry");
static_assert(sizeof(FRemoteContentCacheLocalManifestEntry) == 0x000020, "Wrong size on FRemoteContentCacheLocalManifestEntry");
static_assert(offsetof(FRemoteContentCacheLocalManifestEntry, Uri) == 0x000000, "Member 'FRemoteContentCacheLocalManifestEntry::Uri' has a wrong offset!");
static_assert(offsetof(FRemoteContentCacheLocalManifestEntry, ContentVersion) == 0x000010, "Member 'FRemoteContentCacheLocalManifestEntry::ContentVersion' has a wrong offset!");

// ScriptStruct RemoteContentCache.RemoteContentCacheLocalManifest
// 0x0010 (0x0010 - 0x0000)
struct FRemoteContentCacheLocalManifest final
{
public:
	TArray<struct FRemoteContentCacheLocalManifestEntry> Entries;                                           // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteContentCacheLocalManifest) == 0x000008, "Wrong alignment on FRemoteContentCacheLocalManifest");
static_assert(sizeof(FRemoteContentCacheLocalManifest) == 0x000010, "Wrong size on FRemoteContentCacheLocalManifest");
static_assert(offsetof(FRemoteContentCacheLocalManifest, Entries) == 0x000000, "Member 'FRemoteContentCacheLocalManifest::Entries' has a wrong offset!");

}

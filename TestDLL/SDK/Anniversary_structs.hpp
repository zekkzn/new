#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Anniversary

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Anniversary.MarionetteMeshData
// 0x0018 (0x0018 - 0x0000)
struct FMarionetteMeshData final
{
public:
	class UStaticMesh*                            DancingMesh;                                       // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                      DancerMaterials[0x2];                              // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMarionetteMeshData) == 0x000008, "Wrong alignment on FMarionetteMeshData");
static_assert(sizeof(FMarionetteMeshData) == 0x000018, "Wrong size on FMarionetteMeshData");
static_assert(offsetof(FMarionetteMeshData, DancingMesh) == 0x000000, "Member 'FMarionetteMeshData::DancingMesh' has a wrong offset!");
static_assert(offsetof(FMarionetteMeshData, DancerMaterials) == 0x000008, "Member 'FMarionetteMeshData::DancerMaterials' has a wrong offset!");

}

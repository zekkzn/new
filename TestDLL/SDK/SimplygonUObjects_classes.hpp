#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimplygonUObjects

#include "Basic.hpp"

#include "SimplygonUObjects_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SimplygonUObjects.SimplygonStandinPipeline
// 0x0070 (0x00A0 - 0x0030)
class USimplygonStandinPipeline : public UObject
{
public:
	struct FChartAggregatorSettings               ChartAggregatorSettings;                           // 0x0030(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FMaterialOutputSettings                MaterialOutputSettings;                            // 0x0068(0x0038)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonStandinPipeline">();
	}
	static class USimplygonStandinPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonStandinPipeline>();
	}
};
static_assert(alignof(USimplygonStandinPipeline) == 0x000008, "Wrong alignment on USimplygonStandinPipeline");
static_assert(sizeof(USimplygonStandinPipeline) == 0x0000A0, "Wrong size on USimplygonStandinPipeline");
static_assert(offsetof(USimplygonStandinPipeline, ChartAggregatorSettings) == 0x000030, "Member 'USimplygonStandinPipeline::ChartAggregatorSettings' has a wrong offset!");
static_assert(offsetof(USimplygonStandinPipeline, MaterialOutputSettings) == 0x000068, "Member 'USimplygonStandinPipeline::MaterialOutputSettings' has a wrong offset!");

// Class SimplygonUObjects.StandinNearPipeline
// 0x01C0 (0x0260 - 0x00A0)
class UStandinNearPipeline final : public USimplygonStandinPipeline
{
public:
	struct FAggregationPipelineSettings           Settings;                                          // 0x00A0(0x01C0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StandinNearPipeline">();
	}
	static class UStandinNearPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandinNearPipeline>();
	}
};
static_assert(alignof(UStandinNearPipeline) == 0x000008, "Wrong alignment on UStandinNearPipeline");
static_assert(sizeof(UStandinNearPipeline) == 0x000260, "Wrong size on UStandinNearPipeline");
static_assert(offsetof(UStandinNearPipeline, Settings) == 0x0000A0, "Member 'UStandinNearPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.StandinFarPipeline
// 0x01D8 (0x0278 - 0x00A0)
class UStandinFarPipeline final : public USimplygonStandinPipeline
{
public:
	struct FRemeshingPipelineSettings             Settings;                                          // 0x00A0(0x01D8)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StandinFarPipeline">();
	}
	static class UStandinFarPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandinFarPipeline>();
	}
};
static_assert(alignof(UStandinFarPipeline) == 0x000008, "Wrong alignment on UStandinFarPipeline");
static_assert(sizeof(UStandinFarPipeline) == 0x000278, "Wrong size on UStandinFarPipeline");
static_assert(offsetof(UStandinFarPipeline, Settings) == 0x0000A0, "Member 'UStandinFarPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.BillboardCloudPipeline
// 0x0110 (0x01B0 - 0x00A0)
class UBillboardCloudPipeline final : public USimplygonStandinPipeline
{
public:
	struct FBillboardCloudPipelineSettings        Settings;                                          // 0x00A0(0x0110)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BillboardCloudPipeline">();
	}
	static class UBillboardCloudPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBillboardCloudPipeline>();
	}
};
static_assert(alignof(UBillboardCloudPipeline) == 0x000008, "Wrong alignment on UBillboardCloudPipeline");
static_assert(sizeof(UBillboardCloudPipeline) == 0x0001B0, "Wrong size on UBillboardCloudPipeline");
static_assert(offsetof(UBillboardCloudPipeline, Settings) == 0x0000A0, "Member 'UBillboardCloudPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonPipeline
// 0x0000 (0x0030 - 0x0030)
class USimplygonPipeline : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonPipeline">();
	}
	static class USimplygonPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonPipeline>();
	}
};
static_assert(alignof(USimplygonPipeline) == 0x000008, "Wrong alignment on USimplygonPipeline");
static_assert(sizeof(USimplygonPipeline) == 0x000030, "Wrong size on USimplygonPipeline");

// Class SimplygonUObjects.FlipbookPipeline
// 0x0120 (0x0150 - 0x0030)
class UFlipbookPipeline final : public USimplygonPipeline
{
public:
	struct FFlipbookPipelineSettings              Settings;                                          // 0x0030(0x0120)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FlipbookPipeline">();
	}
	static class UFlipbookPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlipbookPipeline>();
	}
};
static_assert(alignof(UFlipbookPipeline) == 0x000008, "Wrong alignment on UFlipbookPipeline");
static_assert(sizeof(UFlipbookPipeline) == 0x000150, "Wrong size on UFlipbookPipeline");
static_assert(offsetof(UFlipbookPipeline, Settings) == 0x000030, "Member 'UFlipbookPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.BillboardCloudVegetationPipeline
// 0x0110 (0x0140 - 0x0030)
class UBillboardCloudVegetationPipeline final : public USimplygonPipeline
{
public:
	struct FBillboardCloudVegetationPipelineSettings Settings;                                          // 0x0030(0x0110)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BillboardCloudVegetationPipeline">();
	}
	static class UBillboardCloudVegetationPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBillboardCloudVegetationPipeline>();
	}
};
static_assert(alignof(UBillboardCloudVegetationPipeline) == 0x000008, "Wrong alignment on UBillboardCloudVegetationPipeline");
static_assert(sizeof(UBillboardCloudVegetationPipeline) == 0x000140, "Wrong size on UBillboardCloudVegetationPipeline");
static_assert(offsetof(UBillboardCloudVegetationPipeline, Settings) == 0x000030, "Member 'UBillboardCloudVegetationPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.RemeshingPipeline
// 0x01D8 (0x0208 - 0x0030)
class URemeshingPipeline final : public USimplygonPipeline
{
public:
	struct FRemeshingPipelineSettings             Settings;                                          // 0x0030(0x01D8)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemeshingPipeline">();
	}
	static class URemeshingPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemeshingPipeline>();
	}
};
static_assert(alignof(URemeshingPipeline) == 0x000008, "Wrong alignment on URemeshingPipeline");
static_assert(sizeof(URemeshingPipeline) == 0x000208, "Wrong size on URemeshingPipeline");
static_assert(offsetof(URemeshingPipeline, Settings) == 0x000030, "Member 'URemeshingPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.HighDensityMeshReductionPipeline
// 0x0030 (0x0060 - 0x0030)
class UHighDensityMeshReductionPipeline final : public USimplygonPipeline
{
public:
	struct FHighDensityMeshReductionPipelineSettings Settings;                                          // 0x0030(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HighDensityMeshReductionPipeline">();
	}
	static class UHighDensityMeshReductionPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHighDensityMeshReductionPipeline>();
	}
};
static_assert(alignof(UHighDensityMeshReductionPipeline) == 0x000008, "Wrong alignment on UHighDensityMeshReductionPipeline");
static_assert(sizeof(UHighDensityMeshReductionPipeline) == 0x000060, "Wrong size on UHighDensityMeshReductionPipeline");
static_assert(offsetof(UHighDensityMeshReductionPipeline, Settings) == 0x000030, "Member 'UHighDensityMeshReductionPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonMaterialCaster
// 0x0000 (0x0030 - 0x0030)
class USimplygonMaterialCaster : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonMaterialCaster">();
	}
	static class USimplygonMaterialCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonMaterialCaster>();
	}
};
static_assert(alignof(USimplygonMaterialCaster) == 0x000008, "Wrong alignment on USimplygonMaterialCaster");
static_assert(sizeof(USimplygonMaterialCaster) == 0x000030, "Wrong size on USimplygonMaterialCaster");

// Class SimplygonUObjects.SimplygonColorCaster
// 0x0030 (0x0060 - 0x0030)
class USimplygonColorCaster : public USimplygonMaterialCaster
{
public:
	struct FColorCasterSettings                   ColorCasterSettings;                               // 0x0030(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonColorCaster">();
	}
	static class USimplygonColorCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonColorCaster>();
	}
};
static_assert(alignof(USimplygonColorCaster) == 0x000008, "Wrong alignment on USimplygonColorCaster");
static_assert(sizeof(USimplygonColorCaster) == 0x000060, "Wrong size on USimplygonColorCaster");
static_assert(offsetof(USimplygonColorCaster, ColorCasterSettings) == 0x000030, "Member 'USimplygonColorCaster::ColorCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.BaseColorCaster
// 0x0000 (0x0060 - 0x0060)
class UBaseColorCaster : public USimplygonColorCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseColorCaster">();
	}
	static class UBaseColorCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseColorCaster>();
	}
};
static_assert(alignof(UBaseColorCaster) == 0x000008, "Wrong alignment on UBaseColorCaster");
static_assert(sizeof(UBaseColorCaster) == 0x000060, "Wrong size on UBaseColorCaster");

// Class SimplygonUObjects.MetallicCaster
// 0x0000 (0x0060 - 0x0060)
class UMetallicCaster final : public UBaseColorCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetallicCaster">();
	}
	static class UMetallicCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetallicCaster>();
	}
};
static_assert(alignof(UMetallicCaster) == 0x000008, "Wrong alignment on UMetallicCaster");
static_assert(sizeof(UMetallicCaster) == 0x000060, "Wrong size on UMetallicCaster");

// Class SimplygonUObjects.SpecualarCaster
// 0x0000 (0x0060 - 0x0060)
class USpecualarCaster final : public UBaseColorCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecualarCaster">();
	}
	static class USpecualarCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecualarCaster>();
	}
};
static_assert(alignof(USpecualarCaster) == 0x000008, "Wrong alignment on USpecualarCaster");
static_assert(sizeof(USpecualarCaster) == 0x000060, "Wrong size on USpecualarCaster");

// Class SimplygonUObjects.RoughnessCaster
// 0x0000 (0x0060 - 0x0060)
class URoughnessCaster final : public UBaseColorCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RoughnessCaster">();
	}
	static class URoughnessCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<URoughnessCaster>();
	}
};
static_assert(alignof(URoughnessCaster) == 0x000008, "Wrong alignment on URoughnessCaster");
static_assert(sizeof(URoughnessCaster) == 0x000060, "Wrong size on URoughnessCaster");

// Class SimplygonUObjects.SimplygonNormalCaster
// 0x0030 (0x0060 - 0x0030)
class USimplygonNormalCaster : public USimplygonMaterialCaster
{
public:
	struct FNormalCasterSettings                  NormalCasterSettings;                              // 0x0030(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonNormalCaster">();
	}
	static class USimplygonNormalCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonNormalCaster>();
	}
};
static_assert(alignof(USimplygonNormalCaster) == 0x000008, "Wrong alignment on USimplygonNormalCaster");
static_assert(sizeof(USimplygonNormalCaster) == 0x000060, "Wrong size on USimplygonNormalCaster");
static_assert(offsetof(USimplygonNormalCaster, NormalCasterSettings) == 0x000030, "Member 'USimplygonNormalCaster::NormalCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.NormalCaster
// 0x0000 (0x0060 - 0x0060)
class UNormalCaster final : public USimplygonNormalCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NormalCaster">();
	}
	static class UNormalCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNormalCaster>();
	}
};
static_assert(alignof(UNormalCaster) == 0x000008, "Wrong alignment on UNormalCaster");
static_assert(sizeof(UNormalCaster) == 0x000060, "Wrong size on UNormalCaster");

// Class SimplygonUObjects.SimplygonOpacityCaster
// 0x0030 (0x0060 - 0x0030)
class USimplygonOpacityCaster : public USimplygonMaterialCaster
{
public:
	struct FOpacityCasterSettings                 OpacityCasterSettings;                             // 0x0030(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonOpacityCaster">();
	}
	static class USimplygonOpacityCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonOpacityCaster>();
	}
};
static_assert(alignof(USimplygonOpacityCaster) == 0x000008, "Wrong alignment on USimplygonOpacityCaster");
static_assert(sizeof(USimplygonOpacityCaster) == 0x000060, "Wrong size on USimplygonOpacityCaster");
static_assert(offsetof(USimplygonOpacityCaster, OpacityCasterSettings) == 0x000030, "Member 'USimplygonOpacityCaster::OpacityCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.OpacityCaster
// 0x0000 (0x0060 - 0x0060)
class UOpacityCaster final : public USimplygonOpacityCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpacityCaster">();
	}
	static class UOpacityCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpacityCaster>();
	}
};
static_assert(alignof(UOpacityCaster) == 0x000008, "Wrong alignment on UOpacityCaster");
static_assert(sizeof(UOpacityCaster) == 0x000060, "Wrong size on UOpacityCaster");

// Class SimplygonUObjects.EmissiveCaster
// 0x0000 (0x0060 - 0x0060)
class UEmissiveCaster final : public UBaseColorCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EmissiveCaster">();
	}
	static class UEmissiveCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmissiveCaster>();
	}
};
static_assert(alignof(UEmissiveCaster) == 0x000008, "Wrong alignment on UEmissiveCaster");
static_assert(sizeof(UEmissiveCaster) == 0x000060, "Wrong size on UEmissiveCaster");

// Class SimplygonUObjects.OpacityMaskCaster
// 0x0000 (0x0060 - 0x0060)
class UOpacityMaskCaster final : public USimplygonOpacityCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpacityMaskCaster">();
	}
	static class UOpacityMaskCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpacityMaskCaster>();
	}
};
static_assert(alignof(UOpacityMaskCaster) == 0x000008, "Wrong alignment on UOpacityMaskCaster");
static_assert(sizeof(UOpacityMaskCaster) == 0x000060, "Wrong size on UOpacityMaskCaster");

// Class SimplygonUObjects.AmbientOcclusionMaskCaster
// 0x0000 (0x0060 - 0x0060)
class UAmbientOcclusionMaskCaster final : public UBaseColorCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbientOcclusionMaskCaster">();
	}
	static class UAmbientOcclusionMaskCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbientOcclusionMaskCaster>();
	}
};
static_assert(alignof(UAmbientOcclusionMaskCaster) == 0x000008, "Wrong alignment on UAmbientOcclusionMaskCaster");
static_assert(sizeof(UAmbientOcclusionMaskCaster) == 0x000060, "Wrong size on UAmbientOcclusionMaskCaster");

// Class SimplygonUObjects.ReductionPipeline
// 0x0230 (0x0260 - 0x0030)
class UReductionPipeline final : public USimplygonPipeline
{
public:
	struct FReductionPipelineSettings             Settings;                                          // 0x0030(0x0230)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReductionPipeline">();
	}
	static class UReductionPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReductionPipeline>();
	}
};
static_assert(alignof(UReductionPipeline) == 0x000008, "Wrong alignment on UReductionPipeline");
static_assert(sizeof(UReductionPipeline) == 0x000260, "Wrong size on UReductionPipeline");
static_assert(offsetof(UReductionPipeline, Settings) == 0x000030, "Member 'UReductionPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.AggregationPipeline
// 0x01C0 (0x01F0 - 0x0030)
class UAggregationPipeline final : public USimplygonPipeline
{
public:
	struct FAggregationPipelineSettings           Settings;                                          // 0x0030(0x01C0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AggregationPipeline">();
	}
	static class UAggregationPipeline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAggregationPipeline>();
	}
};
static_assert(alignof(UAggregationPipeline) == 0x000008, "Wrong alignment on UAggregationPipeline");
static_assert(sizeof(UAggregationPipeline) == 0x0001F0, "Wrong size on UAggregationPipeline");
static_assert(offsetof(UAggregationPipeline, Settings) == 0x000030, "Member 'UAggregationPipeline::Settings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonDisplacementCaster
// 0x0038 (0x0068 - 0x0030)
class USimplygonDisplacementCaster final : public USimplygonMaterialCaster
{
public:
	struct FDisplacementCasterSettings            DisplacementCasterSettings;                        // 0x0030(0x0038)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonDisplacementCaster">();
	}
	static class USimplygonDisplacementCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonDisplacementCaster>();
	}
};
static_assert(alignof(USimplygonDisplacementCaster) == 0x000008, "Wrong alignment on USimplygonDisplacementCaster");
static_assert(sizeof(USimplygonDisplacementCaster) == 0x000068, "Wrong size on USimplygonDisplacementCaster");
static_assert(offsetof(USimplygonDisplacementCaster, DisplacementCasterSettings) == 0x000030, "Member 'USimplygonDisplacementCaster::DisplacementCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
// 0x0040 (0x0070 - 0x0030)
class USimplygonAmbientOcclusionCaster final : public USimplygonMaterialCaster
{
public:
	struct FAmbientOcclusionCasterSettings        AmbientOcclusionCasterSettings;                    // 0x0030(0x0040)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonAmbientOcclusionCaster">();
	}
	static class USimplygonAmbientOcclusionCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonAmbientOcclusionCaster>();
	}
};
static_assert(alignof(USimplygonAmbientOcclusionCaster) == 0x000008, "Wrong alignment on USimplygonAmbientOcclusionCaster");
static_assert(sizeof(USimplygonAmbientOcclusionCaster) == 0x000070, "Wrong size on USimplygonAmbientOcclusionCaster");
static_assert(offsetof(USimplygonAmbientOcclusionCaster, AmbientOcclusionCasterSettings) == 0x000030, "Member 'USimplygonAmbientOcclusionCaster::AmbientOcclusionCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonGeometryDataCaster
// 0x0080 (0x00B0 - 0x0030)
class USimplygonGeometryDataCaster final : public USimplygonMaterialCaster
{
public:
	struct FGeometryDataCasterSettings            GeometryDataCasterSettings;                        // 0x0030(0x0080)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonGeometryDataCaster">();
	}
	static class USimplygonGeometryDataCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonGeometryDataCaster>();
	}
};
static_assert(alignof(USimplygonGeometryDataCaster) == 0x000010, "Wrong alignment on USimplygonGeometryDataCaster");
static_assert(sizeof(USimplygonGeometryDataCaster) == 0x0000B0, "Wrong size on USimplygonGeometryDataCaster");
static_assert(offsetof(USimplygonGeometryDataCaster, GeometryDataCasterSettings) == 0x000030, "Member 'USimplygonGeometryDataCaster::GeometryDataCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonVertexColorCaster
// 0x0048 (0x0078 - 0x0030)
class USimplygonVertexColorCaster final : public USimplygonMaterialCaster
{
public:
	struct FVertexColorCasterSettings             VertexColorCasterSettings;                         // 0x0030(0x0048)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonVertexColorCaster">();
	}
	static class USimplygonVertexColorCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonVertexColorCaster>();
	}
};
static_assert(alignof(USimplygonVertexColorCaster) == 0x000008, "Wrong alignment on USimplygonVertexColorCaster");
static_assert(sizeof(USimplygonVertexColorCaster) == 0x000078, "Wrong size on USimplygonVertexColorCaster");
static_assert(offsetof(USimplygonVertexColorCaster, VertexColorCasterSettings) == 0x000030, "Member 'USimplygonVertexColorCaster::VertexColorCasterSettings' has a wrong offset!");

// Class SimplygonUObjects.SimplygonComputeCaster
// 0x0038 (0x0068 - 0x0030)
class USimplygonComputeCaster final : public USimplygonMaterialCaster
{
public:
	struct FComputeCasterSettings                 ComputeCasterSettings;                             // 0x0030(0x0038)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimplygonComputeCaster">();
	}
	static class USimplygonComputeCaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplygonComputeCaster>();
	}
};
static_assert(alignof(USimplygonComputeCaster) == 0x000008, "Wrong alignment on USimplygonComputeCaster");
static_assert(sizeof(USimplygonComputeCaster) == 0x000068, "Wrong size on USimplygonComputeCaster");
static_assert(offsetof(USimplygonComputeCaster, ComputeCasterSettings) == 0x000030, "Member 'USimplygonComputeCaster::ComputeCasterSettings' has a wrong offset!");

}

#pragma once
#include <cstdint>

namespace offsets {
    namespace worldrenderer {
        enum class ObjectTypeFlags_t : std::uint32_t {
            OBJECT_TYPE_NONE                    = 0x0,
            OBJECT_TYPE_MODEL                   = 0x8,
            OBJECT_TYPE_BLOCK_LIGHT             = 0x10,
            OBJECT_TYPE_NO_SHADOWS              = 0x20,
            OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
            OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
            OBJECT_TYPE_NO_SUN_SHADOWS          = 0x100,
            OBJECT_TYPE_RENDER_WITH_DYNAMIC     = 0x200,
            OBJECT_TYPE_RENDER_TO_CUBEMAPS      = 0x400,
            OBJECT_TYPE_MODEL_HAS_LODS          = 0x800,
            OBJECT_TYPE_OVERLAY                 = 0x2000,
            OBJECT_TYPE_PRECOMPUTED_VISMEMBERS  = 0x4000,
            OBJECT_TYPE_STATIC_CUBE_MAP         = 0x8000,
            OBJECT_TYPE_DISABLE_VIS_CULLING     = 0x10000,
            OBJECT_TYPE_BAKED_GEOMETRY          = 0x20000
        };

        enum class AggregateInstanceStream_t : std::uint8_t {
            AGGREGATE_INSTANCE_STREAM_NONE               = 0x0,
            AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
            AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8  = 0x2,
            AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4
        };

        enum class RTProxyInstanceFlags_t : std::uint8_t {
            RTPROXY_INSTANCE_FLAG_NONE   = 0x0,
            RTPROXY_INSTANCE_UNIQUE_MESH = 0x1
        };

        // Construct Allowed
        struct EntityIOConnectionData_t {
        public:
            static constexpr std::uintptr_t m_outputName    = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_targetType    = 0x0008; // uint32
            static constexpr std::uintptr_t m_targetName    = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_inputName     = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_overrideParam = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_flDelay       = 0x0028; // float32
            static constexpr std::uintptr_t m_nTimesToFire  = 0x002C; // int32
            static constexpr std::uintptr_t m_paramMap      = 0x0030; // KeyValues3
        };

        // Has VTable
        // Construct Allowed
        struct EntityKeyValueData_t {
        public:
            static constexpr std::uintptr_t m_connections   = 0x0008; // CUtlVector<EntityIOConnectionData_t>
            static constexpr std::uintptr_t m_keyValuesData = 0x0020; // CUtlBinaryBlock
        };

        // Has VTable
        // Construct Allowed
        struct PermEntityLumpData_t {
        public:
            static constexpr std::uintptr_t m_name            = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_childLumps      = 0x0010; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            static constexpr std::uintptr_t m_entityKeyValues = 0x0028; // CUtlLeanVector<EntityKeyValueData_t>
        };

        // Construct Allowed
        struct SceneObject_t {
        public:
            static constexpr std::uintptr_t m_nObjectID                             = 0x0000; // uint32
            static constexpr std::uintptr_t m_vTransform                            = 0x0004; // Vector4D[3]
            static constexpr std::uintptr_t m_flFadeStartDistance                   = 0x0034; // float32
            static constexpr std::uintptr_t m_flFadeEndDistance                     = 0x0038; // float32
            static constexpr std::uintptr_t m_vTintColor                            = 0x003C; // Vector4D
            static constexpr std::uintptr_t m_skin                                  = 0x0050; // CUtlString
            static constexpr std::uintptr_t m_nObjectTypeFlags                      = 0x0058; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_vLightingOrigin                       = 0x005C; // Vector
            static constexpr std::uintptr_t m_nOverlayRenderOrder                   = 0x0068; // int16
            static constexpr std::uintptr_t m_nLODOverride                          = 0x006A; // int16
            static constexpr std::uintptr_t m_nCubeMapPrecomputedHandshake          = 0x006C; // int32
            static constexpr std::uintptr_t m_nLightProbeVolumePrecomputedHandshake = 0x0070; // int32
            static constexpr std::uintptr_t m_renderableModel                       = 0x0078; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_renderable                            = 0x0080; // CStrongHandle<InfoForResourceTypeCRenderMesh>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct BaseSceneObjectOverride_t {
        public:
            static constexpr std::uintptr_t m_nSceneObjectIndex = 0x0000; // uint32
        };

        // Construct Allowed
        struct BakedLightingInfo_t {
        public:
            static constexpr std::uintptr_t m_nLightmapVersionNumber     = 0x0000; // uint32
            static constexpr std::uintptr_t m_nLightmapGameVersionNumber = 0x0004; // uint32
            static constexpr std::uintptr_t m_vLightmapUvScale           = 0x0008; // Vector2D
            static constexpr std::uintptr_t m_bHasLightmaps              = 0x0010; // bool
            static constexpr std::uintptr_t m_bBakedShadowsGamma20       = 0x0011; // bool
            static constexpr std::uintptr_t m_bCompressionEnabled        = 0x0012; // bool
            static constexpr std::uintptr_t m_bSHLightmaps               = 0x0013; // bool
            static constexpr std::uintptr_t m_nChartPackIterations       = 0x0014; // uint8
            static constexpr std::uintptr_t m_nVradQuality               = 0x0015; // uint8
            static constexpr std::uintptr_t m_lightMaps                  = 0x0018; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
            static constexpr std::uintptr_t m_bakedShadows               = 0x0030; // CUtlVector<BakedLightingInfo_t::BakedShadowAssignment_t>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct BakedLightingInfo_t__BakedShadowAssignment_t {
        public:
            static constexpr std::uintptr_t m_nLightHash     = 0x0000; // uint32
            static constexpr std::uintptr_t m_nMapHash       = 0x0004; // uint32
            static constexpr std::uintptr_t m_nShadowChannel = 0x0008; // int8
        };

        // Construct Allowed
        struct WorldNodeOnDiskBufferData_t {
        public:
            static constexpr std::uintptr_t m_nElementCount       = 0x0000; // int32
            static constexpr std::uintptr_t m_nElementSizeInBytes = 0x0004; // int32
            static constexpr std::uintptr_t m_inputLayoutFields   = 0x0008; // CUtlVector<RenderInputLayoutField_t>
            static constexpr std::uintptr_t m_pData               = 0x0020; // CUtlVector<uint8>
        };

        // Construct Allowed
        struct AggregateInstanceStreamOnDiskData_t {
        public:
            static constexpr std::uintptr_t m_DecodedSize = 0x0000; // uint32
            static constexpr std::uintptr_t m_BufferData  = 0x0008; // CUtlBinaryBlock
        };

        // Construct Allowed
        struct AggregateVertexAlbedoStreamOnDiskData_t {
        public:
            static constexpr std::uintptr_t m_BufferData = 0x0000; // CUtlBinaryBlock
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct AggregateMeshInfo_t {
        public:
            static constexpr std::uintptr_t m_nVisClusterMemberOffset               = 0x0000; // uint32
            static constexpr std::uintptr_t m_nVisClusterMemberCount                = 0x0004; // uint8
            static constexpr std::uintptr_t m_bHasTransform                         = 0x0005; // bool
            static constexpr std::uintptr_t m_nLODGroupMask                         = 0x0006; // uint8
            static constexpr std::uintptr_t m_nDrawCallIndex                        = 0x0008; // int16
            static constexpr std::uintptr_t m_nLODSetupIndex                        = 0x000A; // int16
            static constexpr std::uintptr_t m_vTintColor                            = 0x000C; // Color
            static constexpr std::uintptr_t m_objectFlags                           = 0x0010; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_nLightProbeVolumePrecomputedHandshake = 0x0014; // int32
            static constexpr std::uintptr_t m_nInstanceStreamOffset                 = 0x0018; // uint32
            static constexpr std::uintptr_t m_nVertexAlbedoStreamOffset             = 0x001C; // uint32
            static constexpr std::uintptr_t m_instanceStreams                       = 0x0020; // AggregateInstanceStream_t
        };

        // Construct Allowed
        struct AggregateLODSetup_t {
        public:
            static constexpr std::uintptr_t m_vLODOrigin       = 0x0000; // Vector
            static constexpr std::uintptr_t m_fMaxObjectScale  = 0x000C; // float32
            static constexpr std::uintptr_t m_fSwitchDistances = 0x0010; // CUtlVector<float32>
        };

        // Construct Allowed
        struct AggregateSceneObject_t {
        public:
            static constexpr std::uintptr_t m_allFlags             = 0x0000; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_anyFlags             = 0x0004; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_nLayer               = 0x0008; // int16
            static constexpr std::uintptr_t m_instanceStream       = 0x000A; // int16
            static constexpr std::uintptr_t m_vertexAlbedoStream   = 0x000C; // int16
            static constexpr std::uintptr_t m_aggregateMeshes      = 0x0010; // CUtlVector<AggregateMeshInfo_t>
            static constexpr std::uintptr_t m_lodSetups            = 0x0028; // CUtlVector<AggregateLODSetup_t>
            static constexpr std::uintptr_t m_visClusterMembership = 0x0040; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_fragmentTransforms   = 0x0058; // CUtlVector<matrix3x4_t>
            static constexpr std::uintptr_t m_renderableModel      = 0x0070; // CStrongHandle<InfoForResourceTypeCModel>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RTProxyBLAS_t {
        public:
            static constexpr std::uintptr_t m_nFirstIndex     = 0x0000; // uint32
            static constexpr std::uintptr_t m_nIndexCount     = 0x0004; // uint32
            static constexpr std::uintptr_t m_nVBByteOffset   = 0x0008; // uint32
            static constexpr std::uintptr_t m_nBaseVertex     = 0x000C; // uint32
            static constexpr std::uintptr_t m_nVertexCount    = 0x0010; // uint16
            static constexpr std::uintptr_t m_albedoFormat    = 0x0012; // VertexAlbedoFormat_t
            static constexpr std::uintptr_t m_boundLs         = 0x0014; // AABB_t
            static constexpr std::uintptr_t m_vVertexOriginLs = 0x002C; // Vector
            static constexpr std::uintptr_t m_vVertexExtentLs = 0x0038; // Vector
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RTProxyInstanceInfo_t {
        public:
            static constexpr std::uintptr_t m_nFlags                  = 0x0000; // RTProxyInstanceFlags_t
            static constexpr std::uintptr_t m_albedoFormat            = 0x0001; // VertexAlbedoFormat_t
            static constexpr std::uintptr_t m_nBLASCount              = 0x0002; // uint16
            static constexpr std::uintptr_t m_nBLASIndex              = 0x0004; // uint32
            static constexpr std::uintptr_t m_nVertexAlbedoByteOffset = 0x0008; // uint32
            static constexpr std::uintptr_t m_mWorldFromLocal         = 0x000C; // matrix3x4_t
        };

        // Construct Allowed
        struct AggregateRTProxySceneObject_t {
        public:
            static constexpr std::uintptr_t m_nLayer             = 0x0000; // int16
            static constexpr std::uintptr_t m_BLASes             = 0x0008; // CUtlVector<RTProxyBLAS_t>
            static constexpr std::uintptr_t m_Instances          = 0x0020; // CUtlVector<RTProxyInstanceInfo_t>
            static constexpr std::uintptr_t m_VBData             = 0x0038; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_IBData             = 0x0048; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_InstanceAlbedoData = 0x0058; // CUtlBinaryBlock
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct ClutterTile_t {
        public:
            static constexpr std::uintptr_t m_nFirstInstance = 0x0000; // uint32
            static constexpr std::uintptr_t m_nLastInstance  = 0x0004; // uint32
            static constexpr std::uintptr_t m_BoundsWs       = 0x0008; // AABB_t
        };

        // Construct Allowed
        struct ClutterSceneObject_t {
        public:
            static constexpr std::uintptr_t m_Bounds            = 0x0000; // AABB_t
            static constexpr std::uintptr_t m_flags             = 0x0018; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_nLayer            = 0x001C; // int16
            static constexpr std::uintptr_t m_instancePositions = 0x0020; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_instanceScales    = 0x0050; // CUtlVector<float32>
            static constexpr std::uintptr_t m_instanceTintSrgb  = 0x0068; // CUtlVector<Color>
            static constexpr std::uintptr_t m_tiles             = 0x0080; // CUtlVector<ClutterTile_t>
            static constexpr std::uintptr_t m_renderableModel   = 0x0098; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_materialGroup     = 0x00A0; // CUtlStringToken
            static constexpr std::uintptr_t m_flBeginCullSize   = 0x00A4; // float32
            static constexpr std::uintptr_t m_flEndCullSize     = 0x00A8; // float32
        };

        // Construct Allowed
        struct WorldNode_t {
        public:
            static constexpr std::uintptr_t m_sceneObjects               = 0x0000; // CUtlVector<SceneObject_t>
            static constexpr std::uintptr_t m_visClusterMembership       = 0x0018; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_aggregateSceneObjects      = 0x0030; // CUtlVector<AggregateSceneObject_t>
            static constexpr std::uintptr_t m_clutterSceneObjects        = 0x0048; // CUtlVector<ClutterSceneObject_t>
            static constexpr std::uintptr_t m_rtProxies                  = 0x0060; // CUtlVector<AggregateRTProxySceneObject_t>
            static constexpr std::uintptr_t m_extraVertexStreamOverrides = 0x0078; // CUtlVector<ExtraVertexStreamOverride_t>
            static constexpr std::uintptr_t m_materialOverrides          = 0x0090; // CUtlVector<MaterialOverride_t>
            static constexpr std::uintptr_t m_extraVertexStreams         = 0x00A8; // CUtlVector<WorldNodeOnDiskBufferData_t>
            static constexpr std::uintptr_t m_aggregateInstanceStreams   = 0x00C0; // CUtlVector<AggregateInstanceStreamOnDiskData_t>
            static constexpr std::uintptr_t m_vertexAlbedoStreams        = 0x00D8; // CUtlVector<AggregateVertexAlbedoStreamOnDiskData_t>
            static constexpr std::uintptr_t m_layerNames                 = 0x00F0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_sceneObjectLayerIndices    = 0x0108; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_grassFileName              = 0x0120; // CUtlString
            static constexpr std::uintptr_t m_nodeLightingInfo           = 0x0128; // BakedLightingInfo_t
            static constexpr std::uintptr_t m_bHasBakedGeometryFlag      = 0x0170; // bool
        };

        // Construct Allowed
        struct WorldBuilderParams_t {
        public:
            static constexpr std::uintptr_t m_flMinDrawVolumeSize       = 0x0000; // float32
            static constexpr std::uintptr_t m_bBuildBakedLighting       = 0x0004; // bool
            static constexpr std::uintptr_t m_bAggregateInstanceStreams = 0x0005; // bool
            static constexpr std::uintptr_t m_bakedLightingInfo         = 0x0008; // BakedLightingInfo_t
            static constexpr std::uintptr_t m_nCompileTimestamp         = 0x0050; // uint64
            static constexpr std::uintptr_t m_nCompileFingerprint       = 0x0058; // uint64
        };

        // Construct Allowed
        struct NodeData_t {
        public:
            static constexpr std::uintptr_t m_nParent           = 0x0000; // int32
            static constexpr std::uintptr_t m_vOrigin           = 0x0004; // Vector
            static constexpr std::uintptr_t m_vMinBounds        = 0x0010; // Vector
            static constexpr std::uintptr_t m_vMaxBounds        = 0x001C; // Vector
            static constexpr std::uintptr_t m_flMinimumDistance = 0x0028; // float32
            static constexpr std::uintptr_t m_ChildNodeIndices  = 0x0030; // CUtlVector<int32>
            static constexpr std::uintptr_t m_worldNodePrefix   = 0x0048; // CUtlString
        };

        // Construct Allowed
        struct World_t {
        public:
            static constexpr std::uintptr_t m_builderParams     = 0x0000; // WorldBuilderParams_t
            static constexpr std::uintptr_t m_worldNodes        = 0x0060; // CUtlVector<NodeData_t>
            static constexpr std::uintptr_t m_worldLightingInfo = 0x0078; // BakedLightingInfo_t
            static constexpr std::uintptr_t m_entityLumps       = 0x00C0; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VoxelVisBlockOffset_t {
        public:
            static constexpr std::uintptr_t m_nOffset       = 0x0000; // uint32
            static constexpr std::uintptr_t m_nElementCount = 0x0004; // uint32
        };

        // Construct Allowed
        class CVoxelVisibility {
        public:
            static constexpr std::uintptr_t m_nBaseClusterCount        = 0x0040; // uint32
            static constexpr std::uintptr_t m_nPVSBytesPerCluster      = 0x0044; // uint32
            static constexpr std::uintptr_t m_vMinBounds               = 0x0048; // Vector
            static constexpr std::uintptr_t m_vMaxBounds               = 0x0054; // Vector
            static constexpr std::uintptr_t m_flGridSize               = 0x0060; // float32
            static constexpr std::uintptr_t m_nSkyVisibilityCluster    = 0x0064; // uint32
            static constexpr std::uintptr_t m_nSunVisibilityCluster    = 0x0068; // uint32
            static constexpr std::uintptr_t m_NodeBlock                = 0x006C; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_RegionBlock              = 0x0074; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_EnclosedClusterListBlock = 0x007C; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_EnclosedClustersBlock    = 0x0084; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_MasksBlock               = 0x008C; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_nVisBlocks               = 0x0094; // VoxelVisBlockOffset_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct VMapResourceData_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct InfoForResourceTypeVMapResourceData_t {
        public:
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        // Local Type Scope
        class CEntityComponent {
        public:
        };

        // Local Type Scope
        class CEntityIdentity {
        public:
            static constexpr std::uintptr_t m_nameStringableIndex = 0x0014; // int32
            static constexpr std::uintptr_t m_name                = 0x0018; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_designerName        = 0x0020; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flags               = 0x0030; // uint32
            static constexpr std::uintptr_t m_worldGroupId        = 0x0038; // WorldGroupId_t
            static constexpr std::uintptr_t m_fDataObjectTypes    = 0x003C; // uint32
            static constexpr std::uintptr_t m_PathIndex           = 0x0040; // ChangeAccessorFieldPathIndex_t
            static constexpr std::uintptr_t m_pAttributes         = 0x0048; // CEntityAttributeTable*
            static constexpr std::uintptr_t m_pPrev               = 0x0050; // CEntityIdentity*
            static constexpr std::uintptr_t m_pNext               = 0x0058; // CEntityIdentity*
            static constexpr std::uintptr_t m_pPrevByClass        = 0x0060; // CEntityIdentity*
            static constexpr std::uintptr_t m_pNextByClass        = 0x0068; // CEntityIdentity*
        };

        // Has VTable
        // Local Type Scope
        class CEntityInstance {
        public:
            static constexpr std::uintptr_t m_iszPrivateVScripts = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pEntity            = 0x0010; // CEntityIdentity*
            static constexpr std::uintptr_t m_CScriptComponent   = 0x0030; // CScriptComponent*
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0x0030; // CUtlSymbolLarge
        };

        // Has Trivial Destructor
        // Construct Allowed
        class ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t {
        public:
            static constexpr std::uintptr_t m_nSubSceneObject                   = 0x0004; // uint32
            static constexpr std::uintptr_t m_nDrawCallIndex                    = 0x0008; // uint32
            static constexpr std::uintptr_t m_nAdditionalMeshDrawPrimitiveFlags = 0x000C; // MeshDrawPrimitiveFlags_t
            static constexpr std::uintptr_t m_extraBufferBinding                = 0x0010; // CRenderBufferBinding
        };

        // Construct Allowed
        class MaterialOverride_t : public BaseSceneObjectOverride_t {
        public:
            static constexpr std::uintptr_t m_nSubSceneObject  = 0x0004; // uint32
            static constexpr std::uintptr_t m_nDrawCallIndex   = 0x0008; // uint32
            static constexpr std::uintptr_t m_pMaterial        = 0x0010; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_vLinearTintColor = 0x0018; // Vector
        };

    }
}

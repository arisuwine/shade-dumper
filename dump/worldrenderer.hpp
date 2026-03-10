#pragma once
#include <cstdint>

namespace offsets {
    namespace worldrenderer {
        enum class RTProxyInstanceFlags_t : std::uint8_t {
            RTPROXY_INSTANCE_FLAG_NONE   = 0x0,
            RTPROXY_INSTANCE_UNIQUE_MESH = 0x1
        };

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

        // Has VTable
        // Local Type Scope
        class CEntityInstance {
        public:
            static constexpr std::uintptr_t m_iszPrivateVScripts = 0X0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pEntity            = 0X0010; // CEntityIdentity*
            static constexpr std::uintptr_t m_CScriptComponent   = 0X0030; // CScriptComponent*
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        // Local Type Scope
        class CEntityComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0X0030; // CUtlSymbolLarge
        };

        // Local Type Scope
        class CEntityIdentity {
        public:
            static constexpr std::uintptr_t m_nameStringableIndex = 0X0014; // int32
            static constexpr std::uintptr_t m_name                = 0X0018; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_designerName        = 0X0020; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flags               = 0X0030; // uint32
            static constexpr std::uintptr_t m_worldGroupId        = 0X0038; // WorldGroupId_t
            static constexpr std::uintptr_t m_fDataObjectTypes    = 0X003C; // uint32
            static constexpr std::uintptr_t m_PathIndex           = 0X0040; // ChangeAccessorFieldPathIndex_t
            static constexpr std::uintptr_t m_pAttributes         = 0X0048; // CEntityAttributeTable*
            static constexpr std::uintptr_t m_pPrev               = 0X0050; // CEntityIdentity*
            static constexpr std::uintptr_t m_pNext               = 0X0058; // CEntityIdentity*
            static constexpr std::uintptr_t m_pPrevByClass        = 0X0060; // CEntityIdentity*
            static constexpr std::uintptr_t m_pNextByClass        = 0X0068; // CEntityIdentity*
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RTProxyInstanceInfo_t {
        public:
            static constexpr std::uintptr_t m_nFlags                  = 0X0000; // RTProxyInstanceFlags_t
            static constexpr std::uintptr_t m_albedoFormat            = 0X0001; // VertexAlbedoFormat_t
            static constexpr std::uintptr_t m_nBLASCount              = 0X0002; // uint16
            static constexpr std::uintptr_t m_nBLASIndex              = 0X0004; // uint32
            static constexpr std::uintptr_t m_nVertexAlbedoByteOffset = 0X0008; // uint32
            static constexpr std::uintptr_t m_mWorldFromLocal         = 0X000C; // matrix3x4_t
        };

        // Construct Allowed
        struct AggregateVertexAlbedoStreamOnDiskData_t {
        public:
            static constexpr std::uintptr_t m_BufferData = 0X0000; // CUtlBinaryBlock
        };

        // Construct Allowed
        struct SceneObject_t {
        public:
            static constexpr std::uintptr_t m_nObjectID                             = 0X0000; // uint32
            static constexpr std::uintptr_t m_vTransform                            = 0X0004; // Vector4D[3]
            static constexpr std::uintptr_t m_flFadeStartDistance                   = 0X0034; // float32
            static constexpr std::uintptr_t m_flFadeEndDistance                     = 0X0038; // float32
            static constexpr std::uintptr_t m_vTintColor                            = 0X003C; // Vector4D
            static constexpr std::uintptr_t m_skin                                  = 0X0050; // CUtlString
            static constexpr std::uintptr_t m_nObjectTypeFlags                      = 0X0058; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_vLightingOrigin                       = 0X005C; // Vector
            static constexpr std::uintptr_t m_nOverlayRenderOrder                   = 0X0068; // int16
            static constexpr std::uintptr_t m_nLODOverride                          = 0X006A; // int16
            static constexpr std::uintptr_t m_nCubeMapPrecomputedHandshake          = 0X006C; // int32
            static constexpr std::uintptr_t m_nLightProbeVolumePrecomputedHandshake = 0X0070; // int32
            static constexpr std::uintptr_t m_renderableModel                       = 0X0078; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_renderable                            = 0X0080; // CStrongHandle<InfoForResourceTypeCRenderMesh>
        };

        // Construct Allowed
        struct AggregateLODSetup_t {
        public:
            static constexpr std::uintptr_t m_vLODOrigin       = 0X0000; // Vector
            static constexpr std::uintptr_t m_fMaxObjectScale  = 0X000C; // float32
            static constexpr std::uintptr_t m_fSwitchDistances = 0X0010; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct BaseSceneObjectOverride_t {
        public:
            static constexpr std::uintptr_t m_nSceneObjectIndex = 0X0000; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t {
        public:
            static constexpr std::uintptr_t m_nSubSceneObject                   = 0X0004; // uint32
            static constexpr std::uintptr_t m_nDrawCallIndex                    = 0X0008; // uint32
            static constexpr std::uintptr_t m_nAdditionalMeshDrawPrimitiveFlags = 0X000C; // MeshDrawPrimitiveFlags_t
            static constexpr std::uintptr_t m_extraBufferBinding                = 0X0010; // CRenderBufferBinding
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct ClutterTile_t {
        public:
            static constexpr std::uintptr_t m_nFirstInstance = 0X0000; // uint32
            static constexpr std::uintptr_t m_nLastInstance  = 0X0004; // uint32
            static constexpr std::uintptr_t m_BoundsWs       = 0X0008; // AABB_t
        };

        // Construct Allowed
        struct AggregateSceneObject_t {
        public:
            static constexpr std::uintptr_t m_allFlags             = 0X0000; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_anyFlags             = 0X0004; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_nLayer               = 0X0008; // int16
            static constexpr std::uintptr_t m_instanceStream       = 0X000A; // int16
            static constexpr std::uintptr_t m_vertexAlbedoStream   = 0X000C; // int16
            static constexpr std::uintptr_t m_aggregateMeshes      = 0X0010; // CUtlVector<AggregateMeshInfo_t>
            static constexpr std::uintptr_t m_lodSetups            = 0X0028; // CUtlVector<AggregateLODSetup_t>
            static constexpr std::uintptr_t m_visClusterMembership = 0X0040; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_fragmentTransforms   = 0X0058; // CUtlVector<matrix3x4_t>
            static constexpr std::uintptr_t m_renderableModel      = 0X0070; // CStrongHandle<InfoForResourceTypeCModel>
        };

        // Construct Allowed
        struct NodeData_t {
        public:
            static constexpr std::uintptr_t m_nParent           = 0X0000; // int32
            static constexpr std::uintptr_t m_vOrigin           = 0X0004; // Vector
            static constexpr std::uintptr_t m_vMinBounds        = 0X0010; // Vector
            static constexpr std::uintptr_t m_vMaxBounds        = 0X001C; // Vector
            static constexpr std::uintptr_t m_flMinimumDistance = 0X0028; // float32
            static constexpr std::uintptr_t m_ChildNodeIndices  = 0X0030; // CUtlVector<int32>
            static constexpr std::uintptr_t m_worldNodePrefix   = 0X0048; // CUtlString
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct VMapResourceData_t {
        public:
        };

        // Construct Allowed
        struct AggregateInstanceStreamOnDiskData_t {
        public:
            static constexpr std::uintptr_t m_DecodedSize = 0X0000; // uint32
            static constexpr std::uintptr_t m_BufferData  = 0X0008; // CUtlBinaryBlock
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RTProxyBLAS_t {
        public:
            static constexpr std::uintptr_t m_nFirstIndex     = 0X0000; // uint32
            static constexpr std::uintptr_t m_nIndexCount     = 0X0004; // uint32
            static constexpr std::uintptr_t m_nVBByteOffset   = 0X0008; // uint32
            static constexpr std::uintptr_t m_nBaseVertex     = 0X000C; // uint32
            static constexpr std::uintptr_t m_nVertexCount    = 0X0010; // uint16
            static constexpr std::uintptr_t m_albedoFormat    = 0X0012; // VertexAlbedoFormat_t
            static constexpr std::uintptr_t m_boundLs         = 0X0014; // AABB_t
            static constexpr std::uintptr_t m_vVertexOriginLs = 0X002C; // Vector
            static constexpr std::uintptr_t m_vVertexExtentLs = 0X0038; // Vector
        };

        // Construct Allowed
        struct ClutterSceneObject_t {
        public:
            static constexpr std::uintptr_t m_Bounds            = 0X0000; // AABB_t
            static constexpr std::uintptr_t m_flags             = 0X0018; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_nLayer            = 0X001C; // int16
            static constexpr std::uintptr_t m_instancePositions = 0X0020; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_instanceScales    = 0X0050; // CUtlVector<float32>
            static constexpr std::uintptr_t m_instanceTintSrgb  = 0X0068; // CUtlVector<Color>
            static constexpr std::uintptr_t m_tiles             = 0X0080; // CUtlVector<ClutterTile_t>
            static constexpr std::uintptr_t m_renderableModel   = 0X0098; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_materialGroup     = 0X00A0; // CUtlStringToken
            static constexpr std::uintptr_t m_flBeginCullSize   = 0X00A4; // float32
            static constexpr std::uintptr_t m_flEndCullSize     = 0X00A8; // float32
        };

        // Construct Allowed
        struct WorldBuilderParams_t {
        public:
            static constexpr std::uintptr_t m_flMinDrawVolumeSize       = 0X0000; // float32
            static constexpr std::uintptr_t m_bBuildBakedLighting       = 0X0004; // bool
            static constexpr std::uintptr_t m_bAggregateInstanceStreams = 0X0005; // bool
            static constexpr std::uintptr_t m_bakedLightingInfo         = 0X0008; // BakedLightingInfo_t
            static constexpr std::uintptr_t m_nCompileTimestamp         = 0X0050; // uint64
            static constexpr std::uintptr_t m_nCompileFingerprint       = 0X0058; // uint64
        };

        // Has VTable
        // Construct Allowed
        struct PermEntityLumpData_t {
        public:
            static constexpr std::uintptr_t m_name            = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_childLumps      = 0X0010; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
            static constexpr std::uintptr_t m_entityKeyValues = 0X0028; // CUtlLeanVector<EntityKeyValueData_t>
        };

        // Construct Allowed
        struct WorldNode_t {
        public:
            static constexpr std::uintptr_t m_sceneObjects               = 0X0000; // CUtlVector<SceneObject_t>
            static constexpr std::uintptr_t m_visClusterMembership       = 0X0018; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_aggregateSceneObjects      = 0X0030; // CUtlVector<AggregateSceneObject_t>
            static constexpr std::uintptr_t m_clutterSceneObjects        = 0X0048; // CUtlVector<ClutterSceneObject_t>
            static constexpr std::uintptr_t m_rtProxies                  = 0X0060; // CUtlVector<AggregateRTProxySceneObject_t>
            static constexpr std::uintptr_t m_extraVertexStreamOverrides = 0X0078; // CUtlVector<ExtraVertexStreamOverride_t>
            static constexpr std::uintptr_t m_materialOverrides          = 0X0090; // CUtlVector<MaterialOverride_t>
            static constexpr std::uintptr_t m_extraVertexStreams         = 0X00A8; // CUtlVector<WorldNodeOnDiskBufferData_t>
            static constexpr std::uintptr_t m_aggregateInstanceStreams   = 0X00C0; // CUtlVector<AggregateInstanceStreamOnDiskData_t>
            static constexpr std::uintptr_t m_vertexAlbedoStreams        = 0X00D8; // CUtlVector<AggregateVertexAlbedoStreamOnDiskData_t>
            static constexpr std::uintptr_t m_layerNames                 = 0X00F0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_sceneObjectLayerIndices    = 0X0108; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_grassFileName              = 0X0120; // CUtlString
            static constexpr std::uintptr_t m_nodeLightingInfo           = 0X0128; // BakedLightingInfo_t
            static constexpr std::uintptr_t m_bHasBakedGeometryFlag      = 0X0170; // bool
        };

        // Construct Allowed
        struct EntityIOConnectionData_t {
        public:
            static constexpr std::uintptr_t m_outputName    = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_targetType    = 0X0008; // uint32
            static constexpr std::uintptr_t m_targetName    = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_inputName     = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_overrideParam = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_flDelay       = 0X0028; // float32
            static constexpr std::uintptr_t m_nTimesToFire  = 0X002C; // int32
            static constexpr std::uintptr_t m_paramMap      = 0X0030; // KeyValues3
        };

        // Construct Allowed
        struct BakedLightingInfo_t {
        public:
            static constexpr std::uintptr_t m_nLightmapVersionNumber     = 0X0000; // uint32
            static constexpr std::uintptr_t m_nLightmapGameVersionNumber = 0X0004; // uint32
            static constexpr std::uintptr_t m_vLightmapUvScale           = 0X0008; // Vector2D
            static constexpr std::uintptr_t m_bHasLightmaps              = 0X0010; // bool
            static constexpr std::uintptr_t m_bBakedShadowsGamma20       = 0X0011; // bool
            static constexpr std::uintptr_t m_bCompressionEnabled        = 0X0012; // bool
            static constexpr std::uintptr_t m_bSHLightmaps               = 0X0013; // bool
            static constexpr std::uintptr_t m_nChartPackIterations       = 0X0014; // uint8
            static constexpr std::uintptr_t m_nVradQuality               = 0X0015; // uint8
            static constexpr std::uintptr_t m_lightMaps                  = 0X0018; // CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>>
            static constexpr std::uintptr_t m_bakedShadows               = 0X0030; // CUtlVector<BakedLightingInfo_t::BakedShadowAssignment_t>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VoxelVisBlockOffset_t {
        public:
            static constexpr std::uintptr_t m_nOffset       = 0X0000; // uint32
            static constexpr std::uintptr_t m_nElementCount = 0X0004; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct InfoForResourceTypeVMapResourceData_t {
        public:
        };

        // Construct Allowed
        struct WorldNodeOnDiskBufferData_t {
        public:
            static constexpr std::uintptr_t m_nElementCount       = 0X0000; // int32
            static constexpr std::uintptr_t m_nElementSizeInBytes = 0X0004; // int32
            static constexpr std::uintptr_t m_inputLayoutFields   = 0X0008; // CUtlVector<RenderInputLayoutField_t>
            static constexpr std::uintptr_t m_pData               = 0X0020; // CUtlVector<uint8>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct AggregateMeshInfo_t {
        public:
            static constexpr std::uintptr_t m_nVisClusterMemberOffset               = 0X0000; // uint32
            static constexpr std::uintptr_t m_nVisClusterMemberCount                = 0X0004; // uint8
            static constexpr std::uintptr_t m_bHasTransform                         = 0X0005; // bool
            static constexpr std::uintptr_t m_nLODGroupMask                         = 0X0006; // uint8
            static constexpr std::uintptr_t m_nDrawCallIndex                        = 0X0008; // int16
            static constexpr std::uintptr_t m_nLODSetupIndex                        = 0X000A; // int16
            static constexpr std::uintptr_t m_vTintColor                            = 0X000C; // Color
            static constexpr std::uintptr_t m_objectFlags                           = 0X0010; // ObjectTypeFlags_t
            static constexpr std::uintptr_t m_nLightProbeVolumePrecomputedHandshake = 0X0014; // int32
            static constexpr std::uintptr_t m_nInstanceStreamOffset                 = 0X0018; // uint32
            static constexpr std::uintptr_t m_nVertexAlbedoStreamOffset             = 0X001C; // uint32
            static constexpr std::uintptr_t m_instanceStreams                       = 0X0020; // AggregateInstanceStream_t
        };

        // Construct Allowed
        struct World_t {
        public:
            static constexpr std::uintptr_t m_builderParams     = 0X0000; // WorldBuilderParams_t
            static constexpr std::uintptr_t m_worldNodes        = 0X0060; // CUtlVector<NodeData_t>
            static constexpr std::uintptr_t m_worldLightingInfo = 0X0078; // BakedLightingInfo_t
            static constexpr std::uintptr_t m_entityLumps       = 0X00C0; // CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct BakedLightingInfo_t__BakedShadowAssignment_t {
        public:
            static constexpr std::uintptr_t m_nLightHash     = 0X0000; // uint32
            static constexpr std::uintptr_t m_nMapHash       = 0X0004; // uint32
            static constexpr std::uintptr_t m_nShadowChannel = 0X0008; // int8
        };

        // Construct Allowed
        struct MaterialOverride_t : public BaseSceneObjectOverride_t {
        public:
            static constexpr std::uintptr_t m_nSubSceneObject  = 0X0004; // uint32
            static constexpr std::uintptr_t m_nDrawCallIndex   = 0X0008; // uint32
            static constexpr std::uintptr_t m_pMaterial        = 0X0010; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_vLinearTintColor = 0X0018; // Vector
        };

        // Construct Allowed
        struct AggregateRTProxySceneObject_t {
        public:
            static constexpr std::uintptr_t m_nLayer             = 0X0000; // int16
            static constexpr std::uintptr_t m_BLASes             = 0X0008; // CUtlVector<RTProxyBLAS_t>
            static constexpr std::uintptr_t m_Instances          = 0X0020; // CUtlVector<RTProxyInstanceInfo_t>
            static constexpr std::uintptr_t m_VBData             = 0X0038; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_IBData             = 0X0048; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_InstanceAlbedoData = 0X0058; // CUtlBinaryBlock
        };

        // Has VTable
        // Construct Allowed
        struct EntityKeyValueData_t {
        public:
            static constexpr std::uintptr_t m_connections   = 0X0008; // CUtlVector<EntityIOConnectionData_t>
            static constexpr std::uintptr_t m_keyValuesData = 0X0020; // CUtlBinaryBlock
        };

        // Construct Allowed
        class CVoxelVisibility {
        public:
            static constexpr std::uintptr_t m_nBaseClusterCount        = 0X0040; // uint32
            static constexpr std::uintptr_t m_nPVSBytesPerCluster      = 0X0044; // uint32
            static constexpr std::uintptr_t m_vMinBounds               = 0X0048; // Vector
            static constexpr std::uintptr_t m_vMaxBounds               = 0X0054; // Vector
            static constexpr std::uintptr_t m_flGridSize               = 0X0060; // float32
            static constexpr std::uintptr_t m_nSkyVisibilityCluster    = 0X0064; // uint32
            static constexpr std::uintptr_t m_nSunVisibilityCluster    = 0X0068; // uint32
            static constexpr std::uintptr_t m_NodeBlock                = 0X006C; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_RegionBlock              = 0X0074; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_EnclosedClusterListBlock = 0X007C; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_EnclosedClustersBlock    = 0X0084; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_MasksBlock               = 0X008C; // VoxelVisBlockOffset_t
            static constexpr std::uintptr_t m_nVisBlocks               = 0X0094; // VoxelVisBlockOffset_t
        };
    }
}

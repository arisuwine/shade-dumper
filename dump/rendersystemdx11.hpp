#pragma once
#include <cstdint>

namespace offsets {
    namespace rendersystemdx11 {
        // Global Type Scope
        enum class RenderPrimitiveType_t : std::uint32_t {
            RENDER_PRIM_POINTS                        = 0x0,
            RENDER_PRIM_LINES                         = 0x1,
            RENDER_PRIM_LINES_WITH_ADJACENCY          = 0x2,
            RENDER_PRIM_LINE_STRIP                    = 0x3,
            RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY     = 0x4,
            RENDER_PRIM_TRIANGLES                     = 0x5,
            RENDER_PRIM_TRIANGLES_WITH_ADJACENCY      = 0x6,
            RENDER_PRIM_TRIANGLE_STRIP                = 0x7,
            RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
            RENDER_PRIM_INSTANCED_QUADS               = 0x9,
            RENDER_PRIM_HETEROGENOUS                  = 0xA,
            RENDER_PRIM_COMPUTE_SHADER                = 0xB,
            RENDER_PRIM_MESH_SHADER                   = 0xC,
            RENDER_PRIM_TYPE_COUNT                    = 0xD
        };

        // Global Type Scope
        enum class RenderBufferFlags_t : std::uint32_t {
            RENDER_BUFFER_USAGE_NONE                  = 0x0,
            RENDER_BUFFER_USAGE_VERTEX_BUFFER         = 0x1,
            RENDER_BUFFER_USAGE_INDEX_BUFFER          = 0x2,
            RENDER_BUFFER_USAGE_SHADER_RESOURCE       = 0x4,
            RENDER_BUFFER_USAGE_UNORDERED_ACCESS      = 0x8,
            RENDER_BUFFER_BYTEADDRESS_BUFFER          = 0x10,
            RENDER_BUFFER_STRUCTURED_BUFFER           = 0x20,
            RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS      = 0x100,
            RENDER_BUFFER_ACCELERATION_STRUCTURE      = 0x200,
            RENDER_BUFFER_SHADER_BINDING_TABLE        = 0x400,
            RENDER_BUFFER_POOL_ALLOCATED              = 0x800,
            RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 0x1000,
            RENDER_BUFFER_IMMOVABLE_ALLOCATION        = 0x2000
        };

        enum class RsCullMode_t : std::uint8_t {
            RS_CULL_NONE  = 0x0,
            RS_CULL_BACK  = 0x1,
            RS_CULL_FRONT = 0x2
        };

        enum class RsComparison_t : std::uint8_t {
            RS_CMP_NEVER         = 0x0,
            RS_CMP_LESS          = 0x1,
            RS_CMP_EQUAL         = 0x2,
            RS_CMP_LESS_EQUAL    = 0x3,
            RS_CMP_GREATER       = 0x4,
            RS_CMP_NOT_EQUAL     = 0x5,
            RS_CMP_GREATER_EQUAL = 0x6,
            RS_CMP_ALWAYS        = 0x7
        };

        enum class RsFillMode_t : std::uint8_t {
            RS_FILL_SOLID     = 0x0,
            RS_FILL_WIREFRAME = 0x1
        };

        // Global Type Scope
        enum class RenderMultisampleType_t : std::uint8_t {
            RENDER_MULTISAMPLE_INVALID    = 0xFF,
            RENDER_MULTISAMPLE_NONE       = 0x0,
            RENDER_MULTISAMPLE_2X         = 0x1,
            RENDER_MULTISAMPLE_4X         = 0x2,
            RENDER_MULTISAMPLE_6X         = 0x3,
            RENDER_MULTISAMPLE_8X         = 0x4,
            RENDER_MULTISAMPLE_16X        = 0x5,
            RENDER_MULTISAMPLE_TYPE_COUNT = 0x6
        };

        enum class InputLayoutVariation_t : std::uint8_t {
            INPUT_LAYOUT_VARIATION_DEFAULT                          = 0x0,
            INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID               = 0x1,
            INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
            INPUT_LAYOUT_VARIATION_MAX                              = 0x3
        };

        // Global Type Scope
        enum class RenderSlotType_t : std::uint8_t {
            RENDER_SLOT_INVALID      = 0xFF,
            RENDER_SLOT_PER_VERTEX   = 0x0,
            RENDER_SLOT_PER_INSTANCE = 0x1
        };

        // Has Trivial Destructor
        struct RsDepthStencilStateDesc_t {
        public:
            static constexpr std::uintptr_t m_bDepthTestEnable  = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bDepthWriteEnable = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_depthFunc         = 0X0001; // RsComparison_t
            static constexpr std::uintptr_t m_stencilState      = 0X0002; // RsStencilStateDesc_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct SheetSequenceIntegerId_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint32
        };

        // Has Trivial Destructor
        struct RsBlendStateDesc_t {
        public:
            static constexpr std::uintptr_t m_srcBlendBits              = 0X0000; // uint32
            static constexpr std::uintptr_t m_destBlendBits             = 0X0004; // uint32
            static constexpr std::uintptr_t m_srcBlendAlphaBits         = 0X0008; // uint32
            static constexpr std::uintptr_t m_destBlendAlphaBits        = 0X000C; // uint32
            static constexpr std::uintptr_t m_renderTargetWriteMaskBits = 0X0010; // uint32
            static constexpr std::uintptr_t m_blendOpBits               = 0X0000; // bitfield:30
            static constexpr std::uintptr_t m_bAlphaToCoverageEnable    = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIndependentBlendEnable   = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_blendOpAlphaBits          = 0X0018; // uint32
            static constexpr std::uintptr_t m_blendEnableBits           = 0X001C; // uint8
            static constexpr std::uintptr_t m_srgbWriteEnableBits       = 0X001D; // uint8
        };

        // Has Trivial Destructor
        struct VsInputSignatureElement_t {
        public:
            static constexpr std::uintptr_t m_pName             = 0X0000; // char[64]
            static constexpr std::uintptr_t m_pSemantic         = 0X0040; // char[64]
            static constexpr std::uintptr_t m_pD3DSemanticName  = 0X0080; // char[64]
            static constexpr std::uintptr_t m_nD3DSemanticIndex = 0X00C0; // int32
        };

        // Has Trivial Destructor
        struct RsRasterizerStateDesc_t {
        public:
            static constexpr std::uintptr_t m_nFillMode              = 0X0000; // RsFillMode_t
            static constexpr std::uintptr_t m_nCullMode              = 0X0001; // RsCullMode_t
            static constexpr std::uintptr_t m_bDepthClipEnable       = 0X0002; // bool
            static constexpr std::uintptr_t m_bMultisampleEnable     = 0X0003; // bool
            static constexpr std::uintptr_t m_nDepthBias             = 0X0004; // int32
            static constexpr std::uintptr_t m_flDepthBiasClamp       = 0X0008; // float32
            static constexpr std::uintptr_t m_flSlopeScaledDepthBias = 0X000C; // float32
        };

        // Has Trivial Destructor
        struct RsStencilStateDesc_t {
        public:
            static constexpr std::uintptr_t m_bStencilEnable          = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_frontStencilFailOp      = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_frontStencilDepthFailOp = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_frontStencilPassOp      = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_frontStencilFunc        = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_backStencilFailOp       = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_backStencilDepthFailOp  = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_backStencilPassOp       = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_backStencilFunc         = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_nStencilReadMask        = 0X0004; // uint8
            static constexpr std::uintptr_t m_nStencilWriteMask       = 0X0005; // uint8
        };

        struct VsInputSignature_t {
        public:
            static constexpr std::uintptr_t m_elems       = 0X0000; // CUtlVector<VsInputSignatureElement_t>
            static constexpr std::uintptr_t m_depth_elems = 0X0018; // CUtlVector<VsInputSignatureElement_t>
        };

        // Has Trivial Destructor
        struct RenderInputLayoutField_t {
        public:
            static constexpr std::uintptr_t m_pSemanticName    = 0X0000; // char[32]
            static constexpr std::uintptr_t m_nSemanticIndex   = 0X0020; // int8
            static constexpr std::uintptr_t m_nOffset          = 0X0028; // int16
            static constexpr std::uintptr_t m_nSlot            = 0X002A; // int8
            static constexpr std::uintptr_t m_nSlotType        = 0X002B; // RenderSlotType_t
            static constexpr std::uintptr_t m_szShaderSemantic = 0X002C; // char[32]
        };
    }
}

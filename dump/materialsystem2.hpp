#pragma once
#include <cstdint>

namespace offsets {
    namespace materialsystem2 {
        enum class HorizJustification_e : std::uint32_t {
            HORIZ_JUSTIFICATION_LEFT   = 0x0,
            HORIZ_JUSTIFICATION_CENTER = 0x1,
            HORIZ_JUSTIFICATION_RIGHT  = 0x2,
            HORIZ_JUSTIFICATION_NONE   = 0x3
        };

        enum class VertJustification_e : std::uint32_t {
            VERT_JUSTIFICATION_TOP    = 0x0,
            VERT_JUSTIFICATION_CENTER = 0x1,
            VERT_JUSTIFICATION_BOTTOM = 0x2,
            VERT_JUSTIFICATION_NONE   = 0x3
        };

        enum class LayoutPositionType_e : std::uint32_t {
            LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
            LAYOUTPOSITIONTYPE_FRACTIONAL        = 0x1,
            LAYOUTPOSITIONTYPE_NONE              = 0x2
        };

        enum class BloomBlendMode_t : std::uint32_t {
            BLOOM_BLEND_ADD    = 0x0,
            BLOOM_BLEND_SCREEN = 0x1,
            BLOOM_BLEND_BLUR   = 0x2
        };

        enum class ViewFadeMode_t : std::uint32_t {
            VIEW_FADE_CONSTANT_COLOR = 0x0,
            VIEW_FADE_MODULATE       = 0x1,
            VIEW_FADE_MOD2X          = 0x2
        };

        // Construct Allowed
        struct MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_name = 0x0000; // CUtlString
        };

        // Construct Allowed
        struct MaterialResourceData_t {
        public:
            static constexpr std::uintptr_t m_materialName         = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_shaderName           = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_intParams            = 0x0010; // CUtlVector<MaterialParamInt_t>
            static constexpr std::uintptr_t m_floatParams          = 0x0028; // CUtlVector<MaterialParamFloat_t>
            static constexpr std::uintptr_t m_vectorParams         = 0x0040; // CUtlVector<MaterialParamVector_t>
            static constexpr std::uintptr_t m_textureParams        = 0x0058; // CUtlVector<MaterialParamTexture_t>
            static constexpr std::uintptr_t m_dynamicParams        = 0x0070; // CUtlVector<MaterialParamBuffer_t>
            static constexpr std::uintptr_t m_dynamicTextureParams = 0x0088; // CUtlVector<MaterialParamBuffer_t>
            static constexpr std::uintptr_t m_intAttributes        = 0x00A0; // CUtlVector<MaterialParamInt_t>
            static constexpr std::uintptr_t m_floatAttributes      = 0x00B8; // CUtlVector<MaterialParamFloat_t>
            static constexpr std::uintptr_t m_vectorAttributes     = 0x00D0; // CUtlVector<MaterialParamVector_t>
            static constexpr std::uintptr_t m_textureAttributes    = 0x00E8; // CUtlVector<MaterialParamTexture_t>
            static constexpr std::uintptr_t m_stringAttributes     = 0x0100; // CUtlVector<MaterialParamString_t>
            static constexpr std::uintptr_t m_renderAttributesUsed = 0x0118; // CUtlVector<CUtlString>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PostProcessingTonemapParameters_t {
        public:
            static constexpr std::uintptr_t m_flExposureBias           = 0x0000; // float32
            static constexpr std::uintptr_t m_flShoulderStrength       = 0x0004; // float32
            static constexpr std::uintptr_t m_flLinearStrength         = 0x0008; // float32
            static constexpr std::uintptr_t m_flLinearAngle            = 0x000C; // float32
            static constexpr std::uintptr_t m_flToeStrength            = 0x0010; // float32
            static constexpr std::uintptr_t m_flToeNum                 = 0x0014; // float32
            static constexpr std::uintptr_t m_flToeDenom               = 0x0018; // float32
            static constexpr std::uintptr_t m_flWhitePoint             = 0x001C; // float32
            static constexpr std::uintptr_t m_flLuminanceSource        = 0x0020; // float32
            static constexpr std::uintptr_t m_flExposureBiasShadows    = 0x0024; // float32
            static constexpr std::uintptr_t m_flExposureBiasHighlights = 0x0028; // float32
            static constexpr std::uintptr_t m_flMinShadowLum           = 0x002C; // float32
            static constexpr std::uintptr_t m_flMaxShadowLum           = 0x0030; // float32
            static constexpr std::uintptr_t m_flMinHighlightLum        = 0x0034; // float32
            static constexpr std::uintptr_t m_flMaxHighlightLum        = 0x0038; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PostProcessingBloomParameters_t {
        public:
            static constexpr std::uintptr_t m_blendMode                        = 0x0000; // BloomBlendMode_t
            static constexpr std::uintptr_t m_flBloomStrength                  = 0x0004; // float32
            static constexpr std::uintptr_t m_flScreenBloomStrength            = 0x0008; // float32
            static constexpr std::uintptr_t m_flBlurBloomStrength              = 0x000C; // float32
            static constexpr std::uintptr_t m_flBloomThreshold                 = 0x0010; // float32
            static constexpr std::uintptr_t m_flBloomThresholdWidth            = 0x0014; // float32
            static constexpr std::uintptr_t m_flSkyboxBloomStrength            = 0x0018; // float32
            static constexpr std::uintptr_t m_flBloomStartValue                = 0x001C; // float32
            static constexpr std::uintptr_t m_flComputeBloomStrength           = 0x0020; // float32
            static constexpr std::uintptr_t m_flComputeBloomThreshold          = 0x0024; // float32
            static constexpr std::uintptr_t m_flComputeBloomRadius             = 0x0028; // float32
            static constexpr std::uintptr_t m_flComputeBloomEffectsScale       = 0x002C; // float32
            static constexpr std::uintptr_t m_flComputeBloomLensDirtStrength   = 0x0030; // float32
            static constexpr std::uintptr_t m_flComputeBloomLensDirtBlackLevel = 0x0034; // float32
            static constexpr std::uintptr_t m_flBlurWeight                     = 0x0038; // float32[5]
            static constexpr std::uintptr_t m_vBlurTint                        = 0x004C; // Vector[5]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PostProcessingVignetteParameters_t {
        public:
            static constexpr std::uintptr_t m_flVignetteStrength = 0x0000; // float32
            static constexpr std::uintptr_t m_vCenter            = 0x0004; // Vector2D
            static constexpr std::uintptr_t m_flRadius           = 0x000C; // float32
            static constexpr std::uintptr_t m_flRoundness        = 0x0010; // float32
            static constexpr std::uintptr_t m_flFeather          = 0x0014; // float32
            static constexpr std::uintptr_t m_vColorTint         = 0x0018; // Vector
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PostProcessingLocalContrastParameters_t {
        public:
            static constexpr std::uintptr_t m_flLocalContrastStrength      = 0x0000; // float32
            static constexpr std::uintptr_t m_flLocalContrastEdgeStrength  = 0x0004; // float32
            static constexpr std::uintptr_t m_flLocalContrastVignetteStart = 0x0008; // float32
            static constexpr std::uintptr_t m_flLocalContrastVignetteEnd   = 0x000C; // float32
            static constexpr std::uintptr_t m_flLocalContrastVignetteBlur  = 0x0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PostProcessingFogScatteringParameters_t {
        public:
            static constexpr std::uintptr_t m_fRadius          = 0x0000; // float32
            static constexpr std::uintptr_t m_fScale           = 0x0004; // float32
            static constexpr std::uintptr_t m_fCubemapScale    = 0x0008; // float32
            static constexpr std::uintptr_t m_fVolumetricScale = 0x000C; // float32
            static constexpr std::uintptr_t m_fGradientScale   = 0x0010; // float32
        };

        // Construct Allowed
        struct PostProcessingResource_t {
        public:
            static constexpr std::uintptr_t m_bHasTonemapParams         = 0x0000; // bool
            static constexpr std::uintptr_t m_toneMapParams             = 0x0004; // PostProcessingTonemapParameters_t
            static constexpr std::uintptr_t m_bHasBloomParams           = 0x0040; // bool
            static constexpr std::uintptr_t m_bloomParams               = 0x0044; // PostProcessingBloomParameters_t
            static constexpr std::uintptr_t m_bHasVignetteParams        = 0x00CC; // bool
            static constexpr std::uintptr_t m_vignetteParams            = 0x00D0; // PostProcessingVignetteParameters_t
            static constexpr std::uintptr_t m_bHasLocalContrastParams   = 0x00F4; // bool
            static constexpr std::uintptr_t m_localConstrastParams      = 0x00F8; // PostProcessingLocalContrastParameters_t
            static constexpr std::uintptr_t m_nColorCorrectionVolumeDim = 0x010C; // int32
            static constexpr std::uintptr_t m_colorCorrectionVolumeData = 0x0110; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_bHasColorCorrection       = 0x0120; // bool
            static constexpr std::uintptr_t m_bHasFogScatteringParams   = 0x0121; // bool
            static constexpr std::uintptr_t m_fogScatteringParams       = 0x0124; // PostProcessingFogScatteringParameters_t
        };

        // Construct Allowed
        class MaterialParamInt_t : public MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_nValue = 0x0008; // int32
        };

        // Construct Allowed
        class MaterialParamFloat_t : public MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_flValue = 0x0008; // float32
        };

        // Construct Allowed
        class MaterialParamVector_t : public MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_value = 0x0008; // Vector4D
        };

        // Construct Allowed
        class MaterialParamTexture_t : public MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_pValue = 0x0008; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Construct Allowed
        class MaterialParamString_t : public MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_value = 0x0008; // CUtlString
        };

        // Construct Allowed
        class MaterialParamBuffer_t : public MaterialParam_t {
        public:
            static constexpr std::uintptr_t m_value = 0x0008; // CUtlBinaryBlock
        };

    }
}

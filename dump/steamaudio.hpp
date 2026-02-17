#pragma once
#include <cstdint>

namespace offsets {
    namespace steamaudio {
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioReverbSettings_t {
        public:
            static constexpr std::uintptr_t m_nNumRays         = 0x0000; // int32
            static constexpr std::uintptr_t m_nNumBounces      = 0x0004; // int32
            static constexpr std::uintptr_t m_flIRDuration     = 0x0008; // float32
            static constexpr std::uintptr_t m_nAmbisonicsOrder = 0x000C; // int32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioReverbClusteringSettings_t {
        public:
            static constexpr std::uintptr_t m_bEnableClustering  = 0x0000; // bool
            static constexpr std::uintptr_t m_nCubeMapResolution = 0x0004; // int32
            static constexpr std::uintptr_t m_flDepthThreshold   = 0x0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioReverbCompressionSettings_t {
        public:
            static constexpr std::uintptr_t m_bEnableCompression = 0x0000; // bool
            static constexpr std::uintptr_t m_flQuality          = 0x0004; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioPathSettings_t {
        public:
            static constexpr std::uintptr_t m_nNumVisSamples      = 0x0000; // int32
            static constexpr std::uintptr_t m_flProbeVisRadius    = 0x0004; // float32
            static constexpr std::uintptr_t m_flProbeVisThreshold = 0x0008; // float32
            static constexpr std::uintptr_t m_flProbePathRange    = 0x000C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioCustomDataOcclusionSettings_t {
        public:
            static constexpr std::uintptr_t m_bEnablePathing     = 0x0000; // bool
            static constexpr std::uintptr_t m_bEnableReflections = 0x0001; // bool
            static constexpr std::uintptr_t m_nReflectionRays    = 0x0004; // int32
            static constexpr std::uintptr_t m_nReflectionBounces = 0x0008; // int32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioCustomDataDimensionsSettings_t {
        public:
            static constexpr std::uintptr_t m_nAmbisonicsOrderOutsideField    = 0x0000; // int32
            static constexpr std::uintptr_t m_nAmbisonicsOrderInsideSizeField = 0x0004; // int32
            static constexpr std::uintptr_t m_flOutsideThreshold              = 0x0008; // float32
            static constexpr std::uintptr_t m_flSizeThreshold                 = 0x000C; // float32
            static constexpr std::uintptr_t m_flInsideThreshold               = 0x0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSteamAudioProbeData {
        public:
            static constexpr std::uintptr_t m_pProbeBatch = 0x0000; // IPLProbeBatch
        };

        // Construct Allowed
        class CSteamAudioProbeLineSegment {
        public:
            static constexpr std::uintptr_t m_vStart          = 0x0000; // Vector
            static constexpr std::uintptr_t m_vEnd            = 0x000C; // Vector
            static constexpr std::uintptr_t m_vecIntervals    = 0x0018; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecProbeIndices = 0x0030; // CUtlVector<int32>
        };

        // Construct Allowed
        class CSteamAudioProbeGrid {
        public:
            static constexpr std::uintptr_t m_aabb            = 0x0000; // AABB_t
            static constexpr std::uintptr_t m_flSpacing       = 0x0018; // float32
            static constexpr std::uintptr_t m_nx              = 0x001C; // int32
            static constexpr std::uintptr_t m_ny              = 0x0020; // int32
            static constexpr std::uintptr_t m_nz              = 0x0024; // int32
            static constexpr std::uintptr_t m_vecLineSegments = 0x0028; // CUtlVector<CSteamAudioProbeLineSegment>
            static constexpr std::uintptr_t m_vecProbes       = 0x0040; // CUtlVector<Vector>
        };

        // Construct Allowed
        class CSteamAudioCompressedReverb {
        public:
            static constexpr std::uintptr_t m_nChannels            = 0x0000; // int32
            static constexpr std::uintptr_t m_nBands               = 0x0004; // int32
            static constexpr std::uintptr_t m_nBins                = 0x0008; // int32
            static constexpr std::uintptr_t m_nProbes              = 0x000C; // int32
            static constexpr std::uintptr_t m_vecNumSingularValues = 0x0010; // CUtlVector<int32>
            static constexpr std::uintptr_t m_vecDictionary        = 0x0028; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecCompressedData    = 0x0040; // CUtlVector<float32>
            static constexpr std::uintptr_t m_pCompressedData      = 0x0058; // IPLCompressedEnergyFields
        };

        // Construct Allowed
        class CSteamAudioBakedReverbData {
        public:
            static constexpr std::uintptr_t m_nBands                    = 0x0000; // int32
            static constexpr std::uintptr_t m_probes                    = 0x0008; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_grid                      = 0x0010; // CSteamAudioProbeGrid
            static constexpr std::uintptr_t m_reverbSettings            = 0x0068; // SteamAudioReverbSettings_t
            static constexpr std::uintptr_t m_reverbClusteringSettings  = 0x0078; // SteamAudioReverbClusteringSettings_t
            static constexpr std::uintptr_t m_reverbCompressionSettings = 0x0084; // SteamAudioReverbCompressionSettings_t
            static constexpr std::uintptr_t m_clusteredProbes           = 0x0090; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecClusterForProbe        = 0x0098; // CUtlVector<int16>
            static constexpr std::uintptr_t m_compressedData            = 0x00B0; // CSteamAudioCompressedReverb
            static constexpr std::uintptr_t m_compressedClusteredData   = 0x0110; // CSteamAudioCompressedReverb
            static constexpr std::uintptr_t m_movables                  = 0x0170; // CSteamAudioMovableBakedData<CSteamAudioBakedReverbData>
        };

        // Construct Allowed
        class CSteamAudioBakedPathingData {
        public:
            static constexpr std::uintptr_t m_nBands   = 0x0000; // int32
            static constexpr std::uintptr_t m_probes   = 0x0008; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_movables = 0x0010; // CSteamAudioMovableBakedData<CSteamAudioBakedPathingData>
        };

        // Construct Allowed
        class CSteamAudioAmbisonicsField {
        public:
            static constexpr std::uintptr_t m_field = 0x0000; // CUtlVector<float32>
        };

        // Construct Allowed
        class CSteamAudioBakedDimensionsData {
        public:
            static constexpr std::uintptr_t m_settings                = 0x0000; // SteamAudioCustomDataDimensionsSettings_t
            static constexpr std::uintptr_t m_probes                  = 0x0018; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecInOut                = 0x0020; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecSize                 = 0x0038; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecOutsideField         = 0x0050; // CUtlVector<CSteamAudioAmbisonicsField>
            static constexpr std::uintptr_t m_vecInsideSmallSizeField = 0x0068; // CUtlVector<CSteamAudioAmbisonicsField>
            static constexpr std::uintptr_t m_movables                = 0x0080; // CSteamAudioMovableBakedData<CSteamAudioBakedDimensionsData>
        };

        // Construct Allowed
        class CSteamAudioBakedMaterialsData {
        public:
            static constexpr std::uintptr_t m_probes             = 0x0000; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecMaterialTokens  = 0x0008; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_vecMaterialWeights = 0x0020; // CUtlVector<float32>
        };

        // Construct Allowed
        class CSteamAudioBakedOcclusionData {
        public:
            static constexpr std::uintptr_t m_settings            = 0x0000; // SteamAudioCustomDataOcclusionSettings_t
            static constexpr std::uintptr_t m_probes              = 0x0010; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecPathingRatio     = 0x0018; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecPathingDeviation = 0x0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecReflectionRatio  = 0x0048; // CUtlVector<float32>
        };

    }
}

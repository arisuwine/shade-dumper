#pragma once
#include <cstdint>

namespace offsets {
    namespace steamaudio {
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioReverbClusteringSettings_t {
        public:
            static constexpr std::uintptr_t m_bEnableClustering  = 0X0000; // bool
            static constexpr std::uintptr_t m_nCubeMapResolution = 0X0004; // int32
            static constexpr std::uintptr_t m_flDepthThreshold   = 0X0008; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioCustomDataDimensionsSettings_t {
        public:
            static constexpr std::uintptr_t m_nAmbisonicsOrderOutsideField    = 0X0000; // int32
            static constexpr std::uintptr_t m_nAmbisonicsOrderInsideSizeField = 0X0004; // int32
            static constexpr std::uintptr_t m_flOutsideThreshold              = 0X0008; // float32
            static constexpr std::uintptr_t m_flSizeThreshold                 = 0X000C; // float32
            static constexpr std::uintptr_t m_flInsideThreshold               = 0X0010; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioPathSettings_t {
        public:
            static constexpr std::uintptr_t m_nNumVisSamples      = 0X0000; // int32
            static constexpr std::uintptr_t m_flProbeVisRadius    = 0X0004; // float32
            static constexpr std::uintptr_t m_flProbeVisThreshold = 0X0008; // float32
            static constexpr std::uintptr_t m_flProbePathRange    = 0X000C; // float32
        };

        // Construct Allowed
        class CSteamAudioAmbisonicsField {
        public:
            static constexpr std::uintptr_t m_field = 0X0000; // CUtlVector<float32>
        };

        // Construct Allowed
        class CSteamAudioBakedPathingData {
        public:
            static constexpr std::uintptr_t m_nBands   = 0X0000; // int32
            static constexpr std::uintptr_t m_probes   = 0X0008; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_movables = 0X0010; // CSteamAudioMovableBakedData<CSteamAudioBakedPathingData>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioReverbSettings_t {
        public:
            static constexpr std::uintptr_t m_nNumRays         = 0X0000; // int32
            static constexpr std::uintptr_t m_nNumBounces      = 0X0004; // int32
            static constexpr std::uintptr_t m_flIRDuration     = 0X0008; // float32
            static constexpr std::uintptr_t m_nAmbisonicsOrder = 0X000C; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSteamAudioProbeData {
        public:
            static constexpr std::uintptr_t m_pProbeBatch = 0X0000; // IPLProbeBatch
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioReverbCompressionSettings_t {
        public:
            static constexpr std::uintptr_t m_bEnableCompression = 0X0000; // bool
            static constexpr std::uintptr_t m_flQuality          = 0X0004; // float32
        };

        // Construct Allowed
        class CSteamAudioBakedMaterialsData {
        public:
            static constexpr std::uintptr_t m_probes             = 0X0000; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecMaterialTokens  = 0X0008; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_vecMaterialWeights = 0X0020; // CUtlVector<float32>
        };

        // Construct Allowed
        class CSteamAudioBakedOcclusionData {
        public:
            static constexpr std::uintptr_t m_settings            = 0X0000; // SteamAudioCustomDataOcclusionSettings_t
            static constexpr std::uintptr_t m_probes              = 0X0010; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecPathingRatio     = 0X0018; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecPathingDeviation = 0X0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecReflectionRatio  = 0X0048; // CUtlVector<float32>
        };

        // Construct Allowed
        class CSteamAudioBakedReverbData {
        public:
            static constexpr std::uintptr_t m_nBands                    = 0X0000; // int32
            static constexpr std::uintptr_t m_probes                    = 0X0008; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_grid                      = 0X0010; // CSteamAudioProbeGrid
            static constexpr std::uintptr_t m_reverbSettings            = 0X0068; // SteamAudioReverbSettings_t
            static constexpr std::uintptr_t m_reverbClusteringSettings  = 0X0078; // SteamAudioReverbClusteringSettings_t
            static constexpr std::uintptr_t m_reverbCompressionSettings = 0X0084; // SteamAudioReverbCompressionSettings_t
            static constexpr std::uintptr_t m_clusteredProbes           = 0X0090; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecClusterForProbe        = 0X0098; // CUtlVector<int16>
            static constexpr std::uintptr_t m_compressedData            = 0X00B0; // CSteamAudioCompressedReverb
            static constexpr std::uintptr_t m_compressedClusteredData   = 0X0110; // CSteamAudioCompressedReverb
            static constexpr std::uintptr_t m_movables                  = 0X0170; // CSteamAudioMovableBakedData<CSteamAudioBakedReverbData>
        };

        // Construct Allowed
        class CSteamAudioProbeLineSegment {
        public:
            static constexpr std::uintptr_t m_vStart          = 0X0000; // Vector
            static constexpr std::uintptr_t m_vEnd            = 0X000C; // Vector
            static constexpr std::uintptr_t m_vecIntervals    = 0X0018; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecProbeIndices = 0X0030; // CUtlVector<int32>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SteamAudioCustomDataOcclusionSettings_t {
        public:
            static constexpr std::uintptr_t m_bEnablePathing     = 0X0000; // bool
            static constexpr std::uintptr_t m_bEnableReflections = 0X0001; // bool
            static constexpr std::uintptr_t m_nReflectionRays    = 0X0004; // int32
            static constexpr std::uintptr_t m_nReflectionBounces = 0X0008; // int32
        };

        // Construct Allowed
        class CSteamAudioBakedDimensionsData {
        public:
            static constexpr std::uintptr_t m_settings                = 0X0000; // SteamAudioCustomDataDimensionsSettings_t
            static constexpr std::uintptr_t m_probes                  = 0X0018; // CSteamAudioProbeData
            static constexpr std::uintptr_t m_vecInOut                = 0X0020; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecSize                 = 0X0038; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecOutsideField         = 0X0050; // CUtlVector<CSteamAudioAmbisonicsField>
            static constexpr std::uintptr_t m_vecInsideSmallSizeField = 0X0068; // CUtlVector<CSteamAudioAmbisonicsField>
            static constexpr std::uintptr_t m_movables                = 0X0080; // CSteamAudioMovableBakedData<CSteamAudioBakedDimensionsData>
        };

        // Construct Allowed
        class CSteamAudioProbeGrid {
        public:
            static constexpr std::uintptr_t m_aabb            = 0X0000; // AABB_t
            static constexpr std::uintptr_t m_flSpacing       = 0X0018; // float32
            static constexpr std::uintptr_t m_nx              = 0X001C; // int32
            static constexpr std::uintptr_t m_ny              = 0X0020; // int32
            static constexpr std::uintptr_t m_nz              = 0X0024; // int32
            static constexpr std::uintptr_t m_vecLineSegments = 0X0028; // CUtlVector<CSteamAudioProbeLineSegment>
            static constexpr std::uintptr_t m_vecProbes       = 0X0040; // CUtlVector<Vector>
        };

        // Construct Allowed
        class CSteamAudioCompressedReverb {
        public:
            static constexpr std::uintptr_t m_nChannels            = 0X0000; // int32
            static constexpr std::uintptr_t m_nBands               = 0X0004; // int32
            static constexpr std::uintptr_t m_nBins                = 0X0008; // int32
            static constexpr std::uintptr_t m_nProbes              = 0X000C; // int32
            static constexpr std::uintptr_t m_vecNumSingularValues = 0X0010; // CUtlVector<int32>
            static constexpr std::uintptr_t m_vecDictionary        = 0X0028; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecCompressedData    = 0X0040; // CUtlVector<float32>
            static constexpr std::uintptr_t m_pCompressedData      = 0X0058; // IPLCompressedEnergyFields
        };
    }
}

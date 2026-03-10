#pragma once
#include <cstdint>

namespace offsets {
    namespace soundsystem {
        enum class EMode_t : std::uint32_t {
            Peak = 0x0,
            RMS  = 0x1
        };

        enum class VMixGraphCommandID_t : std::uint32_t {
            CMD_INVALID                             = 0xFFFFFFFF,
            CMD_CONTROL_INPUT_STORE                 = 0x1,
            CMD_CONTROL_INPUT_STORE_DB              = 0x2,
            CMD_CONTROL_TRANSIENT_INPUT_STORE       = 0x3,
            CMD_CONTROL_TRANSIENT_INPUT_RESET       = 0x4,
            CMD_CONTROL_OUTPUT_STORE                = 0x5,
            CMD_CONTROL_EVALUATE_CURVE              = 0x6,
            CMD_CONTROL_COPY                        = 0x7,
            CMD_CONTROL_COND_COPY_IF_NEGATIVE       = 0x8,
            CMD_CONTROL_REMAP_LINEAR                = 0x9,
            CMD_CONTROL_REMAP_SINE                  = 0xA,
            CMD_CONTROL_REMAP_LOGLINEAR             = 0xB,
            CMD_CONTROL_MAX                         = 0xC,
            CMD_CONTROL_RESET_TIMER                 = 0xD,
            CMD_CONTROL_INCREMENT_TIMER             = 0xE,
            CMD_CONTROL_EVAL_ENVELOPE               = 0xF,
            CMD_CONTROL_SINE_BLEND                  = 0x10,
            CMD_PROCESSOR_SET_CONTROL_VALUE         = 0x11,
            CMD_PROCESSOR_SET_NAME_INPUT            = 0x12,
            CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE    = 0x13,
            CMD_PROCESSOR_STORE_CONTROL_VALUE       = 0x14,
            CMD_PROCESSOR_SET_VSND_VALUE            = 0x15,
            CMD_SUBMIX_PROCESS                      = 0x16,
            CMD_SUBMIX_GENERATE                     = 0x17,
            CMD_SUBMIX_GENERATE_SIDECHAIN           = 0x18,
            CMD_SUBMIX_DEBUG                        = 0x19,
            CMD_SUBMIX_MIX2x1                       = 0x1A,
            CMD_SUBMIX_OUTPUT                       = 0x1B,
            CMD_SUBMIX_OUTPUTx2                     = 0x1C,
            CMD_SUBMIX_COPY                         = 0x1D,
            CMD_SUBMIX_ACCUMULATE                   = 0x1E,
            CMD_SUBMIX_METER                        = 0x1F,
            CMD_SUBMIX_METER_SPECTRUM               = 0x20,
            CMD_IMPULSERESPONSE_INPUT_STORE         = 0x21,
            CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 0x22,
            CMD_REMAP_VSND_TO_IMPULSERESPONSE       = 0x23,
            CMD_IMPULSERESPONSE_RESET               = 0x24,
            CMD_BLEND_VSNDS_TO_IMPULSERESPONSE      = 0x25,
            CMD_IMPULSERESPONSE_DELAY               = 0x26
        };

        enum class EWaveform : std::uint8_t {
            Sine     = 0x0,
            Square   = 0x1,
            Saw      = 0x2,
            Triangle = 0x3,
            Noise    = 0x4
        };

        enum class VMixLFOShape_t : std::uint32_t {
            LFO_SHAPE_SINE   = 0x0,
            LFO_SHAPE_SQUARE = 0x1,
            LFO_SHAPE_TRI    = 0x2,
            LFO_SHAPE_SAW    = 0x3,
            LFO_SHAPE_NOISE  = 0x4
        };

        enum class VMixFilterType_t : std::uint16_t {
            FILTER_UNKNOWN     = 0xFFFF,
            FILTER_LOWPASS     = 0x0,
            FILTER_HIGHPASS    = 0x1,
            FILTER_BANDPASS    = 0x2,
            FILTER_NOTCH       = 0x3,
            FILTER_PEAKING_EQ  = 0x4,
            FILTER_LOW_SHELF   = 0x5,
            FILTER_HIGH_SHELF  = 0x6,
            FILTER_ALLPASS     = 0x7,
            FILTER_PASSTHROUGH = 0x8
        };

        enum class SosActionStopType_t : std::uint32_t {
            SOS_STOPTYPE_NONE  = 0x0,
            SOS_STOPTYPE_TIME  = 0x1,
            SOS_STOPTYPE_OPVAR = 0x2
        };

        enum class SosEditItemType_t : std::uint32_t {
            SOS_EDIT_ITEM_TYPE_SOUNDEVENTS   = 0x0,
            SOS_EDIT_ITEM_TYPE_SOUNDEVENT    = 0x1,
            SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
            SOS_EDIT_ITEM_TYPE_STACK         = 0x3,
            SOS_EDIT_ITEM_TYPE_OPERATOR      = 0x4,
            SOS_EDIT_ITEM_TYPE_FIELD         = 0x5
        };

        enum class PlayBackMode_t : std::uint32_t {
            Random          = 0x0,
            RandomNoRepeats = 0x1,
            RandomAvoidLast = 0x2,
            Sequential      = 0x3,
            RandomWeights   = 0x4
        };

        enum class SosGroupFieldBehavior_t : std::uint32_t {
            kIgnore = 0x0,
            kBranch = 0x1,
            kMatch  = 0x2
        };

        // Global Type Scope
        enum class soundlevel_t : std::uint32_t {
            SNDLVL_NONE    = 0x0,
            SNDLVL_20dB    = 0x14,
            SNDLVL_25dB    = 0x19,
            SNDLVL_30dB    = 0x1E,
            SNDLVL_35dB    = 0x23,
            SNDLVL_40dB    = 0x28,
            SNDLVL_45dB    = 0x2D,
            SNDLVL_50dB    = 0x32,
            SNDLVL_55dB    = 0x37,
            SNDLVL_IDLE    = 0x3C,
            SNDLVL_60dB    = 0x3C,
            SNDLVL_65dB    = 0x41,
            SNDLVL_STATIC  = 0x42,
            SNDLVL_70dB    = 0x46,
            SNDLVL_NORM    = 0x4B,
            SNDLVL_75dB    = 0x4B,
            SNDLVL_80dB    = 0x50,
            SNDLVL_TALKING = 0x50,
            SNDLVL_85dB    = 0x55,
            SNDLVL_90dB    = 0x5A,
            SNDLVL_95dB    = 0x5F,
            SNDLVL_100dB   = 0x64,
            SNDLVL_105dB   = 0x69,
            SNDLVL_110dB   = 0x6E,
            SNDLVL_120dB   = 0x78,
            SNDLVL_130dB   = 0x82,
            SNDLVL_GUNFIRE = 0x8C,
            SNDLVL_140dB   = 0x8C,
            SNDLVL_150dB   = 0x96,
            SNDLVL_180dB   = 0xB4
        };

        enum class VMixPannerType_t : std::uint32_t {
            PANNER_TYPE_LINEAR      = 0x0,
            PANNER_TYPE_EQUAL_POWER = 0x1
        };

        enum class VMixChannelOperation_t : std::uint32_t {
            VMIX_CHAN_STEREO   = 0x0,
            VMIX_CHAN_LEFT     = 0x1,
            VMIX_CHAN_RIGHT    = 0x2,
            VMIX_CHAN_SWAP     = 0x3,
            VMIX_CHAN_MONO     = 0x4,
            VMIX_CHAN_MID_SIDE = 0x5
        };

        enum class EMidiNote : std::uint8_t {
            C       = 0x0,
            C_Sharp = 0x1,
            D       = 0x2,
            D_Sharp = 0x3,
            E       = 0x4,
            F       = 0x5,
            F_Sharp = 0x6,
            G       = 0x7,
            G_Sharp = 0x8,
            A       = 0x9,
            A_Sharp = 0xA,
            B       = 0xB,
            Count   = 0xC
        };

        enum class CVSoundFormat_t : std::uint8_t {
            PCM16 = 0x0,
            PCM8  = 0x1,
            MP3   = 0x2,
            ADPCM = 0x3
        };

        enum class VMixFilterSlope_t : std::uint8_t {
            FILTER_SLOPE_1POLE_6dB  = 0x0,
            FILTER_SLOPE_1POLE_12dB = 0x1,
            FILTER_SLOPE_1POLE_18dB = 0x2,
            FILTER_SLOPE_1POLE_24dB = 0x3,
            FILTER_SLOPE_12dB       = 0x4,
            FILTER_SLOPE_24dB       = 0x5,
            FILTER_SLOPE_36dB       = 0x6,
            FILTER_SLOPE_48dB       = 0x7,
            FILTER_SLOPE_MAX        = 0x7
        };

        enum class SosActionLimitSortType_t : std::uint32_t {
            SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
            SOS_LIMIT_SORTTYPE_LOWEST  = 0x1
        };

        enum class VMixSubgraphSwitchInterpolationType_t : std::uint32_t {
            SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE         = 0x0,
            SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT          = 0x1,
            SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
        };

        enum class SosGroupType_t : std::uint32_t {
            SOS_GROUPTYPE_DYNAMIC = 0x0,
            SOS_GROUPTYPE_STATIC  = 0x1
        };

        enum class SosActionSetParamSortType_t : std::uint32_t {
            SOS_SETPARAM_SORTTYPE_HIGHEST = 0x0,
            SOS_SETPARAM_SORTTYPE_LOWEST  = 0x1
        };

        // Construct Allowed
        class CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_name = 0X0000; // CUtlString
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_vSound            = 0X0028; // CVSound
            static constexpr std::uintptr_t m_pEnvelopeAnalyzer = 0X00A0; // CVoiceContainerAnalysisBase*
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerBlender : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_firstSound    = 0X00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_secondSound   = 0X00C0; // CSoundContainerReference
            static constexpr std::uintptr_t m_flBlendFactor = 0X00D8; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_name      = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_nChannels = 0X0014; // int32
            static constexpr std::uintptr_t m_flxfade   = 0X0018; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixPitchShiftProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixPitchShiftDesc_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixFreeverbDesc_t {
        public:
            static constexpr std::uintptr_t m_flRoomSize        = 0X0000; // float32
            static constexpr std::uintptr_t m_flDamp            = 0X0004; // float32
            static constexpr std::uintptr_t m_flWidth           = 0X0008; // float32
            static constexpr std::uintptr_t m_flLateReflections = 0X000C; // float32
        };

        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth__CHarmonic {
        public:
            static constexpr std::uintptr_t m_nWaveform     = 0X0000; // EWaveform
            static constexpr std::uintptr_t m_nFundamental  = 0X0001; // EMidiNote
            static constexpr std::uintptr_t m_nOctave       = 0X0004; // int32
            static constexpr std::uintptr_t m_flCents       = 0X0008; // float32
            static constexpr std::uintptr_t m_flPhase       = 0X000C; // float32
            static constexpr std::uintptr_t m_curve         = 0X0010; // CPiecewiseCurve
            static constexpr std::uintptr_t m_volumeScaling = 0X0050; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
        };

        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth__CTone {
        public:
            static constexpr std::uintptr_t m_harmonics      = 0X0000; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
            static constexpr std::uintptr_t m_curve          = 0X0018; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bSyncInstances = 0X0058; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CVoiceContainerGenerator : public CVoiceContainerBase {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CVoiceContainerAsyncGenerator : public CVoiceContainerGenerator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerRandomSampler : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_flAmplitude         = 0X00B8; // float32
            static constexpr std::uintptr_t m_flAmplitudeJitter   = 0X00BC; // float32
            static constexpr std::uintptr_t m_flTimeJitter        = 0X00C0; // float32
            static constexpr std::uintptr_t m_flMaxLength         = 0X00C4; // float32
            static constexpr std::uintptr_t m_nNumDelayVariations = 0X00C8; // int32
            static constexpr std::uintptr_t m_grainResources      = 0X00D0; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioDirectProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioHRTFProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerDefault : public CVoiceContainerBase {
        public:
        };

        // Construct Allowed
        class CVSound {
        public:
            static constexpr std::uintptr_t m_nRate          = 0X0000; // int32
            static constexpr std::uintptr_t m_nFormat        = 0X0004; // CVSoundFormat_t
            static constexpr std::uintptr_t m_nChannels      = 0X0008; // uint32
            static constexpr std::uintptr_t m_nLoopStart     = 0X000C; // int32
            static constexpr std::uintptr_t m_nSampleCount   = 0X0010; // uint32
            static constexpr std::uintptr_t m_flDuration     = 0X0014; // float32
            static constexpr std::uintptr_t m_Sentences      = 0X0018; // CUtlVector<CAudioSentence>
            static constexpr std::uintptr_t m_nStreamingSize = 0X0030; // uint32
            static constexpr std::uintptr_t m_nSeekTable     = 0X0038; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nLoopEnd       = 0X0050; // int32
            static constexpr std::uintptr_t m_encodedHeader  = 0X0058; // CUtlBinaryBlock
        };

        // Construct Allowed
        class CDSPPresetMixgroupModifierTable {
        public:
            static constexpr std::uintptr_t m_table = 0X0000; // CUtlVector<CDspPresetModifierList>
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CSosGroupActionSchema {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventClusterSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMinNearby                = 0X0008; // int32
            static constexpr std::uintptr_t m_flClusterEpsilon          = 0X000C; // float32
            static constexpr std::uintptr_t m_shouldPlayOpvar           = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_shouldPlayClusterChild    = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_clusterSizeOpvar          = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_groupBoundingBoxMinsOpvar = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_groupBoundingBoxMaxsOpvar = 0X0030; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMaxCount  = 0X0008; // int32
            static constexpr std::uintptr_t m_flMinValue = 0X000C; // float32
            static constexpr std::uintptr_t m_flMaxValue = 0X0010; // float32
            static constexpr std::uintptr_t m_opvarName  = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_nSortType  = 0X0020; // SosActionSetParamSortType_t
        };

        // Construct Allowed
        class CSoundContainerReference {
        public:
            static constexpr std::uintptr_t m_bUseReference = 0X0000; // bool
            static constexpr std::uintptr_t m_sound         = 0X0008; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            static constexpr std::uintptr_t m_pSound        = 0X0010; // CVoiceContainerBase*
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerNull : public CVoiceContainerGenerator {
        public:
        };

        // Construct Allowed
        struct VMixSubgraphSwitchDesc_t {
        public:
            static constexpr std::uintptr_t m_name                = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_effectName          = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_subgraphs           = 0X0010; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_interpolationMode   = 0X0028; // VMixSubgraphSwitchInterpolationType_t
            static constexpr std::uintptr_t m_bOnlyTailsOnFadeOut = 0X002C; // bool
            static constexpr std::uintptr_t m_flInterpolationTime = 0X0030; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerAnalysisBase {
        public:
            static constexpr std::uintptr_t m_bRegenerateCurveOnCompile = 0X0008; // bool
            static constexpr std::uintptr_t m_curve                     = 0X0010; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventMinMaxValuesSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_strQueryPublicFieldName          = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_strDelayPublicFieldName          = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_bExcludeStoppedSounds            = 0X0018; // bool
            static constexpr std::uintptr_t m_bExcludeDelayedSounds            = 0X0019; // bool
            static constexpr std::uintptr_t m_bExcludeSoundsBelowThreshold     = 0X001A; // bool
            static constexpr std::uintptr_t m_flExcludeSoundsMinThresholdValue = 0X001C; // float32
            static constexpr std::uintptr_t m_bExcludSoundsAboveThreshold      = 0X0020; // bool
            static constexpr std::uintptr_t m_flExcludeSoundsMaxThresholdValue = 0X0024; // float32
            static constexpr std::uintptr_t m_strMinValueName                  = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_strMaxValueName                  = 0X0030; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVMixEnvelopeProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixEnvelopeDesc_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CVMixCommand {
        public:
            static constexpr std::uintptr_t m_nCommand           = 0X0000; // VMixGraphCommandID_t
            static constexpr std::uintptr_t m_nParameterNameHash = 0X0004; // uint32
            static constexpr std::uintptr_t m_nOutputSubmix      = 0X0008; // int32
            static constexpr std::uintptr_t m_nInputSubmix0      = 0X000C; // int32
            static constexpr std::uintptr_t m_nInputSubmix1      = 0X0010; // int32
            static constexpr std::uintptr_t m_nProcessor         = 0X0014; // int32
            static constexpr std::uintptr_t m_nInputValue0       = 0X0018; // int32
            static constexpr std::uintptr_t m_nInputValue1       = 0X001C; // int32
        };

        // Construct Allowed
        class CVMixControlInput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_flDefaultValue = 0X0010; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixBoxverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixBoxverbDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixDynamicsCompressorProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixDynamicsCompressorDesc_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixPannerDesc_t {
        public:
            static constexpr std::uintptr_t m_type       = 0X0000; // VMixPannerType_t
            static constexpr std::uintptr_t m_flStrength = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventPrioritySchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_priorityValue                  = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_priorityVolumeScalar           = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_priorityContributeButDontRead  = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_bPriorityReadButDontContribute = 0X0020; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerGenerator {
        public:
            static constexpr std::uintptr_t m_flCarrierFrequency   = 0X00A8; // float32
            static constexpr std::uintptr_t m_flModulatorFrequency = 0X00AC; // float32
            static constexpr std::uintptr_t m_flModulatorAmount    = 0X00B0; // float32
        };

        // Construct Allowed
        struct SelectedEditItemInfo_t {
        public:
            static constexpr std::uintptr_t m_EditItems = 0X0000; // CUtlVector<SosEditItemInfo_t>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixModDelayDesc_t {
        public:
            static constexpr std::uintptr_t m_feedbackFilter     = 0X0000; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_bPhaseInvert       = 0X0010; // bool
            static constexpr std::uintptr_t m_flGlideTime        = 0X0014; // float32
            static constexpr std::uintptr_t m_flDelay            = 0X0018; // float32
            static constexpr std::uintptr_t m_flOutputGain       = 0X001C; // float32
            static constexpr std::uintptr_t m_flFeedbackGain     = 0X0020; // float32
            static constexpr std::uintptr_t m_flModRate          = 0X0024; // float32
            static constexpr std::uintptr_t m_flModDepth         = 0X0028; // float32
            static constexpr std::uintptr_t m_bApplyAntialiasing = 0X002C; // bool
        };

        // Construct Allowed
        class CVMixNameInputMeter : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_nValueIndex = 0X0010; // int32
        };

        // Has VTable
        // Construct Allowed
        class CVMixDynamics3BandProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixDynamics3BandDesc_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixBoxverbDesc_t {
        public:
            static constexpr std::uintptr_t m_flSizeMax        = 0X0000; // float32
            static constexpr std::uintptr_t m_flSizeMin        = 0X0004; // float32
            static constexpr std::uintptr_t m_flComplexity     = 0X0008; // float32
            static constexpr std::uintptr_t m_flDiffusion      = 0X000C; // float32
            static constexpr std::uintptr_t m_flModDepth       = 0X0010; // float32
            static constexpr std::uintptr_t m_flModRate        = 0X0014; // float32
            static constexpr std::uintptr_t m_bParallel        = 0X0018; // bool
            static constexpr std::uintptr_t m_filterType       = 0X001C; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_flWidth          = 0X002C; // float32
            static constexpr std::uintptr_t m_flHeight         = 0X0030; // float32
            static constexpr std::uintptr_t m_flDepth          = 0X0034; // float32
            static constexpr std::uintptr_t m_flFeedbackScale  = 0X0038; // float32
            static constexpr std::uintptr_t m_flFeedbackWidth  = 0X003C; // float32
            static constexpr std::uintptr_t m_flFeedbackHeight = 0X0040; // float32
            static constexpr std::uintptr_t m_flFeedbackDepth  = 0X0044; // float32
            static constexpr std::uintptr_t m_flOutputGain     = 0X0048; // float32
            static constexpr std::uintptr_t m_flTaps           = 0X004C; // float32
        };

        // Construct Allowed
        class CSosSoundEventGroupSchema {
        public:
            static constexpr std::uintptr_t m_nGroupType               = 0X0008; // SosGroupType_t
            static constexpr std::uintptr_t m_bBlocksEvents            = 0X000C; // bool
            static constexpr std::uintptr_t m_nBlockMaxCount           = 0X0010; // int32
            static constexpr std::uintptr_t m_flMemberLifespanTime     = 0X0014; // float32
            static constexpr std::uintptr_t m_bInvertMatch             = 0X0018; // bool
            static constexpr std::uintptr_t m_Behavior_EventName       = 0X001C; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_matchSoundEventName      = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_bMatchEventSubString     = 0X0028; // bool
            static constexpr std::uintptr_t m_matchSoundEventSubString = 0X0030; // CUtlString
            static constexpr std::uintptr_t m_Behavior_EntIndex        = 0X0038; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_flEntIndex               = 0X003C; // float32
            static constexpr std::uintptr_t m_Behavior_Opvar           = 0X0040; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_flOpvar                  = 0X0044; // float32
            static constexpr std::uintptr_t m_Behavior_String          = 0X0048; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_opvarString              = 0X0050; // CUtlString
            static constexpr std::uintptr_t m_vActions                 = 0X0058; // CUtlVector<CSosGroupActionSchema*>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamics3BandDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbGainOutput   = 0X0000; // float32
            static constexpr std::uintptr_t m_flRMSTimeMS      = 0X0004; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth    = 0X0008; // float32
            static constexpr std::uintptr_t m_flDepth          = 0X000C; // float32
            static constexpr std::uintptr_t m_flWetMix         = 0X0010; // float32
            static constexpr std::uintptr_t m_flTimeScale      = 0X0014; // float32
            static constexpr std::uintptr_t m_flLowCutoffFreq  = 0X0018; // float32
            static constexpr std::uintptr_t m_flHighCutoffFreq = 0X001C; // float32
            static constexpr std::uintptr_t m_bPeakMode        = 0X0020; // bool
            static constexpr std::uintptr_t m_bandDesc         = 0X0024; // VMixDynamicsBand_t[3]
        };

        // Has VTable
        // Construct Allowed
        class CVMixEQ8ProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixEQ8Desc_t
        };

        // Construct Allowed
        class CDSPMixgroupModifier {
        public:
            static constexpr std::uintptr_t m_mixgroup                                         = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_flModifier                                       = 0X0008; // float32
            static constexpr std::uintptr_t m_flModifierMin                                    = 0X000C; // float32
            static constexpr std::uintptr_t m_flSourceModifier                                 = 0X0010; // float32
            static constexpr std::uintptr_t m_flSourceModifierMin                              = 0X0014; // float32
            static constexpr std::uintptr_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0X0018; // float32
        };

        // Construct Allowed
        class CAudioMorphData {
        public:
            static constexpr std::uintptr_t m_times         = 0X0000; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nameHashCodes = 0X0018; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_nameStrings   = 0X0030; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_samples       = 0X0048; // CUtlVector<CUtlVector<float32>>
            static constexpr std::uintptr_t m_flEaseIn      = 0X0060; // float32
            static constexpr std::uintptr_t m_flEaseOut     = 0X0064; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDualCompressorDesc_t {
        public:
            static constexpr std::uintptr_t m_flRMSTimeMS   = 0X0000; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth = 0X0004; // float32
            static constexpr std::uintptr_t m_flWetMix      = 0X0008; // float32
            static constexpr std::uintptr_t m_bPeakMode     = 0X000C; // bool
            static constexpr std::uintptr_t m_bandDesc      = 0X0010; // VMixDynamicsBand_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_tones = 0X00B8; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerShapedNoise : public CVoiceContainerGenerator {
        public:
            static constexpr std::uintptr_t m_bUseCurveForFrequency = 0X00A8; // bool
            static constexpr std::uintptr_t m_flFrequency           = 0X00AC; // float32
            static constexpr std::uintptr_t m_frequencySweep        = 0X00B0; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bUseCurveForResonance = 0X00F0; // bool
            static constexpr std::uintptr_t m_flResonance           = 0X00F4; // float32
            static constexpr std::uintptr_t m_resonanceSweep        = 0X00F8; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bUseCurveForAmplitude = 0X0138; // bool
            static constexpr std::uintptr_t m_flGainInDecibels      = 0X013C; // float32
            static constexpr std::uintptr_t m_gainSweep             = 0X0140; // CPiecewiseCurve
        };

        // Construct Allowed
        class CDspPresetModifierList {
        public:
            static constexpr std::uintptr_t m_dspName   = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_modifiers = 0X0008; // CUtlVector<CDSPMixgroupModifier>
        };

        // Has VTable
        // Construct Allowed
        class CVMixDiffusorProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixDiffusorDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixUtilityProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixUtilityDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerGranulator : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_flGrainLength          = 0X00B8; // float32
            static constexpr std::uintptr_t m_flGrainCrossfadeAmount = 0X00BC; // float32
            static constexpr std::uintptr_t m_flStartJitter          = 0X00C0; // float32
            static constexpr std::uintptr_t m_flPlaybackJitter       = 0X00C4; // float32
            static constexpr std::uintptr_t m_bShouldWraparound      = 0X00C8; // bool
            static constexpr std::uintptr_t m_sourceAudio            = 0X00D0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
        };

        // Has VTable
        // Construct Allowed
        class CVMixPresetDSPProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixPresetDSPDesc_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDelayDesc_t {
        public:
            static constexpr std::uintptr_t m_feedbackFilter = 0X0000; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_bEnableFilter  = 0X0010; // bool
            static constexpr std::uintptr_t m_flDelay        = 0X0014; // float32
            static constexpr std::uintptr_t m_flDirectGain   = 0X0018; // float32
            static constexpr std::uintptr_t m_flDelayGain    = 0X001C; // float32
            static constexpr std::uintptr_t m_flFeedbackGain = 0X0020; // float32
            static constexpr std::uintptr_t m_flWidth        = 0X0024; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixEQ8Desc_t {
        public:
            static constexpr std::uintptr_t m_stages = 0X0000; // VMixFilterDesc_t[8]
        };

        // Has VTable
        // Construct Allowed
        class CVMixDynamicsProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixDynamicsDesc_t
        };

        // Construct Allowed
        class CVMixGraphDescData {
        public:
            static constexpr std::uintptr_t m_name                 = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nGraphOutputChannels = 0X0008; // int32
            static constexpr std::uintptr_t m_bIsMainGraph         = 0X000C; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerLoopXFade : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_sound       = 0X00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_flLoopEnd   = 0X00C0; // float32
            static constexpr std::uintptr_t m_flLoopStart = 0X00C4; // float32
            static constexpr std::uintptr_t m_flFadeOut   = 0X00C8; // float32
            static constexpr std::uintptr_t m_flFadeIn    = 0X00CC; // float32
            static constexpr std::uintptr_t m_bPlayHead   = 0X00D0; // bool
            static constexpr std::uintptr_t m_bPlayTail   = 0X00D1; // bool
            static constexpr std::uintptr_t m_bEqualPow   = 0X00D2; // bool
        };

        // Construct Allowed
        struct VMixPresetDSPDesc_t {
        public:
            static constexpr std::uintptr_t m_effectName = 0X0000; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAudioPhonemeTag {
        public:
            static constexpr std::uintptr_t m_flStartTime  = 0X0000; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0X0004; // float32
            static constexpr std::uintptr_t m_nPhonemeCode = 0X0008; // int32
        };

        // Construct Allowed
        class CVMixControlInputArray : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_nArrayIndex = 0X0010; // int32
        };

        // Construct Allowed
        class CVMixNameInput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0X0010; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventCountSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_bExcludeStoppedSounds = 0X0008; // bool
            static constexpr std::uintptr_t m_strCountKeyName       = 0X0010; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerEnvelopeAnalyzer : public CVoiceContainerAnalysisBase {
        public:
            static constexpr std::uintptr_t m_mode              = 0X0050; // EMode_t
            static constexpr std::uintptr_t m_fAnalysisWindowMs = 0X0054; // float32
            static constexpr std::uintptr_t m_flThreshold       = 0X0058; // float32
        };

        // Construct Allowed
        class CVMixImpulseResponseInput : public CVMixInputBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioHybridReverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Construct Allowed
        class CSoundEventMetaData {
        public:
            static constexpr std::uintptr_t m_soundEventVMix = 0X0000; // CStrongHandle<InfoForResourceTypeCVMixListResource>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixPitchShiftDesc_t {
        public:
            static constexpr std::uintptr_t m_nGrainSampleCount = 0X0000; // int32
            static constexpr std::uintptr_t m_flPitchShift      = 0X0004; // float32
            static constexpr std::uintptr_t m_nQuality          = 0X0008; // int32
            static constexpr std::uintptr_t m_nProcType         = 0X000C; // int32
        };

        // Construct Allowed
        class CVMixControlOutput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_flDefaultValue = 0X0010; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixModDelayProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixModDelayDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixShaperProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixShaperDesc_t
        };

        // Construct Allowed
        class CVMixAutomaticControlInput {
        public:
            static constexpr std::uintptr_t m_name               = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nControlInputIndex = 0X0008; // int32
            static constexpr std::uintptr_t m_bIsTrackSend       = 0X000C; // bool
            static constexpr std::uintptr_t m_bIsStackVar        = 0X000D; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAudioEmphasisSample {
        public:
            static constexpr std::uintptr_t m_flTime  = 0X0000; // float32
            static constexpr std::uintptr_t m_flValue = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixOscProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixOscDesc_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CVMixCurveHeader {
        public:
            static constexpr std::uintptr_t m_nControlPointCount = 0X0000; // uint32
            static constexpr std::uintptr_t m_nControlPointStart = 0X0004; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerSet : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay = 0X00A8; // CUtlVector<CVoiceContainerSetElement>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixConvolutionDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbGain         = 0X0000; // float32
            static constexpr std::uintptr_t m_flPreDelayMS     = 0X0004; // float32
            static constexpr std::uintptr_t m_flWetMix         = 0X0008; // float32
            static constexpr std::uintptr_t m_fldbLow          = 0X000C; // float32
            static constexpr std::uintptr_t m_fldbMid          = 0X0010; // float32
            static constexpr std::uintptr_t m_fldbHigh         = 0X0014; // float32
            static constexpr std::uintptr_t m_flLowCutoffFreq  = 0X0018; // float32
            static constexpr std::uintptr_t m_flHighCutoffFreq = 0X001C; // float32
        };

        // Construct Allowed
        class CVoiceContainerSetElement {
        public:
            static constexpr std::uintptr_t m_sound      = 0X0000; // CSoundContainerReference
            static constexpr std::uintptr_t m_flVolumeDB = 0X0018; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CSoundInfoHeader {
        public:
        };

        // Construct Allowed
        struct SosEditItemInfo_t {
        public:
            static constexpr std::uintptr_t itemType     = 0X0000; // SosEditItemType_t
            static constexpr std::uintptr_t itemName     = 0X0008; // CUtlString
            static constexpr std::uintptr_t itemTypeName = 0X0010; // CUtlString
            static constexpr std::uintptr_t itemKVString = 0X0020; // CUtlString
            static constexpr std::uintptr_t itemPos      = 0X0028; // Vector2D
        };

        // Has VTable
        // Construct Allowed
        class CVMixFlangerProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixFlangerDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixEffectChainProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixEffectChainDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixFreeverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixFreeverbDesc_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixPlateverbDesc_t {
        public:
            static constexpr std::uintptr_t m_flPrefilter          = 0X0000; // float32
            static constexpr std::uintptr_t m_flInputDiffusion1    = 0X0004; // float32
            static constexpr std::uintptr_t m_flInputDiffusion2    = 0X0008; // float32
            static constexpr std::uintptr_t m_flDecay              = 0X000C; // float32
            static constexpr std::uintptr_t m_flDamp               = 0X0010; // float32
            static constexpr std::uintptr_t m_flFeedbackDiffusion1 = 0X0014; // float32
            static constexpr std::uintptr_t m_flFeedbackDiffusion2 = 0X0018; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixConvolutionProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixConvolutionDesc_t
        };

        // Construct Allowed
        class CSoundContainerReferenceArray {
        public:
            static constexpr std::uintptr_t m_bUseReference = 0X0000; // bool
            static constexpr std::uintptr_t m_sounds        = 0X0008; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            static constexpr std::uintptr_t m_pSounds       = 0X0020; // CUtlVector<CVoiceContainerBase*>
        };

        // Has VTable
        // Construct Allowed
        class CVMixFilterProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixFilterDesc_t
        };

        // Construct Allowed
        class CVMixAdditionalOutput {
        public:
            static constexpr std::uintptr_t m_name = 0X0000; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerTapePlayer : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_bShouldWraparound      = 0X00B8; // bool
            static constexpr std::uintptr_t m_sourceAudio            = 0X00C0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            static constexpr std::uintptr_t m_flTapeSpeedAttackTime  = 0X00C8; // float32
            static constexpr std::uintptr_t m_flTapeSpeedReleaseTime = 0X00CC; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixSubgraphSwitchProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixSubgraphSwitchDesc_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDiffusorDesc_t {
        public:
            static constexpr std::uintptr_t m_flSize       = 0X0000; // float32
            static constexpr std::uintptr_t m_flComplexity = 0X0004; // float32
            static constexpr std::uintptr_t m_flFeedback   = 0X0008; // float32
            static constexpr std::uintptr_t m_flOutputGain = 0X000C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioPathingProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVMixPannerProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixPannerDesc_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamicsCompressorDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbOutputGain           = 0X0000; // float32
            static constexpr std::uintptr_t m_fldbCompressionThreshold = 0X0004; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth            = 0X0008; // float32
            static constexpr std::uintptr_t m_flCompressionRatio       = 0X000C; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS           = 0X0010; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS          = 0X0014; // float32
            static constexpr std::uintptr_t m_flRMSTimeMS              = 0X0018; // float32
            static constexpr std::uintptr_t m_flWetMix                 = 0X001C; // float32
            static constexpr std::uintptr_t m_bPeakMode                = 0X0020; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVMixStereoDelayProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixShaperDesc_t {
        public:
            static constexpr std::uintptr_t m_nShape            = 0X0000; // int32
            static constexpr std::uintptr_t m_fldbDrive         = 0X0004; // float32
            static constexpr std::uintptr_t m_fldbOutputGain    = 0X0008; // float32
            static constexpr std::uintptr_t m_flWetMix          = 0X000C; // float32
            static constexpr std::uintptr_t m_nOversampleFactor = 0X0010; // int32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixEnvelopeDesc_t {
        public:
            static constexpr std::uintptr_t m_flAttackTimeMS  = 0X0000; // float32
            static constexpr std::uintptr_t m_flHoldTimeMS    = 0X0004; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS = 0X0008; // float32
        };

        // Construct Allowed
        class CAudioSentence {
        public:
            static constexpr std::uintptr_t m_bShouldVoiceDuck = 0X0000; // bool
            static constexpr std::uintptr_t m_RunTimePhonemes  = 0X0008; // CUtlVector<CAudioPhonemeTag>
            static constexpr std::uintptr_t m_EmphasisSamples  = 0X0020; // CUtlVector<CAudioEmphasisSample>
            static constexpr std::uintptr_t m_morphData        = 0X0038; // CAudioMorphData
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerParameterBlender : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_firstSound            = 0X00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_secondSound           = 0X00C0; // CSoundContainerReference
            static constexpr std::uintptr_t m_bEnableOcclusionBlend = 0X00D8; // bool
            static constexpr std::uintptr_t m_curve1                = 0X00E0; // CPiecewiseCurve
            static constexpr std::uintptr_t m_curve2                = 0X0120; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bEnableDistanceBlend  = 0X0160; // bool
            static constexpr std::uintptr_t m_curve3                = 0X0168; // CPiecewiseCurve
            static constexpr std::uintptr_t m_curve4                = 0X01A8; // CPiecewiseCurve
        };

        // Construct Allowed
        class CVMixAudioMeter {
        public:
            static constexpr std::uintptr_t m_name        = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_displayName = 0X0008; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVMixVocoderProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixVocoderDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionLimitSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMaxCount      = 0X0008; // int32
            static constexpr std::uintptr_t m_nStopType      = 0X000C; // SosActionStopType_t
            static constexpr std::uintptr_t m_nSortType      = 0X0010; // SosActionLimitSortType_t
            static constexpr std::uintptr_t m_bStopImmediate = 0X0014; // bool
            static constexpr std::uintptr_t m_bCountStopped  = 0X0015; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerDecayingSineWave : public CVoiceContainerGenerator {
        public:
            static constexpr std::uintptr_t m_flFrequency = 0X00A8; // float32
            static constexpr std::uintptr_t m_flDecayTime = 0X00AC; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerAmpedDecayingSineWave : public CVoiceContainerDecayingSineWave {
        public:
            static constexpr std::uintptr_t m_flGainAmount = 0X00B0; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerEnvelope : public CVoiceContainerDefault {
        public:
            static constexpr std::uintptr_t m_sound             = 0X00A8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            static constexpr std::uintptr_t m_analysisContainer = 0X00B0; // CVoiceContainerAnalysisBase*
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixAutoFilterDesc_t {
        public:
            static constexpr std::uintptr_t m_flEnvelopeAmount = 0X0000; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS   = 0X0004; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS  = 0X0008; // float32
            static constexpr std::uintptr_t m_filter           = 0X000C; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_flLFOAmount      = 0X001C; // float32
            static constexpr std::uintptr_t m_flLFORate        = 0X0020; // float32
            static constexpr std::uintptr_t m_flPhase          = 0X0024; // float32
            static constexpr std::uintptr_t m_nLFOShape        = 0X0028; // VMixLFOShape_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamicsBand_t {
        public:
            static constexpr std::uintptr_t m_fldbGainInput      = 0X0000; // float32
            static constexpr std::uintptr_t m_fldbGainOutput     = 0X0004; // float32
            static constexpr std::uintptr_t m_fldbThresholdBelow = 0X0008; // float32
            static constexpr std::uintptr_t m_fldbThresholdAbove = 0X000C; // float32
            static constexpr std::uintptr_t m_flRatioBelow       = 0X0010; // float32
            static constexpr std::uintptr_t m_flRatioAbove       = 0X0014; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS     = 0X0018; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS    = 0X001C; // float32
            static constexpr std::uintptr_t m_bEnable            = 0X0020; // bool
            static constexpr std::uintptr_t m_bSolo              = 0X0021; // bool
        };

        // Construct Allowed
        struct VMixEffectChainDesc_t {
        public:
            static constexpr std::uintptr_t m_effectName = 0X0000; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVMixPlateReverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixPlateverbDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerMultiBlender : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay  = 0X00A8; // CSoundContainerReferenceArray
            static constexpr std::uintptr_t m_flBlendFactor = 0X00E0; // float32
            static constexpr std::uintptr_t m_flCrossover   = 0X00E4; // float32
        };

        // Construct Allowed
        class CVMixVsndInput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_nProcessor   = 0X0018; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
        public:
            static constexpr std::uintptr_t m_flMinVolume           = 0X0000; // float32
            static constexpr std::uintptr_t m_nInstancesAtMinVolume = 0X0004; // int32
            static constexpr std::uintptr_t m_flMaxVolume           = 0X0008; // float32
            static constexpr std::uintptr_t m_nInstancesAtMaxVolume = 0X000C; // int32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerSelector : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_mode                = 0X00A8; // PlayBackMode_t
            static constexpr std::uintptr_t m_soundsToPlay        = 0X00B0; // CSoundContainerReferenceArray
            static constexpr std::uintptr_t m_fProbabilityWeights = 0X00E8; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionTimeBlockLimitSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMaxCount     = 0X0008; // int32
            static constexpr std::uintptr_t m_flMaxDuration = 0X000C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionMemberCountEnvelopeSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nBaseCount    = 0X0008; // int32
            static constexpr std::uintptr_t m_nTargetCount  = 0X000C; // int32
            static constexpr std::uintptr_t m_flBaseValue   = 0X0010; // float32
            static constexpr std::uintptr_t m_flTargetValue = 0X0014; // float32
            static constexpr std::uintptr_t m_flAttack      = 0X0018; // float32
            static constexpr std::uintptr_t m_flDecay       = 0X001C; // float32
            static constexpr std::uintptr_t m_resultVarName = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_bSaveToGroup  = 0X0028; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVMixDualCompressorProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixDualCompressorDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerSwitch : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay = 0X00A8; // CUtlVector<CSoundContainerReference>
        };

        // Construct Allowed
        class CVMixControlMeter : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_nValueIndex = 0X0010; // int32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerEnum : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay    = 0X00A8; // CSoundContainerReferenceArray
            static constexpr std::uintptr_t m_iSelection      = 0X00E0; // int32
            static constexpr std::uintptr_t m_flCrossfadeTime = 0X00E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_flMaxDuration = 0X0008; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixVocoderDesc_t {
        public:
            static constexpr std::uintptr_t m_nBandCount       = 0X0000; // int32
            static constexpr std::uintptr_t m_flBandwidth      = 0X0004; // float32
            static constexpr std::uintptr_t m_fldBModGain      = 0X0008; // float32
            static constexpr std::uintptr_t m_flFreqRangeStart = 0X000C; // float32
            static constexpr std::uintptr_t m_flFreqRangeEnd   = 0X0010; // float32
            static constexpr std::uintptr_t m_fldBUnvoicedGain = 0X0014; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS   = 0X0018; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS  = 0X001C; // float32
            static constexpr std::uintptr_t m_nDebugBand       = 0X0020; // int32
            static constexpr std::uintptr_t m_bPeakMode        = 0X0024; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixUtilityDesc_t {
        public:
            static constexpr std::uintptr_t m_nOp             = 0X0000; // VMixChannelOperation_t
            static constexpr std::uintptr_t m_flInputPan      = 0X0004; // float32
            static constexpr std::uintptr_t m_flOutputBalance = 0X0008; // float32
            static constexpr std::uintptr_t m_fldbOutputGain  = 0X000C; // float32
            static constexpr std::uintptr_t m_bBassMono       = 0X0010; // bool
            static constexpr std::uintptr_t m_flBassFreq      = 0X0014; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerLoopTrigger : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_sound              = 0X00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_flRetriggerTimeMin = 0X00C0; // float32
            static constexpr std::uintptr_t m_flRetriggerTimeMax = 0X00C4; // float32
            static constexpr std::uintptr_t m_flFadeTime         = 0X00C8; // float32
            static constexpr std::uintptr_t m_bCrossFade         = 0X00CC; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVMixDelayProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixDelayDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixBoxverb2ProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixBoxverbDesc_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixFilterDesc_t {
        public:
            static constexpr std::uintptr_t m_nFilterType  = 0X0000; // VMixFilterType_t
            static constexpr std::uintptr_t m_nFilterSlope = 0X0002; // VMixFilterSlope_t
            static constexpr std::uintptr_t m_bEnabled     = 0X0003; // bool
            static constexpr std::uintptr_t m_fldbGain     = 0X0004; // float32
            static constexpr std::uintptr_t m_flCutoffFreq = 0X0008; // float32
            static constexpr std::uintptr_t m_flQ          = 0X000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixOscDesc_t {
        public:
            static constexpr std::uintptr_t oscType   = 0X0000; // VMixLFOShape_t
            static constexpr std::uintptr_t m_freq    = 0X0004; // float32
            static constexpr std::uintptr_t m_flPhase = 0X0008; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixAutoFilterProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0X0020; // VMixAutoFilterDesc_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixFlangerDesc_t {
        public:
            static constexpr std::uintptr_t m_bPhaseInvert       = 0X0000; // bool
            static constexpr std::uintptr_t m_flGlideTime        = 0X0004; // float32
            static constexpr std::uintptr_t m_flDelay            = 0X0008; // float32
            static constexpr std::uintptr_t m_flOutputGain       = 0X000C; // float32
            static constexpr std::uintptr_t m_flFeedbackGain     = 0X0010; // float32
            static constexpr std::uintptr_t m_flFeedforwardGain  = 0X0014; // float32
            static constexpr std::uintptr_t m_flModRate          = 0X0018; // float32
            static constexpr std::uintptr_t m_flModDepth         = 0X001C; // float32
            static constexpr std::uintptr_t m_bApplyAntialiasing = 0X0020; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamicsDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbGain                 = 0X0000; // float32
            static constexpr std::uintptr_t m_fldbNoiseGateThreshold   = 0X0004; // float32
            static constexpr std::uintptr_t m_fldbCompressionThreshold = 0X0008; // float32
            static constexpr std::uintptr_t m_fldbLimiterThreshold     = 0X000C; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth            = 0X0010; // float32
            static constexpr std::uintptr_t m_flRatio                  = 0X0014; // float32
            static constexpr std::uintptr_t m_flLimiterRatio           = 0X0018; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS           = 0X001C; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS          = 0X0020; // float32
            static constexpr std::uintptr_t m_flRMSTimeMS              = 0X0024; // float32
            static constexpr std::uintptr_t m_flWetMix                 = 0X0028; // float32
            static constexpr std::uintptr_t m_bPeakMode                = 0X002C; // bool
        };
    }
}

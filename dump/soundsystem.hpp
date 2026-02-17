#pragma once
#include <cstdint>

namespace offsets {
    namespace soundsystem {
        enum class SosActionStopType_t : std::uint32_t {
            SOS_STOPTYPE_NONE  = 0x0,
            SOS_STOPTYPE_TIME  = 0x1,
            SOS_STOPTYPE_OPVAR = 0x2
        };

        enum class SosActionLimitSortType_t : std::uint32_t {
            SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
            SOS_LIMIT_SORTTYPE_LOWEST  = 0x1
        };

        enum class SosActionSetParamSortType_t : std::uint32_t {
            SOS_SETPARAM_SORTTYPE_HIGHEST = 0x0,
            SOS_SETPARAM_SORTTYPE_LOWEST  = 0x1
        };

        enum class SosGroupType_t : std::uint32_t {
            SOS_GROUPTYPE_DYNAMIC = 0x0,
            SOS_GROUPTYPE_STATIC  = 0x1
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

        enum class SosEditItemType_t : std::uint32_t {
            SOS_EDIT_ITEM_TYPE_SOUNDEVENTS   = 0x0,
            SOS_EDIT_ITEM_TYPE_SOUNDEVENT    = 0x1,
            SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
            SOS_EDIT_ITEM_TYPE_STACK         = 0x3,
            SOS_EDIT_ITEM_TYPE_OPERATOR      = 0x4,
            SOS_EDIT_ITEM_TYPE_FIELD         = 0x5
        };

        enum class CVSoundFormat_t : std::uint8_t {
            PCM16 = 0x0,
            PCM8  = 0x1,
            MP3   = 0x2,
            ADPCM = 0x3
        };

        enum class EMode_t : std::uint32_t {
            Peak = 0x0,
            RMS  = 0x1
        };

        enum class PlayBackMode_t : std::uint32_t {
            Random          = 0x0,
            RandomNoRepeats = 0x1,
            RandomAvoidLast = 0x2,
            Sequential      = 0x3,
            RandomWeights   = 0x4
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

        enum class EWaveform : std::uint8_t {
            Sine     = 0x0,
            Square   = 0x1,
            Saw      = 0x2,
            Triangle = 0x3,
            Noise    = 0x4
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

        enum class VMixLFOShape_t : std::uint32_t {
            LFO_SHAPE_SINE   = 0x0,
            LFO_SHAPE_SQUARE = 0x1,
            LFO_SHAPE_TRI    = 0x2,
            LFO_SHAPE_SAW    = 0x3,
            LFO_SHAPE_NOISE  = 0x4
        };

        enum class VMixPannerType_t : std::uint32_t {
            PANNER_TYPE_LINEAR      = 0x0,
            PANNER_TYPE_EQUAL_POWER = 0x1
        };

        enum class VMixSubgraphSwitchInterpolationType_t : std::uint32_t {
            SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE         = 0x0,
            SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT          = 0x1,
            SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
        };

        enum class VMixChannelOperation_t : std::uint32_t {
            VMIX_CHAN_STEREO   = 0x0,
            VMIX_CHAN_LEFT     = 0x1,
            VMIX_CHAN_RIGHT    = 0x2,
            VMIX_CHAN_SWAP     = 0x3,
            VMIX_CHAN_MONO     = 0x4,
            VMIX_CHAN_MID_SIDE = 0x5
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

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CSosGroupActionSchema {
        public:
        };

        // Construct Allowed
        class CSosSoundEventGroupSchema {
        public:
            static constexpr std::uintptr_t m_nGroupType               = 0x0008; // SosGroupType_t
            static constexpr std::uintptr_t m_bBlocksEvents            = 0x000C; // bool
            static constexpr std::uintptr_t m_nBlockMaxCount           = 0x0010; // int32
            static constexpr std::uintptr_t m_flMemberLifespanTime     = 0x0014; // float32
            static constexpr std::uintptr_t m_bInvertMatch             = 0x0018; // bool
            static constexpr std::uintptr_t m_Behavior_EventName       = 0x001C; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_matchSoundEventName      = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_bMatchEventSubString     = 0x0028; // bool
            static constexpr std::uintptr_t m_matchSoundEventSubString = 0x0030; // CUtlString
            static constexpr std::uintptr_t m_Behavior_EntIndex        = 0x0038; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_flEntIndex               = 0x003C; // float32
            static constexpr std::uintptr_t m_Behavior_Opvar           = 0x0040; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_flOpvar                  = 0x0044; // float32
            static constexpr std::uintptr_t m_Behavior_String          = 0x0048; // SosGroupFieldBehavior_t
            static constexpr std::uintptr_t m_opvarString              = 0x0050; // CUtlString
            static constexpr std::uintptr_t m_vActions                 = 0x0058; // CUtlVector<CSosGroupActionSchema*>
        };

        // Construct Allowed
        struct SosEditItemInfo_t {
        public:
            static constexpr std::uintptr_t itemType     = 0x0000; // SosEditItemType_t
            static constexpr std::uintptr_t itemName     = 0x0008; // CUtlString
            static constexpr std::uintptr_t itemTypeName = 0x0010; // CUtlString
            static constexpr std::uintptr_t itemKVString = 0x0020; // CUtlString
            static constexpr std::uintptr_t itemPos      = 0x0028; // Vector2D
        };

        // Construct Allowed
        struct SelectedEditItemInfo_t {
        public:
            static constexpr std::uintptr_t m_EditItems = 0x0000; // CUtlVector<SosEditItemInfo_t>
        };

        // Construct Allowed
        class CSoundEventMetaData {
        public:
            static constexpr std::uintptr_t m_soundEventVMix = 0x0000; // CStrongHandle<InfoForResourceTypeCVMixListResource>
        };

        // Construct Allowed
        class CDSPMixgroupModifier {
        public:
            static constexpr std::uintptr_t m_mixgroup                                         = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_flModifier                                       = 0x0008; // float32
            static constexpr std::uintptr_t m_flModifierMin                                    = 0x000C; // float32
            static constexpr std::uintptr_t m_flSourceModifier                                 = 0x0010; // float32
            static constexpr std::uintptr_t m_flSourceModifierMin                              = 0x0014; // float32
            static constexpr std::uintptr_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x0018; // float32
        };

        // Construct Allowed
        class CDspPresetModifierList {
        public:
            static constexpr std::uintptr_t m_dspName   = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_modifiers = 0x0008; // CUtlVector<CDSPMixgroupModifier>
        };

        // Construct Allowed
        class CDSPPresetMixgroupModifierTable {
        public:
            static constexpr std::uintptr_t m_table = 0x0000; // CUtlVector<CDspPresetModifierList>
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerAnalysisBase {
        public:
            static constexpr std::uintptr_t m_bRegenerateCurveOnCompile = 0x0008; // bool
            static constexpr std::uintptr_t m_curve                     = 0x0010; // CPiecewiseCurve
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_vSound            = 0x0028; // CVSound
            static constexpr std::uintptr_t m_pEnvelopeAnalyzer = 0x00A0; // CVoiceContainerAnalysisBase*
        };

        // Construct Allowed
        class CVSound {
        public:
            static constexpr std::uintptr_t m_nRate          = 0x0000; // int32
            static constexpr std::uintptr_t m_nFormat        = 0x0004; // CVSoundFormat_t
            static constexpr std::uintptr_t m_nChannels      = 0x0008; // uint32
            static constexpr std::uintptr_t m_nLoopStart     = 0x000C; // int32
            static constexpr std::uintptr_t m_nSampleCount   = 0x0010; // uint32
            static constexpr std::uintptr_t m_flDuration     = 0x0014; // float32
            static constexpr std::uintptr_t m_Sentences      = 0x0018; // CUtlVector<CAudioSentence>
            static constexpr std::uintptr_t m_nStreamingSize = 0x0030; // uint32
            static constexpr std::uintptr_t m_nSeekTable     = 0x0038; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nLoopEnd       = 0x0050; // int32
            static constexpr std::uintptr_t m_encodedHeader  = 0x0058; // CUtlBinaryBlock
        };

        // Construct Allowed
        class CSoundContainerReference {
        public:
            static constexpr std::uintptr_t m_bUseReference = 0x0000; // bool
            static constexpr std::uintptr_t m_sound         = 0x0008; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            static constexpr std::uintptr_t m_pSound        = 0x0010; // CVoiceContainerBase*
        };

        // Construct Allowed
        class CSoundContainerReferenceArray {
        public:
            static constexpr std::uintptr_t m_bUseReference = 0x0000; // bool
            static constexpr std::uintptr_t m_sounds        = 0x0008; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            static constexpr std::uintptr_t m_pSounds       = 0x0020; // CUtlVector<CVoiceContainerBase*>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAudioEmphasisSample {
        public:
            static constexpr std::uintptr_t m_flTime  = 0x0000; // float32
            static constexpr std::uintptr_t m_flValue = 0x0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAudioPhonemeTag {
        public:
            static constexpr std::uintptr_t m_flStartTime  = 0x0000; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0x0004; // float32
            static constexpr std::uintptr_t m_nPhonemeCode = 0x0008; // int32
        };

        // Construct Allowed
        class CAudioMorphData {
        public:
            static constexpr std::uintptr_t m_times         = 0x0000; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nameHashCodes = 0x0018; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_nameStrings   = 0x0030; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_samples       = 0x0048; // CUtlVector<CUtlVector<float32>>
            static constexpr std::uintptr_t m_flEaseIn      = 0x0060; // float32
            static constexpr std::uintptr_t m_flEaseOut     = 0x0064; // float32
        };

        // Construct Allowed
        class CAudioSentence {
        public:
            static constexpr std::uintptr_t m_bShouldVoiceDuck = 0x0000; // bool
            static constexpr std::uintptr_t m_RunTimePhonemes  = 0x0008; // CUtlVector<CAudioPhonemeTag>
            static constexpr std::uintptr_t m_EmphasisSamples  = 0x0020; // CUtlVector<CAudioEmphasisSample>
            static constexpr std::uintptr_t m_morphData        = 0x0038; // CAudioMorphData
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CSoundInfoHeader {
        public:
        };

        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth__CTone {
        public:
            static constexpr std::uintptr_t m_harmonics      = 0x0000; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
            static constexpr std::uintptr_t m_curve          = 0x0018; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bSyncInstances = 0x0058; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
        public:
            static constexpr std::uintptr_t m_flMinVolume           = 0x0000; // float32
            static constexpr std::uintptr_t m_nInstancesAtMinVolume = 0x0004; // int32
            static constexpr std::uintptr_t m_flMaxVolume           = 0x0008; // float32
            static constexpr std::uintptr_t m_nInstancesAtMaxVolume = 0x000C; // int32
        };

        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth__CHarmonic {
        public:
            static constexpr std::uintptr_t m_nWaveform     = 0x0000; // EWaveform
            static constexpr std::uintptr_t m_nFundamental  = 0x0001; // EMidiNote
            static constexpr std::uintptr_t m_nOctave       = 0x0004; // int32
            static constexpr std::uintptr_t m_flCents       = 0x0008; // float32
            static constexpr std::uintptr_t m_flPhase       = 0x000C; // float32
            static constexpr std::uintptr_t m_curve         = 0x0010; // CPiecewiseCurve
            static constexpr std::uintptr_t m_volumeScaling = 0x0050; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
        };

        // Construct Allowed
        class CVoiceContainerSetElement {
        public:
            static constexpr std::uintptr_t m_sound      = 0x0000; // CSoundContainerReference
            static constexpr std::uintptr_t m_flVolumeDB = 0x0018; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_name      = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_nChannels = 0x0014; // int32
            static constexpr std::uintptr_t m_flxfade   = 0x0018; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixFilterDesc_t {
        public:
            static constexpr std::uintptr_t m_nFilterType  = 0x0000; // VMixFilterType_t
            static constexpr std::uintptr_t m_nFilterSlope = 0x0002; // VMixFilterSlope_t
            static constexpr std::uintptr_t m_bEnabled     = 0x0003; // bool
            static constexpr std::uintptr_t m_fldbGain     = 0x0004; // float32
            static constexpr std::uintptr_t m_flCutoffFreq = 0x0008; // float32
            static constexpr std::uintptr_t m_flQ          = 0x000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixEQ8Desc_t {
        public:
            static constexpr std::uintptr_t m_stages = 0x0000; // VMixFilterDesc_t[8]
        };

        // Construct Allowed
        struct VMixPresetDSPDesc_t {
        public:
            static constexpr std::uintptr_t m_effectName = 0x0000; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDelayDesc_t {
        public:
            static constexpr std::uintptr_t m_feedbackFilter = 0x0000; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_bEnableFilter  = 0x0010; // bool
            static constexpr std::uintptr_t m_flDelay        = 0x0014; // float32
            static constexpr std::uintptr_t m_flDirectGain   = 0x0018; // float32
            static constexpr std::uintptr_t m_flDelayGain    = 0x001C; // float32
            static constexpr std::uintptr_t m_flFeedbackGain = 0x0020; // float32
            static constexpr std::uintptr_t m_flWidth        = 0x0024; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixPannerDesc_t {
        public:
            static constexpr std::uintptr_t m_type       = 0x0000; // VMixPannerType_t
            static constexpr std::uintptr_t m_flStrength = 0x0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixModDelayDesc_t {
        public:
            static constexpr std::uintptr_t m_feedbackFilter     = 0x0000; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_bPhaseInvert       = 0x0010; // bool
            static constexpr std::uintptr_t m_flGlideTime        = 0x0014; // float32
            static constexpr std::uintptr_t m_flDelay            = 0x0018; // float32
            static constexpr std::uintptr_t m_flOutputGain       = 0x001C; // float32
            static constexpr std::uintptr_t m_flFeedbackGain     = 0x0020; // float32
            static constexpr std::uintptr_t m_flModRate          = 0x0024; // float32
            static constexpr std::uintptr_t m_flModDepth         = 0x0028; // float32
            static constexpr std::uintptr_t m_bApplyAntialiasing = 0x002C; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixFlangerDesc_t {
        public:
            static constexpr std::uintptr_t m_bPhaseInvert       = 0x0000; // bool
            static constexpr std::uintptr_t m_flGlideTime        = 0x0004; // float32
            static constexpr std::uintptr_t m_flDelay            = 0x0008; // float32
            static constexpr std::uintptr_t m_flOutputGain       = 0x000C; // float32
            static constexpr std::uintptr_t m_flFeedbackGain     = 0x0010; // float32
            static constexpr std::uintptr_t m_flFeedforwardGain  = 0x0014; // float32
            static constexpr std::uintptr_t m_flModRate          = 0x0018; // float32
            static constexpr std::uintptr_t m_flModDepth         = 0x001C; // float32
            static constexpr std::uintptr_t m_bApplyAntialiasing = 0x0020; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDiffusorDesc_t {
        public:
            static constexpr std::uintptr_t m_flSize       = 0x0000; // float32
            static constexpr std::uintptr_t m_flComplexity = 0x0004; // float32
            static constexpr std::uintptr_t m_flFeedback   = 0x0008; // float32
            static constexpr std::uintptr_t m_flOutputGain = 0x000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixBoxverbDesc_t {
        public:
            static constexpr std::uintptr_t m_flSizeMax        = 0x0000; // float32
            static constexpr std::uintptr_t m_flSizeMin        = 0x0004; // float32
            static constexpr std::uintptr_t m_flComplexity     = 0x0008; // float32
            static constexpr std::uintptr_t m_flDiffusion      = 0x000C; // float32
            static constexpr std::uintptr_t m_flModDepth       = 0x0010; // float32
            static constexpr std::uintptr_t m_flModRate        = 0x0014; // float32
            static constexpr std::uintptr_t m_bParallel        = 0x0018; // bool
            static constexpr std::uintptr_t m_filterType       = 0x001C; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_flWidth          = 0x002C; // float32
            static constexpr std::uintptr_t m_flHeight         = 0x0030; // float32
            static constexpr std::uintptr_t m_flDepth          = 0x0034; // float32
            static constexpr std::uintptr_t m_flFeedbackScale  = 0x0038; // float32
            static constexpr std::uintptr_t m_flFeedbackWidth  = 0x003C; // float32
            static constexpr std::uintptr_t m_flFeedbackHeight = 0x0040; // float32
            static constexpr std::uintptr_t m_flFeedbackDepth  = 0x0044; // float32
            static constexpr std::uintptr_t m_flOutputGain     = 0x0048; // float32
            static constexpr std::uintptr_t m_flTaps           = 0x004C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixFreeverbDesc_t {
        public:
            static constexpr std::uintptr_t m_flRoomSize        = 0x0000; // float32
            static constexpr std::uintptr_t m_flDamp            = 0x0004; // float32
            static constexpr std::uintptr_t m_flWidth           = 0x0008; // float32
            static constexpr std::uintptr_t m_flLateReflections = 0x000C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixPlateverbDesc_t {
        public:
            static constexpr std::uintptr_t m_flPrefilter          = 0x0000; // float32
            static constexpr std::uintptr_t m_flInputDiffusion1    = 0x0004; // float32
            static constexpr std::uintptr_t m_flInputDiffusion2    = 0x0008; // float32
            static constexpr std::uintptr_t m_flDecay              = 0x000C; // float32
            static constexpr std::uintptr_t m_flDamp               = 0x0010; // float32
            static constexpr std::uintptr_t m_flFeedbackDiffusion1 = 0x0014; // float32
            static constexpr std::uintptr_t m_flFeedbackDiffusion2 = 0x0018; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamicsDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbGain                 = 0x0000; // float32
            static constexpr std::uintptr_t m_fldbNoiseGateThreshold   = 0x0004; // float32
            static constexpr std::uintptr_t m_fldbCompressionThreshold = 0x0008; // float32
            static constexpr std::uintptr_t m_fldbLimiterThreshold     = 0x000C; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth            = 0x0010; // float32
            static constexpr std::uintptr_t m_flRatio                  = 0x0014; // float32
            static constexpr std::uintptr_t m_flLimiterRatio           = 0x0018; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS           = 0x001C; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS          = 0x0020; // float32
            static constexpr std::uintptr_t m_flRMSTimeMS              = 0x0024; // float32
            static constexpr std::uintptr_t m_flWetMix                 = 0x0028; // float32
            static constexpr std::uintptr_t m_bPeakMode                = 0x002C; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamicsCompressorDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbOutputGain           = 0x0000; // float32
            static constexpr std::uintptr_t m_fldbCompressionThreshold = 0x0004; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth            = 0x0008; // float32
            static constexpr std::uintptr_t m_flCompressionRatio       = 0x000C; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS           = 0x0010; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS          = 0x0014; // float32
            static constexpr std::uintptr_t m_flRMSTimeMS              = 0x0018; // float32
            static constexpr std::uintptr_t m_flWetMix                 = 0x001C; // float32
            static constexpr std::uintptr_t m_bPeakMode                = 0x0020; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamicsBand_t {
        public:
            static constexpr std::uintptr_t m_fldbGainInput      = 0x0000; // float32
            static constexpr std::uintptr_t m_fldbGainOutput     = 0x0004; // float32
            static constexpr std::uintptr_t m_fldbThresholdBelow = 0x0008; // float32
            static constexpr std::uintptr_t m_fldbThresholdAbove = 0x000C; // float32
            static constexpr std::uintptr_t m_flRatioBelow       = 0x0010; // float32
            static constexpr std::uintptr_t m_flRatioAbove       = 0x0014; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS     = 0x0018; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS    = 0x001C; // float32
            static constexpr std::uintptr_t m_bEnable            = 0x0020; // bool
            static constexpr std::uintptr_t m_bSolo              = 0x0021; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDynamics3BandDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbGainOutput   = 0x0000; // float32
            static constexpr std::uintptr_t m_flRMSTimeMS      = 0x0004; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth    = 0x0008; // float32
            static constexpr std::uintptr_t m_flDepth          = 0x000C; // float32
            static constexpr std::uintptr_t m_flWetMix         = 0x0010; // float32
            static constexpr std::uintptr_t m_flTimeScale      = 0x0014; // float32
            static constexpr std::uintptr_t m_flLowCutoffFreq  = 0x0018; // float32
            static constexpr std::uintptr_t m_flHighCutoffFreq = 0x001C; // float32
            static constexpr std::uintptr_t m_bPeakMode        = 0x0020; // bool
            static constexpr std::uintptr_t m_bandDesc         = 0x0024; // VMixDynamicsBand_t[3]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixDualCompressorDesc_t {
        public:
            static constexpr std::uintptr_t m_flRMSTimeMS   = 0x0000; // float32
            static constexpr std::uintptr_t m_fldbKneeWidth = 0x0004; // float32
            static constexpr std::uintptr_t m_flWetMix      = 0x0008; // float32
            static constexpr std::uintptr_t m_bPeakMode     = 0x000C; // bool
            static constexpr std::uintptr_t m_bandDesc      = 0x0010; // VMixDynamicsBand_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixEnvelopeDesc_t {
        public:
            static constexpr std::uintptr_t m_flAttackTimeMS  = 0x0000; // float32
            static constexpr std::uintptr_t m_flHoldTimeMS    = 0x0004; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS = 0x0008; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixPitchShiftDesc_t {
        public:
            static constexpr std::uintptr_t m_nGrainSampleCount = 0x0000; // int32
            static constexpr std::uintptr_t m_flPitchShift      = 0x0004; // float32
            static constexpr std::uintptr_t m_nQuality          = 0x0008; // int32
            static constexpr std::uintptr_t m_nProcType         = 0x000C; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixConvolutionDesc_t {
        public:
            static constexpr std::uintptr_t m_fldbGain         = 0x0000; // float32
            static constexpr std::uintptr_t m_flPreDelayMS     = 0x0004; // float32
            static constexpr std::uintptr_t m_flWetMix         = 0x0008; // float32
            static constexpr std::uintptr_t m_fldbLow          = 0x000C; // float32
            static constexpr std::uintptr_t m_fldbMid          = 0x0010; // float32
            static constexpr std::uintptr_t m_fldbHigh         = 0x0014; // float32
            static constexpr std::uintptr_t m_flLowCutoffFreq  = 0x0018; // float32
            static constexpr std::uintptr_t m_flHighCutoffFreq = 0x001C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct VMixVocoderDesc_t {
        public:
            static constexpr std::uintptr_t m_nBandCount       = 0x0000; // int32
            static constexpr std::uintptr_t m_flBandwidth      = 0x0004; // float32
            static constexpr std::uintptr_t m_fldBModGain      = 0x0008; // float32
            static constexpr std::uintptr_t m_flFreqRangeStart = 0x000C; // float32
            static constexpr std::uintptr_t m_flFreqRangeEnd   = 0x0010; // float32
            static constexpr std::uintptr_t m_fldBUnvoicedGain = 0x0014; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS   = 0x0018; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS  = 0x001C; // float32
            static constexpr std::uintptr_t m_nDebugBand       = 0x0020; // int32
            static constexpr std::uintptr_t m_bPeakMode        = 0x0024; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixShaperDesc_t {
        public:
            static constexpr std::uintptr_t m_nShape            = 0x0000; // int32
            static constexpr std::uintptr_t m_fldbDrive         = 0x0004; // float32
            static constexpr std::uintptr_t m_fldbOutputGain    = 0x0008; // float32
            static constexpr std::uintptr_t m_flWetMix          = 0x000C; // float32
            static constexpr std::uintptr_t m_nOversampleFactor = 0x0010; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixUtilityDesc_t {
        public:
            static constexpr std::uintptr_t m_nOp             = 0x0000; // VMixChannelOperation_t
            static constexpr std::uintptr_t m_flInputPan      = 0x0004; // float32
            static constexpr std::uintptr_t m_flOutputBalance = 0x0008; // float32
            static constexpr std::uintptr_t m_fldbOutputGain  = 0x000C; // float32
            static constexpr std::uintptr_t m_bBassMono       = 0x0010; // bool
            static constexpr std::uintptr_t m_flBassFreq      = 0x0014; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixAutoFilterDesc_t {
        public:
            static constexpr std::uintptr_t m_flEnvelopeAmount = 0x0000; // float32
            static constexpr std::uintptr_t m_flAttackTimeMS   = 0x0004; // float32
            static constexpr std::uintptr_t m_flReleaseTimeMS  = 0x0008; // float32
            static constexpr std::uintptr_t m_filter           = 0x000C; // VMixFilterDesc_t
            static constexpr std::uintptr_t m_flLFOAmount      = 0x001C; // float32
            static constexpr std::uintptr_t m_flLFORate        = 0x0020; // float32
            static constexpr std::uintptr_t m_flPhase          = 0x0024; // float32
            static constexpr std::uintptr_t m_nLFOShape        = 0x0028; // VMixLFOShape_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VMixOscDesc_t {
        public:
            static constexpr std::uintptr_t oscType   = 0x0000; // VMixLFOShape_t
            static constexpr std::uintptr_t m_freq    = 0x0004; // float32
            static constexpr std::uintptr_t m_flPhase = 0x0008; // float32
        };

        // Construct Allowed
        struct VMixEffectChainDesc_t {
        public:
            static constexpr std::uintptr_t m_effectName = 0x0000; // CUtlString
        };

        // Construct Allowed
        struct VMixSubgraphSwitchDesc_t {
        public:
            static constexpr std::uintptr_t m_name                = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_effectName          = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_subgraphs           = 0x0010; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_interpolationMode   = 0x0028; // VMixSubgraphSwitchInterpolationType_t
            static constexpr std::uintptr_t m_bOnlyTailsOnFadeOut = 0x002C; // bool
            static constexpr std::uintptr_t m_flInterpolationTime = 0x0030; // float32
        };

        // Construct Allowed
        class CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_name = 0x0000; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CVMixCommand {
        public:
            static constexpr std::uintptr_t m_nCommand           = 0x0000; // VMixGraphCommandID_t
            static constexpr std::uintptr_t m_nParameterNameHash = 0x0004; // uint32
            static constexpr std::uintptr_t m_nOutputSubmix      = 0x0008; // int32
            static constexpr std::uintptr_t m_nInputSubmix0      = 0x000C; // int32
            static constexpr std::uintptr_t m_nInputSubmix1      = 0x0010; // int32
            static constexpr std::uintptr_t m_nProcessor         = 0x0014; // int32
            static constexpr std::uintptr_t m_nInputValue0       = 0x0018; // int32
            static constexpr std::uintptr_t m_nInputValue1       = 0x001C; // int32
        };

        // Construct Allowed
        class CVMixAudioMeter {
        public:
            static constexpr std::uintptr_t m_name        = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_displayName = 0x0008; // CUtlString
        };

        // Construct Allowed
        class CVMixAdditionalOutput {
        public:
            static constexpr std::uintptr_t m_name = 0x0000; // CUtlString
        };

        // Construct Allowed
        class CVMixAutomaticControlInput {
        public:
            static constexpr std::uintptr_t m_name               = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nControlInputIndex = 0x0008; // int32
            static constexpr std::uintptr_t m_bIsTrackSend       = 0x000C; // bool
            static constexpr std::uintptr_t m_bIsStackVar        = 0x000D; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CVMixCurveHeader {
        public:
            static constexpr std::uintptr_t m_nControlPointCount = 0x0000; // uint32
            static constexpr std::uintptr_t m_nControlPointStart = 0x0004; // uint32
        };

        // Construct Allowed
        class CVMixGraphDescData {
        public:
            static constexpr std::uintptr_t m_name                 = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nGraphOutputChannels = 0x0008; // int32
            static constexpr std::uintptr_t m_bIsMainGraph         = 0x000C; // bool
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionLimitSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMaxCount      = 0x0008; // int32
            static constexpr std::uintptr_t m_nStopType      = 0x000C; // SosActionStopType_t
            static constexpr std::uintptr_t m_nSortType      = 0x0010; // SosActionLimitSortType_t
            static constexpr std::uintptr_t m_bStopImmediate = 0x0014; // bool
            static constexpr std::uintptr_t m_bCountStopped  = 0x0015; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVMixSubgraphSwitchProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixSubgraphSwitchDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_flMaxDuration = 0x0008; // float32
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionTimeBlockLimitSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMaxCount     = 0x0008; // int32
            static constexpr std::uintptr_t m_flMaxDuration = 0x000C; // float32
        };

        // Construct Allowed
        class CVMixNameInputMeter : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_nValueIndex = 0x0010; // int32
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionMemberCountEnvelopeSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nBaseCount    = 0x0008; // int32
            static constexpr std::uintptr_t m_nTargetCount  = 0x000C; // int32
            static constexpr std::uintptr_t m_flBaseValue   = 0x0010; // float32
            static constexpr std::uintptr_t m_flTargetValue = 0x0014; // float32
            static constexpr std::uintptr_t m_flAttack      = 0x0018; // float32
            static constexpr std::uintptr_t m_flDecay       = 0x001C; // float32
            static constexpr std::uintptr_t m_resultVarName = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_bSaveToGroup  = 0x0028; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVMixFilterProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixFilterDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventCountSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_bExcludeStoppedSounds = 0x0008; // bool
            static constexpr std::uintptr_t m_strCountKeyName       = 0x0010; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMaxCount  = 0x0008; // int32
            static constexpr std::uintptr_t m_flMinValue = 0x000C; // float32
            static constexpr std::uintptr_t m_flMaxValue = 0x0010; // float32
            static constexpr std::uintptr_t m_opvarName  = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_nSortType  = 0x0020; // SosActionSetParamSortType_t
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventPrioritySchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_priorityValue                  = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_priorityVolumeScalar           = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_priorityContributeButDontRead  = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_bPriorityReadButDontContribute = 0x0020; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventClusterSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_nMinNearby                = 0x0008; // int32
            static constexpr std::uintptr_t m_flClusterEpsilon          = 0x000C; // float32
            static constexpr std::uintptr_t m_shouldPlayOpvar           = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_shouldPlayClusterChild    = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_clusterSizeOpvar          = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_groupBoundingBoxMinsOpvar = 0x0028; // CUtlString
            static constexpr std::uintptr_t m_groupBoundingBoxMaxsOpvar = 0x0030; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CVMixAutoFilterProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixAutoFilterDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerDefault : public CVoiceContainerBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CSosGroupActionSoundeventMinMaxValuesSchema : public CSosGroupActionSchema {
        public:
            static constexpr std::uintptr_t m_strQueryPublicFieldName          = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_strDelayPublicFieldName          = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_bExcludeStoppedSounds            = 0x0018; // bool
            static constexpr std::uintptr_t m_bExcludeDelayedSounds            = 0x0019; // bool
            static constexpr std::uintptr_t m_bExcludeSoundsBelowThreshold     = 0x001A; // bool
            static constexpr std::uintptr_t m_flExcludeSoundsMinThresholdValue = 0x001C; // float32
            static constexpr std::uintptr_t m_bExcludSoundsAboveThreshold      = 0x0020; // bool
            static constexpr std::uintptr_t m_flExcludeSoundsMaxThresholdValue = 0x0024; // float32
            static constexpr std::uintptr_t m_strMinValueName                  = 0x0028; // CUtlString
            static constexpr std::uintptr_t m_strMaxValueName                  = 0x0030; // CUtlString
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
        class CVoiceContainerNull : public CVoiceContainerGenerator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerSet : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay = 0x00A8; // CUtlVector<CVoiceContainerSetElement>
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerEnvelopeAnalyzer : public CVoiceContainerAnalysisBase {
        public:
            static constexpr std::uintptr_t m_mode              = 0x0050; // EMode_t
            static constexpr std::uintptr_t m_fAnalysisWindowMs = 0x0054; // float32
            static constexpr std::uintptr_t m_flThreshold       = 0x0058; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerEnvelope : public CVoiceContainerDefault {
        public:
            static constexpr std::uintptr_t m_sound             = 0x00A8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            static constexpr std::uintptr_t m_analysisContainer = 0x00B0; // CVoiceContainerAnalysisBase*
        };

        // Construct Allowed
        class CVMixControlOutput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_flDefaultValue = 0x0010; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixOscProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixOscDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioDirectProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerSelector : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_mode                = 0x00A8; // PlayBackMode_t
            static constexpr std::uintptr_t m_soundsToPlay        = 0x00B0; // CSoundContainerReferenceArray
            static constexpr std::uintptr_t m_fProbabilityWeights = 0x00E8; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerBlender : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_firstSound    = 0x00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_secondSound   = 0x00C0; // CSoundContainerReference
            static constexpr std::uintptr_t m_flBlendFactor = 0x00D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerMultiBlender : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay  = 0x00A8; // CSoundContainerReferenceArray
            static constexpr std::uintptr_t m_flBlendFactor = 0x00E0; // float32
            static constexpr std::uintptr_t m_flCrossover   = 0x00E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixStereoDelayProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerEnum : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay    = 0x00A8; // CSoundContainerReferenceArray
            static constexpr std::uintptr_t m_iSelection      = 0x00E0; // int32
            static constexpr std::uintptr_t m_flCrossfadeTime = 0x00E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerLoopTrigger : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_sound              = 0x00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_flRetriggerTimeMin = 0x00C0; // float32
            static constexpr std::uintptr_t m_flRetriggerTimeMax = 0x00C4; // float32
            static constexpr std::uintptr_t m_flFadeTime         = 0x00C8; // float32
            static constexpr std::uintptr_t m_bCrossFade         = 0x00CC; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerLoopXFade : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_sound       = 0x00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_flLoopEnd   = 0x00C0; // float32
            static constexpr std::uintptr_t m_flLoopStart = 0x00C4; // float32
            static constexpr std::uintptr_t m_flFadeOut   = 0x00C8; // float32
            static constexpr std::uintptr_t m_flFadeIn    = 0x00CC; // float32
            static constexpr std::uintptr_t m_bPlayHead   = 0x00D0; // bool
            static constexpr std::uintptr_t m_bPlayTail   = 0x00D1; // bool
            static constexpr std::uintptr_t m_bEqualPow   = 0x00D2; // bool
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerGranulator : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_flGrainLength          = 0x00B8; // float32
            static constexpr std::uintptr_t m_flGrainCrossfadeAmount = 0x00BC; // float32
            static constexpr std::uintptr_t m_flStartJitter          = 0x00C0; // float32
            static constexpr std::uintptr_t m_flPlaybackJitter       = 0x00C4; // float32
            static constexpr std::uintptr_t m_bShouldWraparound      = 0x00C8; // bool
            static constexpr std::uintptr_t m_sourceAudio            = 0x00D0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
        };

        // Has VTable
        // Construct Allowed
        class CVMixFreeverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixFreeverbDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerTapePlayer : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_bShouldWraparound      = 0x00B8; // bool
            static constexpr std::uintptr_t m_sourceAudio            = 0x00C0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            static constexpr std::uintptr_t m_flTapeSpeedAttackTime  = 0x00C8; // float32
            static constexpr std::uintptr_t m_flTapeSpeedReleaseTime = 0x00CC; // float32
        };

        // Construct Allowed
        class CVMixControlInput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_flDefaultValue = 0x0010; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerStaticAdditiveSynth : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_tones = 0x00B8; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
        };

        // Has VTable
        // Construct Allowed
        class CVMixDelayProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixDelayDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerParameterBlender : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_firstSound            = 0x00A8; // CSoundContainerReference
            static constexpr std::uintptr_t m_secondSound           = 0x00C0; // CSoundContainerReference
            static constexpr std::uintptr_t m_bEnableOcclusionBlend = 0x00D8; // bool
            static constexpr std::uintptr_t m_curve1                = 0x00E0; // CPiecewiseCurve
            static constexpr std::uintptr_t m_curve2                = 0x0120; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bEnableDistanceBlend  = 0x0160; // bool
            static constexpr std::uintptr_t m_curve3                = 0x0168; // CPiecewiseCurve
            static constexpr std::uintptr_t m_curve4                = 0x01A8; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerShapedNoise : public CVoiceContainerGenerator {
        public:
            static constexpr std::uintptr_t m_bUseCurveForFrequency = 0x00A8; // bool
            static constexpr std::uintptr_t m_flFrequency           = 0x00AC; // float32
            static constexpr std::uintptr_t m_frequencySweep        = 0x00B0; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bUseCurveForResonance = 0x00F0; // bool
            static constexpr std::uintptr_t m_flResonance           = 0x00F4; // float32
            static constexpr std::uintptr_t m_resonanceSweep        = 0x00F8; // CPiecewiseCurve
            static constexpr std::uintptr_t m_bUseCurveForAmplitude = 0x0138; // bool
            static constexpr std::uintptr_t m_flGainInDecibels      = 0x013C; // float32
            static constexpr std::uintptr_t m_gainSweep             = 0x0140; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CVMixPlateReverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixPlateverbDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixUtilityProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixUtilityDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixVocoderProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixVocoderDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerSwitch : public CVoiceContainerBase {
        public:
            static constexpr std::uintptr_t m_soundsToPlay = 0x00A8; // CUtlVector<CSoundContainerReference>
        };

        // Has VTable
        // Construct Allowed
        class CVMixEffectChainProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixEffectChainDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerDecayingSineWave : public CVoiceContainerGenerator {
        public:
            static constexpr std::uintptr_t m_flFrequency = 0x00A8; // float32
            static constexpr std::uintptr_t m_flDecayTime = 0x00AC; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixConvolutionProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixConvolutionDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixDynamicsProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixDynamicsDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerGenerator {
        public:
            static constexpr std::uintptr_t m_flCarrierFrequency   = 0x00A8; // float32
            static constexpr std::uintptr_t m_flModulatorFrequency = 0x00AC; // float32
            static constexpr std::uintptr_t m_flModulatorAmount    = 0x00B0; // float32
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioHRTFProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVMixEQ8ProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixEQ8Desc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixPitchShiftProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixPitchShiftDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixBoxverb2ProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixBoxverbDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixPresetDSPProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixPresetDSPDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixPannerProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixPannerDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixModDelayProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixModDelayDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixFlangerProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixFlangerDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixDiffusorProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixDiffusorDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixBoxverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixBoxverbDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixDynamicsCompressorProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixDynamicsCompressorDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioPathingProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CVMixDynamics3BandProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixDynamics3BandDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixDualCompressorProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixDualCompressorDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixEnvelopeProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixEnvelopeDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixShaperProcessorDesc : public CVMixBaseProcessorDesc {
        public:
            static constexpr std::uintptr_t m_desc = 0x0020; // VMixShaperDesc_t
        };

        // Has VTable
        // Construct Allowed
        class CVMixSteamAudioHybridReverbProcessorDesc : public CVMixBaseProcessorDesc {
        public:
        };

        // Construct Allowed
        class CVMixControlInputArray : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_nArrayIndex = 0x0010; // int32
        };

        // Construct Allowed
        class CVMixImpulseResponseInput : public CVMixInputBase {
        public:
        };

        // Construct Allowed
        class CVMixNameInput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0x0010; // CUtlString
        };

        // Construct Allowed
        class CVMixVsndInput : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_nProcessor   = 0x0018; // int32
        };

        // Construct Allowed
        class CVMixControlMeter : public CVMixInputBase {
        public:
            static constexpr std::uintptr_t m_nValueIndex = 0x0010; // int32
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerRandomSampler : public CVoiceContainerAsyncGenerator {
        public:
            static constexpr std::uintptr_t m_flAmplitude         = 0x00B8; // float32
            static constexpr std::uintptr_t m_flAmplitudeJitter   = 0x00BC; // float32
            static constexpr std::uintptr_t m_flTimeJitter        = 0x00C0; // float32
            static constexpr std::uintptr_t m_flMaxLength         = 0x00C4; // float32
            static constexpr std::uintptr_t m_nNumDelayVariations = 0x00C8; // int32
            static constexpr std::uintptr_t m_grainResources      = 0x00D0; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
        };

        // Has VTable
        // Construct Allowed
        class CVoiceContainerAmpedDecayingSineWave : public CVoiceContainerDecayingSineWave {
        public:
            static constexpr std::uintptr_t m_flGainAmount = 0x00B0; // float32
        };

    }
}

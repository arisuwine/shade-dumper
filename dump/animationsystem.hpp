#pragma once
#include <cstdint>

namespace offsets {
    namespace animationsystem {
        // Local Type Scope
        enum class PulseBestOutflowRules_t : std::uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX            = 0x1
        };

        // Local Type Scope
        enum class PulseCursorCancelPriority_t : std::uint32_t {
            None              = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel        = 0x2,
            HardCancel        = 0x3
        };

        // Local Type Scope
        enum class PulseMethodCallMode_t : std::uint32_t {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET    = 0x1
        };

        enum class SeqCmd_t : std::uint32_t {
            SeqCmd_Nop             = 0x0,
            SeqCmd_LinearDelta     = 0x1,
            SeqCmd_FetchFrameRange = 0x2,
            SeqCmd_Slerp           = 0x3,
            SeqCmd_Add             = 0x4,
            SeqCmd_Subtract        = 0x5,
            SeqCmd_Scale           = 0x6,
            SeqCmd_Copy            = 0x7,
            SeqCmd_Blend           = 0x8,
            SeqCmd_Worldspace      = 0x9,
            SeqCmd_Sequence        = 0xA,
            SeqCmd_FetchCycle      = 0xB,
            SeqCmd_FetchFrame      = 0xC,
            SeqCmd_IKLockInPlace   = 0xD,
            SeqCmd_IKRestoreAll    = 0xE,
            SeqCmd_ReverseSequence = 0xF,
            SeqCmd_Transform       = 0x10
        };

        enum class CNmEventRelevance_t : std::uint32_t {
            ClientOnly      = 0x0,
            ServerOnly      = 0x1,
            ClientAndServer = 0x2
        };

        enum class BoneTransformSpace_t : std::uint32_t {
            BoneTransformSpace_Invalid = 0xFFFFFFFF,
            BoneTransformSpace_Parent  = 0x0,
            BoneTransformSpace_Model   = 0x1,
            BoneTransformSpace_World   = 0x2
        };

        enum class CAnimationGraphVisualizerPrimitiveType : std::uint32_t {
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text   = 0x0,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line   = 0x2,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie    = 0x3,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis   = 0x4
        };

        enum class NmTransitionRule_t : std::uint8_t {
            AllowTransition              = 0x0,
            ConditionallyAllowTransition = 0x1,
            BlockTransition              = 0x2
        };

        enum class BinaryNodeTiming : std::uint32_t {
            UseChild1    = 0x0,
            UseChild2    = 0x1,
            SyncChildren = 0x2
        };

        enum class NmFollowBoneMode_t : std::uint8_t {
            RotationAndTranslation = 0x0,
            RotationOnly           = 0x1,
            TranslationOnly        = 0x2
        };

        enum class SolveIKChainAnimNodeDebugSetting : std::uint32_t {
            SOLVEIKCHAINANIMNODEDEBUGSETTING_None          = 0x0,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward       = 0x4,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Up            = 0x5,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Left          = 0x6
        };

        enum class CNmParticleEvent__Type_t : std::uint32_t {
            Create     = 0x0,
            Create_CFG = 0x1
        };

        enum class ParticleFloatBiasType_t : std::uint32_t {
            PF_BIAS_TYPE_INVALID     = 0xFFFFFFFF,
            PF_BIAS_TYPE_STANDARD    = 0x0,
            PF_BIAS_TYPE_GAIN        = 0x1,
            PF_BIAS_TYPE_EXPONENTIAL = 0x2,
            PF_BIAS_TYPE_COUNT       = 0x3
        };

        enum class SharedMovementGait_t : std::uint8_t {
            eInvalid  = 0xFF,
            eSlow     = 0x0,
            eMedium   = 0x1,
            eFast     = 0x2,
            eVeryFast = 0x3,
            eCount    = 0x4
        };

        enum class OrientationWarpRootMotionSource_t : std::uint32_t {
            eAnimationOrProcedural = 0x0,
            eAnimationOnly         = 0x1,
            eProceduralOnly        = 0x2
        };

        enum class PulseVariableKeysSource_t : std::uint32_t {
            PRIVATE = 0x0,
            CPP     = 0x1,
            VMAP    = 0x2,
            VMDL    = 0x3,
            XML     = 0x4,
            COUNT   = 0x5
        };

        enum class IKTargetCoordinateSystem : std::uint32_t {
            IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
            IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
            IKTARGETCOORDINATESYSTEM_COUNT      = 0x2
        };

        enum class ParticleFloatType_t : std::uint32_t {
            PF_TYPE_INVALID                                 = 0xFFFFFFFF,
            PF_TYPE_LITERAL                                 = 0x0,
            PF_TYPE_NAMED_VALUE                             = 0x1,
            PF_TYPE_RANDOM_UNIFORM                          = 0x2,
            PF_TYPE_RANDOM_BIASED                           = 0x3,
            PF_TYPE_COLLECTION_AGE                          = 0x4,
            PF_TYPE_ENDCAP_AGE                              = 0x5,
            PF_TYPE_CONTROL_POINT_COMPONENT                 = 0x6,
            PF_TYPE_CONTROL_POINT_CHANGE_AGE                = 0x7,
            PF_TYPE_CONTROL_POINT_SPEED                     = 0x8,
            PF_TYPE_PARTICLE_DETAIL_LEVEL                   = 0x9,
            PF_TYPE_CONCURRENT_DEF_COUNT                    = 0xA,
            PF_TYPE_CLOSEST_CAMERA_DISTANCE                 = 0xB,
            PF_TYPE_SNAPSHOT_COUNT                          = 0xC,
            PF_TYPE_RENDERER_CAMERA_DISTANCE                = 0xD,
            PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT             = 0xE,
            PF_TYPE_PARTICLE_NOISE                          = 0xF,
            PF_TYPE_PARTICLE_AGE                            = 0x10,
            PF_TYPE_PARTICLE_AGE_NORMALIZED                 = 0x11,
            PF_TYPE_PARTICLE_FLOAT                          = 0x12,
            PF_TYPE_PARTICLE_INITIAL_FLOAT                  = 0x13,
            PF_TYPE_PARTICLE_VECTOR_COMPONENT               = 0x14,
            PF_TYPE_PARTICLE_INITIAL_VECTOR_COMPONENT       = 0x15,
            PF_TYPE_PARTICLE_SPEED                          = 0x16,
            PF_TYPE_PARTICLE_NUMBER                         = 0x17,
            PF_TYPE_PARTICLE_NUMBER_NORMALIZED              = 0x18,
            PF_TYPE_PARTICLE_ROPE_SEGMENT                   = 0x19,
            PF_TYPE_PARTICLE_ROPE_SEGMENT_NORMALIZED        = 0x1A,
            PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DISTANCE    = 0x1B,
            PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DOT_PRODUCT = 0x1C,
            PF_TYPE_COUNT                                   = 0x1D
        };

        enum class CNmFloatAngleMathNode__Operation_t : std::uint8_t {
            ClampTo180           = 0x0,
            ClampTo360           = 0x1,
            FlipHemisphere       = 0x2,
            FlipHemisphereNegate = 0x3
        };

        enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : std::uint32_t {
            FLAG_IS_POLYSOUP_GEOMETRY             = 0x1,
            FLAG_LEVEL_COLLISION                  = 0x10,
            FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20
        };

        enum class CNmRootMotionOverrideNode__OverrideFlags_t : std::uint8_t {
            AllowMoveX       = 0x0,
            AllowMoveY       = 0x1,
            AllowMoveZ       = 0x2,
            AllowFacingPitch = 0x3,
            ListenForEvents  = 0x4
        };

        enum class NmEasingOperation_t : std::uint8_t {
            Linear     = 0x0,
            InQuad     = 0x1,
            OutQuad    = 0x2,
            InOutQuad  = 0x3,
            InCubic    = 0x4,
            OutCubic   = 0x5,
            InOutCubic = 0x6,
            InQuart    = 0x7,
            OutQuart   = 0x8,
            InOutQuart = 0x9,
            InQuint    = 0xA,
            OutQuint   = 0xB,
            InOutQuint = 0xC,
            InSine     = 0xD,
            OutSine    = 0xE,
            InOutSine  = 0xF,
            InExpo     = 0x10,
            OutExpo    = 0x11,
            InOutExpo  = 0x12,
            InCirc     = 0x13,
            OutCirc    = 0x14,
            InOutCirc  = 0x15,
            None       = 0x16
        };

        enum class EIKEndEffectorRotationFixUpMode : std::uint32_t {
            None                      = 0x0,
            MatchTargetOrientation    = 0x1,
            LookAtTargetForward       = 0x2,
            MaintainParentOrientation = 0x3,
            Count                     = 0x4
        };

        enum class MatterialAttributeTagType_t : std::uint32_t {
            MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
            MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1
        };

        enum class PFNoiseTurbulence_t : std::uint32_t {
            PF_NOISE_TURB_NONE      = 0x0,
            PF_NOISE_TURB_HIGHLIGHT = 0x1,
            PF_NOISE_TURB_FEEDBACK  = 0x2,
            PF_NOISE_TURB_LOOPY     = 0x3,
            PF_NOISE_TURB_CONTRAST  = 0x4,
            PF_NOISE_TURB_ALTERNATE = 0x5
        };

        enum class NmTargetWarpAlgorithm_t : std::uint8_t {
            Lerp                     = 0x0,
            Hermite                  = 0x1,
            HermiteFeaturePreserving = 0x2,
            Bezier                   = 0x3
        };

        enum class NmTransitionRuleCondition_t : std::uint8_t {
            AnyAllowed           = 0x0,
            FullyAllowed         = 0x1,
            ConditionallyAllowed = 0x2,
            Blocked              = 0x3
        };

        enum class ModelMeshBufferUsage_t : std::uint8_t {
            MESH_BUFFER_USAGE_NONE          = 0x0,
            MESH_BUFFER_USAGE_VB            = 0x1,
            MESH_BUFFER_USAGE_IB            = 0x2,
            MESH_BUFFER_USAGE_ADJACENCY     = 0x4,
            MESH_BUFFER_USAGE_MESHLET_TRIS  = 0x8,
            MESH_BUFFER_USAGE_RT_PROXY      = 0x10,
            MESH_BUFFER_USAGE_VERTEX_ALBEDO = 0x20
        };

        enum class TargetWarpTimingMethod : std::uint32_t {
            ReachDestinationOnRootMotionEnd = 0x0,
            ReachDestinationOnWarpTagEnd    = 0x1
        };

        enum class ScriptedMoveTo_t : std::uint32_t {
            eWait                = 0x0,
            eMoveWithGait        = 0x3,
            eTeleport            = 0x4,
            eWaitFacing          = 0x5,
            eObsoleteBackCompat1 = 0x1,
            eObsoleteBackCompat2 = 0x2
        };

        enum class EDemoBoneSelectionMode : std::uint32_t {
            CaptureAllBones      = 0x0,
            CaptureSelectedBones = 0x1
        };

        enum class EPulseGraphExecutionHistoryFlag : std::uint32_t {
            NO_FLAGS          = 0x0,
            CURSOR_ADD_TAG    = 0x1,
            CURSOR_REMOVE_TAG = 0x2,
            CURSOR_RETIRED    = 0x4,
            REQUIREMENT_PASS  = 0x8,
            REQUIREMENT_FAIL  = 0x10
        };

        enum class StepPhase : std::uint32_t {
            StepPhase_OnGround = 0x0,
            StepPhase_InAir    = 0x1
        };

        enum class FlexOpCode_t : std::uint32_t {
            FLEX_OP_CONST            = 0x1,
            FLEX_OP_FETCH1           = 0x2,
            FLEX_OP_FETCH2           = 0x3,
            FLEX_OP_ADD              = 0x4,
            FLEX_OP_SUB              = 0x5,
            FLEX_OP_MUL              = 0x6,
            FLEX_OP_DIV              = 0x7,
            FLEX_OP_NEG              = 0x8,
            FLEX_OP_EXP              = 0x9,
            FLEX_OP_OPEN             = 0xA,
            FLEX_OP_CLOSE            = 0xB,
            FLEX_OP_COMMA            = 0xC,
            FLEX_OP_MAX              = 0xD,
            FLEX_OP_MIN              = 0xE,
            FLEX_OP_2WAY_0           = 0xF,
            FLEX_OP_2WAY_1           = 0x10,
            FLEX_OP_NWAY             = 0x11,
            FLEX_OP_COMBO            = 0x12,
            FLEX_OP_DOMINATE         = 0x13,
            FLEX_OP_DME_LOWER_EYELID = 0x14,
            FLEX_OP_DME_UPPER_EYELID = 0x15,
            FLEX_OP_SQRT             = 0x16,
            FLEX_OP_REMAPVALCLAMPED  = 0x17,
            FLEX_OP_SIN              = 0x18,
            FLEX_OP_COS              = 0x19,
            FLEX_OP_ABS              = 0x1A
        };

        enum class NmCachedValueMode_t : std::uint32_t {
            OnEntry = 0x0,
            OnExit  = 0x1
        };

        enum class AnimNodeNetworkMode : std::uint32_t {
            ServerAuthoritative = 0x0,
            ClientSimulate      = 0x1
        };

        enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : std::uint32_t {
            FLAG_STATIC                   = 0x1,
            FLAG_KINEMATIC                = 0x2,
            FLAG_JOINT                    = 0x4,
            FLAG_MASS                     = 0x8,
            FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
            FLAG_DISABLE_CCD              = 0x20
        };

        enum class AnimParamType_t : std::uint8_t {
            ANIMPARAM_UNKNOWN      = 0x0,
            ANIMPARAM_BOOL         = 0x1,
            ANIMPARAM_ENUM         = 0x2,
            ANIMPARAM_INT          = 0x3,
            ANIMPARAM_FLOAT        = 0x4,
            ANIMPARAM_VECTOR       = 0x5,
            ANIMPARAM_QUATERNION   = 0x6,
            ANIMPARAM_GLOBALSYMBOL = 0x7,
            ANIMPARAM_COUNT        = 0x8
        };

        enum class NmEasingFunction_t : std::uint8_t {
            Linear = 0x0,
            Quad   = 0x1,
            Cubic  = 0x2,
            Quart  = 0x3,
            Quint  = 0x4,
            Sine   = 0x5,
            Expo   = 0x6,
            Circ   = 0x7,
            Back   = 0x8
        };

        enum class ParticleModelType_t : std::uint32_t {
            PM_TYPE_INVALID             = 0x0,
            PM_TYPE_NAMED_VALUE_MODEL   = 0x1,
            PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
            PM_TYPE_CONTROL_POINT       = 0x3,
            PM_TYPE_COUNT               = 0x4
        };

        enum class IKTargetSource : std::uint32_t {
            IKTARGETSOURCE_Bone               = 0x0,
            IKTARGETSOURCE_AnimgraphParameter = 0x1,
            IKTARGETSOURCE_COUNT              = 0x2
        };

        enum class PermModelInfo_t__FlagEnum : std::uint32_t {
            FLAG_TRANSLUCENT                 = 0x1,
            FLAG_TRANSLUCENT_TWO_PASS        = 0x2,
            FLAG_MODEL_IS_RUNTIME_COMBINED   = 0x4,
            FLAG_SOURCE1_IMPORT              = 0x8,
            FLAG_MODEL_PART_CHILD            = 0x10,
            FLAG_NAV_GEN_NONE                = 0x20,
            FLAG_NAV_GEN_HULL                = 0x40,
            FLAG_NO_FORCED_FADE              = 0x800,
            FLAG_HAS_SKINNED_MESHES          = 0x400,
            FLAG_DO_NOT_CAST_SHADOWS         = 0x20000,
            FLAG_FORCE_PHONEME_CROSSFADE     = 0x1000,
            FLAG_NO_ANIM_EVENTS              = 0x100000,
            FLAG_ANIMATION_DRIVEN_FLEXES     = 0x200000,
            FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
            FLAG_MODEL_DOC                   = 0x800000
        };

        enum class CNmFloatMathNode__Operator_t : std::uint8_t {
            Add                   = 0x0,
            Sub                   = 0x1,
            Mul                   = 0x2,
            Div                   = 0x3,
            Mod                   = 0x4,
            Abs                   = 0x5,
            Negate                = 0x6,
            Floor                 = 0x7,
            Ceiling               = 0x8,
            IntegerPart           = 0x9,
            FractionalPart        = 0xA,
            InverseFractionalPart = 0xB
        };

        enum class CNmSyncEventIndexConditionNode__TriggerMode_t : std::uint8_t {
            ExactlyAtEventIndex          = 0x0,
            GreaterThanEqualToEventIndex = 0x1
        };

        enum class ParticleFloatRoundType_t : std::uint32_t {
            PF_ROUND_TYPE_INVALID = 0xFFFFFFFF,
            PF_ROUND_TYPE_NEAREST = 0x0,
            PF_ROUND_TYPE_FLOOR   = 0x1,
            PF_ROUND_TYPE_CEIL    = 0x2,
            PF_ROUND_TYPE_COUNT   = 0x3
        };

        enum class PFNoiseType_t : std::uint32_t {
            PF_NOISE_TYPE_PERLIN  = 0x0,
            PF_NOISE_TYPE_SIMPLEX = 0x1,
            PF_NOISE_TYPE_WORLEY  = 0x2,
            PF_NOISE_TYPE_CURL    = 0x3
        };

        enum class AnimParamNetworkSetting : std::uint32_t {
            Auto          = 0x0,
            AlwaysNetwork = 0x1,
            NeverNetwork  = 0x2
        };

        enum class MorphFlexControllerRemapType_t : std::uint32_t {
            MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
            MORPH_FLEXCONTROLLER_REMAP_2WAY     = 0x1,
            MORPH_FLEXCONTROLLER_REMAP_NWAY     = 0x2,
            MORPH_FLEXCONTROLLER_REMAP_EYELID   = 0x3
        };

        // Global Type Scope
        enum class MeshDrawPrimitiveFlags_t : std::uint32_t {
            MESH_DRAW_FLAGS_NONE                                    = 0x0,
            MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH                    = 0x1,
            MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT           = 0x2,
            MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL       = 0x8,
            MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING      = 0x10,
            MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING    = 0x20,
            MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
            MESH_DRAW_FLAGS_DRAW_LAST                               = 0x80
        };

        enum class TargetWarpAngleMode_t : std::uint32_t {
            eFacingHeading = 0x0,
            eMoveHeading   = 0x1
        };

        enum class NmIKBlendMode_t : std::uint8_t {
            Effector = 0x0,
            Pose     = 0x1
        };

        enum class ModelBoneFlexComponent_t : std::uint32_t {
            MODEL_BONE_FLEX_INVALID = 0xFFFFFFFF,
            MODEL_BONE_FLEX_TX      = 0x0,
            MODEL_BONE_FLEX_TY      = 0x1,
            MODEL_BONE_FLEX_TZ      = 0x2
        };

        enum class CNmStateNode__TimedEvent_t__Comparison_t : std::uint8_t {
            LessThanEqual    = 0x0,
            GreaterThanEqual = 0x1
        };

        enum class PoseType_t : std::uint8_t {
            POSETYPE_STATIC  = 0x0,
            POSETYPE_DYNAMIC = 0x1,
            POSETYPE_INVALID = 0xFF
        };

        enum class CNmRootMotionData__SamplingMode_t : std::uint8_t {
            Delta      = 0x0,
            WorldSpace = 0x1
        };

        enum class NmEventConditionRules_t : std::uint8_t {
            LimitSearchToSourceState     = 0x0,
            IgnoreInactiveEvents         = 0x1,
            PreferHighestWeight          = 0x2,
            PreferHighestProgress        = 0x3,
            OperatorOr                   = 0x4,
            OperatorAnd                  = 0x5,
            SearchOnlyGraphEvents        = 0x6,
            SearchOnlyAnimEvents         = 0x7,
            SearchBothGraphAndAnimEvents = 0x8
        };

        enum class AnimValueSource : std::uint32_t {
            MoveHeading                      = 0x0,
            MoveSpeed                        = 0x1,
            ForwardSpeed                     = 0x2,
            StrafeSpeed                      = 0x3,
            FacingHeading                    = 0x4,
            LookHeading                      = 0x5,
            LookHeadingNormalized            = 0x6,
            LookPitch                        = 0x7,
            LookDistance                     = 0x8,
            Parameter                        = 0x9,
            WayPointHeading                  = 0xA,
            WayPointDistance                 = 0xB,
            BoundaryRadius                   = 0xC,
            TargetMoveHeading                = 0xD,
            TargetMoveSpeed                  = 0xE,
            AccelerationHeading              = 0xF,
            AccelerationSpeed                = 0x10,
            SlopeHeading                     = 0x11,
            SlopeAngle                       = 0x12,
            SlopePitch                       = 0x13,
            SlopeYaw                         = 0x14,
            GoalDistance                     = 0x15,
            AccelerationLeftRight            = 0x16,
            AccelerationFrontBack            = 0x17,
            RootMotionSpeed                  = 0x18,
            RootMotionTurnSpeed              = 0x19,
            MoveHeadingRelativeToLookHeading = 0x1A,
            MaxMoveSpeed                     = 0x1B,
            FingerCurl_Thumb                 = 0x1C,
            FingerCurl_Index                 = 0x1D,
            FingerCurl_Middle                = 0x1E,
            FingerCurl_Ring                  = 0x1F,
            FingerCurl_Pinky                 = 0x20,
            FingerSplay_Thumb_Index          = 0x21,
            FingerSplay_Index_Middle         = 0x22,
            FingerSplay_Middle_Ring          = 0x23,
            FingerSplay_Ring_Pinky           = 0x24
        };

        enum class CNmTimeConditionNode__Operator_t : std::uint8_t {
            LessThan         = 0x0,
            LessThanEqual    = 0x1,
            GreaterThan      = 0x2,
            GreaterThanEqual = 0x3
        };

        enum class LinearRootMotionBlendMode_t : std::uint32_t {
            LERP  = 0x0,
            NLERP = 0x1,
            SLERP = 0x2
        };

        enum class RagdollPoseControl : std::uint32_t {
            Absolute = 0x0
        };

        enum class IKSolverType : std::uint32_t {
            IKSOLVER_Perlin      = 0x0,
            IKSOLVER_TwoBone     = 0x1,
            IKSOLVER_Fabrik      = 0x2,
            IKSOLVER_DogLeg3Bone = 0x3,
            IKSOLVER_CCD         = 0x4,
            IKSOLVER_COUNT       = 0x5
        };

        enum class TargetWarpCorrectionMethod : std::uint32_t {
            ScaleMotion        = 0x0,
            AddCorrectionDelta = 0x1
        };

        enum class TargetSelectorAngleMode_t : std::uint32_t {
            eFacingHeading = 0x0,
            eMoveHeading   = 0x1
        };

        enum class Blend2DMode : std::uint32_t {
            Blend2DMode_General     = 0x0,
            Blend2DMode_Directional = 0x1
        };

        enum class PulseCursorExecResult_t : std::uint32_t {
            Succeeded     = 0x0,
            Canceled      = 0x1,
            Failed        = 0x2,
            OngoingNotify = 0x3
        };

        enum class HandshakeTagState_t : std::uint8_t {
            eInactive            = 0x0,
            eActive              = 0x1,
            eMomentarilyInactive = 0x2
        };

        enum class ChoiceChangeMethod : std::uint32_t {
            OnReset           = 0x0,
            OnCycleEnd        = 0x1,
            OnResetOrCycleEnd = 0x2
        };

        enum class ChoiceBlendMethod : std::uint32_t {
            SingleBlendTime     = 0x0,
            PerChoiceBlendTimes = 0x1
        };

        enum class VPhysXConstraintParams_t__EnumFlags0_t : std::uint32_t {
            FLAG0_SHIFT_INTERPENETRATE   = 0x0,
            FLAG0_SHIFT_CONSTRAIN        = 0x1,
            FLAG0_SHIFT_BREAKABLE_FORCE  = 0x2,
            FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3
        };

        enum class ParticleFloatMapType_t : std::uint32_t {
            PF_MAP_TYPE_INVALID      = 0xFFFFFFFF,
            PF_MAP_TYPE_DIRECT       = 0x0,
            PF_MAP_TYPE_MULT         = 0x1,
            PF_MAP_TYPE_REMAP        = 0x2,
            PF_MAP_TYPE_REMAP_BIASED = 0x3,
            PF_MAP_TYPE_CURVE        = 0x4,
            PF_MAP_TYPE_NOTCHED      = 0x5,
            PF_MAP_TYPE_ROUND        = 0x6,
            PF_MAP_TYPE_COUNT        = 0x7
        };

        enum class AnimParamVectorType_t : std::uint32_t {
            ANIMPARAM_VECTOR_TYPE_NONE         = 0x0,
            ANIMPARAM_VECTOR_TYPE_POSITION_WS  = 0x1,
            ANIMPARAM_VECTOR_TYPE_POSITION_LS  = 0x2,
            ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 0x3,
            ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 0x4
        };

        enum class CNmCurrentSyncEventNode__InfoType_t : std::uint8_t {
            IndexAndPercentage = 0x0,
            IndexOnly          = 0x1,
            PercentageOnly     = 0x2
        };

        enum class BlendKeyType : std::uint32_t {
            BlendKey_UserValue         = 0x0,
            BlendKey_Velocity          = 0x1,
            BlendKey_Distance          = 0x2,
            BlendKey_RemainingDistance = 0x3
        };

        enum class StateActionBehavior : std::uint32_t {
            STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT       = 0x0,
            STATETAGBEHAVIOR_FIRE_ON_ENTER              = 0x1,
            STATETAGBEHAVIOR_FIRE_ON_EXIT               = 0x2,
            STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT     = 0x3,
            STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 0x4
        };

        enum class NmRootMotionBlendMode_t : std::uint8_t {
            Blend        = 0x0,
            Additive     = 0x1,
            IgnoreSource = 0x2,
            IgnoreTarget = 0x3
        };

        enum class NmFootPhaseCondition_t : std::uint8_t {
            LeftFootDown     = 0x0,
            LeftFootPassing  = 0x1,
            LeftPhase        = 0x4,
            RightFootDown    = 0x2,
            RightFootPassing = 0x3,
            RightPhase       = 0x5,
            None             = 0x6
        };

        enum class ModelSkeletonData_t__BoneFlags_t : std::uint32_t {
            FLAG_NO_BONE_FLAGS            = 0x0,
            FLAG_BONEFLEXDRIVER           = 0x4,
            FLAG_CLOTH                    = 0x8,
            FLAG_PHYSICS                  = 0x10,
            FLAG_ATTACHMENT               = 0x20,
            FLAG_ANIMATION                = 0x40,
            FLAG_MESH                     = 0x80,
            FLAG_HITBOX                   = 0x100,
            FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
            FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
            FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
            FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
            FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
            FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
            FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
            FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
            FLAG_BONE_MERGE_READ          = 0x40000,
            FLAG_BONE_MERGE_WRITE         = 0x80000,
            FLAG_ALL_BONE_FLAGS           = 0xFFFFF,
            BLEND_PREALIGNED              = 0x100000,
            FLAG_RIGIDLENGTH              = 0x200000,
            FLAG_PROCEDURAL               = 0x400000
        };

        enum class MorphBundleType_t : std::uint32_t {
            MORPH_BUNDLE_TYPE_NONE           = 0x0,
            MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
            MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
            MORPH_BUNDLE_TYPE_COUNT          = 0x3
        };

        enum class CNmIDComparisonNode__Comparison_t : std::uint8_t {
            Matches     = 0x0,
            DoesntMatch = 0x1
        };

        enum class NmPoseBlendMode_t : std::uint8_t {
            Overlay    = 0x0,
            Additive   = 0x1,
            ModelSpace = 0x2
        };

        enum class ParticleFloatInputMode_t : std::uint32_t {
            PF_INPUT_MODE_INVALID = 0xFFFFFFFF,
            PF_INPUT_MODE_CLAMPED = 0x0,
            PF_INPUT_MODE_LOOPED  = 0x1,
            PF_INPUT_MODE_COUNT   = 0x2
        };

        enum class ResetCycleOption : std::uint32_t {
            Beginning          = 0x0,
            SameCycleAsSource  = 0x1,
            InverseSourceCycle = 0x2,
            FixedValue         = 0x3,
            SameTimeAsSource   = 0x4
        };

        enum class CNmVectorInfoNode__Info_t : std::uint8_t {
            X               = 0x0,
            Y               = 0x1,
            Z               = 0x2,
            Length          = 0x3,
            AngleHorizontal = 0x4,
            AngleVertical   = 0x5
        };

        enum class IKChannelMode : std::uint32_t {
            TwoBone           = 0x0,
            TwoBone_Translate = 0x1,
            OneBone           = 0x2,
            OneBone_Translate = 0x3
        };

        enum class NmGraphValueType_t : std::uint8_t {
            Unknown  = 0x0,
            Bool     = 0x1,
            ID       = 0x2,
            Float    = 0x3,
            Vector   = 0x4,
            Target   = 0x5,
            BoneMask = 0x6,
            Pose     = 0x7,
            Special  = 0x8
        };

        enum class ParticleFloatRandomMode_t : std::uint32_t {
            PF_RANDOM_MODE_INVALID  = 0xFFFFFFFF,
            PF_RANDOM_MODE_CONSTANT = 0x0,
            PF_RANDOM_MODE_VARYING  = 0x1,
            PF_RANDOM_MODE_COUNT    = 0x2
        };

        enum class PulseValueType_t : std::uint32_t {
            PVAL_VOID                  = 0xFFFFFFFF,
            PVAL_BOOL                  = 0x0,
            PVAL_INT                   = 0x1,
            PVAL_FLOAT                 = 0x2,
            PVAL_STRING                = 0x3,
            PVAL_VEC2                  = 0x4,
            PVAL_VEC3                  = 0x5,
            PVAL_QANGLE                = 0x6,
            PVAL_VEC3_WORLDSPACE       = 0x7,
            PVAL_VEC4                  = 0x8,
            PVAL_TRANSFORM             = 0x9,
            PVAL_TRANSFORM_WORLDSPACE  = 0xA,
            PVAL_COLOR_RGB             = 0xB,
            PVAL_GAMETIME              = 0xC,
            PVAL_EHANDLE               = 0xD,
            PVAL_RESOURCE              = 0xE,
            PVAL_RESOURCE_NAME         = 0xF,
            PVAL_SNDEVT_GUID           = 0x10,
            PVAL_SNDEVT_NAME           = 0x11,
            PVAL_ENTITY_NAME           = 0x12,
            PVAL_OPAQUE_HANDLE         = 0x13,
            PVAL_TYPESAFE_INT          = 0x14,
            PVAL_MODEL_MATERIAL_GROUP  = 0x15,
            PVAL_CURSOR_FLOW           = 0x16,
            PVAL_VARIANT               = 0x17,
            PVAL_UNKNOWN               = 0x18,
            PVAL_SCHEMA_ENUM           = 0x19,
            PVAL_PANORAMA_PANEL_HANDLE = 0x1A,
            PVAL_TEST_HANDLE           = 0x1B,
            PVAL_ARRAY                 = 0x1C,
            PVAL_TYPESAFE_INT64        = 0x1D,
            PVAL_PARTICLE_EHANDLE      = 0x1E,
            PVAL_COUNT                 = 0x1F
        };

        enum class PFNoiseModifier_t : std::uint32_t {
            PF_NOISE_MODIFIER_NONE   = 0x0,
            PF_NOISE_MODIFIER_LINES  = 0x1,
            PF_NOISE_MODIFIER_CLUMPS = 0x2,
            PF_NOISE_MODIFIER_RINGS  = 0x3
        };

        enum class ParticleVecType_t : std::uint32_t {
            PVEC_TYPE_INVALID                 = 0xFFFFFFFF,
            PVEC_TYPE_LITERAL                 = 0x0,
            PVEC_TYPE_LITERAL_COLOR           = 0x1,
            PVEC_TYPE_NAMED_VALUE             = 0x2,
            PVEC_TYPE_PARTICLE_VECTOR         = 0x3,
            PVEC_TYPE_PARTICLE_INITIAL_VECTOR = 0x4,
            PVEC_TYPE_PARTICLE_VELOCITY       = 0x5,
            PVEC_TYPE_CP_VALUE                = 0x6,
            PVEC_TYPE_CP_RELATIVE_POSITION    = 0x7,
            PVEC_TYPE_CP_RELATIVE_DIR         = 0x8,
            PVEC_TYPE_CP_RELATIVE_RANDOM_DIR  = 0x9,
            PVEC_TYPE_FLOAT_COMPONENTS        = 0xA,
            PVEC_TYPE_FLOAT_INTERP_CLAMPED    = 0xB,
            PVEC_TYPE_FLOAT_INTERP_OPEN       = 0xC,
            PVEC_TYPE_FLOAT_INTERP_GRADIENT   = 0xD,
            PVEC_TYPE_RANDOM_UNIFORM          = 0xE,
            PVEC_TYPE_RANDOM_UNIFORM_OFFSET   = 0xF,
            PVEC_TYPE_CP_DELTA                = 0x10,
            PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x11,
            PVEC_TYPE_COUNT                   = 0x12
        };

        enum class NmFootPhase_t : std::uint8_t {
            LeftFootDown     = 0x0,
            RightFootPassing = 0x1,
            RightFootDown    = 0x2,
            LeftFootPassing  = 0x3,
            None             = 0x4
        };

        enum class CNmTargetInfoNode__Info_t : std::uint32_t {
            AngleHorizontal        = 0x0,
            AngleVertical          = 0x1,
            Distance               = 0x2,
            DistanceHorizontalOnly = 0x3,
            DistanceVerticalOnly   = 0x4,
            DeltaOrientationX      = 0x5,
            DeltaOrientationY      = 0x6,
            DeltaOrientationZ      = 0x7
        };

        enum class FootstepLandedFootSoundType_t : std::uint32_t {
            FOOTSOUND_Left             = 0x0,
            FOOTSOUND_Right            = 0x1,
            FOOTSOUND_UseOverrideSound = 0x2
        };

        enum class FootLockSubVisualization : std::uint32_t {
            FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
            FOOTLOCKSUBVISUALIZATION_IKSolve              = 0x1
        };

        enum class CNmSoundEvent__Position_t : std::uint32_t {
            None             = 0x0,
            World            = 0x1,
            EntityPos        = 0x2,
            EntityEyePos     = 0x3,
            EntityAttachment = 0x4
        };

        enum class FootstepJumpPhase_t : std::uint8_t {
            Unknown    = 0x0,
            NotJumping = 0x1,
            Jumping    = 0x2,
            Landing    = 0x4
        };

        enum class NmFrameSnapEventMode_t : std::uint32_t {
            Floor = 0x0,
            Round = 0x1
        };

        enum class FootPinningTimingSource : std::uint32_t {
            FootMotion = 0x0,
            Tag        = 0x1,
            Parameter  = 0x2
        };

        enum class DampingSpeedFunction : std::uint32_t {
            NoDamping        = 0x0,
            Constant         = 0x1,
            Spring           = 0x2,
            AsymmetricSpring = 0x3
        };

        enum class PulseApiFeature_t : std::uint32_t {
            AF_NONE                           = 0x0,
            AF_ENTITIES                       = 0x1,
            AF_PANORAMA                       = 0x2,
            AF_PARTICLES                      = 0x8,
            AF_FAKE_ENTITIES                  = 0x10,
            AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20
        };

        enum class AnimationProcessingType_t : std::uint32_t {
            ANIMATION_PROCESSING_SERVER_SIMULATION    = 0x0,
            ANIMATION_PROCESSING_CLIENT_SIMULATION    = 0x1,
            ANIMATION_PROCESSING_CLIENT_PREDICTION    = 0x2,
            ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
            ANIMATION_PROCESSING_CLIENT_RENDER        = 0x4,
            ANIMATION_PROCESSING_MAX                  = 0x5
        };

        enum class JiggleBoneSimSpace : std::uint32_t {
            SimSpace_Local = 0x0,
            SimSpace_Model = 0x1,
            SimSpace_World = 0x2
        };

        enum class StanceOverrideMode : std::uint32_t {
            Sequence = 0x0,
            Node     = 0x1
        };

        enum class IkEndEffectorType : std::uint32_t {
            IkEndEffector_Attachment = 0x0,
            IkEndEffector_Bone       = 0x1
        };

        enum class AnimScriptType : std::uint16_t {
            ANIMSCRIPT_TYPE_INVALID      = 0xFFFF,
            ANIMSCRIPT_FUSE_GENERAL      = 0x0,
            ANIMSCRIPT_FUSE_STATEMACHINE = 0x1
        };

        enum class CNmTimeConditionNode__ComparisonType_t : std::uint8_t {
            PercentageThroughState     = 0x0,
            PercentageThroughSyncEvent = 0x1,
            ElapsedTime                = 0x2
        };

        enum class SeqPoseSetting_t : std::uint32_t {
            SEQ_POSE_SETTING_CONSTANT = 0x0,
            SEQ_POSE_SETTING_ROTATION = 0x1,
            SEQ_POSE_SETTING_POSITION = 0x2,
            SEQ_POSE_SETTING_VELOCITY = 0x3
        };

        enum class AnimParamButton_t : std::uint32_t {
            ANIMPARAM_BUTTON_NONE           = 0x0,
            ANIMPARAM_BUTTON_DPAD_UP        = 0x1,
            ANIMPARAM_BUTTON_DPAD_RIGHT     = 0x2,
            ANIMPARAM_BUTTON_DPAD_DOWN      = 0x3,
            ANIMPARAM_BUTTON_DPAD_LEFT      = 0x4,
            ANIMPARAM_BUTTON_A              = 0x5,
            ANIMPARAM_BUTTON_B              = 0x6,
            ANIMPARAM_BUTTON_X              = 0x7,
            ANIMPARAM_BUTTON_Y              = 0x8,
            ANIMPARAM_BUTTON_LEFT_SHOULDER  = 0x9,
            ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xA,
            ANIMPARAM_BUTTON_LTRIGGER       = 0xB,
            ANIMPARAM_BUTTON_RTRIGGER       = 0xC
        };

        enum class SelectorTagBehavior_t : std::uint32_t {
            SelectorTagBehavior_OnWhileCurrent    = 0x0,
            SelectorTagBehavior_OffWhenFinished   = 0x1,
            SelectorTagBehavior_OffBeforeFinished = 0x2
        };

        enum class HandshakeTagType_t : std::uint32_t {
            eInvalid  = 0xFFFFFFFF,
            eTask     = 0x0,
            eMovement = 0x1,
            eCount    = 0x2
        };

        enum class OrientationWarpTargetOffsetMode_t : std::uint32_t {
            eLiteralValue                  = 0x0,
            eParameter                     = 0x1,
            eAnimationMovementHeading      = 0x2,
            eAnimationMovementHeadingAtEnd = 0x3
        };

        enum class OrientationWarpMode_t : std::uint32_t {
            eInvalid       = 0x0,
            eAngle         = 0x1,
            eWorldPosition = 0x2
        };

        enum class PulseInstructionCode_t : std::uint16_t {
            INVALID                  = 0x0,
            IMMEDIATE_HALT           = 0x1,
            RETURN_VOID              = 0x2,
            RETURN_VALUE             = 0x3,
            NOP                      = 0x4,
            JUMP                     = 0x5,
            JUMP_COND                = 0x6,
            CHUNK_LEAP               = 0x7,
            CHUNK_LEAP_COND          = 0x8,
            PULSE_CALL_SYNC          = 0x9,
            PULSE_CALL_ASYNC_FIRE    = 0xA,
            CELL_INVOKE              = 0xB,
            LIBRARY_INVOKE           = 0xC,
            SET_VAR                  = 0xD,
            GET_VAR                  = 0xE,
            GET_VAR_DETACH           = 0xF,
            DETACH_REGISTER          = 0x10,
            SET_VAR_ARRAY_ELEMENT_1D = 0x11,
            SET_VAR_OBSERVABLE       = 0x12,
            GET_CONST                = 0x13,
            GET_ARRAY_ELEMENT        = 0x14,
            GET_DOMAIN_VALUE         = 0x15,
            COPY                     = 0x16,
            NOT                      = 0x17,
            NEGATE                   = 0x18,
            ADD                      = 0x19,
            SUB                      = 0x1A,
            MUL                      = 0x1B,
            DIV                      = 0x1C,
            MOD                      = 0x1D,
            LT                       = 0x1E,
            LTE                      = 0x1F,
            EQ                       = 0x20,
            NE                       = 0x21,
            AND                      = 0x22,
            OR                       = 0x23,
            SCALE                    = 0x24,
            SCALE_INV                = 0x25,
            ELEMENT_ACCESS           = 0x26,
            CONVERT_VALUE            = 0x27,
            REINTERPRET_INSTANCE     = 0x28,
            GET_BLACKBOARD_REFERENCE = 0x29,
            SET_BLACKBOARD_REFERENCE = 0x2A,
            LAST_SERIALIZED_CODE     = 0x2B,
            NEGATE_INT               = 0x2C,
            NEGATE_FLOAT             = 0x2D,
            NEGATE_VEC2              = 0x2E,
            NEGATE_VEC3              = 0x2F,
            NEGATE_VEC4              = 0x30,
            ADD_INT                  = 0x31,
            ADD_FLOAT                = 0x32,
            ADD_STRING               = 0x33,
            ADD_VEC2                 = 0x34,
            ADD_VEC3                 = 0x35,
            ADD_VEC3WS_VEC3          = 0x36,
            ADD_VEC3_VEC3WS          = 0x37,
            ADD_VEC4                 = 0x38,
            ADD_GAMETIME_FLOAT       = 0x39,
            ADD_FLOAT_GAMETIME       = 0x3A,
            SUB_INT                  = 0x3B,
            SUB_FLOAT                = 0x3C,
            SUB_VEC2                 = 0x3D,
            SUB_VEC3                 = 0x3E,
            SUB_VEC3WS_VEC3          = 0x3F,
            SUB_VEC3WS_VEC3WS        = 0x40,
            SUB_VEC4                 = 0x41,
            SUB_GAMETIME_FLOAT       = 0x42,
            SUB_GAMETIME             = 0x43,
            MUL_INT                  = 0x44,
            MUL_FLOAT                = 0x45,
            DIV_FLOAT                = 0x46,
            MOD_INT                  = 0x47,
            MOD_FLOAT                = 0x48,
            LT_INT                   = 0x49,
            LT_FLOAT                 = 0x4A,
            LT_GAMETIME              = 0x4B,
            LTE_INT                  = 0x4C,
            LTE_FLOAT                = 0x4D,
            LTE_GAMETIME             = 0x4E,
            EQ_BOOL                  = 0x4F,
            EQ_INT                   = 0x50,
            EQ_FLOAT                 = 0x51,
            EQ_VEC2                  = 0x52,
            EQ_VEC3                  = 0x53,
            EQ_VEC3WS                = 0x54,
            EQ_VEC4                  = 0x55,
            EQ_STRING                = 0x56,
            EQ_ENTITY_NAME           = 0x57,
            EQ_SCHEMA_ENUM           = 0x58,
            EQ_EHANDLE               = 0x59,
            EQ_PANEL_HANDLE          = 0x5A,
            EQ_OPAQUE_HANDLE         = 0x5B,
            EQ_TEST_HANDLE           = 0x5C,
            EQ_COLOR_RGB             = 0x5D,
            EQ_ARRAY                 = 0x5E,
            EQ_GAMETIME              = 0x5F,
            NE_BOOL                  = 0x60,
            NE_INT                   = 0x61,
            NE_FLOAT                 = 0x62,
            NE_VEC2                  = 0x63,
            NE_VEC3                  = 0x64,
            NE_VEC3WS                = 0x65,
            NE_VEC4                  = 0x66,
            NE_STRING                = 0x67,
            NE_ENTITY_NAME           = 0x68,
            NE_SCHEMA_ENUM           = 0x69,
            NE_EHANDLE               = 0x6A,
            NE_PANEL_HANDLE          = 0x6B,
            NE_OPAQUE_HANDLE         = 0x6C,
            NE_TEST_HANDLE           = 0x6D,
            NE_COLOR_RGB             = 0x6E,
            NE_ARRAY                 = 0x6F,
            NE_GAMETIME              = 0x70,
            SCALE_VEC3               = 0x71,
            SCALE_VEC2               = 0x72,
            SCALE_VEC4               = 0x73,
            SCALE_INV_VEC3           = 0x74,
            SCALE_INV_VEC2           = 0x75,
            SCALE_INV_VEC4           = 0x76,
            ELEMENT_ACCESS_VEC2      = 0x77,
            ELEMENT_ACCESS_VEC3      = 0x78,
            ELEMENT_ACCESS_VEC3WS    = 0x79,
            ELEMENT_ACCESS_VEC4      = 0x7A,
            ELEMENT_ACCESS_COLOR_RGB = 0x7B,
            GET_CONST_INLINE_STORAGE = 0x7C
        };

        enum class ParticleTransformType_t : std::uint32_t {
            PT_TYPE_INVALID             = 0x0,
            PT_TYPE_NAMED_VALUE         = 0x1,
            PT_TYPE_CONTROL_POINT       = 0x2,
            PT_TYPE_CONTROL_POINT_RANGE = 0x3,
            PT_TYPE_COUNT               = 0x4
        };

        // Global Type Scope
        enum class ParticleAttachment_t : std::uint32_t {
            PATTACH_INVALID             = 0xFFFFFFFF,
            PATTACH_ABSORIGIN           = 0x0,
            PATTACH_ABSORIGIN_FOLLOW    = 0x1,
            PATTACH_CUSTOMORIGIN        = 0x2,
            PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
            PATTACH_POINT               = 0x4,
            PATTACH_POINT_FOLLOW        = 0x5,
            PATTACH_EYES_FOLLOW         = 0x6,
            PATTACH_OVERHEAD_FOLLOW     = 0x7,
            PATTACH_WORLDORIGIN         = 0x8,
            PATTACH_ROOTBONE_FOLLOW     = 0x9,
            PATTACH_RENDERORIGIN_FOLLOW = 0xA,
            PATTACH_MAIN_VIEW           = 0xB,
            PATTACH_WATERWAKE           = 0xC,
            PATTACH_CENTER_FOLLOW       = 0xD,
            PATTACH_CUSTOM_GAME_STATE_1 = 0xE,
            PATTACH_HEALTHBAR           = 0xF,
            MAX_PATTACH_TYPES           = 0x10
        };

        enum class FieldNetworkOption : std::uint32_t {
            Auto         = 0x0,
            ForceEnable  = 0x1,
            ForceDisable = 0x2
        };

        enum class NmGraphEventTypeCondition_t : std::uint8_t {
            Entry        = 0x0,
            FullyInState = 0x1,
            Exit         = 0x2,
            Timed        = 0x3,
            Generic      = 0x4,
            Any          = 0x5
        };

        enum class CNmTransitionNode__TransitionOptions_t : std::uint8_t {
            None                     = 0x0,
            ClampDuration            = 0x1,
            Synchronized             = 0x2,
            MatchSourceTime          = 0x3,
            MatchSyncEventIndex      = 0x4,
            MatchSyncEventID         = 0x5,
            MatchSyncEventPercentage = 0x6,
            PreferClosestSyncEventID = 0x7,
            MatchTimeInSeconds       = 0x8,
            OffsetTimeInSeconds      = 0x9
        };

        enum class CNmFloatComparisonNode__Comparison_t : std::uint8_t {
            GreaterThanEqual = 0x0,
            LessThanEqual    = 0x1,
            NearEqual        = 0x2,
            GreaterThan      = 0x3,
            LessThan         = 0x4
        };

        enum class VPhysXJoint_t__Flags_t : std::uint32_t {
            JOINT_FLAGS_NONE             = 0x0,
            JOINT_FLAGS_BODY1_FIXED      = 0x1,
            JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2
        };

        enum class ScriptedHeldWeaponBehavior_t : std::uint32_t {
            eInvalid = 0xFFFFFFFF,
            eHolster = 0x0,
            eDeploy  = 0x1,
            eDrop    = 0x2
        };

        enum class VelocityMetricMode : std::uint8_t {
            DirectionOnly         = 0x0,
            MagnitudeOnly         = 0x1,
            DirectionAndMagnitude = 0x2
        };

        enum class FacingMode : std::uint8_t {
            FacingMode_Invalid        = 0x0,
            FacingMode_Manual         = 0x1,
            FacingMode_Path           = 0x2,
            FacingMode_LookTarget     = 0x3,
            FacingMode_ManualPosition = 0x4
        };

        enum class VertexAlbedoFormat_t : std::uint8_t {
            VERTEX_ALBEDO_NONE = 0x0,
            VERTEX_ALBEDO_8888 = 0x1,
            VERTEX_ALBEDO_565  = 0x2
        };

        enum class AimMatrixBlendMode : std::uint32_t {
            AimMatrixBlendMode_None               = 0x0,
            AimMatrixBlendMode_Additive           = 0x1,
            AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
            AimMatrixBlendMode_BoneMask           = 0x3
        };

        enum class AnimationSnapshotType_t : std::uint32_t {
            ANIMATION_SNAPSHOT_SERVER_SIMULATION    = 0x0,
            ANIMATION_SNAPSHOT_CLIENT_SIMULATION    = 0x1,
            ANIMATION_SNAPSHOT_CLIENT_PREDICTION    = 0x2,
            ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
            ANIMATION_SNAPSHOT_CLIENT_RENDER        = 0x4,
            ANIMATION_SNAPSHOT_FINAL_COMPOSITE      = 0x5,
            ANIMATION_SNAPSHOT_MAX                  = 0x6
        };

        enum class NmTargetWarpRule_t : std::uint8_t {
            WarpXY       = 0x0,
            WarpZ        = 0x1,
            WarpXYZ      = 0x2,
            RotationOnly = 0x3,
            FixedSection = 0x4
        };

        enum class FootFallTagFoot_t : std::uint32_t {
            FOOT1 = 0x0,
            FOOT2 = 0x1,
            FOOT3 = 0x2,
            FOOT4 = 0x3,
            FOOT5 = 0x4,
            FOOT6 = 0x5,
            FOOT7 = 0x6,
            FOOT8 = 0x7
        };

        enum class ChoiceMethod : std::uint32_t {
            WeightedRandom         = 0x0,
            WeightedRandomNoRepeat = 0x1,
            Iterate                = 0x2,
            IterateRandom          = 0x3
        };

        enum class AnimVectorSource : std::uint32_t {
            MoveDirection           = 0x0,
            FacingPosition          = 0x1,
            LookDirection           = 0x2,
            VectorParameter         = 0x3,
            WayPointDirection       = 0x4,
            Acceleration            = 0x5,
            SlopeNormal             = 0x6,
            SlopeNormal_WorldSpace  = 0x7,
            LookTarget              = 0x8,
            LookTarget_WorldSpace   = 0x9,
            WayPointPosition        = 0xA,
            GoalPosition            = 0xB,
            RootMotionVelocity      = 0xC,
            ManualTarget_WorldSpace = 0xD
        };

        enum class IkTargetType : std::uint32_t {
            IkTarget_Attachment           = 0x0,
            IkTarget_Bone                 = 0x1,
            IkTarget_Parameter_ModelSpace = 0x2,
            IkTarget_Parameter_WorldSpace = 0x3
        };

        enum class RenderMeshSlotType_t : std::uint8_t {
            RENDERMESH_SLOT_INVALID      = 0xFF,
            RENDERMESH_SLOT_PER_VERTEX   = 0x0,
            RENDERMESH_SLOT_PER_INSTANCE = 0x1
        };

        enum class BoneMaskBlendSpace : std::uint32_t {
            BlendSpace_Parent                = 0x0,
            BlendSpace_Model                 = 0x1,
            BlendSpace_Model_RotationOnly    = 0x2,
            BlendSpace_Model_TranslationOnly = 0x3
        };

        enum class MovementCapability_t : std::uint32_t {
            eStrafe      = 0x0,
            eIdleTurn    = 0x1,
            eStart       = 0x2,
            eStop        = 0x3,
            eInstantStop = 0x4,
            eShuffle     = 0x5,
            ePlantedTurn = 0x6,
            eCount       = 0x7
        };

        enum class ModelConfigAttachmentType_t : std::uint32_t {
            MODEL_CONFIG_ATTACHMENT_INVALID            = 0xFFFFFFFF,
            MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
            MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE      = 0x1,
            MODEL_CONFIG_ATTACHMENT_BONEMERGE          = 0x2,
            MODEL_CONFIG_ATTACHMENT_COUNT              = 0x3
        };

        enum class BinaryNodeChildOption : std::uint32_t {
            Child1 = 0x0,
            Child2 = 0x1
        };

        enum class NPCPhysicsHullType_t : std::uint32_t {
            eInvalid         = 0x0,
            eGroundCapsule   = 0x1,
            eCenteredCapsule = 0x2,
            eGenericCapsule  = 0x3,
            eGroundBox       = 0x4
        };

        enum class PulseDomainValueType_t : std::uint32_t {
            INVALID     = 0xFFFFFFFF,
            ENTITY_NAME = 0x0,
            PANEL_ID    = 0x1,
            COUNT       = 0x2
        };

        enum class JumpCorrectionMethod : std::uint32_t {
            ScaleMotion        = 0x0,
            AddCorrectionDelta = 0x1
        };

        enum class MoodType_t : std::uint32_t {
            eMoodType_Head = 0x0,
            eMoodType_Body = 0x1
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Base {
        public:
            static constexpr std::uintptr_t m_nEditorNodeID = 0X0008; // PulseDocNodeID_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseFlow : public CPulseCell_Base {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_nCursorsAllowedToWait = 0X0048; // int32
            static constexpr std::uintptr_t m_WaitComplete          = 0X0050; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase {
        public:
            static constexpr std::uintptr_t m_bTagSelfWhenComplete = 0X0098; // bool
            static constexpr std::uintptr_t m_nDesiredKillPriority = 0X009C; // PulseCursorCancelPriority_t
        };

        // Local Type Scope
        class CPulse_OutflowConnection {
        public:
            static constexpr std::uintptr_t m_SourceOutflowName  = 0X0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_nDestChunk         = 0X0010; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nInstruction       = 0X0014; // int32
            static constexpr std::uintptr_t m_OutflowRegisterMap = 0X0018; // PulseRegisterMap_t
        };

        // Local Type Scope
        class CPulse_ResumePoint : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_PickBestOutflowSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_nCheckType  = 0X0048; // PulseBestOutflowRules_t
            static constexpr std::uintptr_t m_OutflowList = 0X0050; // PulseSelectorOutflowList_t
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CParticleCollectionBindingInstance : public CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CParticleBindingRealPulse : public CParticleCollectionBindingInstance {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_WaitForObservable : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Condition = 0X0048; // PulseObservableBoolExpression_t
            static constexpr std::uintptr_t m_OnTrue    = 0X00C0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseGraphDef {
        public:
            static constexpr std::uintptr_t m_DomainIdentifier     = 0X0008; // PulseSymbol_t
            static constexpr std::uintptr_t m_DomainSubType        = 0X0018; // CPulseValueFullType
            static constexpr std::uintptr_t m_ParentMapName        = 0X0030; // PulseSymbol_t
            static constexpr std::uintptr_t m_ParentXmlName        = 0X0040; // PulseSymbol_t
            static constexpr std::uintptr_t m_Chunks               = 0X0050; // CUtlVector<CPulse_Chunk*>
            static constexpr std::uintptr_t m_Cells                = 0X0068; // CUtlVector<CPulseCell_Base*>
            static constexpr std::uintptr_t m_Vars                 = 0X0080; // CUtlVector<CPulse_Variable>
            static constexpr std::uintptr_t m_PublicOutputs        = 0X0098; // CUtlVector<CPulse_PublicOutput>
            static constexpr std::uintptr_t m_InvokeBindings       = 0X00B0; // CUtlVector<CPulse_InvokeBinding*>
            static constexpr std::uintptr_t m_CallInfos            = 0X00C8; // CUtlVector<CPulse_CallInfo*>
            static constexpr std::uintptr_t m_Constants            = 0X00E0; // CUtlVector<CPulse_Constant>
            static constexpr std::uintptr_t m_DomainValues         = 0X00F8; // CUtlVector<CPulse_DomainValue>
            static constexpr std::uintptr_t m_BlackboardReferences = 0X0110; // CUtlVector<CPulse_BlackboardReference>
            static constexpr std::uintptr_t m_OutputConnections    = 0X0128; // CUtlVector<CPulse_OutputConnection*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_FireCursors : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Outflows              = 0X0048; // CUtlVector<CPulse_OutflowConnection>
            static constexpr std::uintptr_t m_bWaitForChildOutflows = 0X0060; // bool
            static constexpr std::uintptr_t m_OnFinished            = 0X0068; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled            = 0X00B0; // CPulse_ResumePoint
        };

        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Timeline__TimelineEvent_t {
        public:
            static constexpr std::uintptr_t m_flTimeFromPrevious = 0X0000; // float32
            static constexpr std::uintptr_t m_EventOutflow       = 0X0008; // CPulse_OutflowConnection
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_IntervalTimer__CursorState_t {
        public:
            static constexpr std::uintptr_t m_StartTime           = 0X0000; // GameTime_t
            static constexpr std::uintptr_t m_EndTime             = 0X0004; // GameTime_t
            static constexpr std::uintptr_t m_flWaitInterval      = 0X0008; // float32
            static constexpr std::uintptr_t m_flWaitIntervalHigh  = 0X000C; // float32
            static constexpr std::uintptr_t m_bCompleteOnNextWake = 0X0010; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseRequirement : public CPulseCell_Base {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseState : public CPulseCell_BaseYieldingInflow {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        struct OutflowWithRequirements_t {
        public:
            static constexpr std::uintptr_t m_Connection             = 0X0000; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_DestinationFlowNodeID  = 0X0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_RequirementNodeIDs     = 0X0050; // CUtlVector<PulseDocNodeID_t>
            static constexpr std::uintptr_t m_nCursorStateBlockIndex = 0X0068; // CUtlVector<int32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_IsRequirementValid : public CPulseCell_BaseRequirement {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseValue : public CPulseCell_Base {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_Gradient : public CPulseCell_BaseValue {
        public:
            static constexpr std::uintptr_t m_Gradient = 0X0048; // CColorGradient
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseCursorFuncs {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        public:
            static constexpr std::uintptr_t m_OutflowID  = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_Connection = 0X0008; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_EntryChunk  = 0X0048; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_RegisterMap = 0X0050; // PulseRegisterMap_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_HookName = 0X0080; // PulseSymbol_t
        };

        // Local Type Scope
        class SignatureOutflow_Resume : public CPulse_ResumePoint {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        class CPulse_InvokeBinding {
        public:
            static constexpr std::uintptr_t m_RegisterMap     = 0X0000; // PulseRegisterMap_t
            static constexpr std::uintptr_t m_FuncName        = 0X0030; // PulseSymbol_t
            static constexpr std::uintptr_t m_nCellIndex      = 0X0040; // PulseRuntimeCellIndex_t
            static constexpr std::uintptr_t m_nSrcChunk       = 0X0044; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nSrcInstruction = 0X0048; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_IntervalTimer : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Completed  = 0X0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnInterval = 0X0090; // SignatureOutflow_Continue
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestScriptLib {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseLerp : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0X0048; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_Curve : public CPulseCell_BaseValue {
        public:
            static constexpr std::uintptr_t m_Curve = 0X0048; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_EventName = 0X0080; // PulseSymbol_t
        };

        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_Shuffle      = 0X0000; // CUtlVectorFixedGrowable<uint8,8>
            static constexpr std::uintptr_t m_nNextShuffle = 0X0020; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_BaseLerp__CursorState_t {
        public:
            static constexpr std::uintptr_t m_StartTime = 0X0000; // GameTime_t
            static constexpr std::uintptr_t m_EndTime   = 0X0004; // GameTime_t
        };

        // Local Type Scope
        struct CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
        public:
            static constexpr std::uintptr_t m_TagName = 0X0000; // PulseSymbol_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseArraylib {
        public:
        };

        // Local Type Scope
        class SignatureOutflow_Continue : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Timeline : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_TimelineEvents        = 0X0048; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            static constexpr std::uintptr_t m_bWaitForChildOutflows = 0X0060; // bool
            static constexpr std::uintptr_t m_OnFinished            = 0X0068; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled            = 0X00B0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_SourceEntity      = 0X0080; // PulseSymbol_t
            static constexpr std::uintptr_t m_SourceOutput      = 0X0090; // PulseSymbol_t
            static constexpr std::uintptr_t m_ExpectedParamType = 0X00A0; // CPulseValueFullType
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nNextIndex = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_LimitCount__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nCurrentCount = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseNodeDynamicOutflows_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0X0000; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CPulseCell_IsRequirementValid__Criteria_t {
        public:
            static constexpr std::uintptr_t m_bIsValid = 0X0000; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_ObservableVariableListener : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_nBlackboardReference = 0X0080; // PulseRuntimeBlackboardReferenceIndex_t
            static constexpr std::uintptr_t m_bSelfReference       = 0X0082; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0X0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseSelectorOutflowList_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0X0000; // CUtlVector<OutflowWithRequirements_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0X0048; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0X0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_MethodName  = 0X0080; // PulseSymbol_t
            static constexpr std::uintptr_t m_Description = 0X0090; // CUtlString
            static constexpr std::uintptr_t m_bIsPublic   = 0X0098; // bool
            static constexpr std::uintptr_t m_ReturnType  = 0X00A0; // CPulseValueFullType
            static constexpr std::uintptr_t m_Args        = 0X00B8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BooleanSwitchState : public CPulseCell_BaseState {
        public:
            static constexpr std::uintptr_t m_Condition = 0X0048; // PulseObservableBoolExpression_t
            static constexpr std::uintptr_t m_SubGraph  = 0X00C0; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_WhenTrue  = 0X0108; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_WhenFalse = 0X0150; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_UnyieldResume = 0X0048; // CPulse_ResumePoint
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseMathlib {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Unknown : public CPulseCell_Base {
        public:
            static constexpr std::uintptr_t m_UnknownKeys = 0X0048; // KeyValues3
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0X0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_OutputIndex = 0X0048; // PulseRuntimeOutputIndex_t
        };

        // Construct Allowed
        // Local Type Scope
        class CPulse_BlackboardReference {
        public:
            static constexpr std::uintptr_t m_hBlackboardResource = 0X0000; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            static constexpr std::uintptr_t m_BlackboardResource  = 0X0008; // PulseSymbol_t
            static constexpr std::uintptr_t m_nNodeID             = 0X0018; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_NodeName            = 0X0020; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        class CPulse_CallInfo {
        public:
            static constexpr std::uintptr_t m_PortName        = 0X0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_nEditorNodeID   = 0X0010; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_RegisterMap     = 0X0018; // PulseRegisterMap_t
            static constexpr std::uintptr_t m_CallMethodID    = 0X0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_nSrcChunk       = 0X004C; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nSrcInstruction = 0X0050; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_InlineNodeSkipSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_nFlowNodeID = 0X0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_bAnd        = 0X004C; // bool
            static constexpr std::uintptr_t m_PassOutflow = 0X0050; // PulseSelectorOutflowList_t
            static constexpr std::uintptr_t m_FailOutflow = 0X0068; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_LimitCount : public CPulseCell_BaseRequirement {
        public:
            static constexpr std::uintptr_t m_nLimitCount = 0X0048; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_MethodName     = 0X0048; // PulseSymbol_t
            static constexpr std::uintptr_t m_GameBlackboard = 0X0058; // PulseSymbol_t
            static constexpr std::uintptr_t m_ExpectedArgs   = 0X0068; // CUtlLeanVector<CPulseRuntimeMethodArg>
            static constexpr std::uintptr_t m_nAsyncCallMode = 0X0078; // PulseMethodCallMode_t
            static constexpr std::uintptr_t m_OnFinished     = 0X0080; // CPulse_ResumePoint
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseObservableBoolExpression_t {
        public:
            static constexpr std::uintptr_t m_EvaluateConnection                      = 0X0000; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_DependentObservableVars                 = 0X0048; // CUtlVector<PulseRuntimeVarIndex_t>
            static constexpr std::uintptr_t m_DependentObservableBlackboardReferences = 0X0060; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CPulseCell_LimitCount__Criteria_t {
        public:
            static constexpr std::uintptr_t m_bLimitCountPasses = 0X0000; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase {
        public:
            static constexpr std::uintptr_t m_nCursorsAllowedToRunParallel = 0X0098; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_RandomFloat : public CPulseCell_BaseValue {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPulseExecCursor {
        public:
        };

        // Construct Allowed
        class CAnimFrameBlockAnim {
        public:
            static constexpr std::uintptr_t m_nStartFrame       = 0X0000; // int32
            static constexpr std::uintptr_t m_nEndFrame         = 0X0004; // int32
            static constexpr std::uintptr_t m_segmentIndexArray = 0X0008; // CUtlVector<int32>
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_nodePath    = 0X0018; // CAnimNodePath
            static constexpr std::uintptr_t m_networkMode = 0X0048; // AnimNodeNetworkMode
            static constexpr std::uintptr_t m_name        = 0X0050; // CUtlString
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CLeafUpdateNode : public CAnimUpdateNodeBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CZeroPoseUpdateNode : public CLeafUpdateNode {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CUnaryUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_pChildNode = 0X0060; // CAnimUpdateNodeRef
        };

        // Has VTable
        // Construct Allowed
        class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_flSlowDownStrength = 0X0070; // float32
        };

        // Has VTable
        // Construct Allowed
        class COrientationWarpUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_eMode                             = 0X0074; // OrientationWarpMode_t
            static constexpr std::uintptr_t m_hTargetParam                      = 0X0078; // CAnimParamHandle
            static constexpr std::uintptr_t m_hTargetPositionParam              = 0X007A; // CAnimParamHandle
            static constexpr std::uintptr_t m_hFallbackTargetPositionParam      = 0X007C; // CAnimParamHandle
            static constexpr std::uintptr_t m_eTargetOffsetMode                 = 0X0080; // OrientationWarpTargetOffsetMode_t
            static constexpr std::uintptr_t m_flTargetOffset                    = 0X0084; // float32
            static constexpr std::uintptr_t m_hTargetOffsetParam                = 0X0088; // CAnimParamHandle
            static constexpr std::uintptr_t m_damping                           = 0X0090; // CAnimInputDamping
            static constexpr std::uintptr_t m_eRootMotionSource                 = 0X00A8; // OrientationWarpRootMotionSource_t
            static constexpr std::uintptr_t m_flMaxRootMotionScale              = 0X00AC; // float32
            static constexpr std::uintptr_t m_bEnablePreferredRotationDirection = 0X00B0; // bool
            static constexpr std::uintptr_t m_ePreferredRotationDirection       = 0X00B4; // AnimValueSource
            static constexpr std::uintptr_t m_flPreferredRotationThreshold      = 0X00B8; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimParameterBase {
        public:
            static constexpr std::uintptr_t m_name                 = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_sComment             = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_group                = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_id                   = 0X0030; // AnimParamID
            static constexpr std::uintptr_t m_componentName        = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_bNetworkingRequested = 0X0068; // bool
            static constexpr std::uintptr_t m_bIsReferenced        = 0X0069; // bool
        };

        // Has VTable
        // Construct Allowed
        class CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_name          = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_sComment      = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_group         = 0X0028; // CGlobalSymbol
            static constexpr std::uintptr_t m_tagID         = 0X0030; // AnimTagID
            static constexpr std::uintptr_t m_bIsReferenced = 0X0048; // bool
        };

        // Has VTable
        // Construct Allowed
        class CSequenceFinishedAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_sequenceName = 0X0058; // CUtlString
        };

        // Construct Allowed
        class CSceneObjectData {
        public:
            static constexpr std::uintptr_t m_vMinBounds       = 0X0000; // Vector
            static constexpr std::uintptr_t m_vMaxBounds       = 0X000C; // Vector
            static constexpr std::uintptr_t m_drawCalls        = 0X0018; // CUtlLeanVector<CMaterialDrawDescriptor>
            static constexpr std::uintptr_t m_drawBounds       = 0X0028; // CUtlLeanVector<AABB_t>
            static constexpr std::uintptr_t m_meshlets         = 0X0038; // CUtlLeanVector<CMeshletDescriptor>
            static constexpr std::uintptr_t m_rtProxyDrawCalls = 0X0048; // CUtlLeanVector<CSceneObjectData::RTProxyDrawDescriptor_t>
            static constexpr std::uintptr_t m_vTintColor       = 0X0058; // Vector4D
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CCycleBase {
        public:
            static constexpr std::uintptr_t m_flCycle = 0X0000; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CFootCycle : public CCycleBase {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CParticleInput {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CParticleModelInput : public CParticleInput {
        public:
            static constexpr std::uintptr_t m_nType         = 0X0010; // ParticleModelType_t
            static constexpr std::uintptr_t m_NamedValue    = 0X0018; // CParticleNamedValueRef
            static constexpr std::uintptr_t m_nControlPoint = 0X0058; // int32
        };

        // Has VTable
        // Construct Allowed
        class CInputStreamUpdateNode : public CLeafUpdateNode {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CConcreteAnimParameter : public CAnimParameterBase {
        public:
            static constexpr std::uintptr_t m_previewButton       = 0X0070; // AnimParamButton_t
            static constexpr std::uintptr_t m_eNetworkSetting     = 0X0074; // AnimParamNetworkSetting
            static constexpr std::uintptr_t m_bUseMostRecentValue = 0X0078; // bool
            static constexpr std::uintptr_t m_bAutoReset          = 0X0079; // bool
            static constexpr std::uintptr_t m_bGameWritable       = 0X007A; // bool
            static constexpr std::uintptr_t m_bGraphWritable      = 0X007B; // bool
        };

        // Has VTable
        // Construct Allowed
        class CIntAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0X0080; // int32
            static constexpr std::uintptr_t m_minValue     = 0X0084; // int32
            static constexpr std::uintptr_t m_maxValue     = 0X0088; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CNmGraphNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nNodeIdx = 0X0008; // int16
        };

        // Has VTable
        // Is Absract
        class CNmPoseNode__CDefinition : public CNmGraphNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmParameterizedBlendNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_sourceNodeIndices           = 0X0010; // CUtlVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_nInputParameterValueNodeIdx = 0X0038; // int16
            static constexpr std::uintptr_t m_bAllowLooping               = 0X003A; // bool
        };

        // Has VTable
        // Is Absract
        class CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmScaleTask : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CNmEvent {
        public:
            static constexpr std::uintptr_t m_flStartTime = 0X0008; // NmPercent_t
            static constexpr std::uintptr_t m_flDuration  = 0X000C; // NmPercent_t
            static constexpr std::uintptr_t m_syncID      = 0X0010; // CGlobalSymbol
            static constexpr std::uintptr_t m_bClientOnly = 0X0018; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmFrameSnapEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_frameSnapMode = 0X0020; // NmFrameSnapEventMode_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimNodePath {
        public:
            static constexpr std::uintptr_t m_path   = 0X0000; // AnimNodeID[11]
            static constexpr std::uintptr_t m_nCount = 0X002C; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimNodeOutputID {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Construct Allowed
        class CNmSyncTrack {
        public:
            static constexpr std::uintptr_t m_syncEvents        = 0X0000; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t,10>
            static constexpr std::uintptr_t m_nStartEventOffset = 0X00A8; // int32
        };

        // Construct Allowed
        class CSeqBoneMaskList {
        public:
            static constexpr std::uintptr_t m_sName                    = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_nLocalBoneArray          = 0X0010; // CUtlVector<int16>
            static constexpr std::uintptr_t m_flBoneWeightArray        = 0X0028; // CUtlVector<float32>
            static constexpr std::uintptr_t m_flDefaultMorphCtrlWeight = 0X0040; // float32
            static constexpr std::uintptr_t m_morphCtrlWeightArray     = 0X0048; // CUtlVector<std::pair<CBufferString,float32>>
        };

        // Construct Allowed
        class CAnimEncodedFrames {
        public:
            static constexpr std::uintptr_t m_fileName         = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_nFrames          = 0X0010; // int32
            static constexpr std::uintptr_t m_nFramesPerBlock  = 0X0014; // int32
            static constexpr std::uintptr_t m_frameblockArray  = 0X0018; // CUtlVector<CAnimFrameBlockAnim>
            static constexpr std::uintptr_t m_usageDifferences = 0X0030; // CAnimEncodeDifference
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class SampleCode {
        public:
            static constexpr std::uintptr_t m_subCode = 0X0000; // uint8[8]
        };

        // Has VTable
        // Construct Allowed
        class CCachedPose {
        public:
            static constexpr std::uintptr_t m_transforms   = 0X0008; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_morphWeights = 0X0020; // CUtlVector<float32>
            static constexpr std::uintptr_t m_hSequence    = 0X0038; // HSequence
            static constexpr std::uintptr_t m_flCycle      = 0X003C; // float32
        };

        // Has VTable
        // Is Absract
        class CNmValueNode__CDefinition : public CNmGraphNode__CDefinition {
        public:
        };

        // Has VTable
        // Is Absract
        class CNmBoolValueNode__CDefinition : public CNmValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmTransitionEventConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_requireRuleID       = 0X0010; // CGlobalSymbol
            static constexpr std::uintptr_t m_eventConditionRules = 0X0018; // CNmBitFlags
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X001C; // int16
            static constexpr std::uintptr_t m_ruleCondition       = 0X001E; // NmTransitionRuleCondition_t
        };

        // Has VTable
        // Construct Allowed
        class CTaskStatusAnimTag : public CAnimTagBase {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CMotionGraphConfig {
        public:
            static constexpr std::uintptr_t m_paramValues  = 0X0000; // float32[4]
            static constexpr std::uintptr_t m_flDuration   = 0X0010; // float32
            static constexpr std::uintptr_t m_nMotionIndex = 0X0014; // MotionIndex
            static constexpr std::uintptr_t m_nSampleStart = 0X0018; // int32
            static constexpr std::uintptr_t m_nSampleCount = 0X001C; // int32
        };

        // Construct Allowed
        class CMotionSearchNode {
        public:
            static constexpr std::uintptr_t m_children          = 0X0000; // CUtlVector<CMotionSearchNode*>
            static constexpr std::uintptr_t m_quantizer         = 0X0018; // CVectorQuantizer
            static constexpr std::uintptr_t m_sampleCodes       = 0X0038; // CUtlVector<CUtlVector<SampleCode>>
            static constexpr std::uintptr_t m_sampleIndices     = 0X0050; // CUtlVector<CUtlVector<int32>>
            static constexpr std::uintptr_t m_selectableSamples = 0X0068; // CUtlVector<int32>
        };

        // Construct Allowed
        class CAnimActivity {
        public:
            static constexpr std::uintptr_t m_name      = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_nActivity = 0X0010; // int32
            static constexpr std::uintptr_t m_nFlags    = 0X0014; // int32
            static constexpr std::uintptr_t m_nWeight   = 0X0018; // int32
        };

        // Has VTable
        // Construct Allowed
        class CAnimScriptManager {
        public:
            static constexpr std::uintptr_t m_scriptInfo = 0X0010; // CUtlVector<ScriptInfo_t>
        };

        // Construct Allowed
        struct AnimationDecodeDebugDumpElement_t {
        public:
            static constexpr std::uintptr_t m_nEntityIndex = 0X0000; // int32
            static constexpr std::uintptr_t m_modelName    = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_poseParams   = 0X0010; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_decodeOps    = 0X0028; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_internalOps  = 0X0040; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_decodedAnims = 0X0058; // CUtlVector<CUtlString>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct MovementGaitId_t {
        public:
            static constexpr std::uintptr_t m_sId = 0X0000; // CGlobalSymbol
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeVarIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class ConfigIndex {
        public:
            static constexpr std::uintptr_t m_nGroup  = 0X0000; // uint16
            static constexpr std::uintptr_t m_nConfig = 0X0002; // uint16
        };

        // Construct Allowed
        struct VPhysXCollisionAttributes_t {
        public:
            static constexpr std::uintptr_t m_nIncludeDetailLayerCount = 0X0000; // int32
            static constexpr std::uintptr_t m_CollisionGroup           = 0X0004; // uint32
            static constexpr std::uintptr_t m_InteractAs               = 0X0008; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_InteractWith             = 0X0020; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_InteractExclude          = 0X0038; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_DetailLayers             = 0X0050; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_CollisionGroupString     = 0X0068; // CUtlString
            static constexpr std::uintptr_t m_InteractAsStrings        = 0X0070; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_InteractWithStrings      = 0X0088; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_InteractExcludeStrings   = 0X00A0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_DetailLayerStrings       = 0X00B8; // CUtlVector<CUtlString>
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CSequenceUpdateNodeBase : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_playbackSpeed = 0X006C; // float32
            static constexpr std::uintptr_t m_bLoop         = 0X0070; // bool
        };

        // Has VTable
        // Construct Allowed
        class CSequenceUpdateNode : public CSequenceUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_hSequence  = 0X0078; // HSequence
            static constexpr std::uintptr_t m_duration   = 0X007C; // float32
            static constexpr std::uintptr_t m_paramSpans = 0X0080; // CParamSpanUpdater
            static constexpr std::uintptr_t m_tags       = 0X0098; // CUtlVector<TagSpan_t>
        };

        // Has VTable
        // Construct Allowed
        class CNmPassthroughNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CNmClipReferenceNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmGraphDefinition__ExternalGraphSlot_t {
        public:
            static constexpr std::uintptr_t m_nNodeIdx = 0X0000; // int16
            static constexpr std::uintptr_t m_slotID   = 0X0008; // CGlobalSymbol
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeEntrypointIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        class CAimCameraUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_hParameterPosition                    = 0X0070; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterOrientation                 = 0X0072; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterPelvisOffset                = 0X0074; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterCameraOnly                  = 0X0076; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterWeaponDepenetrationDistance = 0X0078; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterWeaponDepenetrationDelta    = 0X007A; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterCameraClearanceDistance     = 0X007C; // CAnimParamHandle
            static constexpr std::uintptr_t m_opFixedSettings                       = 0X0080; // AimCameraOpFixedSettings_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeDomainValueIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int16
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqSeqDescFlag {
        public:
            static constexpr std::uintptr_t m_bLooping          = 0X0000; // bool
            static constexpr std::uintptr_t m_bSnap             = 0X0001; // bool
            static constexpr std::uintptr_t m_bAutoplay         = 0X0002; // bool
            static constexpr std::uintptr_t m_bPost             = 0X0003; // bool
            static constexpr std::uintptr_t m_bHidden           = 0X0004; // bool
            static constexpr std::uintptr_t m_bMulti            = 0X0005; // bool
            static constexpr std::uintptr_t m_bLegacyDelta      = 0X0006; // bool
            static constexpr std::uintptr_t m_bLegacyWorldspace = 0X0007; // bool
            static constexpr std::uintptr_t m_bLegacyCyclepose  = 0X0008; // bool
            static constexpr std::uintptr_t m_bLegacyRealtime   = 0X0009; // bool
            static constexpr std::uintptr_t m_bModelDoc         = 0X000A; // bool
        };

        // Construct Allowed
        struct PermModelInfo_t {
        public:
            static constexpr std::uintptr_t m_nFlags             = 0X0000; // uint32
            static constexpr std::uintptr_t m_vHullMin           = 0X0004; // Vector
            static constexpr std::uintptr_t m_vHullMax           = 0X0010; // Vector
            static constexpr std::uintptr_t m_vViewMin           = 0X001C; // Vector
            static constexpr std::uintptr_t m_vViewMax           = 0X0028; // Vector
            static constexpr std::uintptr_t m_flMass             = 0X0034; // float32
            static constexpr std::uintptr_t m_vEyePosition       = 0X0038; // Vector
            static constexpr std::uintptr_t m_flMaxEyeDeflection = 0X0044; // float32
            static constexpr std::uintptr_t m_sSurfaceProperty   = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_keyValueText       = 0X0050; // CUtlString
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct StanceInfo_t {
        public:
            static constexpr std::uintptr_t m_vPosition   = 0X0000; // Vector
            static constexpr std::uintptr_t m_flDirection = 0X000C; // float32
        };

        struct IKBoneNameAndIndex_t {
        public:
            static constexpr std::uintptr_t m_Name = 0X0000; // CUtlString
        };

        // Construct Allowed
        class CPulse_Chunk {
        public:
            static constexpr std::uintptr_t m_Instructions          = 0X0000; // CUtlLeanVector<PGDInstruction_t>
            static constexpr std::uintptr_t m_Registers             = 0X0010; // CUtlLeanVector<CPulse_RegisterInfo>
            static constexpr std::uintptr_t m_InstructionDebugInfos = 0X0020; // CUtlLeanVector<CPulse_InstructionDebug>
        };

        // Has VTable
        // Construct Allowed
        class CStanceScaleUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_hParam = 0X0070; // CAnimParamHandle
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeInvokeIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Is Absract
        class CNmBoneMaskValueNode__CDefinition : public CNmValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmBoneMaskBlendNode__CDefinition : public CNmBoneMaskValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceMaskNodeIdx       = 0X0010; // int16
            static constexpr std::uintptr_t m_nTargetMaskNodeIdx       = 0X0012; // int16
            static constexpr std::uintptr_t m_nBlendWeightValueNodeIdx = 0X0014; // int16
        };

        // Has VTable
        // Is Absract
        class CNmIDValueNode__CDefinition : public CNmValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmIDEventNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
            static constexpr std::uintptr_t m_defaultValue        = 0X0018; // CGlobalSymbol
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct HitReactFixedSettings_t {
        public:
            static constexpr std::uintptr_t m_nWeightListIndex          = 0X0000; // int32
            static constexpr std::uintptr_t m_nEffectedBoneCount        = 0X0004; // int32
            static constexpr std::uintptr_t m_flMaxImpactForce          = 0X0008; // float32
            static constexpr std::uintptr_t m_flMinImpactForce          = 0X000C; // float32
            static constexpr std::uintptr_t m_flWhipImpactScale         = 0X0010; // float32
            static constexpr std::uintptr_t m_flCounterRotationScale    = 0X0014; // float32
            static constexpr std::uintptr_t m_flDistanceFadeScale       = 0X0018; // float32
            static constexpr std::uintptr_t m_flPropagationScale        = 0X001C; // float32
            static constexpr std::uintptr_t m_flWhipDelay               = 0X0020; // float32
            static constexpr std::uintptr_t m_flSpringStrength          = 0X0024; // float32
            static constexpr std::uintptr_t m_flWhipSpringStrength      = 0X0028; // float32
            static constexpr std::uintptr_t m_flMaxAngleRadians         = 0X002C; // float32
            static constexpr std::uintptr_t m_nHipBoneIndex             = 0X0030; // int32
            static constexpr std::uintptr_t m_flHipBoneTranslationScale = 0X0034; // float32
            static constexpr std::uintptr_t m_flHipDipSpringStrength    = 0X0038; // float32
            static constexpr std::uintptr_t m_flHipDipImpactScale       = 0X003C; // float32
            static constexpr std::uintptr_t m_flHipDipDelay             = 0X0040; // float32
        };

        // Has VTable
        // Construct Allowed
        class CParticleVecInput : public CParticleInput {
        public:
            static constexpr std::uintptr_t m_nType                 = 0X0010; // ParticleVecType_t
            static constexpr std::uintptr_t m_vLiteralValue         = 0X0014; // Vector
            static constexpr std::uintptr_t m_LiteralColor          = 0X0020; // Color
            static constexpr std::uintptr_t m_NamedValue            = 0X0028; // CParticleNamedValueRef
            static constexpr std::uintptr_t m_bFollowNamedValue     = 0X0068; // bool
            static constexpr std::uintptr_t m_nVectorAttribute      = 0X006C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vVectorAttributeScale = 0X0070; // Vector
            static constexpr std::uintptr_t m_nControlPoint         = 0X007C; // int32
            static constexpr std::uintptr_t m_nDeltaControlPoint    = 0X0080; // int32
            static constexpr std::uintptr_t m_vCPValueScale         = 0X0084; // Vector
            static constexpr std::uintptr_t m_vCPRelativePosition   = 0X0090; // Vector
            static constexpr std::uintptr_t m_vCPRelativeDir        = 0X009C; // Vector
            static constexpr std::uintptr_t m_FloatComponentX       = 0X00A8; // CParticleFloatInput
            static constexpr std::uintptr_t m_FloatComponentY       = 0X0218; // CParticleFloatInput
            static constexpr std::uintptr_t m_FloatComponentZ       = 0X0388; // CParticleFloatInput
            static constexpr std::uintptr_t m_FloatInterp           = 0X04F8; // CParticleFloatInput
            static constexpr std::uintptr_t m_flInterpInput0        = 0X0668; // float32
            static constexpr std::uintptr_t m_flInterpInput1        = 0X066C; // float32
            static constexpr std::uintptr_t m_vInterpOutput0        = 0X0670; // Vector
            static constexpr std::uintptr_t m_vInterpOutput1        = 0X067C; // Vector
            static constexpr std::uintptr_t m_Gradient              = 0X0688; // CColorGradient
            static constexpr std::uintptr_t m_vRandomMin            = 0X06A0; // Vector
            static constexpr std::uintptr_t m_vRandomMax            = 0X06AC; // Vector
        };

        // Has VTable
        // Construct Allowed
        class CPerParticleVecInput : public CParticleVecInput {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CMotionGraph {
        public:
            static constexpr std::uintptr_t m_paramSpans        = 0X0010; // CParamSpanUpdater
            static constexpr std::uintptr_t m_tags              = 0X0028; // CUtlVector<TagSpan_t>
            static constexpr std::uintptr_t m_pRootNode         = 0X0040; // CSmartPtr<CMotionNode>
            static constexpr std::uintptr_t m_nParameterCount   = 0X0048; // int32
            static constexpr std::uintptr_t m_nConfigStartIndex = 0X004C; // int32
            static constexpr std::uintptr_t m_nConfigCount      = 0X0050; // int32
            static constexpr std::uintptr_t m_bLoop             = 0X0054; // bool
        };

        // Has VTable
        // Is Absract
        class CNmFloatValueNode__CDefinition : public CNmValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmVectorInfoNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_desiredInfo        = 0X0012; // CNmVectorInfoNode::Info_t
        };

        // Construct Allowed
        struct AnimationSnapshotBase_t {
        public:
            static constexpr std::uintptr_t m_flRealTime         = 0X0000; // float32
            static constexpr std::uintptr_t m_rootToWorld        = 0X0010; // matrix3x4a_t
            static constexpr std::uintptr_t m_bBonesInWorldSpace = 0X0040; // bool
            static constexpr std::uintptr_t m_boneSetupMask      = 0X0048; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_boneTransforms     = 0X0060; // CUtlVector<matrix3x4a_t>
            static constexpr std::uintptr_t m_flexControllers    = 0X0078; // CUtlVector<float32>
            static constexpr std::uintptr_t m_SnapshotType       = 0X0090; // AnimationSnapshotType_t
            static constexpr std::uintptr_t m_bHasDecodeDump     = 0X0094; // bool
            static constexpr std::uintptr_t m_DecodeDump         = 0X0098; // AnimationDecodeDebugDumpElement_t
        };

        // Construct Allowed
        struct AnimationSnapshot_t : public AnimationSnapshotBase_t {
        public:
            static constexpr std::uintptr_t m_nEntIndex = 0X0110; // int32
            static constexpr std::uintptr_t m_modelName = 0X0118; // CUtlString
        };

        // Has VTable
        // Is Absract
        class CNmBlendTaskBase : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmBlendTask : public CNmBlendTaskBase {
        public:
        };

        // Has VTable
        // Is Absract
        class CNmVectorValueNode__CDefinition : public CNmValueNode__CDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqTransition {
        public:
            static constexpr std::uintptr_t m_flFadeInTime  = 0X0000; // float32
            static constexpr std::uintptr_t m_flFadeOutTime = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CAnimGraphSettingsGroup {
        public:
        };

        // Has VTable
        // Is Absract
        class CNmTargetValueNode__CDefinition : public CNmValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmVirtualParameterTargetNode__CDefinition : public CNmTargetValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Construct Allowed
        class CAnimGraphDebugReplay {
        public:
            static constexpr std::uintptr_t m_animGraphFileName = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_frameList         = 0X0048; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
            static constexpr std::uintptr_t m_startIndex        = 0X0060; // int32
            static constexpr std::uintptr_t m_writeIndex        = 0X0064; // int32
            static constexpr std::uintptr_t m_frameCount        = 0X0068; // int32
        };

        // Has VTable
        // Construct Allowed
        class CVectorAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0X0080; // Vector
            static constexpr std::uintptr_t m_bInterpolate = 0X008C; // bool
            static constexpr std::uintptr_t m_vectorType   = 0X0090; // AnimParamVectorType_t
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedPoseReadTask : public CNmPoseTask {
        public:
        };

        // Construct Allowed
        struct CNmStateMachineNode__StateDefinition_t {
        public:
            static constexpr std::uintptr_t m_nStateNodeIdx          = 0X0000; // int16
            static constexpr std::uintptr_t m_nEntryConditionNodeIdx = 0X0002; // int16
            static constexpr std::uintptr_t m_transitionDefinitions  = 0X0008; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::TransitionDefinition_t,5>
        };

        // Has VTable
        // Construct Allowed
        class CStanceOverrideUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_footStanceInfo    = 0X0070; // CUtlVector<StanceInfo_t>
            static constexpr std::uintptr_t m_pStanceSourceNode = 0X0088; // CAnimUpdateNodeRef
            static constexpr std::uintptr_t m_hParameter        = 0X0098; // CAnimParamHandle
            static constexpr std::uintptr_t m_eMode             = 0X009C; // StanceOverrideMode
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmGraphDefinition__ExternalPoseSlot_t {
        public:
            static constexpr std::uintptr_t m_nNodeIdx = 0X0000; // int16
            static constexpr std::uintptr_t m_slotID   = 0X0008; // CGlobalSymbol
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PhysShapeMarkup_t {
        public:
            static constexpr std::uintptr_t m_nBodyInAggregate = 0X0000; // int32
            static constexpr std::uintptr_t m_nShapeInBody     = 0X0004; // int32
            static constexpr std::uintptr_t m_sHitGroup        = 0X0008; // CGlobalSymbol
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct LookAtBone_t {
        public:
            static constexpr std::uintptr_t m_index  = 0X0000; // int32
            static constexpr std::uintptr_t m_weight = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmTransitionNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nTargetStateNodeIdx           = 0X0010; // int16
            static constexpr std::uintptr_t m_nDurationOverrideNodeIdx      = 0X0012; // int16
            static constexpr std::uintptr_t m_timeOffsetOverrideNodeIdx     = 0X0014; // int16
            static constexpr std::uintptr_t m_startBoneMaskNodeIdx          = 0X0016; // int16
            static constexpr std::uintptr_t m_flDuration                    = 0X0018; // float32
            static constexpr std::uintptr_t m_boneMaskBlendInTimePercentage = 0X001C; // NmPercent_t
            static constexpr std::uintptr_t m_flTimeOffset                  = 0X0020; // float32
            static constexpr std::uintptr_t m_transitionOptions             = 0X0024; // CNmBitFlags
            static constexpr std::uintptr_t m_targetSyncIDNodeIdx           = 0X0028; // int16
            static constexpr std::uintptr_t m_blendWeightEasing             = 0X002A; // NmEasingOperation_t
            static constexpr std::uintptr_t m_rootMotionBlend               = 0X002B; // NmRootMotionBlendMode_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeRegisterIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int16
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatEaseNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_flEaseTime         = 0X0010; // float32
            static constexpr std::uintptr_t m_flStartValue       = 0X0014; // float32
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0018; // int16
            static constexpr std::uintptr_t m_easingOp           = 0X001A; // NmEasingOperation_t
            static constexpr std::uintptr_t m_bUseStartValue     = 0X001B; // bool
        };

        // Construct Allowed
        class CAnimEncodeDifference {
        public:
            static constexpr std::uintptr_t m_boneArray            = 0X0000; // CUtlVector<CAnimBoneDifference>
            static constexpr std::uintptr_t m_morphArray           = 0X0018; // CUtlVector<CAnimMorphDifference>
            static constexpr std::uintptr_t m_userArray            = 0X0030; // CUtlVector<CAnimUserDifference>
            static constexpr std::uintptr_t m_bHasRotationBitArray = 0X0048; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_bHasMovementBitArray = 0X0060; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_bHasMorphBitArray    = 0X0078; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_bHasUserBitArray     = 0X0090; // CUtlVector<uint8>
        };

        // Has VTable
        // Construct Allowed
        class CRootUpdateNode : public CUnaryUpdateNode {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmTargetOffsetNode__CDefinition : public CNmTargetValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_bIsBoneSpaceOffset = 0X0012; // bool
            static constexpr std::uintptr_t m_rotationOffset     = 0X0020; // Quaternion
            static constexpr std::uintptr_t m_translationOffset  = 0X0030; // Vector
        };

        // Has VTable
        // Construct Allowed
        class CMotionGraphUpdateNode : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_pMotionGraph = 0X0058; // CSmartPtr<CMotionGraph>
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatAngleMathNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_operation          = 0X0012; // CNmFloatAngleMathNode::Operation_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseCursorID_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimParamHandle {
        public:
            static constexpr std::uintptr_t m_type  = 0X0000; // AnimParamType_t
            static constexpr std::uintptr_t m_index = 0X0001; // uint8
        };

        // Construct Allowed
        class WeightList {
        public:
            static constexpr std::uintptr_t m_name    = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_weights = 0X0008; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class MotionIndex {
        public:
            static constexpr std::uintptr_t m_nGroup  = 0X0000; // uint16
            static constexpr std::uintptr_t m_nMotion = 0X0002; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FollowAttachmentSettings_t {
        public:
            static constexpr std::uintptr_t m_attachment        = 0X0000; // CAnimAttachment
            static constexpr std::uintptr_t m_boneIndex         = 0X0080; // int32
            static constexpr std::uintptr_t m_attachmentHandle  = 0X0084; // AttachmentHandle_t
            static constexpr std::uintptr_t m_bMatchTranslation = 0X0085; // bool
            static constexpr std::uintptr_t m_bMatchRotation    = 0X0086; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmReferencedGraphNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nReferencedGraphIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nFallbackNodeIdx    = 0X0012; // int16
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimNodeID {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CNmClipSelectorNode__CDefinition : public CNmClipReferenceNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_optionNodeIndices    = 0X0010; // CUtlLeanVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_conditionNodeIndices = 0X0028; // CUtlLeanVectorFixedGrowable<int16,5>
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_name          = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_id            = 0X0020; // AnimComponentID
            static constexpr std::uintptr_t m_networkMode   = 0X0024; // AnimNodeNetworkMode
            static constexpr std::uintptr_t m_bStartEnabled = 0X0028; // bool
        };

        // Has VTable
        // Construct Allowed
        class CLookComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_hLookHeading           = 0X0034; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookHeadingNormalized = 0X0036; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookHeadingVelocity   = 0X0038; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookPitch             = 0X003A; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookDistance          = 0X003C; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookDirection         = 0X003E; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookTarget            = 0X0040; // CAnimParamHandle
            static constexpr std::uintptr_t m_hLookTargetWorldSpace  = 0X0042; // CAnimParamHandle
            static constexpr std::uintptr_t m_bNetworkLookTarget     = 0X0044; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmIsExternalPoseSetNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nExternalPoseNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Construct Allowed
        class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup {
        public:
            static constexpr std::uintptr_t m_bNetworkingEnabled = 0X0020; // bool
        };

        // Has VTable
        // Construct Allowed
        class CSingleFrameUpdateNode : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_actions          = 0X0058; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
            static constexpr std::uintptr_t m_hPoseCacheHandle = 0X0070; // CPoseHandle
            static constexpr std::uintptr_t m_hSequence        = 0X0074; // HSequence
            static constexpr std::uintptr_t m_flCycle          = 0X0078; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmChainLookatNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_chainEndBoneID        = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_nLookatTargetNodeIdx  = 0X0020; // int16
            static constexpr std::uintptr_t m_nEnabledNodeIdx       = 0X0022; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds    = 0X0024; // float32
            static constexpr std::uintptr_t m_nChainLength          = 0X0028; // uint8
            static constexpr std::uintptr_t m_bIsTargetInWorldSpace = 0X0029; // bool
            static constexpr std::uintptr_t m_chainForwardDir       = 0X002C; // Vector
        };

        // Has VTable
        // Construct Allowed
        class CNmFollowBoneNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_bone             = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_followTargetBone = 0X0020; // CGlobalSymbol
            static constexpr std::uintptr_t m_nEnabledNodeIdx  = 0X0028; // int16
            static constexpr std::uintptr_t m_mode             = 0X002A; // NmFollowBoneMode_t
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_means                = 0X0018; // CUtlVector<float32>
            static constexpr std::uintptr_t m_standardDeviations   = 0X0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_flWeight             = 0X0048; // float32
            static constexpr std::uintptr_t m_nDimensionStartIndex = 0X004C; // int32
        };

        // Has VTable
        // Construct Allowed
        class CBlockSelectionMetricEvaluator : public CMotionMetricEvaluator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CRemapValueComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_items = 0X0030; // CUtlVector<CRemapValueUpdateItem>
        };

        // Construct Allowed
        class CModelConfigList {
        public:
            static constexpr std::uintptr_t m_bHideMaterialGroupInTools = 0X0000; // bool
            static constexpr std::uintptr_t m_bHideRenderColorInTools   = 0X0001; // bool
            static constexpr std::uintptr_t m_Configs                   = 0X0008; // CUtlVector<CModelConfig*>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqAutoLayerFlag {
        public:
            static constexpr std::uintptr_t m_bPost       = 0X0000; // bool
            static constexpr std::uintptr_t m_bSpline     = 0X0001; // bool
            static constexpr std::uintptr_t m_bXFade      = 0X0002; // bool
            static constexpr std::uintptr_t m_bNoBlend    = 0X0003; // bool
            static constexpr std::uintptr_t m_bLocal      = 0X0004; // bool
            static constexpr std::uintptr_t m_bPose       = 0X0005; // bool
            static constexpr std::uintptr_t m_bFetchFrame = 0X0006; // bool
            static constexpr std::uintptr_t m_bSubtract   = 0X0007; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimStateID {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CNmIDEventConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
            static constexpr std::uintptr_t m_eventIDs            = 0X0018; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
        };

        // Construct Allowed
        struct ModelBoneFlexDriver_t {
        public:
            static constexpr std::uintptr_t m_boneName      = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_boneNameToken = 0X0008; // uint32
            static constexpr std::uintptr_t m_controls      = 0X0010; // CUtlVector<ModelBoneFlexDriverControl_t>
        };

        // Construct Allowed
        class CMorphData {
        public:
            static constexpr std::uintptr_t m_name           = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_morphRectDatas = 0X0008; // CUtlVector<CMorphRectData>
        };

        // Has VTable
        // Construct Allowed
        class CFootPinningUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_poseOpFixedData = 0X0078; // FootPinningPoseOpFixedData_t
            static constexpr std::uintptr_t m_eTimingSource   = 0X00A8; // FootPinningTimingSource
            static constexpr std::uintptr_t m_params          = 0X00B0; // CUtlVector<CAnimParamHandle>
            static constexpr std::uintptr_t m_bResetChild     = 0X00C8; // bool
        };

        // Construct Allowed
        class CSeqPoseSetting {
        public:
            static constexpr std::uintptr_t m_sPoseParameter     = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_sAttachment        = 0X0010; // CBufferString
            static constexpr std::uintptr_t m_sReferenceSequence = 0X0020; // CBufferString
            static constexpr std::uintptr_t m_flValue            = 0X0030; // float32
            static constexpr std::uintptr_t m_bX                 = 0X0034; // bool
            static constexpr std::uintptr_t m_bY                 = 0X0035; // bool
            static constexpr std::uintptr_t m_bZ                 = 0X0036; // bool
            static constexpr std::uintptr_t m_eType              = 0X0038; // int32
        };

        // Construct Allowed
        struct PulseGraphExecutionHistoryCursorDesc_t {
        public:
            static constexpr std::uintptr_t vecAncestorCursorIDs = 0X0000; // CUtlVector<PulseCursorID_t>
            static constexpr std::uintptr_t nSpawnNodeID         = 0X0018; // PulseDocNodeID_t
            static constexpr std::uintptr_t nRetiredAtNodeID     = 0X001C; // PulseDocNodeID_t
            static constexpr std::uintptr_t flLastReferenced     = 0X0020; // float32
            static constexpr std::uintptr_t nLastValidEntryIdx   = 0X0024; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmVirtualParameterFloatNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Construct Allowed
        class CAttachment {
        public:
            static constexpr std::uintptr_t m_name                    = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_influenceNames          = 0X0008; // CUtlString[3]
            static constexpr std::uintptr_t m_vInfluenceRotations     = 0X0020; // Quaternion[3]
            static constexpr std::uintptr_t m_vInfluenceOffsets       = 0X0050; // Vector[3]
            static constexpr std::uintptr_t m_influenceWeights        = 0X0074; // float32[3]
            static constexpr std::uintptr_t m_bInfluenceRootTransform = 0X0080; // bool[3]
            static constexpr std::uintptr_t m_nInfluences             = 0X0083; // uint8
            static constexpr std::uintptr_t m_bIgnoreRotation         = 0X0084; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CDrawCullingData {
        public:
            static constexpr std::uintptr_t m_ConeAxis   = 0X0000; // int8[3]
            static constexpr std::uintptr_t m_ConeCutoff = 0X0003; // int8
        };

        // Construct Allowed
        struct VPhysXJoint_t {
        public:
            static constexpr std::uintptr_t m_nType                        = 0X0000; // uint16
            static constexpr std::uintptr_t m_nBody1                       = 0X0002; // uint16
            static constexpr std::uintptr_t m_nBody2                       = 0X0004; // uint16
            static constexpr std::uintptr_t m_nFlags                       = 0X0006; // uint16
            static constexpr std::uintptr_t m_Frame1                       = 0X0010; // CTransform
            static constexpr std::uintptr_t m_Frame2                       = 0X0030; // CTransform
            static constexpr std::uintptr_t m_bEnableCollision             = 0X0050; // bool
            static constexpr std::uintptr_t m_bIsLinearConstraintDisabled  = 0X0051; // bool
            static constexpr std::uintptr_t m_bIsAngularConstraintDisabled = 0X0052; // bool
            static constexpr std::uintptr_t m_bEnableLinearLimit           = 0X0053; // bool
            static constexpr std::uintptr_t m_LinearLimit                  = 0X0054; // VPhysXRange_t
            static constexpr std::uintptr_t m_bEnableLinearMotor           = 0X005C; // bool
            static constexpr std::uintptr_t m_vLinearTargetVelocity        = 0X0060; // Vector
            static constexpr std::uintptr_t m_flMaxForce                   = 0X006C; // float32
            static constexpr std::uintptr_t m_bEnableSwingLimit            = 0X0070; // bool
            static constexpr std::uintptr_t m_SwingLimit                   = 0X0074; // VPhysXRange_t
            static constexpr std::uintptr_t m_bEnableTwistLimit            = 0X007C; // bool
            static constexpr std::uintptr_t m_TwistLimit                   = 0X0080; // VPhysXRange_t
            static constexpr std::uintptr_t m_bEnableAngularMotor          = 0X0088; // bool
            static constexpr std::uintptr_t m_vAngularTargetVelocity       = 0X008C; // Vector
            static constexpr std::uintptr_t m_flMaxTorque                  = 0X0098; // float32
            static constexpr std::uintptr_t m_flLinearFrequency            = 0X009C; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatio         = 0X00A0; // float32
            static constexpr std::uintptr_t m_flAngularFrequency           = 0X00A4; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatio        = 0X00A8; // float32
            static constexpr std::uintptr_t m_flFriction                   = 0X00AC; // float32
            static constexpr std::uintptr_t m_flElasticity                 = 0X00B0; // float32
            static constexpr std::uintptr_t m_flElasticDamping             = 0X00B4; // float32
            static constexpr std::uintptr_t m_flPlasticity                 = 0X00B8; // float32
            static constexpr std::uintptr_t m_Tag                          = 0X00C0; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CStateNodeTransitionData {
        public:
            static constexpr std::uintptr_t m_curve            = 0X0000; // CBlendCurve
            static constexpr std::uintptr_t m_blendDuration    = 0X0008; // CAnimValue<float32>
            static constexpr std::uintptr_t m_resetCycleValue  = 0X0010; // CAnimValue<float32>
            static constexpr std::uintptr_t m_bReset           = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_resetCycleOption = 0X0000; // bitfield:3
        };

        // Has VTable
        // Construct Allowed
        class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_bMatchByTimeRemaining  = 0X0050; // bool
            static constexpr std::uintptr_t m_flMaxTimeRemaining     = 0X0054; // float32
            static constexpr std::uintptr_t m_bFilterByTimeRemaining = 0X0058; // bool
            static constexpr std::uintptr_t m_flMinTimeRemaining     = 0X005C; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_ElementName    = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_NestedElements = 0X0010; // CUtlVector<CModelConfigElement*>
        };

        // Has VTable
        // Construct Allowed
        class CNmControlParameterVectorNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FootFixedSettings {
        public:
            static constexpr std::uintptr_t m_traceSettings               = 0X0000; // TraceSettings_t
            static constexpr std::uintptr_t m_vFootBaseBindPosePositionMS = 0X0010; // VectorAligned
            static constexpr std::uintptr_t m_flFootBaseLength            = 0X0020; // float32
            static constexpr std::uintptr_t m_flMaxRotationLeft           = 0X0024; // float32
            static constexpr std::uintptr_t m_flMaxRotationRight          = 0X0028; // float32
            static constexpr std::uintptr_t m_footstepLandedTagIndex      = 0X002C; // int32
            static constexpr std::uintptr_t m_bEnableTracing              = 0X0030; // bool
            static constexpr std::uintptr_t m_flTraceAngleBlend           = 0X0034; // float32
            static constexpr std::uintptr_t m_nDisableTagIndex            = 0X0038; // int32
            static constexpr std::uintptr_t m_nFootIndex                  = 0X003C; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmBoneMaskSwitchNode__CDefinition : public CNmBoneMaskValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSwitchValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nTrueValueNodeIdx   = 0X0012; // int16
            static constexpr std::uintptr_t m_nFalseValueNodeIdx  = 0X0014; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds  = 0X0018; // float32
            static constexpr std::uintptr_t m_bSwitchDynamically  = 0X001C; // bool
        };

        // Construct Allowed
        class CModelConfig {
        public:
            static constexpr std::uintptr_t m_ConfigName               = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_Elements                 = 0X0008; // CUtlVector<CModelConfigElement*>
            static constexpr std::uintptr_t m_bTopLevel                = 0X0020; // bool
            static constexpr std::uintptr_t m_bActiveInEditorByDefault = 0X0021; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimComponentID {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Construct Allowed
        struct VPhysXAggregateData_t {
        public:
            static constexpr std::uintptr_t m_nFlags                = 0X0000; // uint16
            static constexpr std::uintptr_t m_nRefCounter           = 0X0002; // uint16
            static constexpr std::uintptr_t m_bonesHash             = 0X0008; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_boneNames             = 0X0020; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_indexNames            = 0X0038; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_indexHash             = 0X0050; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_bindPose              = 0X0068; // CUtlVector<matrix3x4a_t>
            static constexpr std::uintptr_t m_parts                 = 0X0080; // CUtlVector<VPhysXBodyPart_t>
            static constexpr std::uintptr_t m_shapeMarkups          = 0X0098; // CUtlVector<PhysShapeMarkup_t>
            static constexpr std::uintptr_t m_constraints2          = 0X00B0; // CUtlVector<VPhysXConstraint2_t>
            static constexpr std::uintptr_t m_joints                = 0X00C8; // CUtlVector<VPhysXJoint_t>
            static constexpr std::uintptr_t m_pFeModel              = 0X00E0; // PhysFeModelDesc_t*
            static constexpr std::uintptr_t m_boneParents           = 0X00E8; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_surfacePropertyHashes = 0X0100; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_collisionAttributes   = 0X0118; // CUtlVector<VPhysXCollisionAttributes_t>
            static constexpr std::uintptr_t m_debugPartNames        = 0X0130; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_embeddedKeyvalues     = 0X0148; // CUtlString
        };

        // Construct Allowed
        class CNmGraphDefinition {
        public:
            static constexpr std::uintptr_t m_variationID                 = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_skeleton                    = 0X0008; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            static constexpr std::uintptr_t m_pUserData                   = 0X0010; // CNmGraphVariationUserData*
            static constexpr std::uintptr_t m_persistentNodeIndices       = 0X0018; // CUtlVector<int16>
            static constexpr std::uintptr_t m_nRootNodeIdx                = 0X0030; // int16
            static constexpr std::uintptr_t m_controlParameterIDs         = 0X0038; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_virtualParameterIDs         = 0X0050; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_virtualParameterNodeIndices = 0X0068; // CUtlVector<int16>
            static constexpr std::uintptr_t m_referencedGraphSlots        = 0X0080; // CUtlVector<CNmGraphDefinition::ReferencedGraphSlot_t>
            static constexpr std::uintptr_t m_externalGraphSlots          = 0X0098; // CUtlVector<CNmGraphDefinition::ExternalGraphSlot_t>
            static constexpr std::uintptr_t m_externalPoseSlots           = 0X00B0; // CUtlVector<CNmGraphDefinition::ExternalPoseSlot_t>
            static constexpr std::uintptr_t m_nodePaths                   = 0X0138; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_resources                   = 0X0150; // CUtlVector<CStrongHandleVoid>
        };

        // Has VTable
        // Construct Allowed
        class CNmSelectorNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_optionNodeIndices    = 0X0010; // CUtlLeanVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_conditionNodeIndices = 0X0028; // CUtlLeanVectorFixedGrowable<int16,5>
        };

        // Construct Allowed
        class CAnimDemoCaptureSettings {
        public:
            static constexpr std::uintptr_t m_vecErrorRangeSplineRotation          = 0X0000; // Vector2D
            static constexpr std::uintptr_t m_vecErrorRangeSplineTranslation       = 0X0008; // Vector2D
            static constexpr std::uintptr_t m_vecErrorRangeSplineScale             = 0X0010; // Vector2D
            static constexpr std::uintptr_t m_flIkRotation_MaxSplineError          = 0X0018; // float32
            static constexpr std::uintptr_t m_flIkTranslation_MaxSplineError       = 0X001C; // float32
            static constexpr std::uintptr_t m_vecErrorRangeQuantizationRotation    = 0X0020; // Vector2D
            static constexpr std::uintptr_t m_vecErrorRangeQuantizationTranslation = 0X0028; // Vector2D
            static constexpr std::uintptr_t m_vecErrorRangeQuantizationScale       = 0X0030; // Vector2D
            static constexpr std::uintptr_t m_flIkRotation_MaxQuantizationError    = 0X0038; // float32
            static constexpr std::uintptr_t m_flIkTranslation_MaxQuantizationError = 0X003C; // float32
            static constexpr std::uintptr_t m_baseSequence                         = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_nBaseSequenceFrame                   = 0X0048; // int32
            static constexpr std::uintptr_t m_boneSelectionMode                    = 0X004C; // EDemoBoneSelectionMode
            static constexpr std::uintptr_t m_bones                                = 0X0050; // CUtlVector<BoneDemoCaptureSettings_t>
            static constexpr std::uintptr_t m_ikChains                             = 0X0068; // CUtlVector<IKDemoCaptureSettings_t>
        };

        // Construct Allowed
        struct IKDemoCaptureSettings_t {
        public:
            static constexpr std::uintptr_t m_parentBoneName = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_eMode          = 0X0008; // IKChannelMode
            static constexpr std::uintptr_t m_ikChainName    = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_oneBoneStart   = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_oneBoneEnd     = 0X0020; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqMultiFetchFlag {
        public:
            static constexpr std::uintptr_t m_bRealtime = 0X0000; // bool
            static constexpr std::uintptr_t m_bCylepose = 0X0001; // bool
            static constexpr std::uintptr_t m_b0D       = 0X0002; // bool
            static constexpr std::uintptr_t m_b1D       = 0X0003; // bool
            static constexpr std::uintptr_t m_b2D       = 0X0004; // bool
            static constexpr std::uintptr_t m_b2D_TRI   = 0X0005; // bool
        };

        // Global Type Scope
        struct PulseRegisterMap_t {
        public:
            static constexpr std::uintptr_t m_Inparams                = 0X0000; // KeyValues3
            static constexpr std::uintptr_t m_InparamsWhichCanBeMoved = 0X0010; // CKV3MemberNameSet
            static constexpr std::uintptr_t m_Outparams               = 0X0020; // KeyValues3
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VPhysXRange_t {
        public:
            static constexpr std::uintptr_t m_flMin = 0X0000; // float32
            static constexpr std::uintptr_t m_flMax = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CStopAtGoalUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_flOuterRadius = 0X0074; // float32
            static constexpr std::uintptr_t m_flInnerRadius = 0X0078; // float32
            static constexpr std::uintptr_t m_flMaxScale    = 0X007C; // float32
            static constexpr std::uintptr_t m_flMinScale    = 0X0080; // float32
            static constexpr std::uintptr_t m_damping       = 0X0088; // CAnimInputDamping
        };

        // Has VTable
        // Construct Allowed
        class CNmIDEventPercentageThroughNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
            static constexpr std::uintptr_t m_eventID             = 0X0018; // CGlobalSymbol
        };

        // Construct Allowed
        class CAnimBoneDifference {
        public:
            static constexpr std::uintptr_t m_name         = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_parent       = 0X0010; // CBufferString
            static constexpr std::uintptr_t m_posError     = 0X0020; // Vector
            static constexpr std::uintptr_t m_bHasRotation = 0X002C; // bool
            static constexpr std::uintptr_t m_bHasMovement = 0X002D; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedBoolNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_mode               = 0X0014; // NmCachedValueMode_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimCycle : public CCycleBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CActionComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_actions = 0X0030; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimMotorUpdaterBase {
        public:
            static constexpr std::uintptr_t m_name     = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_bDefault = 0X0018; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase {
        public:
            static constexpr std::uintptr_t m_bLockToPath = 0X0020; // bool
        };

        // Has VTable
        // Construct Allowed
        class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase {
        public:
            static constexpr std::uintptr_t m_flAnticipationTime        = 0X002C; // float32
            static constexpr std::uintptr_t m_flMinSpeedScale           = 0X0030; // float32
            static constexpr std::uintptr_t m_hAnticipationPosParam     = 0X0034; // CAnimParamHandle
            static constexpr std::uintptr_t m_hAnticipationHeadingParam = 0X0036; // CAnimParamHandle
            static constexpr std::uintptr_t m_flSpringConstant          = 0X0038; // float32
            static constexpr std::uintptr_t m_flMinSpringTension        = 0X003C; // float32
            static constexpr std::uintptr_t m_flMaxSpringTension        = 0X0040; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedFloatNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_mode               = 0X0014; // NmCachedValueMode_t
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatSwitchNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSwitchValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nTrueValueNodeIdx   = 0X0012; // int16
            static constexpr std::uintptr_t m_nFalseValueNodeIdx  = 0X0014; // int16
            static constexpr std::uintptr_t m_flFalseValue        = 0X0018; // float32
            static constexpr std::uintptr_t m_flTrueValue         = 0X001C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_MaterialGroupName = 0X0048; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CNmEntityAttributeEventBase : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_attributeName = 0X0020; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CNmVirtualParameterBoneMaskNode__CDefinition : public CNmBoneMaskValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Construct Allowed
        class CPathHelperUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_flStoppingRadius     = 0X0070; // float32
            static constexpr std::uintptr_t m_flStoppingSpeedScale = 0X0074; // float32
        };

        // Construct Allowed
        struct MaterialGroup_t {
        public:
            static constexpr std::uintptr_t m_name      = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_materials = 0X0008; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
        };

        // Construct Allowed
        class CMorphBundleData {
        public:
            static constexpr std::uintptr_t m_flULeftSrc = 0X0000; // float32
            static constexpr std::uintptr_t m_flVTopSrc  = 0X0004; // float32
            static constexpr std::uintptr_t m_offsets    = 0X0008; // CUtlVector<float32>
            static constexpr std::uintptr_t m_ranges     = 0X0020; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_UserPick : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_Choices = 0X0048; // CUtlVector<CUtlString>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CSolveIKTargetHandle_t {
        public:
            static constexpr std::uintptr_t m_positionHandle    = 0X0000; // CAnimParamHandle
            static constexpr std::uintptr_t m_orientationHandle = 0X0002; // CAnimParamHandle
        };

        // Has VTable
        // Construct Allowed
        class CFootAdjustmentUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_clips                = 0X0078; // CUtlVector<HSequence>
            static constexpr std::uintptr_t m_hBasePoseCacheHandle = 0X0090; // CPoseHandle
            static constexpr std::uintptr_t m_facingTarget         = 0X0094; // CAnimParamHandle
            static constexpr std::uintptr_t m_flTurnTimeMin        = 0X0098; // float32
            static constexpr std::uintptr_t m_flTurnTimeMax        = 0X009C; // float32
            static constexpr std::uintptr_t m_flStepHeightMax      = 0X00A0; // float32
            static constexpr std::uintptr_t m_flStepHeightMaxAngle = 0X00A4; // float32
            static constexpr std::uintptr_t m_bResetChild          = 0X00A8; // bool
            static constexpr std::uintptr_t m_bAnimationDriven     = 0X00A9; // bool
        };

        // Has VTable
        // Construct Allowed
        class CChoreoUpdateNode : public CUnaryUpdateNode {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBoneConstraintBase {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBaseConstraint : public CBoneConstraintBase {
        public:
            static constexpr std::uintptr_t m_name      = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_vUpVector = 0X0028; // Vector
            static constexpr std::uintptr_t m_slaves    = 0X0038; // CUtlLeanVector<CConstraintSlave>
            static constexpr std::uintptr_t m_targets   = 0X0048; // CUtlVector<CConstraintTarget>
        };

        // Has VTable
        // Construct Allowed
        class CAimConstraint : public CBaseConstraint {
        public:
            static constexpr std::uintptr_t m_qAimOffset = 0X0060; // Quaternion
            static constexpr std::uintptr_t m_nUpType    = 0X0070; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CMaterialDrawDescriptor__RigidMeshPart_t {
        public:
            static constexpr std::uintptr_t m_nRigidBLASIndex   = 0X0000; // uint16
            static constexpr std::uintptr_t m_nBoneIndex        = 0X0002; // int16
            static constexpr std::uintptr_t m_nStartIndexOffset = 0X0004; // uint32
            static constexpr std::uintptr_t m_nPrimitiveCount   = 0X0008; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CFootFallAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_foot = 0X0058; // FootFallTagFoot_t
        };

        // Construct Allowed
        class CMaterialDrawDescriptor {
        public:
            static constexpr std::uintptr_t m_flUvDensity             = 0X0000; // float32
            static constexpr std::uintptr_t m_vTintColor              = 0X0004; // Vector
            static constexpr std::uintptr_t m_flAlpha                 = 0X0010; // float32
            static constexpr std::uintptr_t m_nNumMeshlets            = 0X0016; // uint16
            static constexpr std::uintptr_t m_nFirstMeshlet           = 0X001C; // uint32
            static constexpr std::uintptr_t m_nAppliedIndexOffset     = 0X0020; // uint32
            static constexpr std::uintptr_t m_nDepthVertexBufferIndex = 0X0024; // uint8
            static constexpr std::uintptr_t m_nMeshletPackedIVBIndex  = 0X0025; // uint8
            static constexpr std::uintptr_t m_rigidMeshParts          = 0X0028; // CUtlLeanVector<CMaterialDrawDescriptor::RigidMeshPart_t>
            static constexpr std::uintptr_t m_nPrimitiveType          = 0X0038; // RenderPrimitiveType_t
            static constexpr std::uintptr_t m_nBaseVertex             = 0X003C; // int32
            static constexpr std::uintptr_t m_nVertexCount            = 0X0040; // int32
            static constexpr std::uintptr_t m_nStartIndex             = 0X0044; // int32
            static constexpr std::uintptr_t m_nIndexCount             = 0X0048; // int32
            static constexpr std::uintptr_t m_indexBuffer             = 0X00B0; // CRenderBufferBinding
            static constexpr std::uintptr_t m_meshletPackedIVB        = 0X00D0; // CRenderBufferBinding
            static constexpr std::uintptr_t m_material                = 0X0100; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Construct Allowed
        class CNmSkeleton {
        public:
            static constexpr std::uintptr_t m_ID                       = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_boneIDs                  = 0X0008; // CUtlLeanVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_parentIndices            = 0X0018; // CUtlVector<int32>
            static constexpr std::uintptr_t m_parentSpaceReferencePose = 0X0030; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_modelSpaceReferencePose  = 0X0048; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_numBonesToSampleAtLowLOD = 0X0060; // int32
            static constexpr std::uintptr_t m_maskDefinitions          = 0X0088; // CUtlLeanVector<NmBoneMaskSetDefinition_t>
            static constexpr std::uintptr_t m_secondarySkeletons       = 0X00A8; // CUtlLeanVector<CNmSkeleton::SecondarySkeleton_t>
            static constexpr std::uintptr_t m_bIsPropSkeleton          = 0X00B8; // bool
        };

        // Has VTable
        // Construct Allowed
        class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_footIndices         = 0X0050; // CUtlVector<int32>
            static constexpr std::uintptr_t m_flMinStepsRemaining = 0X0068; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmVelocityBlendNode__CDefinition : public CNmParameterizedBlendNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmZeroPoseTask : public CNmPoseTask {
        public:
        };

        // Construct Allowed
        class CBodyGroupSetting {
        public:
            static constexpr std::uintptr_t m_BodyGroupName    = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nBodyGroupOption = 0X0008; // int32
        };

        // Construct Allowed
        class CVectorQuantizer {
        public:
            static constexpr std::uintptr_t m_centroidVectors = 0X0000; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nCentroids      = 0X0018; // int32
            static constexpr std::uintptr_t m_nDimensions     = 0X001C; // int32
        };

        // Construct Allowed
        struct ParticleNamedValueConfiguration_t {
        public:
            static constexpr std::uintptr_t m_ConfigName        = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_ConfigValue       = 0X0008; // KeyValues3
            static constexpr std::uintptr_t m_BoundValuePath    = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_iAttachType       = 0X0020; // ParticleAttachment_t
            static constexpr std::uintptr_t m_strEntityScope    = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_strAttachmentName = 0X0030; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CNmVectorCreateNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_inputVectorValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_inputValueXNodeIdx      = 0X0012; // int16
            static constexpr std::uintptr_t m_inputValueYNodeIdx      = 0X0014; // int16
            static constexpr std::uintptr_t m_inputValueZNodeIdx      = 0X0016; // int16
        };

        // Has VTable
        // Construct Allowed
        class CNmStateNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx                              = 0X0010; // int16
            static constexpr std::uintptr_t m_entryEvents                                = 0X0018; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
            static constexpr std::uintptr_t m_executeEvents                              = 0X0038; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
            static constexpr std::uintptr_t m_exitEvents                                 = 0X0058; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3>
            static constexpr std::uintptr_t m_timedRemainingEvents                       = 0X0078; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
            static constexpr std::uintptr_t m_timedElapsedEvents                         = 0X0090; // CUtlLeanVectorFixedGrowable<CNmStateNode::TimedEvent_t,1>
            static constexpr std::uintptr_t m_nLayerWeightNodeIdx                        = 0X00A8; // int16
            static constexpr std::uintptr_t m_nLayerRootMotionWeightNodeIdx              = 0X00AA; // int16
            static constexpr std::uintptr_t m_nLayerBoneMaskNodeIdx                      = 0X00AC; // int16
            static constexpr std::uintptr_t m_bIsOffState                                = 0X00AE; // bool
            static constexpr std::uintptr_t m_bUseActualElapsedTimeInStateForTimedEvents = 0X00AF; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmBoneMaskSelectorNode__CDefinition : public CNmBoneMaskValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_defaultMaskNodeIdx    = 0X0010; // int16
            static constexpr std::uintptr_t m_parameterValueNodeIdx = 0X0012; // int16
            static constexpr std::uintptr_t m_bSwitchDynamically    = 0X0014; // bool
            static constexpr std::uintptr_t m_maskNodeIndices       = 0X0018; // CUtlVectorFixedGrowable<int16,7>
            static constexpr std::uintptr_t m_parameterValues       = 0X0040; // CUtlVectorFixedGrowable<CGlobalSymbol,7>
            static constexpr std::uintptr_t m_flBlendTimeSeconds    = 0X0090; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmVirtualParameterVectorNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Construct Allowed
        class CFootCycleMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_footIndices = 0X0050; // CUtlVector<int32>
        };

        // Has VTable
        // Construct Allowed
        class CNmConstIDNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_value = 0X0010; // CGlobalSymbol
        };

        // Construct Allowed
        class CHitBox {
        public:
            static constexpr std::uintptr_t m_name             = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_sSurfaceProperty = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_sBoneName        = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_vMinBounds       = 0X0018; // Vector
            static constexpr std::uintptr_t m_vMaxBounds       = 0X0024; // Vector
            static constexpr std::uintptr_t m_flShapeRadius    = 0X0030; // float32
            static constexpr std::uintptr_t m_nBoneNameHash    = 0X0034; // uint32
            static constexpr std::uintptr_t m_nGroupId         = 0X0038; // int32
            static constexpr std::uintptr_t m_nShapeType       = 0X003C; // uint8
            static constexpr std::uintptr_t m_bTranslationOnly = 0X003D; // bool
            static constexpr std::uintptr_t m_CRC              = 0X0040; // uint32
            static constexpr std::uintptr_t m_cRenderColor     = 0X0044; // Color
            static constexpr std::uintptr_t m_nHitBoxIndex     = 0X0048; // uint16
        };

        // Has VTable
        // Construct Allowed
        class CNmParameterizedSelectorNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_optionNodeIndices     = 0X0010; // CUtlLeanVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_optionWeights         = 0X0028; // CUtlLeanVectorFixedGrowable<uint8,5>
            static constexpr std::uintptr_t m_parameterNodeIdx      = 0X0038; // int16
            static constexpr std::uintptr_t m_bIgnoreInvalidOptions = 0X003A; // bool
            static constexpr std::uintptr_t m_bHasWeightsSet        = 0X003B; // bool
        };

        // Construct Allowed
        struct ModelSkeletonData_t {
        public:
            static constexpr std::uintptr_t m_boneName        = 0X0000; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_nParent         = 0X0018; // CUtlVector<int16>
            static constexpr std::uintptr_t m_boneSphere      = 0X0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nFlag           = 0X0048; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_bonePosParent   = 0X0060; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_boneRotParent   = 0X0078; // CUtlVector<QuaternionStorage>
            static constexpr std::uintptr_t m_boneScaleParent = 0X0090; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct NmCompressionSettings_t__QuantizationRange_t {
        public:
            static constexpr std::uintptr_t m_flRangeStart  = 0X0000; // float32
            static constexpr std::uintptr_t m_flRangeLength = 0X0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct TagSpan_t {
        public:
            static constexpr std::uintptr_t m_tagIndex   = 0X0000; // int32
            static constexpr std::uintptr_t m_startCycle = 0X0004; // float32
            static constexpr std::uintptr_t m_endCycle   = 0X0008; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmConstTargetNode__CDefinition : public CNmTargetValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_value = 0X0010; // CNmTarget
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CRemapValueUpdateItem {
        public:
            static constexpr std::uintptr_t m_hParamIn         = 0X0000; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParamOut        = 0X0002; // CAnimParamHandle
            static constexpr std::uintptr_t m_flMinInputValue  = 0X0004; // float32
            static constexpr std::uintptr_t m_flMaxInputValue  = 0X0008; // float32
            static constexpr std::uintptr_t m_flMinOutputValue = 0X000C; // float32
            static constexpr std::uintptr_t m_flMaxOutputValue = 0X0010; // float32
        };

        // Construct Allowed
        struct PermModelDataAnimatedMaterialAttribute_t {
        public:
            static constexpr std::uintptr_t m_AttributeName = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nNumChannels  = 0X0008; // int32
        };

        // Construct Allowed
        class CMotionDataSet {
        public:
            static constexpr std::uintptr_t m_groups          = 0X0000; // CUtlVector<CMotionGraphGroup>
            static constexpr std::uintptr_t m_nDimensionCount = 0X0018; // int32
        };

        // Construct Allowed
        class CProductQuantizer {
        public:
            static constexpr std::uintptr_t m_subQuantizers = 0X0000; // CUtlVector<CVectorQuantizer>
            static constexpr std::uintptr_t m_nDimensions   = 0X0018; // int32
        };

        // Has VTable
        // Construct Allowed
        class CChoiceUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_children                = 0X0060; // CUtlVector<CAnimUpdateNodeRef>
            static constexpr std::uintptr_t m_weights                 = 0X0078; // CUtlVector<float32>
            static constexpr std::uintptr_t m_blendTimes              = 0X0090; // CUtlVector<float32>
            static constexpr std::uintptr_t m_choiceMethod            = 0X00A8; // ChoiceMethod
            static constexpr std::uintptr_t m_choiceChangeMethod      = 0X00AC; // ChoiceChangeMethod
            static constexpr std::uintptr_t m_blendMethod             = 0X00B0; // ChoiceBlendMethod
            static constexpr std::uintptr_t m_blendTime               = 0X00B4; // float32
            static constexpr std::uintptr_t m_bCrossFade              = 0X00B8; // bool
            static constexpr std::uintptr_t m_bResetChosen            = 0X00B9; // bool
            static constexpr std::uintptr_t m_bDontResetSameSelection = 0X00BA; // bool
        };

        // Construct Allowed
        struct SkeletonAnimCapture_t__Bone_t {
        public:
            static constexpr std::uintptr_t m_Name     = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_BindPose = 0X0010; // CTransform
            static constexpr std::uintptr_t m_nParent  = 0X0030; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimActionUpdater {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CExpressionActionUpdater : public CAnimActionUpdater {
        public:
            static constexpr std::uintptr_t m_hParam     = 0X0018; // CAnimParamHandle
            static constexpr std::uintptr_t m_eParamType = 0X001A; // AnimParamType_t
            static constexpr std::uintptr_t m_hScript    = 0X001C; // AnimScriptHandle
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatMathNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdxA   = 0X0010; // int16
            static constexpr std::uintptr_t m_nInputValueNodeIdxB   = 0X0012; // int16
            static constexpr std::uintptr_t m_bReturnAbsoluteResult = 0X0014; // bool
            static constexpr std::uintptr_t m_bReturnNegatedResult  = 0X0015; // bool
            static constexpr std::uintptr_t m_operator              = 0X0016; // CNmFloatMathNode::Operator_t
            static constexpr std::uintptr_t m_flValueB              = 0X0018; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CAnimationGraphVisualizerPrimitiveBase {
        public:
            static constexpr std::uintptr_t m_Type                     = 0X0008; // CAnimationGraphVisualizerPrimitiveType
            static constexpr std::uintptr_t m_OwningAnimNodePaths      = 0X000C; // AnimNodeID[11]
            static constexpr std::uintptr_t m_nOwningAnimNodePathCount = 0X0038; // int32
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase {
        public:
            static constexpr std::uintptr_t m_vWsPositionStart = 0X0040; // VectorAligned
            static constexpr std::uintptr_t m_vWsPositionEnd   = 0X0050; // VectorAligned
            static constexpr std::uintptr_t m_Color            = 0X0060; // Color
        };

        // Has VTable
        // Construct Allowed
        class CCycleControlUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_valueSource     = 0X0070; // AnimValueSource
            static constexpr std::uintptr_t m_paramIndex      = 0X0074; // CAnimParamHandle
            static constexpr std::uintptr_t m_bLockWhenWaning = 0X0076; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmTargetInfoNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx  = 0X0010; // int16
            static constexpr std::uintptr_t m_infoType            = 0X0014; // CNmTargetInfoNode::Info_t
            static constexpr std::uintptr_t m_bIsWorldSpaceTarget = 0X0018; // bool
        };

        // Has VTable
        // Construct Allowed
        class CDampedValueComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_items = 0X0030; // CUtlVector<CDampedValueUpdateItem>
        };

        // Has VTable
        // Construct Allowed
        class CNmControlParameterFloatNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
        };

        // Construct Allowed
        struct BlendItem_t {
        public:
            static constexpr std::uintptr_t m_tags               = 0X0000; // CUtlVector<TagSpan_t>
            static constexpr std::uintptr_t m_pChild             = 0X0018; // CAnimUpdateNodeRef
            static constexpr std::uintptr_t m_hSequence          = 0X0028; // HSequence
            static constexpr std::uintptr_t m_vPos               = 0X002C; // Vector2D
            static constexpr std::uintptr_t m_flDuration         = 0X0034; // float32
            static constexpr std::uintptr_t m_bUseCustomDuration = 0X0038; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmIsExternalGraphSlotFilledNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nExternalGraphNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Is Absract
        class IParticleEffect {
        public:
        };

        // Has VTable
        class CNewParticleEffect : public IParticleEffect {
        public:
            static constexpr std::uintptr_t m_pNext                           = 0X0010; // CNewParticleEffect*
            static constexpr std::uintptr_t m_pPrev                           = 0X0018; // CNewParticleEffect*
            static constexpr std::uintptr_t m_pParticles                      = 0X0020; // IParticleCollection*
            static constexpr std::uintptr_t m_pDebugName                      = 0X0028; // char*
            static constexpr std::uintptr_t m_bDontRemove                     = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bRemove                         = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNeedsBBoxUpdate                = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsFirstFrame                   = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bAutoUpdateBBox                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bAllocated                      = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bSimulate                       = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bShouldPerformCullCheck         = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bForceNoDraw                    = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bSuppressScreenSpaceEffect      = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bShouldSave                     = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bShouldSimulateDuringGamePaused = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bShouldCheckFoW                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsAsyncCreate                  = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bFreezeTransitionActive         = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bFreezeTargetState              = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bCanFreeze                      = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_vSortOrigin                     = 0X0040; // Vector
            static constexpr std::uintptr_t m_flScale                         = 0X004C; // float32
            static constexpr std::uintptr_t m_hOwner                          = 0X0050; // PARTICLE_EHANDLE__*
            static constexpr std::uintptr_t m_pOwningParticleProperty         = 0X0058; // CParticleProperty*
            static constexpr std::uintptr_t m_flFreezeTransitionStart         = 0X0070; // float32
            static constexpr std::uintptr_t m_flFreezeTransitionDuration      = 0X0074; // float32
            static constexpr std::uintptr_t m_flFreezeTransitionOverride      = 0X0078; // float32
            static constexpr std::uintptr_t m_LastMin                         = 0X007C; // Vector
            static constexpr std::uintptr_t m_LastMax                         = 0X0088; // Vector
            static constexpr std::uintptr_t m_nSplitScreenUser                = 0X0094; // CSplitScreenSlot
            static constexpr std::uintptr_t m_vecAggregationCenter            = 0X0098; // Vector
            static constexpr std::uintptr_t m_RefCount                        = 0X00D0; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmClipNode__CDefinition : public CNmClipReferenceNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nPlayInReverseValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nResetTimeValueNodeIdx     = 0X0012; // int16
            static constexpr std::uintptr_t m_bSampleRootMotion          = 0X0014; // bool
            static constexpr std::uintptr_t m_bAllowLooping              = 0X0015; // bool
            static constexpr std::uintptr_t m_nDataSlotIdx               = 0X0016; // int16
            static constexpr std::uintptr_t m_graphEvents                = 0X0018; // CUtlVectorFixedGrowable<CGlobalSymbol,2>
            static constexpr std::uintptr_t m_flSpeedMultiplier          = 0X0040; // float32
            static constexpr std::uintptr_t m_nStartSyncEventOffset      = 0X0044; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmMaterialAttributeEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_attributeName      = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_attributeNameToken = 0X0028; // CUtlStringToken
            static constexpr std::uintptr_t m_x                  = 0X0030; // CPiecewiseCurve
            static constexpr std::uintptr_t m_y                  = 0X0070; // CPiecewiseCurve
            static constexpr std::uintptr_t m_z                  = 0X00B0; // CPiecewiseCurve
            static constexpr std::uintptr_t m_w                  = 0X00F0; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CNmBlend1DNode__CDefinition : public CNmParameterizedBlendNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_parameterization = 0X0040; // CNmParameterizedBlendNode::Parameterization_t
        };

        // Construct Allowed
        class CNmBoneWeightList {
        public:
            static constexpr std::uintptr_t m_skeletonName = 0X0000; // CResourceName
            static constexpr std::uintptr_t m_boneIDs      = 0X00E0; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_weights      = 0X00F8; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        class CPairedSequenceUpdateNode : public CSequenceUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_sPairedSequenceRole = 0X0078; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_RandomPick : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_Choices       = 0X0048; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_ChoiceWeights = 0X0060; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        class CNmReferencePoseTask : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmScaleNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nMaskNodeIdx   = 0X0018; // int16
            static constexpr std::uintptr_t m_nEnableNodeIdx = 0X001A; // int16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VPhysXConstraint2_t {
        public:
            static constexpr std::uintptr_t m_nFlags  = 0X0000; // uint32
            static constexpr std::uintptr_t m_nParent = 0X0004; // uint16
            static constexpr std::uintptr_t m_nChild  = 0X0006; // uint16
            static constexpr std::uintptr_t m_params  = 0X0008; // VPhysXConstraintParams_t
        };

        // Construct Allowed
        class CConstraintTarget {
        public:
            static constexpr std::uintptr_t m_qOffset       = 0X0020; // Quaternion
            static constexpr std::uintptr_t m_vOffset       = 0X0030; // Vector
            static constexpr std::uintptr_t m_nBoneHash     = 0X003C; // uint32
            static constexpr std::uintptr_t m_sName         = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_flWeight      = 0X0048; // float32
            static constexpr std::uintptr_t m_bIsAttachment = 0X0059; // bool
        };

        // Construct Allowed
        struct SkeletonAnimCapture_t {
        public:
            static constexpr std::uintptr_t m_nEntIndex         = 0X0000; // CEntityIndex
            static constexpr std::uintptr_t m_nEntParent        = 0X0004; // CEntityIndex
            static constexpr std::uintptr_t m_ImportedCollision = 0X0008; // CUtlVector<CEntityIndex>
            static constexpr std::uintptr_t m_ModelName         = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_CaptureName       = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_ModelBindPose     = 0X0030; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
            static constexpr std::uintptr_t m_FeModelInitPose   = 0X0048; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
            static constexpr std::uintptr_t m_nFlexControllers  = 0X0060; // int32
            static constexpr std::uintptr_t m_bPredicted        = 0X0064; // bool
            static constexpr std::uintptr_t m_Frames            = 0X00A8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
        };

        // Construct Allowed
        class CAnimUser {
        public:
            static constexpr std::uintptr_t m_name  = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_nType = 0X0010; // int32
        };

        // Has VTable
        // Construct Allowed
        class CRagdollComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_ragdollNodePaths            = 0X0030; // CUtlVector<CAnimNodePath>
            static constexpr std::uintptr_t m_followAttachmentNodePaths   = 0X0048; // CUtlVector<CAnimNodePath>
            static constexpr std::uintptr_t m_boneIndices                 = 0X0060; // CUtlVector<int32>
            static constexpr std::uintptr_t m_boneNames                   = 0X0078; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_weightLists                 = 0X0090; // CUtlVector<WeightList>
            static constexpr std::uintptr_t m_boneToWeightIndices         = 0X00A8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_flSpringFrequencyMin        = 0X00C0; // float32
            static constexpr std::uintptr_t m_flSpringFrequencyMax        = 0X00C4; // float32
            static constexpr std::uintptr_t m_flMaxStretch                = 0X00C8; // float32
            static constexpr std::uintptr_t m_bSolidCollisionAtZeroWeight = 0X00CC; // bool
        };

        // Construct Allowed
        struct ParticleNamedValueSource_t {
        public:
            static constexpr std::uintptr_t m_Name          = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_IsPublic      = 0X0008; // bool
            static constexpr std::uintptr_t m_ValueType     = 0X0010; // CPulseValueFullType
            static constexpr std::uintptr_t m_DefaultConfig = 0X0028; // ParticleNamedValueConfiguration_t
        };

        // Construct Allowed
        class CFootDefinition {
        public:
            static constexpr std::uintptr_t m_name                  = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_ankleBoneName         = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_toeBoneName           = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_vBallOffset           = 0X0018; // Vector
            static constexpr std::uintptr_t m_vHeelOffset           = 0X0024; // Vector
            static constexpr std::uintptr_t m_flFootLength          = 0X0030; // float32
            static constexpr std::uintptr_t m_flBindPoseDirectionMS = 0X0034; // float32
            static constexpr std::uintptr_t m_flTraceHeight         = 0X0038; // float32
            static constexpr std::uintptr_t m_flTraceRadius         = 0X003C; // float32
        };

        // Construct Allowed
        class CSeqSynthAnimDesc {
        public:
            static constexpr std::uintptr_t m_sName               = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_flags               = 0X0010; // CSeqSeqDescFlag
            static constexpr std::uintptr_t m_transition          = 0X001C; // CSeqTransition
            static constexpr std::uintptr_t m_nLocalBaseReference = 0X0024; // int16
            static constexpr std::uintptr_t m_nLocalBoneMask      = 0X0026; // int16
            static constexpr std::uintptr_t m_activityArray       = 0X0028; // CUtlVector<CAnimActivity>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmLayerBlendNode__LayerDefinition_t {
        public:
            static constexpr std::uintptr_t m_nInputNodeIdx                 = 0X0000; // int16
            static constexpr std::uintptr_t m_nWeightValueNodeIdx           = 0X0002; // int16
            static constexpr std::uintptr_t m_nBoneMaskValueNodeIdx         = 0X0004; // int16
            static constexpr std::uintptr_t m_nRootMotionWeightValueNodeIdx = 0X0006; // int16
            static constexpr std::uintptr_t m_bIsSynchronized               = 0X0008; // bool
            static constexpr std::uintptr_t m_bIgnoreEvents                 = 0X0009; // bool
            static constexpr std::uintptr_t m_bIsStateMachineLayer          = 0X000A; // bool
            static constexpr std::uintptr_t m_blendMode                     = 0X000B; // NmPoseBlendMode_t
        };

        // Has VTable
        // Construct Allowed
        class CBlend2DUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_items                                = 0X0060; // CUtlVector<BlendItem_t>
            static constexpr std::uintptr_t m_tags                                 = 0X0078; // CUtlVector<TagSpan_t>
            static constexpr std::uintptr_t m_paramSpans                           = 0X0090; // CParamSpanUpdater
            static constexpr std::uintptr_t m_nodeItemIndices                      = 0X00A8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_damping                              = 0X00C0; // CAnimInputDamping
            static constexpr std::uintptr_t m_blendSourceX                         = 0X00D8; // AnimValueSource
            static constexpr std::uintptr_t m_paramX                               = 0X00DC; // CAnimParamHandle
            static constexpr std::uintptr_t m_blendSourceY                         = 0X00E0; // AnimValueSource
            static constexpr std::uintptr_t m_paramY                               = 0X00E4; // CAnimParamHandle
            static constexpr std::uintptr_t m_eBlendMode                           = 0X00E8; // Blend2DMode
            static constexpr std::uintptr_t m_playbackSpeed                        = 0X00EC; // float32
            static constexpr std::uintptr_t m_bLoop                                = 0X00F0; // bool
            static constexpr std::uintptr_t m_bLockBlendOnReset                    = 0X00F1; // bool
            static constexpr std::uintptr_t m_bLockWhenWaning                      = 0X00F2; // bool
            static constexpr std::uintptr_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0X00F3; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmSpeedScaleBaseNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx  = 0X0018; // int16
            static constexpr std::uintptr_t m_flDefaultInputValue = 0X001C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmVelocityBasedSpeedScaleNode__CDefinition : public CNmSpeedScaleBaseNode__CDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNPCPhysicsHull {
        public:
            static constexpr std::uintptr_t m_sName             = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_eType             = 0X0008; // NPCPhysicsHullType_t
            static constexpr std::uintptr_t m_flCapsuleHeight   = 0X000C; // float32
            static constexpr std::uintptr_t m_flCapsuleRadius   = 0X0010; // float32
            static constexpr std::uintptr_t m_vCapsuleCenter1   = 0X0014; // Vector
            static constexpr std::uintptr_t m_vCapsuleCenter2   = 0X0020; // Vector
            static constexpr std::uintptr_t m_flGroundBoxHeight = 0X002C; // float32
            static constexpr std::uintptr_t m_flGroundBoxWidth  = 0X0030; // float32
        };

        // Construct Allowed
        struct PermModelExtPart_t {
        public:
            static constexpr std::uintptr_t m_Transform = 0X0000; // CTransform
            static constexpr std::uintptr_t m_Name      = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_nParent   = 0X0028; // int32
            static constexpr std::uintptr_t m_refModel  = 0X0030; // CStrongHandle<InfoForResourceTypeCModel>
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedIDNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_mode               = 0X0014; // NmCachedValueMode_t
        };

        // Has VTable
        // Construct Allowed
        class CLeanMatrixUpdateNode : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_frameCorners      = 0X005C; // int32[3][3]
            static constexpr std::uintptr_t m_poses             = 0X0080; // CPoseHandle[9]
            static constexpr std::uintptr_t m_damping           = 0X00A8; // CAnimInputDamping
            static constexpr std::uintptr_t m_blendSource       = 0X00C0; // AnimVectorSource
            static constexpr std::uintptr_t m_paramIndex        = 0X00C4; // CAnimParamHandle
            static constexpr std::uintptr_t m_verticalAxis      = 0X00C8; // Vector
            static constexpr std::uintptr_t m_horizontalAxis    = 0X00D4; // Vector
            static constexpr std::uintptr_t m_hSequence         = 0X00E0; // HSequence
            static constexpr std::uintptr_t m_flMaxValue        = 0X00E4; // float32
            static constexpr std::uintptr_t m_nSequenceMaxFrame = 0X00E8; // int32
        };

        // Has VTable
        // Construct Allowed
        class CSymbolAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0X0080; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatCurveEventNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_eventID             = 0X0010; // CGlobalSymbol
            static constexpr std::uintptr_t m_nDefaultNodeIdx     = 0X0018; // int16
            static constexpr std::uintptr_t m_flDefaultValue      = 0X001C; // float32
            static constexpr std::uintptr_t m_eventConditionRules = 0X0020; // CNmBitFlags
        };

        // Has VTable
        // Is Absract
        class IAnimationGraphInstance {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmStateMachineNode__TransitionDefinition_t {
        public:
            static constexpr std::uintptr_t m_nTargetStateIdx    = 0X0000; // int16
            static constexpr std::uintptr_t m_nConditionNodeIdx  = 0X0002; // int16
            static constexpr std::uintptr_t m_nTransitionNodeIdx = 0X0004; // int16
            static constexpr std::uintptr_t m_bCanBeForced       = 0X0006; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatSelectorNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_conditionNodeIndices = 0X0010; // CUtlVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_values               = 0X0038; // CUtlVectorFixedGrowable<float32,5>
            static constexpr std::uintptr_t m_flDefaultValue       = 0X0068; // float32
            static constexpr std::uintptr_t m_flEaseTime           = 0X006C; // float32
            static constexpr std::uintptr_t m_easingOp             = 0X0070; // NmEasingOperation_t
        };

        // Has VTable
        // Construct Allowed
        class CTargetSelectorUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_eAngleMode                       = 0X0060; // TargetSelectorAngleMode_t
            static constexpr std::uintptr_t m_children                         = 0X0068; // CUtlVector<CAnimUpdateNodeRef>
            static constexpr std::uintptr_t m_hTargetPosition                  = 0X0084; // CAnimParamHandle
            static constexpr std::uintptr_t m_hTargetFacePositionParameter     = 0X0086; // CAnimParamHandle
            static constexpr std::uintptr_t m_hMoveHeadingParameter            = 0X0088; // CAnimParamHandle
            static constexpr std::uintptr_t m_hDesiredMoveHeadingParameter     = 0X008A; // CAnimParamHandle
            static constexpr std::uintptr_t m_bTargetPositionIsWorldSpace      = 0X008C; // bool
            static constexpr std::uintptr_t m_bTargetFacePositionIsWorldSpace  = 0X008D; // bool
            static constexpr std::uintptr_t m_bEnablePhaseMatching             = 0X008E; // bool
            static constexpr std::uintptr_t m_flPhaseMatchingMaxRootMotionSkip = 0X0090; // float32
        };

        // Construct Allowed
        class CHitBoxSetList {
        public:
            static constexpr std::uintptr_t m_HitBoxSets = 0X0000; // CUtlVector<CHitBoxSet>
        };

        // Has VTable
        // Construct Allowed
        class CNmIsInactiveBranchConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class MotionDBIndex {
        public:
            static constexpr std::uintptr_t m_nIndex = 0X0000; // uint32
        };

        // Construct Allowed
        class CDirectPlaybackTagData {
        public:
            static constexpr std::uintptr_t m_sequenceName = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_tags         = 0X0008; // CUtlVector<TagSpan_t>
        };

        // Has VTable
        // Construct Allowed
        class CParticleCollectionVecInput : public CParticleVecInput {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmGraphEventConditionNode__Condition_t {
        public:
            static constexpr std::uintptr_t m_eventID            = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_eventTypeCondition = 0X0008; // NmGraphEventTypeCondition_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmFloatRemapNode__RemapRange_t {
        public:
            static constexpr std::uintptr_t m_flBegin = 0X0000; // float32
            static constexpr std::uintptr_t m_flEnd   = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmCurrentSyncEventIDNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Construct Allowed
        class CNmStateCompletedConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx                = 0X0010; // int16
            static constexpr std::uintptr_t m_nTransitionDurationOverrideNodeIdx = 0X0012; // int16
            static constexpr std::uintptr_t m_flTransitionDurationSeconds        = 0X0014; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmTargetWarpEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_rule      = 0X0020; // NmTargetWarpRule_t
            static constexpr std::uintptr_t m_algorithm = 0X0021; // NmTargetWarpAlgorithm_t
        };

        // Construct Allowed
        class CParamSpanUpdater {
        public:
            static constexpr std::uintptr_t m_spans = 0X0000; // CUtlVector<ParamSpan_t>
        };

        // Has VTable
        // Construct Allowed
        class CParticleAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_hParticleSystem      = 0X0058; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_particleSystemName   = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_configName           = 0X0068; // CUtlString
            static constexpr std::uintptr_t m_bDetachFromOwner     = 0X0070; // bool
            static constexpr std::uintptr_t m_bAggregate           = 0X0071; // bool
            static constexpr std::uintptr_t m_bStopWhenTagEnds     = 0X0072; // bool
            static constexpr std::uintptr_t m_bTagEndStopIsInstant = 0X0073; // bool
            static constexpr std::uintptr_t m_attachmentName       = 0X0078; // CUtlString
            static constexpr std::uintptr_t m_attachmentType       = 0X0080; // ParticleAttachment_t
            static constexpr std::uintptr_t m_attachmentCP1Name    = 0X0088; // CUtlString
            static constexpr std::uintptr_t m_attachmentCP1Type    = 0X0090; // ParticleAttachment_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FollowTargetOpFixedSettings_t {
        public:
            static constexpr std::uintptr_t m_boneIndex               = 0X0000; // int32
            static constexpr std::uintptr_t m_bBoneTarget             = 0X0004; // bool
            static constexpr std::uintptr_t m_boneTargetIndex         = 0X0008; // int32
            static constexpr std::uintptr_t m_bWorldCoodinateTarget   = 0X000C; // bool
            static constexpr std::uintptr_t m_bMatchTargetOrientation = 0X000D; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmIDSwitchNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSwitchValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nTrueValueNodeIdx   = 0X0012; // int16
            static constexpr std::uintptr_t m_nFalseValueNodeIdx  = 0X0014; // int16
            static constexpr std::uintptr_t m_falseValue          = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_trueValue           = 0X0020; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        class CNmRootMotionEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_flBlendTimeSeconds = 0X0020; // float32
        };

        // Construct Allowed
        class CPulse_PublicOutput {
        public:
            static constexpr std::uintptr_t m_Name        = 0X0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_Description = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_Args        = 0X0018; // CUtlLeanVector<CPulseRuntimeMethodArg>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNmIKEffector {
        public:
            static constexpr std::uintptr_t m_nBodyIndex         = 0X0000; // int32
            static constexpr std::uintptr_t m_bEnabled           = 0X0004; // bool
            static constexpr std::uintptr_t m_vTargetPosition    = 0X0008; // Vector
            static constexpr std::uintptr_t m_qTargetOrientation = 0X0020; // Quaternion
            static constexpr std::uintptr_t m_flWeight           = 0X0030; // float32
        };

        // Has VTable
        // Construct Allowed
        class CEmitTagActionUpdater : public CAnimActionUpdater {
        public:
            static constexpr std::uintptr_t m_nTagIndex       = 0X0018; // int32
            static constexpr std::uintptr_t m_bIsZeroDuration = 0X001C; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct DynamicMeshDeformParams_t {
        public:
            static constexpr std::uintptr_t m_flTensionCompressScale                   = 0X0000; // float32
            static constexpr std::uintptr_t m_flTensionStretchScale                    = 0X0004; // float32
            static constexpr std::uintptr_t m_bRecomputeSmoothNormalsAfterAnimation    = 0X0008; // bool
            static constexpr std::uintptr_t m_bComputeDynamicMeshTensionAfterAnimation = 0X0009; // bool
            static constexpr std::uintptr_t m_bSmoothNormalsAcrossUvSeams              = 0X000A; // bool
            static constexpr std::uintptr_t m_bEnableEyeBulgeDeformation               = 0X000B; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmTimeConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_sourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0012; // int16
            static constexpr std::uintptr_t m_flComparand        = 0X0014; // float32
            static constexpr std::uintptr_t m_type               = 0X0018; // CNmTimeConditionNode::ComparisonType_t
            static constexpr std::uintptr_t m_operator           = 0X0019; // CNmTimeConditionNode::Operator_t
        };

        // Has VTable
        // Construct Allowed
        class CNmSyncEventIndexConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_triggerMode         = 0X0012; // CNmSyncEventIndexConditionNode::TriggerMode_t
            static constexpr std::uintptr_t m_syncEventIdx        = 0X0014; // int32
        };

        // Has VTable
        // Construct Allowed
        class CAnimStateMachineUpdater {
        public:
            static constexpr std::uintptr_t m_states          = 0X0008; // CUtlVector<CStateUpdateData>
            static constexpr std::uintptr_t m_transitions     = 0X0020; // CUtlVector<CTransitionUpdateData>
            static constexpr std::uintptr_t m_startStateIndex = 0X0050; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmIDToFloatNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_defaultValue       = 0X0014; // float32
            static constexpr std::uintptr_t m_IDs                = 0X0018; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,5>
            static constexpr std::uintptr_t m_values             = 0X0048; // CUtlLeanVectorFixedGrowable<float32,5>
        };

        class CCompressorGroup {
        public:
            static constexpr std::uintptr_t m_nTotalElementCount   = 0X0000; // int32
            static constexpr std::uintptr_t m_szChannelClass       = 0X0008; // CUtlVector<char*>
            static constexpr std::uintptr_t m_szVariableName       = 0X0020; // CUtlVector<char*>
            static constexpr std::uintptr_t m_nType                = 0X0038; // CUtlVector<fieldtype_t>
            static constexpr std::uintptr_t m_nFlags               = 0X0050; // CUtlVector<int32>
            static constexpr std::uintptr_t m_szGrouping           = 0X0068; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_nCompressorIndex     = 0X0080; // CUtlVector<int32>
            static constexpr std::uintptr_t m_szElementNames       = 0X0098; // CUtlVector<CUtlVector<char*>>
            static constexpr std::uintptr_t m_nElementUniqueID     = 0X00B0; // CUtlVector<CUtlVector<int32>>
            static constexpr std::uintptr_t m_nElementMask         = 0X00C8; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_vectorCompressor     = 0X00F8; // CUtlVector<CCompressor<Vector>*>
            static constexpr std::uintptr_t m_quaternionCompressor = 0X0110; // CUtlVector<CCompressor<QuaternionStorage>*>
            static constexpr std::uintptr_t m_intCompressor        = 0X0128; // CUtlVector<CCompressor<int32>*>
            static constexpr std::uintptr_t m_boolCompressor       = 0X0140; // CUtlVector<CCompressor<bool>*>
            static constexpr std::uintptr_t m_colorCompressor      = 0X0158; // CUtlVector<CCompressor<Color>*>
            static constexpr std::uintptr_t m_vector2DCompressor   = 0X0170; // CUtlVector<CCompressor<Vector2D>*>
            static constexpr std::uintptr_t m_vector4DCompressor   = 0X0188; // CUtlVector<CCompressor<Vector4D>*>
        };

        // Has VTable
        // Construct Allowed
        class CSelectorUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_children            = 0X0060; // CUtlVector<CAnimUpdateNodeRef>
            static constexpr std::uintptr_t m_tags                = 0X0078; // CUtlVector<int8>
            static constexpr std::uintptr_t m_blendCurve          = 0X0094; // CBlendCurve
            static constexpr std::uintptr_t m_flBlendTime         = 0X009C; // CAnimValue<float32>
            static constexpr std::uintptr_t m_hParameter          = 0X00A4; // CAnimParamHandle
            static constexpr std::uintptr_t m_nTagIndex           = 0X00A8; // int32
            static constexpr std::uintptr_t m_eTagBehavior        = 0X00AC; // SelectorTagBehavior_t
            static constexpr std::uintptr_t m_bResetOnChange      = 0X00B0; // bool
            static constexpr std::uintptr_t m_bLockWhenWaning     = 0X00B1; // bool
            static constexpr std::uintptr_t m_bSyncCyclesOnChange = 0X00B2; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct NmPercent_t {
        public:
            static constexpr std::uintptr_t m_flValue = 0X0000; // float32
        };

        // Has VTable
        // Construct Allowed
        class CStateMachineComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_stateMachine = 0X0030; // CAnimStateMachineUpdater
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimUpdateNodeRef {
        public:
            static constexpr std::uintptr_t m_nodeIndex = 0X0008; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPulse_OutputConnection {
        public:
            static constexpr std::uintptr_t m_SourceOutput = 0X0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_TargetEntity = 0X0010; // PulseSymbol_t
            static constexpr std::uintptr_t m_TargetInput  = 0X0020; // PulseSymbol_t
            static constexpr std::uintptr_t m_Param        = 0X0030; // PulseSymbol_t
        };

        // Construct Allowed
        class CPhysSurfaceProperties {
        public:
            static constexpr std::uintptr_t m_name          = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nameHash      = 0X0008; // uint32
            static constexpr std::uintptr_t m_baseNameHash  = 0X000C; // uint32
            static constexpr std::uintptr_t m_bHidden       = 0X0018; // bool
            static constexpr std::uintptr_t m_description   = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_physics       = 0X0028; // CPhysSurfacePropertiesPhysics
            static constexpr std::uintptr_t m_vehicleParams = 0X0040; // CPhysSurfacePropertiesVehicle
            static constexpr std::uintptr_t m_audioSounds   = 0X0048; // CPhysSurfacePropertiesSoundNames
            static constexpr std::uintptr_t m_audioParams   = 0X00A8; // CPhysSurfacePropertiesAudio
        };

        // Construct Allowed
        class CSeqPoseParamDesc {
        public:
            static constexpr std::uintptr_t m_sName    = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_flStart  = 0X0010; // float32
            static constexpr std::uintptr_t m_flEnd    = 0X0014; // float32
            static constexpr std::uintptr_t m_flLoop   = 0X0018; // float32
            static constexpr std::uintptr_t m_bLooping = 0X001C; // bool
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_SetBodygroup : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_GroupName = 0X0048; // CGlobalSymbol
            static constexpr std::uintptr_t m_nChoice   = 0X0050; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimMovement {
        public:
            static constexpr std::uintptr_t endframe    = 0X0000; // int32
            static constexpr std::uintptr_t motionflags = 0X0004; // int32
            static constexpr std::uintptr_t v0          = 0X0008; // float32
            static constexpr std::uintptr_t v1          = 0X000C; // float32
            static constexpr std::uintptr_t angle       = 0X0010; // float32
            static constexpr std::uintptr_t vector      = 0X0014; // Vector
            static constexpr std::uintptr_t position    = 0X0020; // Vector
        };

        // Has VTable
        // Construct Allowed
        class CParticleFloatInput : public CParticleInput {
        public:
            static constexpr std::uintptr_t m_nType                      = 0X0010; // ParticleFloatType_t
            static constexpr std::uintptr_t m_nMapType                   = 0X0014; // ParticleFloatMapType_t
            static constexpr std::uintptr_t m_flLiteralValue             = 0X0018; // float32
            static constexpr std::uintptr_t m_NamedValue                 = 0X0020; // CParticleNamedValueRef
            static constexpr std::uintptr_t m_nControlPoint              = 0X0060; // int32
            static constexpr std::uintptr_t m_nScalarAttribute           = 0X0064; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVectorAttribute           = 0X0068; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVectorComponent           = 0X006C; // int32
            static constexpr std::uintptr_t m_bReverseOrder              = 0X0070; // bool
            static constexpr std::uintptr_t m_flRandomMin                = 0X0074; // float32
            static constexpr std::uintptr_t m_flRandomMax                = 0X0078; // float32
            static constexpr std::uintptr_t m_bHasRandomSignFlip         = 0X007C; // bool
            static constexpr std::uintptr_t m_nRandomSeed                = 0X0080; // int32
            static constexpr std::uintptr_t m_nRandomMode                = 0X0084; // ParticleFloatRandomMode_t
            static constexpr std::uintptr_t m_strSnapshotSubset          = 0X0090; // CUtlString
            static constexpr std::uintptr_t m_flLOD0                     = 0X0098; // float32
            static constexpr std::uintptr_t m_flLOD1                     = 0X009C; // float32
            static constexpr std::uintptr_t m_flLOD2                     = 0X00A0; // float32
            static constexpr std::uintptr_t m_flLOD3                     = 0X00A4; // float32
            static constexpr std::uintptr_t m_nNoiseInputVectorAttribute = 0X00A8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flNoiseOutputMin           = 0X00AC; // float32
            static constexpr std::uintptr_t m_flNoiseOutputMax           = 0X00B0; // float32
            static constexpr std::uintptr_t m_flNoiseScale               = 0X00B4; // float32
            static constexpr std::uintptr_t m_vecNoiseOffsetRate         = 0X00B8; // Vector
            static constexpr std::uintptr_t m_flNoiseOffset              = 0X00C4; // float32
            static constexpr std::uintptr_t m_nNoiseOctaves              = 0X00C8; // int32
            static constexpr std::uintptr_t m_nNoiseTurbulence           = 0X00CC; // PFNoiseTurbulence_t
            static constexpr std::uintptr_t m_nNoiseType                 = 0X00D0; // PFNoiseType_t
            static constexpr std::uintptr_t m_nNoiseModifier             = 0X00D4; // PFNoiseModifier_t
            static constexpr std::uintptr_t m_flNoiseTurbulenceScale     = 0X00D8; // float32
            static constexpr std::uintptr_t m_flNoiseTurbulenceMix       = 0X00DC; // float32
            static constexpr std::uintptr_t m_flNoiseImgPreviewScale     = 0X00E0; // float32
            static constexpr std::uintptr_t m_bNoiseImgPreviewLive       = 0X00E4; // bool
            static constexpr std::uintptr_t m_flNoCameraFallback         = 0X00F0; // float32
            static constexpr std::uintptr_t m_bUseBoundsCenter           = 0X00F4; // bool
            static constexpr std::uintptr_t m_nInputMode                 = 0X00F8; // ParticleFloatInputMode_t
            static constexpr std::uintptr_t m_flMultFactor               = 0X00FC; // float32
            static constexpr std::uintptr_t m_flInput0                   = 0X0100; // float32
            static constexpr std::uintptr_t m_flInput1                   = 0X0104; // float32
            static constexpr std::uintptr_t m_flOutput0                  = 0X0108; // float32
            static constexpr std::uintptr_t m_flOutput1                  = 0X010C; // float32
            static constexpr std::uintptr_t m_flNotchedRangeMin          = 0X0110; // float32
            static constexpr std::uintptr_t m_flNotchedRangeMax          = 0X0114; // float32
            static constexpr std::uintptr_t m_flNotchedOutputOutside     = 0X0118; // float32
            static constexpr std::uintptr_t m_flNotchedOutputInside      = 0X011C; // float32
            static constexpr std::uintptr_t m_nRoundType                 = 0X0120; // ParticleFloatRoundType_t
            static constexpr std::uintptr_t m_nBiasType                  = 0X0124; // ParticleFloatBiasType_t
            static constexpr std::uintptr_t m_flBiasParameter            = 0X0128; // float32
            static constexpr std::uintptr_t m_Curve                      = 0X0130; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CParticleRemapFloatInput : public CParticleFloatInput {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FollowAttachmentData {
        public:
            static constexpr std::uintptr_t m_boneIndex        = 0X0000; // int32
            static constexpr std::uintptr_t m_attachmentHandle = 0X0004; // AttachmentHandle_t
        };

        // Construct Allowed
        class FootStepTrigger {
        public:
            static constexpr std::uintptr_t m_tags         = 0X0000; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nFootIndex   = 0X0018; // int32
            static constexpr std::uintptr_t m_triggerPhase = 0X001C; // StepPhase
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmSyncTrack__EventMarker_t {
        public:
            static constexpr std::uintptr_t m_startTime = 0X0000; // NmPercent_t
            static constexpr std::uintptr_t m_ID        = 0X0008; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        class CPathMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_pathTimeSamples         = 0X0050; // CUtlVector<float32>
            static constexpr std::uintptr_t m_flDistance              = 0X0068; // float32
            static constexpr std::uintptr_t m_bExtrapolateMovement    = 0X006C; // bool
            static constexpr std::uintptr_t m_flMinExtrapolationSpeed = 0X0070; // float32
        };

        // Has VTable
        // Construct Allowed
        class CFootLockUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedSettings                = 0X0070; // FootLockPoseOpFixedSettings
            static constexpr std::uintptr_t m_footSettings                   = 0X00E0; // CUtlVector<FootFixedSettings>
            static constexpr std::uintptr_t m_hipShiftDamping                = 0X00F8; // CAnimInputDamping
            static constexpr std::uintptr_t m_rootHeightDamping              = 0X0110; // CAnimInputDamping
            static constexpr std::uintptr_t m_flStrideCurveScale             = 0X0128; // float32
            static constexpr std::uintptr_t m_flStrideCurveLimitScale        = 0X012C; // float32
            static constexpr std::uintptr_t m_flStepHeightIncreaseScale      = 0X0130; // float32
            static constexpr std::uintptr_t m_flStepHeightDecreaseScale      = 0X0134; // float32
            static constexpr std::uintptr_t m_flHipShiftScale                = 0X0138; // float32
            static constexpr std::uintptr_t m_flBlendTime                    = 0X013C; // float32
            static constexpr std::uintptr_t m_flMaxRootHeightOffset          = 0X0140; // float32
            static constexpr std::uintptr_t m_flMinRootHeightOffset          = 0X0144; // float32
            static constexpr std::uintptr_t m_flTiltPlanePitchSpringStrength = 0X0148; // float32
            static constexpr std::uintptr_t m_flTiltPlaneRollSpringStrength  = 0X014C; // float32
            static constexpr std::uintptr_t m_bApplyFootRotationLimits       = 0X0150; // bool
            static constexpr std::uintptr_t m_bApplyHipShift                 = 0X0151; // bool
            static constexpr std::uintptr_t m_bModulateStepHeight            = 0X0152; // bool
            static constexpr std::uintptr_t m_bResetChild                    = 0X0153; // bool
            static constexpr std::uintptr_t m_bEnableVerticalCurvedPaths     = 0X0154; // bool
            static constexpr std::uintptr_t m_bEnableRootHeightDamping       = 0X0155; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmOrientationWarpEvent : public CNmEvent {
        public:
        };

        // Construct Allowed
        struct PulseGraphExecutionHistoryNodeDesc_t {
        public:
            static constexpr std::uintptr_t strCellDesc    = 0X0000; // CBufferString
            static constexpr std::uintptr_t strBindingName = 0X0010; // PulseSymbol_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct JiggleBoneSettings_t {
        public:
            static constexpr std::uintptr_t m_nBoneIndex       = 0X0000; // int32
            static constexpr std::uintptr_t m_flSpringStrength = 0X0004; // float32
            static constexpr std::uintptr_t m_flMaxTimeStep    = 0X0008; // float32
            static constexpr std::uintptr_t m_flDamping        = 0X000C; // float32
            static constexpr std::uintptr_t m_vBoundsMaxLS     = 0X0010; // Vector
            static constexpr std::uintptr_t m_vBoundsMinLS     = 0X001C; // Vector
            static constexpr std::uintptr_t m_eSimSpace        = 0X0028; // JiggleBoneSimSpace
        };

        // Has VTable
        // Construct Allowed
        class CJumpHelperUpdateNode : public CSequenceUpdateNode {
        public:
            static constexpr std::uintptr_t m_hTargetParam           = 0X00B0; // CAnimParamHandle
            static constexpr std::uintptr_t m_flOriginalJumpMovement = 0X00B4; // Vector
            static constexpr std::uintptr_t m_flOriginalJumpDuration = 0X00C0; // float32
            static constexpr std::uintptr_t m_flJumpStartCycle       = 0X00C4; // float32
            static constexpr std::uintptr_t m_flJumpEndCycle         = 0X00C8; // float32
            static constexpr std::uintptr_t m_eCorrectionMethod      = 0X00CC; // JumpCorrectionMethod
            static constexpr std::uintptr_t m_bTranslationAxis       = 0X00D0; // bool[3]
            static constexpr std::uintptr_t m_bScaleSpeed            = 0X00D3; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmControlParameterBoolNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmChainLookatTask : public CNmPoseTask {
        public:
            static constexpr std::uintptr_t m_nChainEndBoneIdx               = 0X0058; // int32
            static constexpr std::uintptr_t m_nNumBonesInChain               = 0X005C; // int32
            static constexpr std::uintptr_t m_chainForwardDir                = 0X0060; // Vector
            static constexpr std::uintptr_t m_flBlendWeight                  = 0X006C; // float32
            static constexpr std::uintptr_t m_flHorizontalAngleLimitDegrees  = 0X0070; // float32
            static constexpr std::uintptr_t m_flVerticalAngleLimitDegrees    = 0X0074; // float32
            static constexpr std::uintptr_t m_lookatTarget                   = 0X0078; // Vector
            static constexpr std::uintptr_t m_bIsTargetInWorldSpace          = 0X0084; // bool
            static constexpr std::uintptr_t m_bIsRunningFromDeserializedData = 0X0085; // bool
            static constexpr std::uintptr_t m_flHorizontalAngleDegrees       = 0X0088; // float32
            static constexpr std::uintptr_t m_flVerticalAngleDegrees         = 0X008C; // float32
        };

        // Construct Allowed
        class FootLockPoseOpFixedSettings {
        public:
            static constexpr std::uintptr_t m_footInfo                 = 0X0000; // CUtlVector<FootFixedData_t>
            static constexpr std::uintptr_t m_hipDampingSettings       = 0X0018; // CAnimInputDamping
            static constexpr std::uintptr_t m_nHipBoneIndex            = 0X0030; // int32
            static constexpr std::uintptr_t m_ikSolverType             = 0X0034; // IKSolverType
            static constexpr std::uintptr_t m_bApplyTilt               = 0X0038; // bool
            static constexpr std::uintptr_t m_bApplyHipDrop            = 0X0039; // bool
            static constexpr std::uintptr_t m_bAlwaysUseFallbackHinge  = 0X003A; // bool
            static constexpr std::uintptr_t m_bApplyFootRotationLimits = 0X003B; // bool
            static constexpr std::uintptr_t m_bApplyLegTwistLimits     = 0X003C; // bool
            static constexpr std::uintptr_t m_flMaxFootHeight          = 0X0040; // float32
            static constexpr std::uintptr_t m_flExtensionScale         = 0X0044; // float32
            static constexpr std::uintptr_t m_flMaxLegTwist            = 0X0048; // float32
            static constexpr std::uintptr_t m_bEnableLockBreaking      = 0X004C; // bool
            static constexpr std::uintptr_t m_flLockBreakTolerance     = 0X0050; // float32
            static constexpr std::uintptr_t m_flLockBlendTime          = 0X0054; // float32
            static constexpr std::uintptr_t m_bEnableStretching        = 0X0058; // bool
            static constexpr std::uintptr_t m_flMaxStretchAmount       = 0X005C; // float32
            static constexpr std::uintptr_t m_flStretchExtensionScale  = 0X0060; // float32
        };

        // Has VTable
        // Construct Allowed
        class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_nBoneIndex = 0X0050; // int32
        };

        // Has VTable
        // Construct Allowed
        class CWarpSectionAnimTagBase : public CAnimTagBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CWarpSectionAnimTag : public CWarpSectionAnimTagBase {
        public:
            static constexpr std::uintptr_t m_bWarpPosition    = 0X0050; // bool
            static constexpr std::uintptr_t m_bWarpOrientation = 0X0051; // bool
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_RandomColor : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_Gradient = 0X0048; // CColorGradient
        };

        // Construct Allowed
        class CFootMotion {
        public:
            static constexpr std::uintptr_t m_strides   = 0X0000; // CUtlVector<CFootStride>
            static constexpr std::uintptr_t m_name      = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_bAdditive = 0X0020; // bool
        };

        // Has VTable
        // Construct Allowed
        class CJiggleBoneUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedData = 0X0070; // JiggleBoneSettingsList_t
        };

        // Has VTable
        // Construct Allowed
        class CNmConstVectorNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_value = 0X0010; // Vector
        };

        // Construct Allowed
        struct MoodAnimation_t {
        public:
            static constexpr std::uintptr_t m_sName    = 0X0000; // CModelAnimNameWithDeltas
            static constexpr std::uintptr_t m_flWeight = 0X0008; // float32
        };

        // Has VTable
        // Construct Allowed
        class CLODComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_nServerLOD = 0X0030; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmIsTargetSetNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPhysSurfacePropertiesVehicle {
        public:
            static constexpr std::uintptr_t m_wheelDrag          = 0X0000; // float32
            static constexpr std::uintptr_t m_wheelFrictionScale = 0X0004; // float32
        };

        // Construct Allowed
        class CAnimDataChannelDesc {
        public:
            static constexpr std::uintptr_t m_szChannelClass     = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_szVariableName     = 0X0010; // CBufferString
            static constexpr std::uintptr_t m_nFlags             = 0X0020; // int32
            static constexpr std::uintptr_t m_nType              = 0X0024; // int32
            static constexpr std::uintptr_t m_szGrouping         = 0X0028; // CBufferString
            static constexpr std::uintptr_t m_szDescription      = 0X0038; // CBufferString
            static constexpr std::uintptr_t m_szElementNameArray = 0X0048; // CUtlVector<CBufferString>
            static constexpr std::uintptr_t m_nElementIndexArray = 0X0060; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nElementMaskArray  = 0X0078; // CUtlVector<uint32>
        };

        // Has VTable
        // Construct Allowed
        class CPairedSequenceComponentUpdater : public CAnimComponentUpdater {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmParticleEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_relevance        = 0X0020; // CNmEventRelevance_t
            static constexpr std::uintptr_t m_type             = 0X0024; // CNmParticleEvent::Type_t
            static constexpr std::uintptr_t m_hParticleSystem  = 0X0028; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_tags             = 0X0030; // CUtlString
            static constexpr std::uintptr_t m_bStopImmediately = 0X0038; // bool
            static constexpr std::uintptr_t m_bDetachFromOwner = 0X0039; // bool
            static constexpr std::uintptr_t m_bPlayEndCap      = 0X003A; // bool
            static constexpr std::uintptr_t m_attachmentPoint0 = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_attachmentType0  = 0X0048; // ParticleAttachment_t
            static constexpr std::uintptr_t m_attachmentPoint1 = 0X0050; // CUtlString
            static constexpr std::uintptr_t m_attachmentType1  = 0X0058; // ParticleAttachment_t
            static constexpr std::uintptr_t m_config           = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_effectForConfig  = 0X0068; // CUtlString
        };

        // Construct Allowed
        class CMorphRectData {
        public:
            static constexpr std::uintptr_t m_nXLeftDst    = 0X0000; // int16
            static constexpr std::uintptr_t m_nYTopDst     = 0X0002; // int16
            static constexpr std::uintptr_t m_flUWidthSrc  = 0X0004; // float32
            static constexpr std::uintptr_t m_flVHeightSrc = 0X0008; // float32
            static constexpr std::uintptr_t m_bundleDatas  = 0X0010; // CUtlVector<CMorphBundleData>
        };

        // Construct Allowed
        class CAnimFoot {
        public:
            static constexpr std::uintptr_t m_name           = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_vBallOffset    = 0X0008; // Vector
            static constexpr std::uintptr_t m_vHeelOffset    = 0X0014; // Vector
            static constexpr std::uintptr_t m_ankleBoneIndex = 0X0020; // int32
            static constexpr std::uintptr_t m_toeBoneIndex   = 0X0024; // int32
        };

        // Has VTable
        // Construct Allowed
        class CParentConstraint : public CBaseConstraint {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedVectorNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_mode               = 0X0014; // NmCachedValueMode_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmStateNode__TimedEvent_t {
        public:
            static constexpr std::uintptr_t m_ID                  = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_flTimeValueSeconds  = 0X0008; // float32
            static constexpr std::uintptr_t m_comparisionOperator = 0X000C; // CNmStateNode::TimedEvent_t::Comparison_t
        };

        // Has VTable
        // Construct Allowed
        class CFootPositionMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_footIndices  = 0X0050; // CUtlVector<int32>
            static constexpr std::uintptr_t m_bIgnoreSlope = 0X0068; // bool
        };

        // Construct Allowed
        class CParticleVariableRef {
        public:
            static constexpr std::uintptr_t m_variableName = 0X0000; // CKV3MemberNameWithStorage
            static constexpr std::uintptr_t m_variableType = 0X0038; // CPulseValueFullType
        };

        // Has Trivial Destructor
        // Global Type Scope
        class HSequence {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CDampedValueUpdateItem {
        public:
            static constexpr std::uintptr_t m_damping   = 0X0000; // CAnimInputDamping
            static constexpr std::uintptr_t m_hParamIn  = 0X0020; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParamOut = 0X0022; // CAnimParamHandle
        };

        // Construct Allowed
        class CAnimLocalHierarchy {
        public:
            static constexpr std::uintptr_t m_sBone       = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_sNewParent  = 0X0010; // CBufferString
            static constexpr std::uintptr_t m_nStartFrame = 0X0020; // int32
            static constexpr std::uintptr_t m_nPeakFrame  = 0X0024; // int32
            static constexpr std::uintptr_t m_nTailFrame  = 0X0028; // int32
            static constexpr std::uintptr_t m_nEndFrame   = 0X002C; // int32
        };

        // Has VTable
        // Construct Allowed
        class CBlendUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_children                   = 0X0060; // CUtlVector<CAnimUpdateNodeRef>
            static constexpr std::uintptr_t m_sortedOrder                = 0X0078; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_targetValues               = 0X0090; // CUtlVector<float32>
            static constexpr std::uintptr_t m_blendValueSource           = 0X00AC; // AnimValueSource
            static constexpr std::uintptr_t m_eLinearRootMotionBlendMode = 0X00B0; // LinearRootMotionBlendMode_t
            static constexpr std::uintptr_t m_paramIndex                 = 0X00B4; // CAnimParamHandle
            static constexpr std::uintptr_t m_damping                    = 0X00B8; // CAnimInputDamping
            static constexpr std::uintptr_t m_blendKeyType               = 0X00D0; // BlendKeyType
            static constexpr std::uintptr_t m_bLockBlendOnReset          = 0X00D4; // bool
            static constexpr std::uintptr_t m_bSyncCycles                = 0X00D5; // bool
            static constexpr std::uintptr_t m_bLoop                      = 0X00D6; // bool
            static constexpr std::uintptr_t m_bLockWhenWaning            = 0X00D7; // bool
            static constexpr std::uintptr_t m_bIsAngle                   = 0X00D8; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PulseGraphExecutionHistoryEntry_t {
        public:
            static constexpr std::uintptr_t nCursorID  = 0X0000; // PulseCursorID_t
            static constexpr std::uintptr_t nEditorID  = 0X0004; // PulseDocNodeID_t
            static constexpr std::uintptr_t flExecTime = 0X0008; // float32
            static constexpr std::uintptr_t unFlags    = 0X000C; // uint32
            static constexpr std::uintptr_t tagName    = 0X0010; // PulseSymbol_t
        };

        // Has VTable
        // Construct Allowed
        class CQuaternionAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_defaultValue = 0X0080; // Quaternion
            static constexpr std::uintptr_t m_bInterpolate = 0X0090; // bool
        };

        // Construct Allowed
        struct PermModelData_t {
        public:
            static constexpr std::uintptr_t m_name                       = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_modelInfo                  = 0X0008; // PermModelInfo_t
            static constexpr std::uintptr_t m_ExtParts                   = 0X0060; // CUtlVector<PermModelExtPart_t>
            static constexpr std::uintptr_t m_refMeshes                  = 0X0078; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
            static constexpr std::uintptr_t m_refMeshGroupMasks          = 0X0090; // CUtlVector<uint64>
            static constexpr std::uintptr_t m_refPhysGroupMasks          = 0X00A8; // CUtlVector<uint64>
            static constexpr std::uintptr_t m_refLODGroupMasks           = 0X00C0; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_lodGroupSwitchDistances    = 0X00D8; // CUtlVector<float32>
            static constexpr std::uintptr_t m_refPhysicsData             = 0X00F0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
            static constexpr std::uintptr_t m_refPhysicsHitboxData       = 0X0108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
            static constexpr std::uintptr_t m_refAnimGroups              = 0X0120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
            static constexpr std::uintptr_t m_refSequenceGroups          = 0X0138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
            static constexpr std::uintptr_t m_meshGroups                 = 0X0150; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_materialGroups             = 0X0168; // CUtlVector<MaterialGroup_t>
            static constexpr std::uintptr_t m_nDefaultMeshGroupMask      = 0X0180; // uint64
            static constexpr std::uintptr_t m_modelSkeleton              = 0X0188; // ModelSkeletonData_t
            static constexpr std::uintptr_t m_remappingTable             = 0X0230; // CUtlVector<int16>
            static constexpr std::uintptr_t m_remappingTableStarts       = 0X0248; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_boneFlexDrivers            = 0X0260; // CUtlVector<ModelBoneFlexDriver_t>
            static constexpr std::uintptr_t m_pModelConfigList           = 0X0278; // CModelConfigList*
            static constexpr std::uintptr_t m_BodyGroupsHiddenInTools    = 0X0280; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_refAnimIncludeModels       = 0X0298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_AnimatedMaterialAttributes = 0X02B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
            static constexpr std::uintptr_t m_animGraph2Refs             = 0X02C8; // CUtlVector<ModelAnimGraph2Ref_t>
            static constexpr std::uintptr_t m_vecNmSkeletonRefs          = 0X02E0; // CUtlVector<CStrongHandle<InfoForResourceTypeCNmSkeleton>>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseCursorYieldToken_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmSampleTask : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CStaticPoseCache {
        public:
            static constexpr std::uintptr_t m_poses       = 0X0010; // CUtlVector<CCachedPose>
            static constexpr std::uintptr_t m_nBoneCount  = 0X0028; // int32
            static constexpr std::uintptr_t m_nMorphCount = 0X002C; // int32
        };

        // Has VTable
        // Construct Allowed
        class CStaticPoseCacheBuilder : public CStaticPoseCache {
        public:
        };

        // Construct Allowed
        struct ModelMeshBufferData_t {
        public:
            static constexpr std::uintptr_t m_nBlockIndex           = 0X0000; // int32
            static constexpr std::uintptr_t m_nElementCount         = 0X0004; // uint32
            static constexpr std::uintptr_t m_nElementSizeInBytes   = 0X0008; // uint32
            static constexpr std::uintptr_t m_bMeshoptCompressed    = 0X000C; // bool
            static constexpr std::uintptr_t m_bMeshoptIndexSequence = 0X000D; // bool
            static constexpr std::uintptr_t m_bCompressedZSTD       = 0X000E; // bool
            static constexpr std::uintptr_t m_bCreateBufferSRV      = 0X000F; // bool
            static constexpr std::uintptr_t m_bCreateBufferUAV      = 0X0010; // bool
            static constexpr std::uintptr_t m_bCreateRawBuffer      = 0X0011; // bool
            static constexpr std::uintptr_t m_bCreatePooledBuffer   = 0X0012; // bool
            static constexpr std::uintptr_t m_nBufferUsage          = 0X0013; // uint8
            static constexpr std::uintptr_t m_inputLayoutFields     = 0X0018; // CUtlVector<RenderInputLayoutField_t>
        };

        // Has VTable
        // Construct Allowed
        class CSequenceGroupData {
        public:
            static constexpr std::uintptr_t m_sName                    = 0X0010; // CBufferString
            static constexpr std::uintptr_t m_nFlags                   = 0X0020; // uint32
            static constexpr std::uintptr_t m_localSequenceNameArray   = 0X0028; // CUtlVector<CBufferString>
            static constexpr std::uintptr_t m_localS1SeqDescArray      = 0X0040; // CUtlVector<CSeqS1SeqDesc>
            static constexpr std::uintptr_t m_localMultiSeqDescArray   = 0X0058; // CUtlVector<CSeqS1SeqDesc>
            static constexpr std::uintptr_t m_localSynthAnimDescArray  = 0X0070; // CUtlVector<CSeqSynthAnimDesc>
            static constexpr std::uintptr_t m_localCmdSeqDescArray     = 0X0088; // CUtlVector<CSeqCmdSeqDesc>
            static constexpr std::uintptr_t m_localBoneMaskArray       = 0X00A0; // CUtlVector<CSeqBoneMaskList>
            static constexpr std::uintptr_t m_localScaleSetArray       = 0X00B8; // CUtlVector<CSeqScaleSet>
            static constexpr std::uintptr_t m_localBoneNameArray       = 0X00D0; // CUtlVector<CBufferString>
            static constexpr std::uintptr_t m_localNodeName            = 0X00E8; // CBufferString
            static constexpr std::uintptr_t m_localPoseParamArray      = 0X00F8; // CUtlVector<CSeqPoseParamDesc>
            static constexpr std::uintptr_t m_keyValues                = 0X0110; // KeyValues3
            static constexpr std::uintptr_t m_localIKAutoplayLockArray = 0X0120; // CUtlVector<CSeqIKLock>
        };

        // Has VTable
        // Construct Allowed
        class CStateMachineUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_stateMachine         = 0X0070; // CAnimStateMachineUpdater
            static constexpr std::uintptr_t m_stateData            = 0X00C8; // CUtlVector<CStateNodeStateData>
            static constexpr std::uintptr_t m_transitionData       = 0X00E0; // CUtlVector<CStateNodeTransitionData>
            static constexpr std::uintptr_t m_bBlockWaningTags     = 0X00FC; // bool
            static constexpr std::uintptr_t m_bLockStateWhenWaning = 0X00FD; // bool
            static constexpr std::uintptr_t m_bResetWhenActivated  = 0X00FE; // bool
        };

        // Has VTable
        // Construct Allowed
        class CAimMatrixUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedSettings = 0X0070; // AimMatrixOpFixedSettings_t
            static constexpr std::uintptr_t m_target          = 0X0168; // AnimVectorSource
            static constexpr std::uintptr_t m_paramIndex      = 0X016C; // CAnimParamHandle
            static constexpr std::uintptr_t m_hSequence       = 0X0170; // HSequence
            static constexpr std::uintptr_t m_bResetChild     = 0X0174; // bool
            static constexpr std::uintptr_t m_bLockWhenWaning = 0X0175; // bool
        };

        // Construct Allowed
        struct SkeletonAnimCapture_t__Frame_t {
        public:
            static constexpr std::uintptr_t m_flTime                = 0X0000; // float32
            static constexpr std::uintptr_t m_Stamp                 = 0X0004; // SkeletonAnimCapture_t::FrameStamp_t
            static constexpr std::uintptr_t m_Transform             = 0X0020; // CTransform
            static constexpr std::uintptr_t m_bTeleport             = 0X0040; // bool
            static constexpr std::uintptr_t m_CompositeBones        = 0X0048; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_SimStateBones         = 0X0060; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_FeModelAnims          = 0X0078; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_FeModelPos            = 0X0090; // CUtlVector<VectorAligned>
            static constexpr std::uintptr_t m_FlexControllerWeights = 0X00A8; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_Command : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_Command = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_Args    = 0X0050; // KeyValues3
        };

        // Construct Allowed
        class CAnimEventDefinition {
        public:
            static constexpr std::uintptr_t m_nFrame         = 0X0008; // int32
            static constexpr std::uintptr_t m_nEndFrame      = 0X000C; // int32
            static constexpr std::uintptr_t m_flCycle        = 0X0010; // float32
            static constexpr std::uintptr_t m_flDuration     = 0X0014; // float32
            static constexpr std::uintptr_t m_EventData      = 0X0018; // KeyValues3
            static constexpr std::uintptr_t m_sLegacyOptions = 0X0028; // CBufferString
            static constexpr std::uintptr_t m_sEventName     = 0X0038; // CGlobalSymbol
        };

        // Construct Allowed
        class CNmRootMotionData {
        public:
            static constexpr std::uintptr_t m_transforms                      = 0X0000; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_nNumFrames                      = 0X0018; // int32
            static constexpr std::uintptr_t m_flAverageLinearVelocity         = 0X001C; // float32
            static constexpr std::uintptr_t m_flAverageAngularVelocityRadians = 0X0020; // float32
            static constexpr std::uintptr_t m_totalDelta                      = 0X0030; // CTransform
        };

        // Construct Allowed
        class CPulseGraphExecutionHistory {
        public:
            static constexpr std::uintptr_t m_nInstanceID   = 0X0000; // PulseGraphInstanceID_t
            static constexpr std::uintptr_t m_strFileName   = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_vecHistory    = 0X0010; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
            static constexpr std::uintptr_t m_mapCellDesc   = 0X0028; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
            static constexpr std::uintptr_t m_mapCursorDesc = 0X0050; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimScriptHandle {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CFlexOp {
        public:
            static constexpr std::uintptr_t m_OpCode = 0X0000; // FlexOpCode_t
            static constexpr std::uintptr_t m_Data   = 0X0004; // int32
        };

        // Has VTable
        // Construct Allowed
        class CHitReactUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedSettings       = 0X0070; // HitReactFixedSettings_t
            static constexpr std::uintptr_t m_triggerParam          = 0X00BC; // CAnimParamHandle
            static constexpr std::uintptr_t m_hitBoneParam          = 0X00BE; // CAnimParamHandle
            static constexpr std::uintptr_t m_hitOffsetParam        = 0X00C0; // CAnimParamHandle
            static constexpr std::uintptr_t m_hitDirectionParam     = 0X00C2; // CAnimParamHandle
            static constexpr std::uintptr_t m_hitStrengthParam      = 0X00C4; // CAnimParamHandle
            static constexpr std::uintptr_t m_flMinDelayBetweenHits = 0X00C8; // float32
            static constexpr std::uintptr_t m_bResetChild           = 0X00CC; // bool
        };

        // Has VTable
        // Construct Allowed
        class CLookAtUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedSettings  = 0X0070; // LookAtOpFixedSettings_t
            static constexpr std::uintptr_t m_target           = 0X0148; // AnimVectorSource
            static constexpr std::uintptr_t m_paramIndex       = 0X014C; // CAnimParamHandle
            static constexpr std::uintptr_t m_weightParamIndex = 0X014E; // CAnimParamHandle
            static constexpr std::uintptr_t m_bResetChild      = 0X0150; // bool
            static constexpr std::uintptr_t m_bLockWhenWaning  = 0X0151; // bool
        };

        // Construct Allowed
        class CAnimBone {
        public:
            static constexpr std::uintptr_t m_name       = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_parent     = 0X0010; // int32
            static constexpr std::uintptr_t m_pos        = 0X0014; // Vector
            static constexpr std::uintptr_t m_quat       = 0X0020; // QuaternionStorage
            static constexpr std::uintptr_t m_scale      = 0X0030; // float32
            static constexpr std::uintptr_t m_qAlignment = 0X0034; // QuaternionStorage
            static constexpr std::uintptr_t m_flags      = 0X0044; // int32
        };

        // Has VTable
        // Construct Allowed
        class CAnimParameterManagerUpdater {
        public:
            static constexpr std::uintptr_t m_parameters      = 0X0018; // CUtlVector<CSmartPtr<CAnimParameterBase>>
            static constexpr std::uintptr_t m_idToIndexMap    = 0X0030; // CUtlHashtable<AnimParamID,int32>
            static constexpr std::uintptr_t m_nameToIndexMap  = 0X0050; // CUtlHashtable<CUtlString,int32>
            static constexpr std::uintptr_t m_indexToHandle   = 0X0070; // CUtlVector<CAnimParamHandle>
            static constexpr std::uintptr_t m_autoResetParams = 0X0088; // CUtlVector<std::pair<CAnimParamHandle,CAnimVariant>>
            static constexpr std::uintptr_t m_autoResetMap    = 0X00A0; // CUtlHashtable<CAnimParamHandle,int16>
        };

        // Construct Allowed
        struct BoneDemoCaptureSettings_t {
        public:
            static constexpr std::uintptr_t m_boneName                          = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_flErrorSplineRotationMax          = 0X0008; // float32
            static constexpr std::uintptr_t m_flErrorSplineTranslationMax       = 0X000C; // float32
            static constexpr std::uintptr_t m_flErrorSplineScaleMax             = 0X0010; // float32
            static constexpr std::uintptr_t m_flErrorQuantizationRotationMax    = 0X0014; // float32
            static constexpr std::uintptr_t m_flErrorQuantizationTranslationMax = 0X0018; // float32
            static constexpr std::uintptr_t m_flErrorQuantizationScaleMax       = 0X001C; // float32
        };

        struct CBoneConstraintPoseSpaceMorph__Input_t {
        public:
            static constexpr std::uintptr_t m_inputValue       = 0X0000; // Vector
            static constexpr std::uintptr_t m_outputWeightList = 0X0010; // CUtlVector<float32>
        };

        // Construct Allowed
        struct MoodAnimationLayer_t {
        public:
            static constexpr std::uintptr_t m_sName            = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_bActiveListening = 0X0008; // bool
            static constexpr std::uintptr_t m_bActiveTalking   = 0X0009; // bool
            static constexpr std::uintptr_t m_layerAnimations  = 0X0010; // CUtlVector<MoodAnimation_t>
            static constexpr std::uintptr_t m_flIntensity      = 0X0028; // CRangeFloat
            static constexpr std::uintptr_t m_flDurationScale  = 0X0030; // CRangeFloat
            static constexpr std::uintptr_t m_bScaleWithInts   = 0X0038; // bool
            static constexpr std::uintptr_t m_flNextStart      = 0X003C; // CRangeFloat
            static constexpr std::uintptr_t m_flStartOffset    = 0X0044; // CRangeFloat
            static constexpr std::uintptr_t m_flEndOffset      = 0X004C; // CRangeFloat
            static constexpr std::uintptr_t m_flFadeIn         = 0X0054; // float32
            static constexpr std::uintptr_t m_flFadeOut        = 0X0058; // float32
        };

        // Has VTable
        // Construct Allowed
        class CSpeedScaleUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_paramIndex = 0X0070; // CAnimParamHandle
        };

        // Construct Allowed
        class CSequenceTagSpans {
        public:
            static constexpr std::uintptr_t m_sSequenceName = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_tags          = 0X0008; // CUtlVector<TagSpan_t>
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_GroupName = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_nChoice   = 0X0050; // int32
        };

        // Has VTable
        // Construct Allowed
        class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CAnimReplayFrame {
        public:
            static constexpr std::uintptr_t m_inputDataBlocks               = 0X0010; // CUtlVector<CUtlBinaryBlock>
            static constexpr std::uintptr_t m_instanceData                  = 0X0028; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_startingLocalToWorldTransform = 0X0040; // CTransform
            static constexpr std::uintptr_t m_localToWorldTransform         = 0X0060; // CTransform
            static constexpr std::uintptr_t m_timeStamp                     = 0X0080; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmTransitionEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_rule = 0X0020; // NmTransitionRule_t
            static constexpr std::uintptr_t m_ID   = 0X0028; // CGlobalSymbol
        };

        // Construct Allowed
        class CNmIKRig {
        public:
            static constexpr std::uintptr_t m_skeleton  = 0X0000; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            static constexpr std::uintptr_t m_vecBodies = 0X0008; // CUtlVector<CNmIKBody>
            static constexpr std::uintptr_t m_vecJoints = 0X0020; // CUtlVector<CNmIKJoint>
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatCurveEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_ID    = 0X0020; // CGlobalSymbol
            static constexpr std::uintptr_t m_curve = 0X0028; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CParticleTransformInput : public CParticleInput {
        public:
            static constexpr std::uintptr_t m_nType                 = 0X0010; // ParticleTransformType_t
            static constexpr std::uintptr_t m_NamedValue            = 0X0018; // CParticleNamedValueRef
            static constexpr std::uintptr_t m_bFollowNamedValue     = 0X0058; // bool
            static constexpr std::uintptr_t m_bSupportsDisabled     = 0X0059; // bool
            static constexpr std::uintptr_t m_bUseOrientation       = 0X005A; // bool
            static constexpr std::uintptr_t m_nControlPoint         = 0X005C; // int32
            static constexpr std::uintptr_t m_nControlPointRangeMax = 0X0060; // int32
            static constexpr std::uintptr_t m_flEndCPGrowthTime     = 0X0064; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PGDInstruction_t {
        public:
            static constexpr std::uintptr_t m_nCode                   = 0X0000; // PulseInstructionCode_t
            static constexpr std::uintptr_t m_nVar                    = 0X0004; // PulseRuntimeVarIndex_t
            static constexpr std::uintptr_t m_nReg0                   = 0X0008; // PulseRuntimeRegisterIndex_t
            static constexpr std::uintptr_t m_nReg1                   = 0X000A; // PulseRuntimeRegisterIndex_t
            static constexpr std::uintptr_t m_nReg2                   = 0X000C; // PulseRuntimeRegisterIndex_t
            static constexpr std::uintptr_t m_nInvokeBindingIndex     = 0X0010; // PulseRuntimeInvokeIndex_t
            static constexpr std::uintptr_t m_nChunk                  = 0X0014; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nDestInstruction        = 0X0018; // int32
            static constexpr std::uintptr_t m_nCallInfoIndex          = 0X001C; // PulseRuntimeCallInfoIndex_t
            static constexpr std::uintptr_t m_nConstIdx               = 0X0020; // PulseRuntimeConstantIndex_t
            static constexpr std::uintptr_t m_nDomainValueIdx         = 0X0022; // PulseRuntimeDomainValueIndex_t
            static constexpr std::uintptr_t m_nBlackboardReferenceIdx = 0X0024; // PulseRuntimeBlackboardReferenceIndex_t
        };

        // Has VTable
        // Construct Allowed
        class CNmFootstepEventPercentageThroughNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_phaseCondition      = 0X0012; // NmFootPhaseCondition_t
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
        };

        // Construct Allowed
        struct AimCameraOpFixedSettings_t {
        public:
            static constexpr std::uintptr_t m_nChainIndex              = 0X0000; // int32
            static constexpr std::uintptr_t m_nCameraJointIndex        = 0X0004; // int32
            static constexpr std::uintptr_t m_nPelvisJointIndex        = 0X0008; // int32
            static constexpr std::uintptr_t m_nClavicleLeftJointIndex  = 0X000C; // int32
            static constexpr std::uintptr_t m_nClavicleRightJointIndex = 0X0010; // int32
            static constexpr std::uintptr_t m_nDepenetrationJointIndex = 0X0014; // int32
            static constexpr std::uintptr_t m_propJoints               = 0X0018; // CUtlVector<int32>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SkeletonAnimCapture_t__Camera_t {
        public:
            static constexpr std::uintptr_t m_tmCamera = 0X0000; // CTransform
            static constexpr std::uintptr_t m_flTime   = 0X0020; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmGraphEventConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
            static constexpr std::uintptr_t m_conditions          = 0X0018; // CUtlVectorFixedGrowable<CNmGraphEventConditionNode::Condition_t,5>
        };

        // Has VTable
        // Construct Allowed
        class CFollowAttachmentUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedData = 0X0070; // FollowAttachmentSettings_t
        };

        // Has VTable
        // Construct Allowed
        class CMovementComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_motors             = 0X0030; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
            static constexpr std::uintptr_t m_facingDamping      = 0X0048; // CAnimInputDamping
            static constexpr std::uintptr_t m_nDefaultMotorIndex = 0X0068; // int32
            static constexpr std::uintptr_t m_flDefaultRunSpeed  = 0X006C; // float32
            static constexpr std::uintptr_t m_bMoveVarsDisabled  = 0X0070; // bool
            static constexpr std::uintptr_t m_bNetworkPath       = 0X0071; // bool
            static constexpr std::uintptr_t m_bNetworkFacing     = 0X0072; // bool
            static constexpr std::uintptr_t m_paramHandles       = 0X0073; // CAnimParamHandle[34]
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_SetMaterialGroup : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_MaterialGroupName = 0X0048; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNmIKJoint {
        public:
            static constexpr std::uintptr_t m_nParentIndex    = 0X0000; // int32
            static constexpr std::uintptr_t m_nBodyIndex      = 0X0004; // int32
            static constexpr std::uintptr_t m_xLocalFrame     = 0X0010; // CTransform
            static constexpr std::uintptr_t m_flSwingLimit    = 0X0030; // float32
            static constexpr std::uintptr_t m_flMinTwistLimit = 0X0034; // float32
            static constexpr std::uintptr_t m_flMaxTwistLimit = 0X0038; // float32
            static constexpr std::uintptr_t m_flWeight        = 0X003C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_flDistance = 0X0050; // float32
            static constexpr std::uintptr_t m_flTime     = 0X0054; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct NmCompressionSettings_t {
        public:
            static constexpr std::uintptr_t m_translationRangeX    = 0X0000; // NmCompressionSettings_t::QuantizationRange_t
            static constexpr std::uintptr_t m_translationRangeY    = 0X0008; // NmCompressionSettings_t::QuantizationRange_t
            static constexpr std::uintptr_t m_translationRangeZ    = 0X0010; // NmCompressionSettings_t::QuantizationRange_t
            static constexpr std::uintptr_t m_scaleRange           = 0X0018; // NmCompressionSettings_t::QuantizationRange_t
            static constexpr std::uintptr_t m_constantRotation     = 0X0020; // Quaternion
            static constexpr std::uintptr_t m_bIsRotationStatic    = 0X0030; // bool
            static constexpr std::uintptr_t m_bIsTranslationStatic = 0X0031; // bool
            static constexpr std::uintptr_t m_bIsScaleStatic       = 0X0032; // bool
        };

        // Construct Allowed
        class CPulse_Variable {
        public:
            static constexpr std::uintptr_t m_Name                        = 0X0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_Description                 = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_Type                        = 0X0018; // CPulseValueFullType
            static constexpr std::uintptr_t m_DefaultValue                = 0X0030; // KeyValues3
            static constexpr std::uintptr_t m_nKeysSource                 = 0X0044; // PulseVariableKeysSource_t
            static constexpr std::uintptr_t m_bIsPublicBlackboardVariable = 0X0048; // bool
            static constexpr std::uintptr_t m_bIsObservable               = 0X0049; // bool
            static constexpr std::uintptr_t m_nEditorNodeID               = 0X004C; // PulseDocNodeID_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class PARTICLE_EHANDLE__ {
        public:
            static constexpr std::uintptr_t unused = 0X0000; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBinaryUpdateNode : public CAnimUpdateNodeBase {
        public:
            static constexpr std::uintptr_t m_pChild1        = 0X0060; // CAnimUpdateNodeRef
            static constexpr std::uintptr_t m_pChild2        = 0X0070; // CAnimUpdateNodeRef
            static constexpr std::uintptr_t m_timingBehavior = 0X0080; // BinaryNodeTiming
            static constexpr std::uintptr_t m_flTimingBlend  = 0X0084; // float32
            static constexpr std::uintptr_t m_bResetChild1   = 0X0088; // bool
            static constexpr std::uintptr_t m_bResetChild2   = 0X0089; // bool
        };

        // Has VTable
        // Construct Allowed
        class CAddUpdateNode : public CBinaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_footMotionTiming         = 0X0094; // BinaryNodeChildOption
            static constexpr std::uintptr_t m_bApplyToFootMotion       = 0X0098; // bool
            static constexpr std::uintptr_t m_bApplyChannelsSeparately = 0X0099; // bool
            static constexpr std::uintptr_t m_bUseModelSpace           = 0X009A; // bool
            static constexpr std::uintptr_t m_bApplyScale              = 0X009B; // bool
        };

        // Has Trivial Destructor
        class CAnimEnum {
        public:
            static constexpr std::uintptr_t m_value = 0X0000; // uint8
        };

        // Has VTable
        // Construct Allowed
        class CDemoSettingsComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_settings = 0X0030; // CAnimDemoCaptureSettings
        };

        // Construct Allowed
        class CAnimDecoder {
        public:
            static constexpr std::uintptr_t m_szName   = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_nVersion = 0X0010; // int32
            static constexpr std::uintptr_t m_nType    = 0X0014; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedTargetNode__CDefinition : public CNmTargetValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_mode               = 0X0014; // NmCachedValueMode_t
        };

        // Has VTable
        // Construct Allowed
        class CPerParticleFloatInput : public CParticleFloatInput {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmConstBoolNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_bValue = 0X0010; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNmBitFlags {
        public:
            static constexpr std::uintptr_t m_flags = 0X0000; // uint32
        };

        // Construct Allowed
        class CFootStride {
        public:
            static constexpr std::uintptr_t m_definition   = 0X0000; // CFootCycleDefinition
            static constexpr std::uintptr_t m_trajectories = 0X0040; // CFootTrajectories
        };

        // Construct Allowed
        struct CSceneObjectData__RTProxyDrawDescriptor_t {
        public:
            static constexpr std::uintptr_t m_drawDesc            = 0X0000; // CMaterialDrawDescriptor
            static constexpr std::uintptr_t m_mWorldFromLocal     = 0X0108; // matrix3x4_t
            static constexpr std::uintptr_t m_nVertexAlbedoFormat = 0X0138; // VertexAlbedoFormat_t
            static constexpr std::uintptr_t m_nVertexAlbedoVB     = 0X0139; // int8
            static constexpr std::uintptr_t m_nVertexAlbedoOffset = 0X013A; // uint16
            static constexpr std::uintptr_t m_nVertexAlbedoStride = 0X013C; // uint16
        };

        // Has VTable
        // Construct Allowed
        class CNmLegacyEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_animEventClassName = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_KV                 = 0X0028; // KeyValues3
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CStateNodeStateData {
        public:
            static constexpr std::uintptr_t m_pChild                         = 0X0000; // CAnimUpdateNodeRef
            static constexpr std::uintptr_t m_bExclusiveRootMotion           = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bExclusiveRootMotionFirstFrame = 0X0000; // bitfield:1
        };

        // Has VTable
        // Construct Allowed
        class CFootstepLandedAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_FootstepType          = 0X0058; // FootstepLandedFootSoundType_t
            static constexpr std::uintptr_t m_OverrideSoundName     = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_DebugAnimSourceString = 0X0068; // CUtlString
            static constexpr std::uintptr_t m_BoneName              = 0X0070; // CUtlString
            static constexpr std::uintptr_t m_footstepJumpPhase     = 0X0078; // FootstepJumpPhase_t
        };

        // Has VTable
        // Construct Allowed
        class CEnumAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_defaultValue      = 0X0088; // uint8
            static constexpr std::uintptr_t m_enumOptions       = 0X0090; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_vecEnumReferenced = 0X00A8; // CUtlVector<uint64>
        };

        // Has VTable
        // Construct Allowed
        class CHandshakeAnimTagBase : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_bIsDisableTag = 0X0050; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimTagID {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Construct Allowed
        class CAnimFrameSegment {
        public:
            static constexpr std::uintptr_t m_nUniqueFrameIndex  = 0X0000; // int32
            static constexpr std::uintptr_t m_nLocalElementMasks = 0X0004; // uint32
            static constexpr std::uintptr_t m_nLocalChannel      = 0X0008; // int32
            static constexpr std::uintptr_t m_container          = 0X0010; // CUtlBinaryBlock
        };

        // Has VTable
        // Construct Allowed
        class CSlopeComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_flTraceDistance         = 0X0034; // float32
            static constexpr std::uintptr_t m_hSlopeAngle             = 0X0038; // CAnimParamHandle
            static constexpr std::uintptr_t m_hSlopeAngleFront        = 0X003A; // CAnimParamHandle
            static constexpr std::uintptr_t m_hSlopeAngleSide         = 0X003C; // CAnimParamHandle
            static constexpr std::uintptr_t m_hSlopeHeading           = 0X003E; // CAnimParamHandle
            static constexpr std::uintptr_t m_hSlopeNormal            = 0X0040; // CAnimParamHandle
            static constexpr std::uintptr_t m_hSlopeNormal_WorldSpace = 0X0042; // CAnimParamHandle
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CAnimInputDamping {
        public:
            static constexpr std::uintptr_t m_speedFunction      = 0X0008; // DampingSpeedFunction
            static constexpr std::uintptr_t m_fSpeedScale        = 0X000C; // float32
            static constexpr std::uintptr_t m_fFallingSpeedScale = 0X0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNmIKBody {
        public:
            static constexpr std::uintptr_t m_flMass           = 0X0000; // float32
            static constexpr std::uintptr_t m_vLocalMassCenter = 0X0004; // Vector
            static constexpr std::uintptr_t m_vRadius          = 0X0010; // Vector
            static constexpr std::uintptr_t m_flResistance     = 0X001C; // float32
        };

        // Construct Allowed
        class CHitBoxSet {
        public:
            static constexpr std::uintptr_t m_name           = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash      = 0X0008; // uint32
            static constexpr std::uintptr_t m_HitBoxes       = 0X0010; // CUtlVector<CHitBox>
            static constexpr std::uintptr_t m_SourceFilename = 0X0028; // CUtlString
        };

        // Construct Allowed
        struct ChainToSolveData_t {
        public:
            static constexpr std::uintptr_t m_nChainIndex            = 0X0000; // int32
            static constexpr std::uintptr_t m_SolverSettings         = 0X0004; // IKSolverSettings_t
            static constexpr std::uintptr_t m_TargetSettings         = 0X0010; // IKTargetSettings_t
            static constexpr std::uintptr_t m_DebugSetting           = 0X0038; // SolveIKChainAnimNodeDebugSetting
            static constexpr std::uintptr_t m_flDebugNormalizedValue = 0X003C; // float32
            static constexpr std::uintptr_t m_vDebugOffset           = 0X0040; // VectorAligned
        };

        // Construct Allowed
        class CConstraintSlave {
        public:
            static constexpr std::uintptr_t m_qBaseOrientation = 0X0000; // Quaternion
            static constexpr std::uintptr_t m_vBasePosition    = 0X0010; // Vector
            static constexpr std::uintptr_t m_nBoneHash        = 0X001C; // uint32
            static constexpr std::uintptr_t m_flWeight         = 0X0020; // float32
            static constexpr std::uintptr_t m_sName            = 0X0028; // CUtlString
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeOutputIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CFootCycleDefinition {
        public:
            static constexpr std::uintptr_t m_vStancePositionMS   = 0X0000; // Vector
            static constexpr std::uintptr_t m_vMidpointPositionMS = 0X000C; // Vector
            static constexpr std::uintptr_t m_flStanceDirectionMS = 0X0018; // float32
            static constexpr std::uintptr_t m_vToStrideStartPos   = 0X001C; // Vector
            static constexpr std::uintptr_t m_stanceCycle         = 0X0028; // CAnimCycle
            static constexpr std::uintptr_t m_footLiftCycle       = 0X002C; // CFootCycle
            static constexpr std::uintptr_t m_footOffCycle        = 0X0030; // CFootCycle
            static constexpr std::uintptr_t m_footStrikeCycle     = 0X0034; // CFootCycle
            static constexpr std::uintptr_t m_footLandCycle       = 0X0038; // CFootCycle
        };

        // Has VTable
        // Construct Allowed
        class CVirtualAnimParameter : public CAnimParameterBase {
        public:
            static constexpr std::uintptr_t m_expressionString = 0X0070; // CUtlString
            static constexpr std::uintptr_t m_eParamType       = 0X0078; // AnimParamType_t
        };

        // Has VTable
        // Construct Allowed
        class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_flDistance         = 0X0050; // float32
            static constexpr std::uintptr_t m_flStoppingDistance = 0X0054; // float32
            static constexpr std::uintptr_t m_flTargetSpeed      = 0X0058; // float32
            static constexpr std::uintptr_t m_eMode              = 0X005C; // VelocityMetricMode
        };

        // Construct Allowed
        struct CNmSkeleton__SecondarySkeleton_t {
        public:
            static constexpr std::uintptr_t m_attachToBoneID = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_skeleton       = 0X0008; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
        };

        // Has VTable
        // Construct Allowed
        class CSetParameterActionUpdater : public CAnimActionUpdater {
        public:
            static constexpr std::uintptr_t m_hParam = 0X0018; // CAnimParamHandle
            static constexpr std::uintptr_t m_value  = 0X001A; // CAnimVariant
        };

        // Has VTable
        // Construct Allowed
        class CNmFixedWeightBoneMaskNode__CDefinition : public CNmBoneMaskValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_flBoneWeight = 0X0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SkeletonAnimCapture_t__FrameStamp_t {
        public:
            static constexpr std::uintptr_t m_flTime          = 0X0000; // float32
            static constexpr std::uintptr_t m_flEntitySimTime = 0X0004; // float32
            static constexpr std::uintptr_t m_bTeleportTick   = 0X0008; // bool
            static constexpr std::uintptr_t m_bPredicted      = 0X0009; // bool
            static constexpr std::uintptr_t m_flCurTime       = 0X000C; // float32
            static constexpr std::uintptr_t m_flRealTime      = 0X0010; // float32
            static constexpr std::uintptr_t m_nFrameCount     = 0X0014; // int32
            static constexpr std::uintptr_t m_nTickCount      = 0X0018; // int32
        };

        // Construct Allowed
        class CPulse_DomainValue {
        public:
            static constexpr std::uintptr_t m_nType               = 0X0000; // PulseDomainValueType_t
            static constexpr std::uintptr_t m_Value               = 0X0008; // CGlobalSymbolCaseSensitive
            static constexpr std::uintptr_t m_RequiredRuntimeType = 0X0010; // CPulseValueFullType
        };

        // Has VTable
        // Construct Allowed
        class CBonePositionMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_nBoneIndex = 0X0050; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CRenderBufferBinding {
        public:
            static constexpr std::uintptr_t m_hBuffer          = 0X0000; // uint64
            static constexpr std::uintptr_t m_nBindOffsetBytes = 0X0010; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CParticleCollectionFloatInput : public CParticleFloatInput {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CParticleCollectionRendererFloatInput : public CParticleCollectionFloatInput {
        public:
        };

        // Construct Allowed
        struct CNmParameterizedBlendNode__Parameterization_t {
        public:
            static constexpr std::uintptr_t m_blendRanges    = 0X0000; // CUtlLeanVectorFixedGrowable<CNmParameterizedBlendNode::BlendRange_t,5>
            static constexpr std::uintptr_t m_parameterRange = 0X0048; // Range_t
        };

        // Has VTable
        // Construct Allowed
        class CNmEntityAttributeIntEvent : public CNmEntityAttributeEventBase {
        public:
            static constexpr std::uintptr_t m_nIntValue = 0X0038; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmNotNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CMeshletDescriptor {
        public:
            static constexpr std::uintptr_t m_PackedAABB      = 0X0000; // PackedAABB_t
            static constexpr std::uintptr_t m_CullingData     = 0X0008; // CDrawCullingData
            static constexpr std::uintptr_t m_nVertexOffset   = 0X000C; // uint32
            static constexpr std::uintptr_t m_nTriangleOffset = 0X0010; // uint32
            static constexpr std::uintptr_t m_nVertexCount    = 0X0014; // uint8
            static constexpr std::uintptr_t m_nTriangleCount  = 0X0015; // uint8
        };

        // Has VTable
        // Construct Allowed
        class CMorphSetData {
        public:
            static constexpr std::uintptr_t m_nWidth          = 0X0010; // int32
            static constexpr std::uintptr_t m_nHeight         = 0X0014; // int32
            static constexpr std::uintptr_t m_bundleTypes     = 0X0018; // CUtlVector<MorphBundleType_t>
            static constexpr std::uintptr_t m_morphDatas      = 0X0030; // CUtlVector<CMorphData>
            static constexpr std::uintptr_t m_pTextureAtlas   = 0X0048; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_FlexDesc        = 0X0050; // CUtlVector<CFlexDesc>
            static constexpr std::uintptr_t m_FlexControllers = 0X0068; // CUtlVector<CFlexController>
            static constexpr std::uintptr_t m_FlexRules       = 0X0080; // CUtlVector<CFlexRule>
        };

        // Has VTable
        // Construct Allowed
        class CNmAndNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_conditionNodeIndices = 0X0010; // CUtlLeanVectorFixedGrowable<int16,4>
        };

        // Has VTable
        // Construct Allowed
        class CMorphConstraint : public CBaseConstraint {
        public:
            static constexpr std::uintptr_t m_sTargetMorph  = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_nSlaveChannel = 0X0068; // int32
            static constexpr std::uintptr_t m_flMin         = 0X006C; // float32
            static constexpr std::uintptr_t m_flMax         = 0X0070; // float32
        };

        // Has VTable
        // Construct Allowed
        class CClothSettingsAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_flStiffness = 0X0058; // float32
            static constexpr std::uintptr_t m_flEaseIn    = 0X005C; // float32
            static constexpr std::uintptr_t m_flEaseOut   = 0X0060; // float32
            static constexpr std::uintptr_t m_nVertexSet  = 0X0068; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimDesc_Flag {
        public:
            static constexpr std::uintptr_t m_bLooping                = 0X0000; // bool
            static constexpr std::uintptr_t m_bAllZeros               = 0X0001; // bool
            static constexpr std::uintptr_t m_bHidden                 = 0X0002; // bool
            static constexpr std::uintptr_t m_bDelta                  = 0X0003; // bool
            static constexpr std::uintptr_t m_bLegacyWorldspace       = 0X0004; // bool
            static constexpr std::uintptr_t m_bModelDoc               = 0X0005; // bool
            static constexpr std::uintptr_t m_bImplicitSeqIgnoreDelta = 0X0006; // bool
            static constexpr std::uintptr_t m_bAnimGraphAdditive      = 0X0007; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmBlend2DNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_sourceNodeIndices       = 0X0010; // CUtlVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_nInputParameterNodeIdx0 = 0X0038; // int16
            static constexpr std::uintptr_t m_nInputParameterNodeIdx1 = 0X003A; // int16
            static constexpr std::uintptr_t m_values                  = 0X0040; // CUtlVectorFixedGrowable<Vector2D,10>
            static constexpr std::uintptr_t m_indices                 = 0X00A8; // CUtlVectorFixedGrowable<uint8,30>
            static constexpr std::uintptr_t m_hullIndices             = 0X00E0; // CUtlVectorFixedGrowable<uint8,10>
            static constexpr std::uintptr_t m_bAllowLooping           = 0X0108; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CBlendCurve {
        public:
            static constexpr std::uintptr_t m_flControlPoint1 = 0X0000; // float32
            static constexpr std::uintptr_t m_flControlPoint2 = 0X0004; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase {
        public:
            static constexpr std::uintptr_t m_vWsPosition = 0X0040; // VectorAligned
            static constexpr std::uintptr_t m_flRadius    = 0X0050; // float32
            static constexpr std::uintptr_t m_Color       = 0X0054; // Color
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmClip__ModelSpaceSamplingChainLink_t {
        public:
            static constexpr std::uintptr_t m_nBoneIdx            = 0X0000; // int32
            static constexpr std::uintptr_t m_nParentBoneIdx      = 0X0004; // int32
            static constexpr std::uintptr_t m_nParentChainLinkIdx = 0X0008; // int32
        };

        // Construct Allowed
        class CAnimUserDifference {
        public:
            static constexpr std::uintptr_t m_name  = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_nType = 0X0010; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmDurationScaleNode__CDefinition : public CNmSpeedScaleBaseNode__CDefinition {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CTransitionUpdateData {
        public:
            static constexpr std::uintptr_t m_srcStateIndex                = 0X0000; // uint8
            static constexpr std::uintptr_t m_destStateIndex               = 0X0001; // uint8
            static constexpr std::uintptr_t m_nHandshakeMaskToDisableFirst = 0X0000; // bitfield:7
            static constexpr std::uintptr_t m_bDisabled                    = 0X0000; // bitfield:1
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeBlackboardReferenceIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int16
        };

        // Has VTable
        // Construct Allowed
        class CMovementHandshakeAnimTag : public CHandshakeAnimTagBase {
        public:
        };

        struct CBoneConstraintPoseSpaceBone__Input_t {
        public:
            static constexpr std::uintptr_t m_inputValue          = 0X0000; // Vector
            static constexpr std::uintptr_t m_outputTransformList = 0X0010; // CUtlVector<CTransform>
        };

        // Construct Allowed
        class CSeqMultiFetch {
        public:
            static constexpr std::uintptr_t m_flags                    = 0X0000; // CSeqMultiFetchFlag
            static constexpr std::uintptr_t m_localReferenceArray      = 0X0008; // CUtlVector<int16>
            static constexpr std::uintptr_t m_nGroupSize               = 0X0020; // int32[2]
            static constexpr std::uintptr_t m_nLocalPose               = 0X0028; // int32[2]
            static constexpr std::uintptr_t m_poseKeyArray0            = 0X0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_poseKeyArray1            = 0X0048; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nLocalCyclePoseParameter = 0X0060; // int32
            static constexpr std::uintptr_t m_bCalculatePoseParameters = 0X0064; // bool
            static constexpr std::uintptr_t m_bFixedBlendWeight        = 0X0065; // bool
            static constexpr std::uintptr_t m_flFixedBlendWeightVals   = 0X0068; // float32[2]
        };

        // Construct Allowed
        class CPhysSurfacePropertiesSoundNames {
        public:
            static constexpr std::uintptr_t m_impactSoft   = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_impactHard   = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_scrapeSmooth = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_scrapeRough  = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_bulletImpact = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_rolling      = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_break        = 0X0030; // CUtlString
            static constexpr std::uintptr_t m_strain       = 0X0038; // CUtlString
            static constexpr std::uintptr_t m_meleeImpact  = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_pushOff      = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_skidStop     = 0X0050; // CUtlString
            static constexpr std::uintptr_t m_resonant     = 0X0058; // CUtlString
        };

        // Construct Allowed
        struct NmBoneMaskSetDefinition_t {
        public:
            static constexpr std::uintptr_t m_ID                   = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_primaryWeightList    = 0X0008; // CNmBoneWeightList
            static constexpr std::uintptr_t m_secondaryWeightLists = 0X0118; // CUtlLeanVector<CNmBoneWeightList>
        };

        // Has VTable
        // Construct Allowed
        class CAudioAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_clipName           = 0X0058; // CUtlString
            static constexpr std::uintptr_t m_attachmentName     = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_flVolume           = 0X0068; // float32
            static constexpr std::uintptr_t m_bStopWhenTagEnds   = 0X006C; // bool
            static constexpr std::uintptr_t m_bStopWhenGraphEnds = 0X006D; // bool
            static constexpr std::uintptr_t m_bPlayOnServer      = 0X006E; // bool
            static constexpr std::uintptr_t m_bPlayOnClient      = 0X006F; // bool
        };

        // Has VTable
        // Construct Allowed
        class CTurnHelperUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_facingTarget         = 0X0074; // AnimValueSource
            static constexpr std::uintptr_t m_turnStartTimeOffset  = 0X0078; // float32
            static constexpr std::uintptr_t m_turnDuration         = 0X007C; // float32
            static constexpr std::uintptr_t m_bMatchChildDuration  = 0X0080; // bool
            static constexpr std::uintptr_t m_manualTurnOffset     = 0X0084; // float32
            static constexpr std::uintptr_t m_bUseManualTurnOffset = 0X0088; // bool
        };

        // Has VTable
        // Construct Allowed
        class CAnimationGroup {
        public:
            static constexpr std::uintptr_t m_nFlags                    = 0X0010; // uint32
            static constexpr std::uintptr_t m_name                      = 0X0018; // CBufferString
            static constexpr std::uintptr_t m_localHAnimArray_Handle    = 0X0060; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
            static constexpr std::uintptr_t m_includedGroupArray_Handle = 0X0078; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
            static constexpr std::uintptr_t m_directHSeqGroup_Handle    = 0X0090; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
            static constexpr std::uintptr_t m_decodeKey                 = 0X0098; // CAnimKeyData
            static constexpr std::uintptr_t m_szScripts                 = 0X0110; // CUtlVector<CBufferString>
            static constexpr std::uintptr_t m_AdditionalExtRefs         = 0X0128; // CUtlVector<CStrongHandleVoid>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct NmSyncTrackTime_t {
        public:
            static constexpr std::uintptr_t m_nEventIdx         = 0X0000; // int32
            static constexpr std::uintptr_t m_percentageThrough = 0X0004; // NmPercent_t
        };

        // Construct Allowed
        class CNmClip {
        public:
            static constexpr std::uintptr_t m_skeleton                      = 0X0000; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
            static constexpr std::uintptr_t m_nNumFrames                    = 0X0008; // uint32
            static constexpr std::uintptr_t m_flDuration                    = 0X000C; // float32
            static constexpr std::uintptr_t m_compressedPoseData            = 0X0010; // CUtlBinaryBlock
            static constexpr std::uintptr_t m_trackCompressionSettings      = 0X0020; // CUtlVector<NmCompressionSettings_t>
            static constexpr std::uintptr_t m_compressedPoseOffsets         = 0X0038; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_floatCurveIDs                 = 0X0050; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_floatCurveDefs                = 0X0068; // CUtlVector<NmFloatCurveCompressionSettings_t>
            static constexpr std::uintptr_t m_compressedFloatCurveData      = 0X0080; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_compressedFloatCurveOffsets   = 0X0098; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_secondaryAnimations           = 0X00D8; // CUtlVectorFixedGrowable<CNmClip*,1>
            static constexpr std::uintptr_t m_syncTrack                     = 0X00F8; // CNmSyncTrack
            static constexpr std::uintptr_t m_rootMotion                    = 0X01B0; // CNmRootMotionData
            static constexpr std::uintptr_t m_bIsAdditive                   = 0X0200; // bool
            static constexpr std::uintptr_t m_modelSpaceSamplingChain       = 0X0208; // CUtlVector<CNmClip::ModelSpaceSamplingChainLink_t>
            static constexpr std::uintptr_t m_modelSpaceBoneSamplingIndices = 0X0220; // CUtlVector<int32>
        };

        // Has VTable
        // Construct Allowed
        class CToggleComponentActionUpdater : public CAnimActionUpdater {
        public:
            static constexpr std::uintptr_t m_componentID = 0X0018; // AnimComponentID
            static constexpr std::uintptr_t m_bSetEnabled = 0X001C; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmOverlayBlendTask : public CNmBlendTaskBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CBindPoseUpdateNode : public CLeafUpdateNode {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct NmSyncTrackTimeRange_t {
        public:
            static constexpr std::uintptr_t m_startTime = 0X0000; // NmSyncTrackTime_t
            static constexpr std::uintptr_t m_endTime   = 0X0008; // NmSyncTrackTime_t
        };

        // Has VTable
        // Construct Allowed
        class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase {
        public:
            static constexpr std::uintptr_t m_vWsPosition = 0X0040; // VectorAligned
            static constexpr std::uintptr_t m_Color       = 0X0050; // Color
            static constexpr std::uintptr_t m_Text        = 0X0058; // CUtlString
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CFootTrajectory {
        public:
            static constexpr std::uintptr_t m_vOffset          = 0X0008; // Vector
            static constexpr std::uintptr_t m_flRotationOffset = 0X0014; // float32
            static constexpr std::uintptr_t m_flProgression    = 0X0018; // float32
        };

        // Has VTable
        // Construct Allowed
        class CMotionMatchingUpdateNode : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_dataSet                     = 0X0058; // CMotionDataSet
            static constexpr std::uintptr_t m_metrics                     = 0X0078; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
            static constexpr std::uintptr_t m_weights                     = 0X0090; // CUtlVector<float32>
            static constexpr std::uintptr_t m_bSearchEveryTick            = 0X00E0; // bool
            static constexpr std::uintptr_t m_flSearchInterval            = 0X00E4; // float32
            static constexpr std::uintptr_t m_bSearchWhenClipEnds         = 0X00E8; // bool
            static constexpr std::uintptr_t m_bSearchWhenGoalChanges      = 0X00E9; // bool
            static constexpr std::uintptr_t m_blendCurve                  = 0X00EC; // CBlendCurve
            static constexpr std::uintptr_t m_flSampleRate                = 0X00F4; // float32
            static constexpr std::uintptr_t m_flBlendTime                 = 0X00F8; // float32
            static constexpr std::uintptr_t m_bLockClipWhenWaning         = 0X00FC; // bool
            static constexpr std::uintptr_t m_flSelectionThreshold        = 0X0100; // float32
            static constexpr std::uintptr_t m_flReselectionTimeWindow     = 0X0104; // float32
            static constexpr std::uintptr_t m_bEnableRotationCorrection   = 0X0108; // bool
            static constexpr std::uintptr_t m_bGoalAssist                 = 0X0109; // bool
            static constexpr std::uintptr_t m_flGoalAssistDistance        = 0X010C; // float32
            static constexpr std::uintptr_t m_flGoalAssistTolerance       = 0X0110; // float32
            static constexpr std::uintptr_t m_distanceScale_Damping       = 0X0118; // CAnimInputDamping
            static constexpr std::uintptr_t m_flDistanceScale_OuterRadius = 0X0130; // float32
            static constexpr std::uintptr_t m_flDistanceScale_InnerRadius = 0X0134; // float32
            static constexpr std::uintptr_t m_flDistanceScale_MaxScale    = 0X0138; // float32
            static constexpr std::uintptr_t m_flDistanceScale_MinScale    = 0X013C; // float32
            static constexpr std::uintptr_t m_bEnableDistanceScaling      = 0X0140; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmReferencePoseNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
        };

        // Construct Allowed
        class CSeqS1SeqDesc {
        public:
            static constexpr std::uintptr_t m_sName              = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_flags              = 0X0010; // CSeqSeqDescFlag
            static constexpr std::uintptr_t m_fetch              = 0X0020; // CSeqMultiFetch
            static constexpr std::uintptr_t m_nLocalWeightlist   = 0X0090; // int32
            static constexpr std::uintptr_t m_autoLayerArray     = 0X0098; // CUtlVector<CSeqAutoLayer>
            static constexpr std::uintptr_t m_IKLockArray        = 0X00B0; // CUtlVector<CSeqIKLock>
            static constexpr std::uintptr_t m_transition         = 0X00C8; // CSeqTransition
            static constexpr std::uintptr_t m_SequenceKeys       = 0X00D0; // KeyValues3
            static constexpr std::uintptr_t m_LegacyKeyValueText = 0X00E0; // CBufferString
            static constexpr std::uintptr_t m_activityArray      = 0X00F0; // CUtlVector<CAnimActivity>
            static constexpr std::uintptr_t m_footMotion         = 0X0108; // CUtlVector<CFootMotion>
        };

        // Construct Allowed
        class CFlexController {
        public:
            static constexpr std::uintptr_t m_szName = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_szType = 0X0008; // CUtlString
            static constexpr std::uintptr_t min      = 0X0010; // float32
            static constexpr std::uintptr_t max      = 0X0014; // float32
        };

        // Construct Allowed
        struct SkeletonDemoDb_t {
        public:
            static constexpr std::uintptr_t m_AnimCaptures    = 0X0000; // CUtlVector<SkeletonAnimCapture_t*>
            static constexpr std::uintptr_t m_CameraTrack     = 0X0018; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
            static constexpr std::uintptr_t m_flRecordingTime = 0X0030; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatRangeComparisonNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_range              = 0X0010; // Range_t
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0018; // int16
            static constexpr std::uintptr_t m_bIsInclusiveCheck  = 0X001A; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CMotionNode {
        public:
            static constexpr std::uintptr_t m_name = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_id   = 0X0020; // AnimNodeID
        };

        // Has VTable
        // Construct Allowed
        class CMotionNodeSequence : public CMotionNode {
        public:
            static constexpr std::uintptr_t m_tags            = 0X0028; // CUtlVector<TagSpan_t>
            static constexpr std::uintptr_t m_hSequence       = 0X0040; // HSequence
            static constexpr std::uintptr_t m_flPlaybackSpeed = 0X0044; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmTwoBoneIKNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_effectorBoneID             = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_nEffectorTargetNodeIdx     = 0X0020; // int16
            static constexpr std::uintptr_t m_nEnabledNodeIdx            = 0X0022; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds         = 0X0024; // float32
            static constexpr std::uintptr_t m_blendMode                  = 0X0028; // NmIKBlendMode_t
            static constexpr std::uintptr_t m_bIsTargetInWorldSpace      = 0X0029; // bool
            static constexpr std::uintptr_t m_flReferencePoseTwistWeight = 0X002C; // float32
        };

        // Construct Allowed
        class CFlexDesc {
        public:
            static constexpr std::uintptr_t m_szFacs = 0X0000; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CRenderMesh {
        public:
            static constexpr std::uintptr_t m_sceneObjects       = 0X0010; // CUtlLeanVectorFixedGrowable<CSceneObjectData,1>
            static constexpr std::uintptr_t m_constraints        = 0X00B8; // CUtlLeanVector<CBaseConstraint*>
            static constexpr std::uintptr_t m_skeleton           = 0X00C8; // CRenderSkeleton
            static constexpr std::uintptr_t m_bUseUV2ForCharting = 0X01D4; // bool
            static constexpr std::uintptr_t m_bEmbeddedMapMesh   = 0X01D5; // bool
            static constexpr std::uintptr_t m_meshDeformParams   = 0X01F8; // DynamicMeshDeformParams_t
            static constexpr std::uintptr_t m_pGroomData         = 0X0208; // CRenderGroom*
        };

        // Has VTable
        // Construct Allowed
        class CAnimSkeleton {
        public:
            static constexpr std::uintptr_t m_localSpaceTransforms = 0X0010; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_modelSpaceTransforms = 0X0028; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_boneNames            = 0X0040; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_children             = 0X0058; // CUtlVector<CUtlVector<int32>>
            static constexpr std::uintptr_t m_parents              = 0X0070; // CUtlVector<int32>
            static constexpr std::uintptr_t m_feet                 = 0X0088; // CUtlVector<CAnimFoot>
            static constexpr std::uintptr_t m_morphNames           = 0X00A0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_lodBoneCounts        = 0X00B8; // CUtlVector<int32>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeConstantIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int16
        };

        // Construct Allowed
        struct VPhysics2ShapeDef_t {
        public:
            static constexpr std::uintptr_t m_spheres                   = 0X0000; // CUtlVector<RnSphereDesc_t>
            static constexpr std::uintptr_t m_capsules                  = 0X0018; // CUtlVector<RnCapsuleDesc_t>
            static constexpr std::uintptr_t m_hulls                     = 0X0030; // CUtlVector<RnHullDesc_t>
            static constexpr std::uintptr_t m_meshes                    = 0X0048; // CUtlVector<RnMeshDesc_t>
            static constexpr std::uintptr_t m_CollisionAttributeIndices = 0X0060; // CUtlVector<uint16>
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatCurveNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_curve              = 0X0018; // CPiecewiseCurve
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase {
        public:
            static constexpr std::uintptr_t m_xWsTransform = 0X0040; // CTransform
            static constexpr std::uintptr_t m_flAxisSize   = 0X0060; // float32
        };

        // Has VTable
        // Construct Allowed
        class CTwistConstraint : public CBaseConstraint {
        public:
            static constexpr std::uintptr_t m_bInverse            = 0X0060; // bool
            static constexpr std::uintptr_t m_qParentBindRotation = 0X0070; // Quaternion
            static constexpr std::uintptr_t m_qChildBindRotation  = 0X0080; // Quaternion
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseDocNodeID_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Construct Allowed
        struct ModelBoneFlexDriverControl_t {
        public:
            static constexpr std::uintptr_t m_nBoneComponent      = 0X0000; // ModelBoneFlexComponent_t
            static constexpr std::uintptr_t m_flexController      = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_flexControllerToken = 0X0010; // uint32
            static constexpr std::uintptr_t m_flMin               = 0X0014; // float32
            static constexpr std::uintptr_t m_flMax               = 0X0018; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqCmdLayer {
        public:
            static constexpr std::uintptr_t m_cmd             = 0X0000; // int16
            static constexpr std::uintptr_t m_nLocalReference = 0X0002; // int16
            static constexpr std::uintptr_t m_nLocalBonemask  = 0X0004; // int16
            static constexpr std::uintptr_t m_nDstResult      = 0X0006; // int16
            static constexpr std::uintptr_t m_nSrcResult      = 0X0008; // int16
            static constexpr std::uintptr_t m_bSpline         = 0X000A; // bool
            static constexpr std::uintptr_t m_flVar1          = 0X000C; // float32
            static constexpr std::uintptr_t m_flVar2          = 0X0010; // float32
            static constexpr std::uintptr_t m_nLineNumber     = 0X0014; // int16
        };

        // Construct Allowed
        struct FootPinningPoseOpFixedData_t {
        public:
            static constexpr std::uintptr_t m_footInfo                 = 0X0000; // CUtlVector<FootFixedData_t>
            static constexpr std::uintptr_t m_flBlendTime              = 0X0018; // float32
            static constexpr std::uintptr_t m_flLockBreakDistance      = 0X001C; // float32
            static constexpr std::uintptr_t m_flMaxLegTwist            = 0X0020; // float32
            static constexpr std::uintptr_t m_nHipBoneIndex            = 0X0024; // int32
            static constexpr std::uintptr_t m_bApplyLegTwistLimits     = 0X0028; // bool
            static constexpr std::uintptr_t m_bApplyFootRotationLimits = 0X0029; // bool
        };

        // Construct Allowed
        struct RenderSkeletonBone_t {
        public:
            static constexpr std::uintptr_t m_boneName       = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_parentName     = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_invBindPose    = 0X0010; // matrix3x4_t
            static constexpr std::uintptr_t m_bbox           = 0X0040; // SkeletonBoneBounds_t
            static constexpr std::uintptr_t m_flSphereRadius = 0X0058; // float32
        };

        // Has VTable
        // Construct Allowed
        class CDistanceRemainingMetricEvaluator : public CMotionMetricEvaluator {
        public:
            static constexpr std::uintptr_t m_flMaxDistance             = 0X0050; // float32
            static constexpr std::uintptr_t m_flMinDistance             = 0X0054; // float32
            static constexpr std::uintptr_t m_flStartGoalFilterDistance = 0X0058; // float32
            static constexpr std::uintptr_t m_flMaxGoalOvershootScale   = 0X005C; // float32
            static constexpr std::uintptr_t m_bFilterFixedMinDistance   = 0X0060; // bool
            static constexpr std::uintptr_t m_bFilterGoalDistance       = 0X0061; // bool
            static constexpr std::uintptr_t m_bFilterGoalOvershoot      = 0X0062; // bool
        };

        // Has VTable
        // Construct Allowed
        class CDirectPlaybackUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_bFinishEarly   = 0X0074; // bool
            static constexpr std::uintptr_t m_bResetOnFinish = 0X0075; // bool
            static constexpr std::uintptr_t m_allTags        = 0X0078; // CUtlVector<CDirectPlaybackTagData>
        };

        // Has VTable
        // Construct Allowed
        class CNmIDEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_ID          = 0X0020; // CGlobalSymbol
            static constexpr std::uintptr_t m_secondaryID = 0X0028; // CGlobalSymbol
        };

        // Construct Allowed
        class CFlexRule {
        public:
            static constexpr std::uintptr_t m_nFlex   = 0X0000; // int32
            static constexpr std::uintptr_t m_FlexOps = 0X0008; // CUtlVector<CFlexOp>
        };

        // Construct Allowed
        struct ScriptInfo_t {
        public:
            static constexpr std::uintptr_t m_code             = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_paramsModified   = 0X0008; // CUtlVector<CAnimParamHandle>
            static constexpr std::uintptr_t m_proxyReadParams  = 0X0020; // CUtlVector<int32>
            static constexpr std::uintptr_t m_proxyWriteParams = 0X0038; // CUtlVector<int32>
            static constexpr std::uintptr_t m_eScriptType      = 0X0050; // AnimScriptType
        };

        // Has VTable
        // Construct Allowed
        class CBoneConstraintRbf : public CBoneConstraintBase {
        public:
            static constexpr std::uintptr_t m_inputBones  = 0X0020; // CUtlVector<std::pair<CUtlString,uint32>>
            static constexpr std::uintptr_t m_outputBones = 0X0038; // CUtlVector<std::pair<CUtlString,uint32>>
        };

        // Has VTable
        // Construct Allowed
        class CNmSoundEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_relevance                          = 0X0020; // CNmEventRelevance_t
            static constexpr std::uintptr_t m_name                               = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_position                           = 0X0030; // CNmSoundEvent::Position_t
            static constexpr std::uintptr_t m_attachmentName                     = 0X0038; // CUtlString
            static constexpr std::uintptr_t m_tags                               = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_bContinuePlayingSoundAtDurationEnd = 0X0048; // bool
            static constexpr std::uintptr_t m_flDurationInterruptionThreshold    = 0X004C; // float32
        };

        // Construct Allowed
        class CRenderGroom {
        public:
            static constexpr std::uintptr_t m_hairs                     = 0X0000; // CUtlVector<RenderHairStrandInfo_t>
            static constexpr std::uintptr_t m_hairPositionOffsets       = 0X0018; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_hSimParamsMat             = 0X0040; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_strandSegmentCountHist    = 0X0048; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nMaxSegmentsPerHairStrand = 0X0078; // int32
            static constexpr std::uintptr_t m_nGuideHairCount           = 0X007C; // int32
            static constexpr std::uintptr_t m_nHairCount                = 0X0080; // int32
            static constexpr std::uintptr_t m_nTotalVertexCount         = 0X0084; // int32
            static constexpr std::uintptr_t m_nTotalSegmentCount        = 0X0088; // int32
            static constexpr std::uintptr_t m_nGroomGroupID             = 0X008C; // int32
            static constexpr std::uintptr_t m_nAttachBoneIdx            = 0X0090; // int32
            static constexpr std::uintptr_t m_nAttachMeshIdx            = 0X0094; // int32
            static constexpr std::uintptr_t m_nAttachMeshDrawCallIdx    = 0X0098; // int32
            static constexpr std::uintptr_t m_bEnableSimulation         = 0X009C; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmParameterizedClipSelectorNode__CDefinition : public CNmClipReferenceNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_optionNodeIndices     = 0X0010; // CUtlLeanVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_optionWeights         = 0X0028; // CUtlLeanVectorFixedGrowable<uint8,5>
            static constexpr std::uintptr_t m_parameterNodeIdx      = 0X0038; // int16
            static constexpr std::uintptr_t m_bIgnoreInvalidOptions = 0X003A; // bool
            static constexpr std::uintptr_t m_bHasWeightsSet        = 0X003B; // bool
        };

        // Has VTable
        // Construct Allowed
        class CTiltTwistConstraint : public CBaseConstraint {
        public:
            static constexpr std::uintptr_t m_nTargetAxis = 0X0060; // int32
            static constexpr std::uintptr_t m_nSlaveAxis  = 0X0064; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmSpeedScaleNode__CDefinition : public CNmSpeedScaleBaseNode__CDefinition {
        public:
        };

        // Construct Allowed
        class CVPhysXSurfacePropertiesList {
        public:
            static constexpr std::uintptr_t m_surfacePropertiesList = 0X0000; // CUtlVector<CPhysSurfaceProperties*>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RenderHairStrandInfo_t {
        public:
            static constexpr std::uintptr_t m_nGuideHairIndices_nSurfaceTriIndex = 0X0000; // uint32[2]
            static constexpr std::uintptr_t m_vGuideBary_vBaseBary               = 0X0008; // uint16[4]
            static constexpr std::uintptr_t m_vRootOffset_flLengthScale          = 0X0010; // uint16[4]
            static constexpr std::uintptr_t m_nPackedBaseUv                      = 0X0018; // uint16[2]
            static constexpr std::uintptr_t m_nPackedSurfaceNormalOs             = 0X001C; // uint32
            static constexpr std::uintptr_t m_nPackedSurfaceTangentOs            = 0X0020; // uint32
            static constexpr std::uintptr_t m_nDataOffset_Segments               = 0X0024; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CCycleControlClipUpdateNode : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_tags            = 0X0060; // CUtlVector<TagSpan_t>
            static constexpr std::uintptr_t m_hSequence       = 0X007C; // HSequence
            static constexpr std::uintptr_t m_duration        = 0X0080; // float32
            static constexpr std::uintptr_t m_valueSource     = 0X0084; // AnimValueSource
            static constexpr std::uintptr_t m_paramIndex      = 0X0088; // CAnimParamHandle
            static constexpr std::uintptr_t m_bLockWhenWaning = 0X008A; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmTargetPointNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx  = 0X0010; // int16
            static constexpr std::uintptr_t m_bIsWorldSpaceTarget = 0X0012; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmTargetSelectorNode__CDefinition : public CNmClipReferenceNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_optionNodeIndices        = 0X0010; // CUtlLeanVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_flOrientationScoreWeight = 0X0028; // float32
            static constexpr std::uintptr_t m_flPositionScoreWeight    = 0X002C; // float32
            static constexpr std::uintptr_t m_parameterNodeIdx         = 0X0030; // int16
            static constexpr std::uintptr_t m_bIgnoreInvalidOptions    = 0X0032; // bool
            static constexpr std::uintptr_t m_bIsWorldSpaceTarget      = 0X0033; // bool
        };

        // Construct Allowed
        class CPulse_RegisterInfo {
        public:
            static constexpr std::uintptr_t m_nReg                   = 0X0000; // PulseRuntimeRegisterIndex_t
            static constexpr std::uintptr_t m_Type                   = 0X0008; // CPulseValueFullType
            static constexpr std::uintptr_t m_OriginName             = 0X0020; // CKV3MemberNameWithStorage
            static constexpr std::uintptr_t m_nWrittenByInstruction  = 0X0058; // int32
            static constexpr std::uintptr_t m_nLastReadByInstruction = 0X005C; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmGraphVariationUserData {
        public:
        };

        // Construct Allowed
        struct LookAtOpFixedSettings_t {
        public:
            static constexpr std::uintptr_t m_attachment             = 0X0000; // CAnimAttachment
            static constexpr std::uintptr_t m_damping                = 0X0080; // CAnimInputDamping
            static constexpr std::uintptr_t m_bones                  = 0X0098; // CUtlVector<LookAtBone_t>
            static constexpr std::uintptr_t m_flYawLimit             = 0X00B0; // float32
            static constexpr std::uintptr_t m_flPitchLimit           = 0X00B4; // float32
            static constexpr std::uintptr_t m_flHysteresisInnerAngle = 0X00B8; // float32
            static constexpr std::uintptr_t m_flHysteresisOuterAngle = 0X00BC; // float32
            static constexpr std::uintptr_t m_bRotateYawForward      = 0X00C0; // bool
            static constexpr std::uintptr_t m_bMaintainUpDirection   = 0X00C1; // bool
            static constexpr std::uintptr_t m_bTargetIsPosition      = 0X00C2; // bool
            static constexpr std::uintptr_t m_bUseHysteresis         = 0X00C3; // bool
        };

        // Has VTable
        // Construct Allowed
        class CAnimGraphSettingsManager {
        public:
            static constexpr std::uintptr_t m_settingsGroups = 0X0018; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
        };

        // Has VTable
        // Construct Allowed
        class CAnimGraphModelBinding {
        public:
            static constexpr std::uintptr_t m_modelName   = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_pSharedData = 0X0010; // CSmartPtr<CAnimUpdateSharedData>
        };

        // Has VTable
        // Construct Allowed
        class CBoneConstraintPoseSpaceBone : public CBaseConstraint {
        public:
            static constexpr std::uintptr_t m_inputList = 0X0060; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
        };

        // Has VTable
        // Construct Allowed
        class CNmTwoBoneIKTask : public CNmPoseTask {
        public:
            static constexpr std::uintptr_t m_nEffectorBoneIdx               = 0X0058; // int32
            static constexpr std::uintptr_t m_nEffectorTargetBoneIdx         = 0X005C; // int32
            static constexpr std::uintptr_t m_targetTransform                = 0X0060; // CTransform
            static constexpr std::uintptr_t m_effectorTarget                 = 0X0080; // CNmTarget
            static constexpr std::uintptr_t m_blendMode                      = 0X00B0; // NmIKBlendMode_t
            static constexpr std::uintptr_t m_flBlendWeight                  = 0X00B4; // float32
            static constexpr std::uintptr_t m_bIsTargetInWorldSpace          = 0X00B8; // bool
            static constexpr std::uintptr_t m_bIsRunningFromDeserializedData = 0X00B9; // bool
            static constexpr std::uintptr_t m_flReferencePoseTwistWeight     = 0X00BC; // float32
            static constexpr std::uintptr_t m_debugEffectorBoneID            = 0X00C0; // CGlobalSymbol
        };

        // Construct Allowed
        class MotionBlendItem {
        public:
            static constexpr std::uintptr_t m_pChild     = 0X0000; // CSmartPtr<CMotionNode>
            static constexpr std::uintptr_t m_flKeyValue = 0X0008; // float32
        };

        // Has VTable
        // Construct Allowed
        class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase {
        public:
            static constexpr std::uintptr_t m_sBoneName       = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_sAttachmentName = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_outputMorph     = 0X0030; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_inputList       = 0X0048; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
            static constexpr std::uintptr_t m_bClamp          = 0X0060; // bool
        };

        // Has VTable
        // Construct Allowed
        class CFloatAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_fDefaultValue = 0X0080; // float32
            static constexpr std::uintptr_t m_fMinValue     = 0X0084; // float32
            static constexpr std::uintptr_t m_fMaxValue     = 0X0088; // float32
            static constexpr std::uintptr_t m_bInterpolate  = 0X008C; // bool
        };

        // Construct Allowed
        class CStateActionUpdater {
        public:
            static constexpr std::uintptr_t m_pAction   = 0X0000; // CSmartPtr<CAnimActionUpdater>
            static constexpr std::uintptr_t m_eBehavior = 0X0008; // StateActionBehavior
        };

        // Has VTable
        // Construct Allowed
        class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase {
        public:
            static constexpr std::uintptr_t m_sampleTimes               = 0X0020; // CUtlVector<float32>
            static constexpr std::uintptr_t m_flSpringConstant          = 0X003C; // float32
            static constexpr std::uintptr_t m_flAnticipationDistance    = 0X0040; // float32
            static constexpr std::uintptr_t m_hAnticipationPosParam     = 0X0044; // CAnimParamHandle
            static constexpr std::uintptr_t m_hAnticipationHeadingParam = 0X0046; // CAnimParamHandle
            static constexpr std::uintptr_t m_bUseAcceleration          = 0X0048; // bool
        };

        // Construct Allowed
        class CRenderSkeleton {
        public:
            static constexpr std::uintptr_t m_bones            = 0X0000; // CUtlVector<RenderSkeletonBone_t>
            static constexpr std::uintptr_t m_boneParents      = 0X0030; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nBoneWeightCount = 0X0048; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqIKLock {
        public:
            static constexpr std::uintptr_t m_flPosWeight                  = 0X0000; // float32
            static constexpr std::uintptr_t m_flAngleWeight                = 0X0004; // float32
            static constexpr std::uintptr_t m_nLocalBone                   = 0X0008; // int16
            static constexpr std::uintptr_t m_bBonesOrientedAlongPositiveX = 0X000A; // bool
        };

        // Construct Allowed
        class CAnimParamHandleMap {
        public:
            static constexpr std::uintptr_t m_list = 0X0000; // CUtlHashtable<uint16,int16>
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatClampNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_clampRange         = 0X0014; // Range_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeCellIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmExternalPoseNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_bShouldSampleRootMotion = 0X0010; // bool
        };

        // Construct Allowed
        class CAnimDesc {
        public:
            static constexpr std::uintptr_t m_name            = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_flags           = 0X0010; // CAnimDesc_Flag
            static constexpr std::uintptr_t fps               = 0X0018; // float32
            static constexpr std::uintptr_t m_Data            = 0X0020; // CAnimEncodedFrames
            static constexpr std::uintptr_t m_movementArray   = 0X00F8; // CUtlVector<CAnimMovement>
            static constexpr std::uintptr_t m_xInitialOffset  = 0X0110; // CTransform
            static constexpr std::uintptr_t m_eventArray      = 0X0130; // CUtlVector<CAnimEventDefinition>
            static constexpr std::uintptr_t m_activityArray   = 0X0148; // CUtlVector<CAnimActivity>
            static constexpr std::uintptr_t m_hierarchyArray  = 0X0160; // CUtlVector<CAnimLocalHierarchy>
            static constexpr std::uintptr_t framestalltime    = 0X0178; // float32
            static constexpr std::uintptr_t m_vecRootMin      = 0X017C; // Vector
            static constexpr std::uintptr_t m_vecRootMax      = 0X0188; // Vector
            static constexpr std::uintptr_t m_vecBoneWorldMin = 0X0198; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vecBoneWorldMax = 0X01B0; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_sequenceParams  = 0X01C8; // CAnimSequenceParams
        };

        // Has VTable
        // Construct Allowed
        class CNmRootMotionOverrideNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_desiredMovingVelocityNodeIdx  = 0X0018; // int16
            static constexpr std::uintptr_t m_desiredFacingDirectionNodeIdx = 0X001A; // int16
            static constexpr std::uintptr_t m_linearVelocityLimitNodeIdx    = 0X001C; // int16
            static constexpr std::uintptr_t m_angularVelocityLimitNodeIdx   = 0X001E; // int16
            static constexpr std::uintptr_t m_maxLinearVelocity             = 0X0020; // float32
            static constexpr std::uintptr_t m_maxAngularVelocityRadians     = 0X0024; // float32
            static constexpr std::uintptr_t m_overrideFlags                 = 0X0028; // CNmBitFlags
        };

        // Has VTable
        // Construct Allowed
        class CNmTargetWarpNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nClipReferenceNodeIdx               = 0X0010; // int16
            static constexpr std::uintptr_t m_nTargetValueNodeIdx                 = 0X0012; // int16
            static constexpr std::uintptr_t m_samplingMode                        = 0X0014; // CNmRootMotionData::SamplingMode_t
            static constexpr std::uintptr_t m_bAllowTargetUpdate                  = 0X0015; // bool
            static constexpr std::uintptr_t m_bAlignWithTargetAtLastWarpEvent     = 0X0016; // bool
            static constexpr std::uintptr_t m_flSamplingPositionErrorThresholdSq  = 0X0018; // float32
            static constexpr std::uintptr_t m_flMaxTangentLength                  = 0X001C; // float32
            static constexpr std::uintptr_t m_flLerpFallbackDistanceThreshold     = 0X0020; // float32
            static constexpr std::uintptr_t m_flTargetUpdateDistanceThreshold     = 0X0024; // float32
            static constexpr std::uintptr_t m_flTargetUpdateAngleThresholdRadians = 0X0028; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPhysSurfacePropertiesPhysics {
        public:
            static constexpr std::uintptr_t m_friction                = 0X0000; // float32
            static constexpr std::uintptr_t m_elasticity              = 0X0004; // float32
            static constexpr std::uintptr_t m_density                 = 0X0008; // float32
            static constexpr std::uintptr_t m_thickness               = 0X000C; // float32
            static constexpr std::uintptr_t m_softContactFrequency    = 0X0010; // float32
            static constexpr std::uintptr_t m_softContactDampingRatio = 0X0014; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        // Construct Allowed
        class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase {
        public:
            static constexpr std::uintptr_t m_vWsCenter = 0X0040; // VectorAligned
            static constexpr std::uintptr_t m_vWsStart  = 0X0050; // VectorAligned
            static constexpr std::uintptr_t m_vWsEnd    = 0X0060; // VectorAligned
            static constexpr std::uintptr_t m_Color     = 0X0070; // Color
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct NmFloatCurveCompressionSettings_t {
        public:
            static constexpr std::uintptr_t m_range     = 0X0000; // NmCompressionSettings_t::QuantizationRange_t
            static constexpr std::uintptr_t m_bIsStatic = 0X0008; // bool
        };

        // Has VTable
        // Construct Allowed
        class CBoneConstraintDotToMorph : public CBoneConstraintBase {
        public:
            static constexpr std::uintptr_t m_sBoneName         = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_sTargetBoneName   = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_sMorphChannelName = 0X0030; // CUtlString
            static constexpr std::uintptr_t m_flRemap           = 0X0038; // float32[4]
        };

        // Has VTable
        // Construct Allowed
        class CPointConstraint : public CBaseConstraint {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct TraceSettings_t {
        public:
            static constexpr std::uintptr_t m_flTraceHeight = 0X0000; // float32
            static constexpr std::uintptr_t m_flTraceRadius = 0X0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct ParamSpanSample_t {
        public:
            static constexpr std::uintptr_t m_value   = 0X0000; // CAnimVariant
            static constexpr std::uintptr_t m_flCycle = 0X0014; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmFollowBoneTask : public CNmPoseTask {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct VPhysXConstraintParams_t {
        public:
            static constexpr std::uintptr_t m_nType                      = 0X0000; // int8
            static constexpr std::uintptr_t m_nTranslateMotion           = 0X0001; // int8
            static constexpr std::uintptr_t m_nRotateMotion              = 0X0002; // int8
            static constexpr std::uintptr_t m_nFlags                     = 0X0003; // int8
            static constexpr std::uintptr_t m_anchor                     = 0X0004; // Vector[2]
            static constexpr std::uintptr_t m_axes                       = 0X001C; // QuaternionStorage[2]
            static constexpr std::uintptr_t m_maxForce                   = 0X003C; // float32
            static constexpr std::uintptr_t m_maxTorque                  = 0X0040; // float32
            static constexpr std::uintptr_t m_linearLimitValue           = 0X0044; // float32
            static constexpr std::uintptr_t m_linearLimitRestitution     = 0X0048; // float32
            static constexpr std::uintptr_t m_linearLimitSpring          = 0X004C; // float32
            static constexpr std::uintptr_t m_linearLimitDamping         = 0X0050; // float32
            static constexpr std::uintptr_t m_twistLowLimitValue         = 0X0054; // float32
            static constexpr std::uintptr_t m_twistLowLimitRestitution   = 0X0058; // float32
            static constexpr std::uintptr_t m_twistLowLimitSpring        = 0X005C; // float32
            static constexpr std::uintptr_t m_twistLowLimitDamping       = 0X0060; // float32
            static constexpr std::uintptr_t m_twistHighLimitValue        = 0X0064; // float32
            static constexpr std::uintptr_t m_twistHighLimitRestitution  = 0X0068; // float32
            static constexpr std::uintptr_t m_twistHighLimitSpring       = 0X006C; // float32
            static constexpr std::uintptr_t m_twistHighLimitDamping      = 0X0070; // float32
            static constexpr std::uintptr_t m_swing1LimitValue           = 0X0074; // float32
            static constexpr std::uintptr_t m_swing1LimitRestitution     = 0X0078; // float32
            static constexpr std::uintptr_t m_swing1LimitSpring          = 0X007C; // float32
            static constexpr std::uintptr_t m_swing1LimitDamping         = 0X0080; // float32
            static constexpr std::uintptr_t m_swing2LimitValue           = 0X0084; // float32
            static constexpr std::uintptr_t m_swing2LimitRestitution     = 0X0088; // float32
            static constexpr std::uintptr_t m_swing2LimitSpring          = 0X008C; // float32
            static constexpr std::uintptr_t m_swing2LimitDamping         = 0X0090; // float32
            static constexpr std::uintptr_t m_goalPosition               = 0X0094; // Vector
            static constexpr std::uintptr_t m_goalOrientation            = 0X00A0; // QuaternionStorage
            static constexpr std::uintptr_t m_goalAngularVelocity        = 0X00B0; // Vector
            static constexpr std::uintptr_t m_driveSpringX               = 0X00BC; // float32
            static constexpr std::uintptr_t m_driveSpringY               = 0X00C0; // float32
            static constexpr std::uintptr_t m_driveSpringZ               = 0X00C4; // float32
            static constexpr std::uintptr_t m_driveDampingX              = 0X00C8; // float32
            static constexpr std::uintptr_t m_driveDampingY              = 0X00CC; // float32
            static constexpr std::uintptr_t m_driveDampingZ              = 0X00D0; // float32
            static constexpr std::uintptr_t m_driveSpringTwist           = 0X00D4; // float32
            static constexpr std::uintptr_t m_driveSpringSwing           = 0X00D8; // float32
            static constexpr std::uintptr_t m_driveSpringSlerp           = 0X00DC; // float32
            static constexpr std::uintptr_t m_driveDampingTwist          = 0X00E0; // float32
            static constexpr std::uintptr_t m_driveDampingSwing          = 0X00E4; // float32
            static constexpr std::uintptr_t m_driveDampingSlerp          = 0X00E8; // float32
            static constexpr std::uintptr_t m_solverIterationCount       = 0X00EC; // int32
            static constexpr std::uintptr_t m_projectionLinearTolerance  = 0X00F0; // float32
            static constexpr std::uintptr_t m_projectionAngularTolerance = 0X00F4; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatComparisonNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx     = 0X0010; // int16
            static constexpr std::uintptr_t m_nComparandValueNodeIdx = 0X0012; // int16
            static constexpr std::uintptr_t m_comparison             = 0X0014; // CNmFloatComparisonNode::Comparison_t
            static constexpr std::uintptr_t m_flEpsilon              = 0X0018; // float32
            static constexpr std::uintptr_t m_flComparisonValue      = 0X001C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmChainSolverTask : public CNmPoseTask {
        public:
            static constexpr std::uintptr_t m_nEffectorBoneIdx                = 0X0058; // int32
            static constexpr std::uintptr_t m_nEffectorTargetBoneIdx          = 0X005C; // int32
            static constexpr std::uintptr_t m_targetTransform                 = 0X0060; // CTransform
            static constexpr std::uintptr_t m_nNumBonesInChain                = 0X0080; // int32
            static constexpr std::uintptr_t m_effectorTarget                  = 0X0090; // CNmTarget
            static constexpr std::uintptr_t m_blendMode                       = 0X00C0; // NmIKBlendMode_t
            static constexpr std::uintptr_t m_flBlendWeight                   = 0X00C4; // float32
            static constexpr std::uintptr_t m_bIsTargetInWorldSpace           = 0X00C8; // bool
            static constexpr std::uintptr_t m_bIsRunningFromDeserializedData  = 0X00C9; // bool
            static constexpr std::uintptr_t m_debugEffectorBoneID             = 0X00D0; // CGlobalSymbol
            static constexpr std::uintptr_t m_chainStartTransformMS           = 0X00E0; // CTransform
            static constexpr std::uintptr_t m_debugRequestedTargetTransformMS = 0X0100; // CTransform
            static constexpr std::uintptr_t m_debugTotalChainLength           = 0X0120; // float32
        };

        // Construct Allowed
        class CStateUpdateData {
        public:
            static constexpr std::uintptr_t m_name                                  = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_hScript                               = 0X0008; // AnimScriptHandle
            static constexpr std::uintptr_t m_transitionIndices                     = 0X0010; // CUtlVector<int32>
            static constexpr std::uintptr_t m_actions                               = 0X0028; // CUtlVector<CStateActionUpdater>
            static constexpr std::uintptr_t m_stateID                               = 0X0040; // AnimStateID
            static constexpr std::uintptr_t m_bIsStartState                         = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsEndState                           = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsPassthrough                        = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsPassthroughRootMotion              = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bPreEvaluatePassthroughTransitionPath = 0X0000; // bitfield:1
        };

        // Has VTable
        // Construct Allowed
        class COrientConstraint : public CBaseConstraint {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CMoverUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_damping            = 0X0078; // CAnimInputDamping
            static constexpr std::uintptr_t m_facingTarget       = 0X0090; // AnimValueSource
            static constexpr std::uintptr_t m_hMoveVecParam      = 0X0094; // CAnimParamHandle
            static constexpr std::uintptr_t m_hMoveHeadingParam  = 0X0096; // CAnimParamHandle
            static constexpr std::uintptr_t m_hTurnToFaceParam   = 0X0098; // CAnimParamHandle
            static constexpr std::uintptr_t m_flTurnToFaceOffset = 0X009C; // float32
            static constexpr std::uintptr_t m_flTurnToFaceLimit  = 0X00A0; // float32
            static constexpr std::uintptr_t m_bAdditive          = 0X00A4; // bool
            static constexpr std::uintptr_t m_bApplyMovement     = 0X00A5; // bool
            static constexpr std::uintptr_t m_bOrientMovement    = 0X00A6; // bool
            static constexpr std::uintptr_t m_bApplyRotation     = 0X00A7; // bool
            static constexpr std::uintptr_t m_bLimitOnly         = 0X00A8; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmLayerBlendNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nBaseNodeIdx              = 0X0010; // int16
            static constexpr std::uintptr_t m_bOnlySampleBaseRootMotion = 0X0012; // bool
            static constexpr std::uintptr_t m_layerDefinition           = 0X0018; // CUtlLeanVectorFixedGrowable<CNmLayerBlendNode::LayerDefinition_t,3>
        };

        // Construct Allowed
        struct JiggleBoneSettingsList_t {
        public:
            static constexpr std::uintptr_t m_boneSettings = 0X0000; // CUtlVector<JiggleBoneSettings_t>
        };

        // Has VTable
        // Construct Allowed
        class CSubtractUpdateNode : public CBinaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_footMotionTiming         = 0X0094; // BinaryNodeChildOption
            static constexpr std::uintptr_t m_bApplyToFootMotion       = 0X0098; // bool
            static constexpr std::uintptr_t m_bApplyChannelsSeparately = 0X0099; // bool
            static constexpr std::uintptr_t m_bUseModelSpace           = 0X009A; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseGraphInstanceID_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CNmFloatRemapNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_inputRange         = 0X0014; // CNmFloatRemapNode::RemapRange_t
            static constexpr std::uintptr_t m_outputRange        = 0X001C; // CNmFloatRemapNode::RemapRange_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPoseHandle {
        public:
            static constexpr std::uintptr_t m_nIndex = 0X0000; // uint16
            static constexpr std::uintptr_t m_eType  = 0X0002; // PoseType_t
        };

        // Has VTable
        // Construct Allowed
        class CNmFootstepEventIDNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
        };

        // Has VTable
        // Construct Allowed
        class CSolveIKChainUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_targetHandles = 0X0070; // CUtlVector<CSolveIKTargetHandle_t>
            static constexpr std::uintptr_t m_opFixedData   = 0X0088; // SolveIKChainPoseOpFixedSettings_t
        };

        // Has VTable
        // Construct Allowed
        class CNmOrNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_conditionNodeIndices = 0X0010; // CUtlLeanVectorFixedGrowable<int16,4>
        };

        // Construct Allowed
        class CSeqCmdSeqDesc {
        public:
            static constexpr std::uintptr_t m_sName               = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_flags               = 0X0010; // CSeqSeqDescFlag
            static constexpr std::uintptr_t m_transition          = 0X001C; // CSeqTransition
            static constexpr std::uintptr_t m_nFrameRangeSequence = 0X0024; // int16
            static constexpr std::uintptr_t m_nFrameCount         = 0X0026; // int16
            static constexpr std::uintptr_t m_flFPS               = 0X0028; // float32
            static constexpr std::uintptr_t m_nSubCycles          = 0X002C; // int16
            static constexpr std::uintptr_t m_numLocalResults     = 0X002E; // int16
            static constexpr std::uintptr_t m_cmdLayerArray       = 0X0030; // CUtlVector<CSeqCmdLayer>
            static constexpr std::uintptr_t m_eventArray          = 0X0048; // CUtlVector<CAnimEventDefinition>
            static constexpr std::uintptr_t m_activityArray       = 0X0060; // CUtlVector<CAnimActivity>
            static constexpr std::uintptr_t m_poseSettingArray    = 0X0078; // CUtlVector<CSeqPoseSetting>
        };

        // Has VTable
        // Construct Allowed
        class CBoneMaskUpdateNode : public CBinaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_nWeightListIndex  = 0X0094; // int32
            static constexpr std::uintptr_t m_flRootMotionBlend = 0X0098; // float32
            static constexpr std::uintptr_t m_blendSpace        = 0X009C; // BoneMaskBlendSpace
            static constexpr std::uintptr_t m_footMotionTiming  = 0X00A0; // BinaryNodeChildOption
            static constexpr std::uintptr_t m_bUseBlendScale    = 0X00A4; // bool
            static constexpr std::uintptr_t m_blendValueSource  = 0X00A8; // AnimValueSource
            static constexpr std::uintptr_t m_hBlendParameter   = 0X00AC; // CAnimParamHandle
        };

        // Construct Allowed
        class CPulse_Constant {
        public:
            static constexpr std::uintptr_t m_Type  = 0X0000; // CPulseValueFullType
            static constexpr std::uintptr_t m_Value = 0X0018; // KeyValues3
        };

        // Construct Allowed
        struct SolveIKChainPoseOpFixedSettings_t {
        public:
            static constexpr std::uintptr_t m_ChainsToSolveData = 0X0000; // CUtlVector<ChainToSolveData_t>
        };

        // Has VTable
        // Construct Allowed
        class CNmEntityAttributeFloatEvent : public CNmEntityAttributeEventBase {
        public:
            static constexpr std::uintptr_t m_FloatValue = 0X0038; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        class CNmIDSelectorNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_conditionNodeIndices = 0X0010; // CUtlVectorFixedGrowable<int16,5>
            static constexpr std::uintptr_t m_values               = 0X0038; // CUtlVectorFixedGrowable<CGlobalSymbol,5>
            static constexpr std::uintptr_t m_defaultValue         = 0X0078; // CGlobalSymbol
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct TwoBoneIKSettings_t {
        public:
            static constexpr std::uintptr_t m_endEffectorType         = 0X0000; // IkEndEffectorType
            static constexpr std::uintptr_t m_endEffectorAttachment   = 0X0010; // CAnimAttachment
            static constexpr std::uintptr_t m_targetType              = 0X0090; // IkTargetType
            static constexpr std::uintptr_t m_targetAttachment        = 0X00A0; // CAnimAttachment
            static constexpr std::uintptr_t m_targetBoneIndex         = 0X0120; // int32
            static constexpr std::uintptr_t m_hPositionParam          = 0X0124; // CAnimParamHandle
            static constexpr std::uintptr_t m_hRotationParam          = 0X0126; // CAnimParamHandle
            static constexpr std::uintptr_t m_bAlwaysUseFallbackHinge = 0X0128; // bool
            static constexpr std::uintptr_t m_vLsFallbackHingeAxis    = 0X0130; // VectorAligned
            static constexpr std::uintptr_t m_nFixedBoneIndex         = 0X0140; // int32
            static constexpr std::uintptr_t m_nMiddleBoneIndex        = 0X0144; // int32
            static constexpr std::uintptr_t m_nEndBoneIndex           = 0X0148; // int32
            static constexpr std::uintptr_t m_bMatchTargetOrientation = 0X014C; // bool
            static constexpr std::uintptr_t m_bConstrainTwist         = 0X014D; // bool
            static constexpr std::uintptr_t m_flMaxTwist              = 0X0150; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmCachedPoseWriteTask : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CAnimUpdateSharedData {
        public:
            static constexpr std::uintptr_t m_nodes              = 0X0010; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
            static constexpr std::uintptr_t m_nodeIndexMap       = 0X0028; // CUtlHashtable<CAnimNodePath,int32>
            static constexpr std::uintptr_t m_components         = 0X0048; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
            static constexpr std::uintptr_t m_pParamListUpdater  = 0X0060; // CSmartPtr<CAnimParameterManagerUpdater>
            static constexpr std::uintptr_t m_pTagManagerUpdater = 0X0068; // CSmartPtr<CAnimTagManagerUpdater>
            static constexpr std::uintptr_t m_scriptManager      = 0X0070; // CSmartPtr<CAnimScriptManager>
            static constexpr std::uintptr_t m_settings           = 0X0078; // CAnimGraphSettingsManager
            static constexpr std::uintptr_t m_pStaticPoseCache   = 0X00A8; // CSmartPtr<CStaticPoseCacheBuilder>
            static constexpr std::uintptr_t m_pSkeleton          = 0X00B0; // CSmartPtr<CAnimSkeleton>
            static constexpr std::uintptr_t m_rootNodePath       = 0X00B8; // CAnimNodePath
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimAttachment {
        public:
            static constexpr std::uintptr_t m_influenceRotations = 0X0000; // Quaternion[3]
            static constexpr std::uintptr_t m_influenceOffsets   = 0X0030; // VectorAligned[3]
            static constexpr std::uintptr_t m_influenceIndices   = 0X0060; // int32[3]
            static constexpr std::uintptr_t m_influenceWeights   = 0X006C; // float32[3]
            static constexpr std::uintptr_t m_numInfluences      = 0X0078; // uint8
        };

        // Construct Allowed
        class CFootTrajectories {
        public:
            static constexpr std::uintptr_t m_trajectories = 0X0000; // CUtlVector<CFootTrajectory>
        };

        // Has VTable
        // Construct Allowed
        class CNmIDComparisonNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_comparison         = 0X0012; // CNmIDComparisonNode::Comparison_t
            static constexpr std::uintptr_t m_comparisionIDs     = 0X0018; // CUtlLeanVectorFixedGrowable<CGlobalSymbol,4>
        };

        // Has VTable
        // Construct Allowed
        class CEditableMotionGraph : public CMotionGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmConstFloatNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_flValue = 0X0010; // float32
        };

        // Has VTable
        // Construct Allowed
        class CStringAnimTag : public CAnimTagBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CBoolAnimParameter : public CConcreteAnimParameter {
        public:
            static constexpr std::uintptr_t m_bDefaultValue = 0X0080; // bool
        };

        // Has VTable
        // Construct Allowed
        class CRagdollAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_profileName = 0X0058; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        class CNmStateMachineNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_stateDefinitions   = 0X0010; // CUtlLeanVectorFixedGrowable<CNmStateMachineNode::StateDefinition_t,5>
            static constexpr std::uintptr_t m_nDefaultStateIndex = 0X0130; // int16
        };

        // Has VTable
        // Construct Allowed
        class CBodyGroupAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_nPriority         = 0X0058; // int32
            static constexpr std::uintptr_t m_bodyGroupSettings = 0X0060; // CUtlVector<CBodyGroupSetting>
        };

        // Has VTable
        // Construct Allowed
        class CNmModelSpaceBlendTask : public CNmBlendTaskBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmZeroPoseNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmOrientationWarpNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nClipReferenceNodeIdx        = 0X0010; // int16
            static constexpr std::uintptr_t m_nTargetValueNodeIdx          = 0X0012; // int16
            static constexpr std::uintptr_t m_bIsOffsetNode                = 0X0014; // bool
            static constexpr std::uintptr_t m_bIsOffsetRelativeToCharacter = 0X0015; // bool
            static constexpr std::uintptr_t m_bWarpTranslation             = 0X0016; // bool
            static constexpr std::uintptr_t m_samplingMode                 = 0X0017; // CNmRootMotionData::SamplingMode_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class AnimParamID {
        public:
            static constexpr std::uintptr_t m_id = 0X0000; // uint32
        };

        // Has VTable
        // Construct Allowed
        class CNmBoneMaskNode__CDefinition : public CNmBoneMaskValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_boneMaskID = 0X0010; // CGlobalSymbol
        };

        // Construct Allowed
        struct ModelAnimGraph2Ref_t {
        public:
            static constexpr std::uintptr_t m_sIdentifier = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_hGraph      = 0X0008; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
        };

        // Construct Allowed
        struct AnimationDecodeDebugDump_t {
        public:
            static constexpr std::uintptr_t m_processingType = 0X0000; // AnimationProcessingType_t
            static constexpr std::uintptr_t m_elems          = 0X0008; // CUtlVector<AnimationDecodeDebugDumpElement_t>
        };

        // Has VTable
        // Construct Allowed
        class CNmVirtualParameterIDNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Construct Allowed
        class CSeqScaleSet {
        public:
            static constexpr std::uintptr_t m_sName            = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_bRootOffset      = 0X0010; // bool
            static constexpr std::uintptr_t m_vRootOffset      = 0X0014; // Vector
            static constexpr std::uintptr_t m_nLocalBoneArray  = 0X0020; // CUtlVector<int16>
            static constexpr std::uintptr_t m_flBoneScaleArray = 0X0038; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeCallInfoIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        class CDirectionalBlendUpdateNode : public CLeafUpdateNode {
        public:
            static constexpr std::uintptr_t m_hSequences        = 0X005C; // HSequence[8]
            static constexpr std::uintptr_t m_damping           = 0X0080; // CAnimInputDamping
            static constexpr std::uintptr_t m_blendValueSource  = 0X0098; // AnimValueSource
            static constexpr std::uintptr_t m_paramIndex        = 0X009C; // CAnimParamHandle
            static constexpr std::uintptr_t m_playbackSpeed     = 0X00A0; // float32
            static constexpr std::uintptr_t m_duration          = 0X00A4; // float32
            static constexpr std::uintptr_t m_bLoop             = 0X00A8; // bool
            static constexpr std::uintptr_t m_bLockBlendOnReset = 0X00A9; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmGraphDefinition__ReferencedGraphSlot_t {
        public:
            static constexpr std::uintptr_t m_nNodeIdx    = 0X0000; // int16
            static constexpr std::uintptr_t m_dataSlotIdx = 0X0002; // int16
        };

        // Construct Allowed
        struct ParamSpan_t {
        public:
            static constexpr std::uintptr_t m_samples      = 0X0000; // CUtlVector<ParamSpanSample_t>
            static constexpr std::uintptr_t m_hParam       = 0X0018; // CAnimParamHandle
            static constexpr std::uintptr_t m_eParamType   = 0X001A; // AnimParamType_t
            static constexpr std::uintptr_t m_flStartCycle = 0X001C; // float32
            static constexpr std::uintptr_t m_flEndCycle   = 0X0020; // float32
        };

        // Has VTable
        // Construct Allowed
        class CFootStepTriggerUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_triggers    = 0X0070; // CUtlVector<FootStepTrigger>
            static constexpr std::uintptr_t m_flTolerance = 0X008C; // float32
        };

        struct IKTargetSettings_t {
        public:
            static constexpr std::uintptr_t m_TargetSource                      = 0X0000; // IKTargetSource
            static constexpr std::uintptr_t m_Bone                              = 0X0008; // IKBoneNameAndIndex_t
            static constexpr std::uintptr_t m_AnimgraphParameterNamePosition    = 0X0018; // AnimParamID
            static constexpr std::uintptr_t m_AnimgraphParameterNameOrientation = 0X001C; // AnimParamID
            static constexpr std::uintptr_t m_TargetCoordSystem                 = 0X0020; // IKTargetCoordinateSystem
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_SetRenderColor : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_Color = 0X0048; // Color
        };

        // Has VTable
        // Construct Allowed
        class CNmAdditiveBlendTask : public CNmBlendTaskBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmAnimationPoseNode__CDefinition : public CNmPoseNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nPoseTimeValueNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_nDataSlotIdx          = 0X0012; // int16
            static constexpr std::uintptr_t m_inputTimeRemapRange   = 0X0014; // Range_t
            static constexpr std::uintptr_t m_flUserSpecifiedTime   = 0X001C; // float32
            static constexpr std::uintptr_t m_bUseFramesAsInput     = 0X0020; // bool
        };

        // Construct Allowed
        class CMotionSearchDB {
        public:
            static constexpr std::uintptr_t m_rootNode          = 0X0000; // CMotionSearchNode
            static constexpr std::uintptr_t m_residualQuantizer = 0X0080; // CProductQuantizer
            static constexpr std::uintptr_t m_codeIndices       = 0X00A0; // CUtlVector<MotionDBIndex>
        };

        // Has VTable
        // Construct Allowed
        class CMotionNodeBlend1D : public CMotionNode {
        public:
            static constexpr std::uintptr_t m_blendItems  = 0X0028; // CUtlVector<MotionBlendItem>
            static constexpr std::uintptr_t m_nParamIndex = 0X0040; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmCurrentSyncEventNode__CDefinition : public CNmFloatValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_infoType            = 0X0012; // CNmCurrentSyncEventNode::InfoType_t
        };

        // Has VTable
        // Construct Allowed
        class CNmControlParameterTargetNode__CDefinition : public CNmTargetValueNode__CDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SkeletonBoneBounds_t {
        public:
            static constexpr std::uintptr_t m_vecCenter = 0X0000; // Vector
            static constexpr std::uintptr_t m_vecSize   = 0X000C; // Vector
        };

        // Has VTable
        // Construct Allowed
        class CTwoBoneIKUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedData = 0X0070; // TwoBoneIKSettings_t
        };

        // Construct Allowed
        struct VPhysXBodyPart_t {
        public:
            static constexpr std::uintptr_t m_nFlags                   = 0X0000; // uint32
            static constexpr std::uintptr_t m_flMass                   = 0X0004; // float32
            static constexpr std::uintptr_t m_rnShape                  = 0X0008; // VPhysics2ShapeDef_t
            static constexpr std::uintptr_t m_nCollisionAttributeIndex = 0X0080; // uint16
            static constexpr std::uintptr_t m_nReserved                = 0X0082; // uint16
            static constexpr std::uintptr_t m_flInertiaScale           = 0X0084; // float32
            static constexpr std::uintptr_t m_flLinearDamping          = 0X0088; // float32
            static constexpr std::uintptr_t m_flAngularDamping         = 0X008C; // float32
            static constexpr std::uintptr_t m_flLinearDrag             = 0X0090; // float32
            static constexpr std::uintptr_t m_flAngularDrag            = 0X0094; // float32
            static constexpr std::uintptr_t m_bOverrideMassCenter      = 0X0098; // bool
            static constexpr std::uintptr_t m_vMassCenterOverride      = 0X009C; // Vector
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeChunkIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        class CTaskHandshakeAnimTag : public CHandshakeAnimTagBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CFollowPathUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_flBlendOutTime        = 0X0074; // float32
            static constexpr std::uintptr_t m_bBlockNonPathMovement = 0X0078; // bool
            static constexpr std::uintptr_t m_bStopFeetAtGoal       = 0X0079; // bool
            static constexpr std::uintptr_t m_bScaleSpeed           = 0X007A; // bool
            static constexpr std::uintptr_t m_flScale               = 0X007C; // float32
            static constexpr std::uintptr_t m_flMinAngle            = 0X0080; // float32
            static constexpr std::uintptr_t m_flMaxAngle            = 0X0084; // float32
            static constexpr std::uintptr_t m_flSpeedScaleBlending  = 0X0088; // float32
            static constexpr std::uintptr_t m_turnDamping           = 0X0090; // CAnimInputDamping
            static constexpr std::uintptr_t m_facingTarget          = 0X00A8; // AnimValueSource
            static constexpr std::uintptr_t m_hParam                = 0X00AC; // CAnimParamHandle
            static constexpr std::uintptr_t m_flTurnToFaceOffset    = 0X00B0; // float32
            static constexpr std::uintptr_t m_bTurnToFace           = 0X00B4; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct AimMatrixOpFixedSettings_t {
        public:
            static constexpr std::uintptr_t m_attachment                = 0X0000; // CAnimAttachment
            static constexpr std::uintptr_t m_damping                   = 0X0080; // CAnimInputDamping
            static constexpr std::uintptr_t m_poseCacheHandles          = 0X0098; // CPoseHandle[10]
            static constexpr std::uintptr_t m_eBlendMode                = 0X00C0; // AimMatrixBlendMode
            static constexpr std::uintptr_t m_flMaxYawAngle             = 0X00C4; // float32
            static constexpr std::uintptr_t m_flMaxPitchAngle           = 0X00C8; // float32
            static constexpr std::uintptr_t m_nSequenceMaxFrame         = 0X00CC; // int32
            static constexpr std::uintptr_t m_nBoneMaskIndex            = 0X00D0; // int32
            static constexpr std::uintptr_t m_bTargetIsPosition         = 0X00D4; // bool
            static constexpr std::uintptr_t m_bUseBiasAndClamp          = 0X00D5; // bool
            static constexpr std::uintptr_t m_flBiasAndClampYawOffset   = 0X00D8; // float32
            static constexpr std::uintptr_t m_flBiasAndClampPitchOffset = 0X00DC; // float32
            static constexpr std::uintptr_t m_biasAndClampBlendCurve    = 0X00E0; // CBlendCurve
        };

        // Has VTable
        // Construct Allowed
        class CAnimScriptComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_hScript = 0X0030; // AnimScriptHandle
        };

        // Has VTable
        // Construct Allowed
        class CRagdollUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_nWeightListIndex  = 0X0070; // int32
            static constexpr std::uintptr_t m_poseControlMethod = 0X0074; // RagdollPoseControl
        };

        // Has VTable
        // Construct Allowed
        class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CMaterialAttributeAnimTag : public CAnimTagBase {
        public:
            static constexpr std::uintptr_t m_AttributeName = 0X0058; // CUtlString
            static constexpr std::uintptr_t m_AttributeType = 0X0060; // MatterialAttributeTagType_t
            static constexpr std::uintptr_t m_flValue       = 0X0064; // float32
            static constexpr std::uintptr_t m_Color         = 0X0068; // Color
        };

        // Has VTable
        // Construct Allowed
        class CNmFootEventConditionNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nSourceStateNodeIdx = 0X0010; // int16
            static constexpr std::uintptr_t m_phaseCondition      = 0X0012; // NmFootPhaseCondition_t
            static constexpr std::uintptr_t m_eventConditionRules = 0X0014; // CNmBitFlags
        };

        // Has VTable
        // Construct Allowed
        class CNmFootEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_phase = 0X0020; // NmFootPhase_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPhysSurfacePropertiesAudio {
        public:
            static constexpr std::uintptr_t m_reflectivity          = 0X0000; // float32
            static constexpr std::uintptr_t m_hardnessFactor        = 0X0004; // float32
            static constexpr std::uintptr_t m_roughnessFactor       = 0X0008; // float32
            static constexpr std::uintptr_t m_roughThreshold        = 0X000C; // float32
            static constexpr std::uintptr_t m_hardThreshold         = 0X0010; // float32
            static constexpr std::uintptr_t m_hardVelocityThreshold = 0X0014; // float32
            static constexpr std::uintptr_t m_flStaticImpactVolume  = 0X0018; // float32
            static constexpr std::uintptr_t m_flOcclusionFactor     = 0X001C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSeqAutoLayer {
        public:
            static constexpr std::uintptr_t m_nLocalReference = 0X0000; // int16
            static constexpr std::uintptr_t m_nLocalPose      = 0X0002; // int16
            static constexpr std::uintptr_t m_flags           = 0X0004; // CSeqAutoLayerFlag
            static constexpr std::uintptr_t m_start           = 0X000C; // float32
            static constexpr std::uintptr_t m_peak            = 0X0010; // float32
            static constexpr std::uintptr_t m_tail            = 0X0014; // float32
            static constexpr std::uintptr_t m_end             = 0X0018; // float32
        };

        // Construct Allowed
        struct ModelEmbeddedMesh_t {
        public:
            static constexpr std::uintptr_t m_Name          = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nMeshIndex    = 0X0010; // int32
            static constexpr std::uintptr_t m_nDataBlock    = 0X0014; // int32
            static constexpr std::uintptr_t m_nMorphBlock   = 0X0018; // int32
            static constexpr std::uintptr_t m_vertexBuffers = 0X0020; // CUtlVector<ModelMeshBufferData_t>
            static constexpr std::uintptr_t m_indexBuffers  = 0X0038; // CUtlVector<ModelMeshBufferData_t>
            static constexpr std::uintptr_t m_toolsBuffers  = 0X0050; // CUtlVector<ModelMeshBufferData_t>
            static constexpr std::uintptr_t m_nVBIBBlock    = 0X0068; // int32
            static constexpr std::uintptr_t m_nToolsVBBlock = 0X006C; // int32
        };

        // Construct Allowed
        struct PhysSoftbodyDesc_t {
        public:
            static constexpr std::uintptr_t m_ParticleBoneHash = 0X0000; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_Particles        = 0X0018; // CUtlVector<RnSoftbodyParticle_t>
            static constexpr std::uintptr_t m_Springs          = 0X0030; // CUtlVector<RnSoftbodySpring_t>
            static constexpr std::uintptr_t m_Capsules         = 0X0048; // CUtlVector<RnSoftbodyCapsule_t>
            static constexpr std::uintptr_t m_InitPose         = 0X0060; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_ParticleBoneName = 0X0078; // CUtlVector<CUtlString>
        };

        // Construct Allowed
        class CPulseRuntimeMethodArg {
        public:
            static constexpr std::uintptr_t m_Name        = 0X0000; // CKV3MemberNameWithStorage
            static constexpr std::uintptr_t m_Description = 0X0038; // CUtlString
            static constexpr std::uintptr_t m_Type        = 0X0040; // CPulseValueFullType
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CAnimSequenceParams {
        public:
            static constexpr std::uintptr_t m_flFadeInTime  = 0X0000; // float32
            static constexpr std::uintptr_t m_flFadeOutTime = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class CTargetWarpUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_eAngleMode                        = 0X0074; // TargetWarpAngleMode_t
            static constexpr std::uintptr_t m_hTargetPositionParameter          = 0X0078; // CAnimParamHandle
            static constexpr std::uintptr_t m_hTargetUpVectorParameter          = 0X007A; // CAnimParamHandle
            static constexpr std::uintptr_t m_hTargetFacePositionParameter      = 0X007C; // CAnimParamHandle
            static constexpr std::uintptr_t m_hMoveHeadingParameter             = 0X007E; // CAnimParamHandle
            static constexpr std::uintptr_t m_hDesiredMoveHeadingParameter      = 0X0080; // CAnimParamHandle
            static constexpr std::uintptr_t m_eCorrectionMethod                 = 0X0084; // TargetWarpCorrectionMethod
            static constexpr std::uintptr_t m_eTargetWarpTimingMethod           = 0X0088; // TargetWarpTimingMethod
            static constexpr std::uintptr_t m_bTargetFacePositionIsWorldSpace   = 0X008C; // bool
            static constexpr std::uintptr_t m_bTargetPositionIsWorldSpace       = 0X008D; // bool
            static constexpr std::uintptr_t m_bOnlyWarpWhenTagIsFound           = 0X008E; // bool
            static constexpr std::uintptr_t m_bWarpOrientationDuringTranslation = 0X008F; // bool
            static constexpr std::uintptr_t m_bWarpAroundCenter                 = 0X0090; // bool
            static constexpr std::uintptr_t m_flMaxAngle                        = 0X0094; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmVirtualParameterBoolNode__CDefinition : public CNmBoolValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nChildNodeIdx = 0X0010; // int16
        };

        // Has VTable
        // Construct Allowed
        class CFollowTargetUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_opFixedData           = 0X0070; // FollowTargetOpFixedSettings_t
            static constexpr std::uintptr_t m_hParameterPosition    = 0X0088; // CAnimParamHandle
            static constexpr std::uintptr_t m_hParameterOrientation = 0X008A; // CAnimParamHandle
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PulseRuntimeStateOffset_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint16
        };

        // Has VTable
        // Construct Allowed
        class CCPPScriptComponentUpdater : public CAnimComponentUpdater {
        public:
            static constexpr std::uintptr_t m_scriptsToRun = 0X0030; // CUtlVector<CGlobalSymbol>
        };

        // Has VTable
        // Construct Allowed
        class CAnimData {
        public:
            static constexpr std::uintptr_t m_name                 = 0X0010; // CBufferString
            static constexpr std::uintptr_t m_animArray            = 0X0020; // CUtlVector<CAnimDesc>
            static constexpr std::uintptr_t m_decoderArray         = 0X0038; // CUtlVector<CAnimDecoder>
            static constexpr std::uintptr_t m_nMaxUniqueFrameIndex = 0X0050; // int32
            static constexpr std::uintptr_t m_segmentArray         = 0X0058; // CUtlVector<CAnimFrameSegment>
        };

        // Has Trivial Destructor
        struct IKSolverSettings_t {
        public:
            static constexpr std::uintptr_t m_SolverType                   = 0X0000; // IKSolverType
            static constexpr std::uintptr_t m_nNumIterations               = 0X0004; // int32
            static constexpr std::uintptr_t m_EndEffectorRotationFixUpMode = 0X0008; // EIKEndEffectorRotationFixUpMode
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmParameterizedBlendNode__BlendRange_t {
        public:
            static constexpr std::uintptr_t m_nInputIdx0          = 0X0000; // int16
            static constexpr std::uintptr_t m_nInputIdx1          = 0X0002; // int16
            static constexpr std::uintptr_t m_parameterValueRange = 0X0004; // Range_t
        };

        // Construct Allowed
        class CAnimKeyData {
        public:
            static constexpr std::uintptr_t m_name             = 0X0000; // CBufferString
            static constexpr std::uintptr_t m_boneArray        = 0X0010; // CUtlVector<CAnimBone>
            static constexpr std::uintptr_t m_userArray        = 0X0028; // CUtlVector<CAnimUser>
            static constexpr std::uintptr_t m_morphArray       = 0X0040; // CUtlVector<CBufferString>
            static constexpr std::uintptr_t m_nChannelElements = 0X0058; // int32
            static constexpr std::uintptr_t m_dataChannelArray = 0X0060; // CUtlVector<CAnimDataChannelDesc>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct AttachmentHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint8
        };

        // Construct Allowed
        class CAnimMorphDifference {
        public:
            static constexpr std::uintptr_t m_name = 0X0000; // CBufferString
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FootFixedData_t {
        public:
            static constexpr std::uintptr_t m_vToeOffset         = 0X0000; // VectorAligned
            static constexpr std::uintptr_t m_vHeelOffset        = 0X0010; // VectorAligned
            static constexpr std::uintptr_t m_nTargetBoneIndex   = 0X0020; // int32
            static constexpr std::uintptr_t m_nAnkleBoneIndex    = 0X0024; // int32
            static constexpr std::uintptr_t m_nIKAnchorBoneIndex = 0X0028; // int32
            static constexpr std::uintptr_t m_ikChainIndex       = 0X002C; // int32
            static constexpr std::uintptr_t m_flMaxIKLength      = 0X0030; // float32
            static constexpr std::uintptr_t m_nFootIndex         = 0X0034; // int32
            static constexpr std::uintptr_t m_nTagIndex          = 0X0038; // int32
            static constexpr std::uintptr_t m_flMaxRotationLeft  = 0X003C; // float32
            static constexpr std::uintptr_t m_flMaxRotationRight = 0X0040; // float32
        };

        // Construct Allowed
        class CMotionGraphGroup {
        public:
            static constexpr std::uintptr_t m_searchDB           = 0X0000; // CMotionSearchDB
            static constexpr std::uintptr_t m_motionGraphs       = 0X00B8; // CUtlVector<CSmartPtr<CMotionGraph>>
            static constexpr std::uintptr_t m_motionGraphConfigs = 0X00D0; // CUtlVector<CMotionGraphConfig>
            static constexpr std::uintptr_t m_sampleToConfig     = 0X00E8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_hIsActiveScript    = 0X0100; // AnimScriptHandle
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPulse_InstructionDebug {
        public:
            static constexpr std::uintptr_t m_nFlowNodeID       = 0X0000; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_nValueNodeID      = 0X0004; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_SequencePointName = 0X0008; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        class CNmVectorNegateNode__CDefinition : public CNmVectorValueNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nInputValueNodeIdx = 0X0010; // int16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CNmSyncTrack__Event_t {
        public:
            static constexpr std::uintptr_t m_ID        = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_startTime = 0X0008; // NmPercent_t
            static constexpr std::uintptr_t m_duration  = 0X000C; // NmPercent_t
        };

        // Has VTable
        // Construct Allowed
        class CParticleCollectionRendererVecInput : public CParticleCollectionVecInput {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNmTarget {
        public:
            static constexpr std::uintptr_t m_transform                = 0X0000; // CTransform
            static constexpr std::uintptr_t m_boneID                   = 0X0020; // CGlobalSymbol
            static constexpr std::uintptr_t m_bIsBoneTarget            = 0X0028; // bool
            static constexpr std::uintptr_t m_bIsUsingBoneSpaceOffsets = 0X0029; // bool
            static constexpr std::uintptr_t m_bHasOffsets              = 0X002A; // bool
            static constexpr std::uintptr_t m_bIsSet                   = 0X002B; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmControlParameterIDNode__CDefinition : public CNmIDValueNode__CDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmBodyGroupEvent : public CNmEvent {
        public:
            static constexpr std::uintptr_t m_groupName   = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_nGroupValue = 0X0028; // int32
        };

        // Has VTable
        // Construct Allowed
        class CWayPointHelperUpdateNode : public CUnaryUpdateNode {
        public:
            static constexpr std::uintptr_t m_flStartCycle       = 0X0074; // float32
            static constexpr std::uintptr_t m_flEndCycle         = 0X0078; // float32
            static constexpr std::uintptr_t m_bOnlyGoals         = 0X007C; // bool
            static constexpr std::uintptr_t m_bPreventOvershoot  = 0X007D; // bool
            static constexpr std::uintptr_t m_bPreventUndershoot = 0X007E; // bool
        };

        // Construct Allowed
        class CMoodVData {
        public:
            static constexpr std::uintptr_t m_sModelName      = 0X0000; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_nMoodType       = 0X00E0; // MoodType_t
            static constexpr std::uintptr_t m_animationLayers = 0X00E8; // CUtlVector<MoodAnimationLayer_t>
        };

        // Has VTable
        // Construct Allowed
        class CModelConfigElement_AttachedModel : public CModelConfigElement {
        public:
            static constexpr std::uintptr_t m_InstanceName                = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_EntityClass                 = 0X0050; // CUtlString
            static constexpr std::uintptr_t m_hModel                      = 0X0058; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_vOffset                     = 0X0060; // Vector
            static constexpr std::uintptr_t m_aAngOffset                  = 0X006C; // QAngle
            static constexpr std::uintptr_t m_AttachmentName              = 0X0078; // CUtlString
            static constexpr std::uintptr_t m_LocalAttachmentOffsetName   = 0X0080; // CUtlString
            static constexpr std::uintptr_t m_AttachmentType              = 0X0088; // ModelConfigAttachmentType_t
            static constexpr std::uintptr_t m_bBoneMergeFlex              = 0X008C; // bool
            static constexpr std::uintptr_t m_bUserSpecifiedColor         = 0X008D; // bool
            static constexpr std::uintptr_t m_bUserSpecifiedMaterialGroup = 0X008E; // bool
            static constexpr std::uintptr_t m_BodygroupOnOtherModels      = 0X0090; // CUtlString
            static constexpr std::uintptr_t m_MaterialGroupOnOtherModels  = 0X0098; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class CAnimTagManagerUpdater {
        public:
            static constexpr std::uintptr_t m_tags = 0X0038; // CUtlVector<CSmartPtr<CAnimTagBase>>
        };

        // Global Type Scope
        class CParticleProperty {
        public:
        };
    }
}

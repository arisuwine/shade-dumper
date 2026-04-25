#pragma once
#include <cstdint>

namespace offsets {
    namespace particles {
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

        enum class Detail2Combo_t : std::uint32_t {
            DETAIL_2_COMBO_UNINITIALIZED  = 0xFFFFFFFF,
            DETAIL_2_COMBO_OFF            = 0x0,
            DETAIL_2_COMBO_ADD            = 0x1,
            DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
            DETAIL_2_COMBO_MOD2X          = 0x3,
            DETAIL_2_COMBO_MUL            = 0x4,
            DETAIL_2_COMBO_CROSSFADE      = 0x5
        };

        enum class MissingParentInheritBehavior_t : std::uint32_t {
            MISSING_PARENT_DO_NOTHING = 0xFFFFFFFF,
            MISSING_PARENT_KILL       = 0x0,
            MISSING_PARENT_FIND_NEW   = 0x1,
            MISSING_PARENT_SAME_INDEX = 0x2
        };

        enum class ParticleTraceMissBehavior_t : std::uint32_t {
            PARTICLE_TRACE_MISS_BEHAVIOR_NONE      = 0x0,
            PARTICLE_TRACE_MISS_BEHAVIOR_KILL      = 0x1,
            PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
        };

        enum class PFuncVisualizationType_t : std::uint32_t {
            PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
            PFUNC_VISUALIZATION_SPHERE_SOLID     = 0x1,
            PFUNC_VISUALIZATION_BOX              = 0x2,
            PFUNC_VISUALIZATION_RING             = 0x3,
            PFUNC_VISUALIZATION_PLANE            = 0x4,
            PFUNC_VISUALIZATION_LINE             = 0x5,
            PFUNC_VISUALIZATION_CYLINDER         = 0x6
        };

        enum class ParticleVRHandChoiceList_t : std::uint32_t {
            PARTICLE_VRHAND_LEFT      = 0x0,
            PARTICLE_VRHAND_RIGHT     = 0x1,
            PARTICLE_VRHAND_CP        = 0x2,
            PARTICLE_VRHAND_CP_OBJECT = 0x3
        };

        enum class ParticleReplicationMode_t : std::uint32_t {
            PARTICLE_REPLICATIONMODE_NONE                               = 0x0,
            PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
        };

        enum class ParticleEntityPos_t : std::uint32_t {
            PARTICLE_ABS_ORIGIN        = 0x0,
            PARTICLE_WORLDSPACE_CENTER = 0x1,
            PARTICLE_EYES              = 0x2
        };

        enum class ParticleFanType_t : std::uint32_t {
            PARTICLE_FAN_TYPE_FAN        = 0x0,
            PARTICLE_FAN_TYPE_ROTOR_WASH = 0x1,
            PARTICLE_FAN_TYPE_RADIAL     = 0x2
        };

        enum class PetGroundType_t : std::uint32_t {
            PET_GROUND_NONE  = 0x0,
            PET_GROUND_GRID  = 0x1,
            PET_GROUND_PLANE = 0x2
        };

        enum class InheritableBoolType_t : std::uint32_t {
            INHERITABLE_BOOL_INHERIT = 0x0,
            INHERITABLE_BOOL_FALSE   = 0x1,
            INHERITABLE_BOOL_TRUE    = 0x2
        };

        enum class ParticlePostProcessPriorityGroup_t : std::uint32_t {
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME        = 0x0,
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE      = 0x1,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT     = 0x2,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW  = 0x3,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
            PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI           = 0x5
        };

        enum class ParticleCollisionGroup_t : std::uint32_t {
            PARTICLE_COLLISION_GROUP_DEFAULT     = 0x4,
            PARTICLE_COLLISION_GROUP_DEBRIS      = 0x5,
            PARTICLE_COLLISION_GROUP_INTERACTIVE = 0x7,
            PARTICLE_COLLISION_GROUP_PLAYER      = 0x8,
            PARTICLE_COLLISION_GROUP_VEHICLE     = 0xA,
            PARTICLE_COLLISION_GROUP_NPC         = 0xC,
            PARTICLE_COLLISION_GROUP_PROPS       = 0x18
        };

        enum class DetailCombo_t : std::uint32_t {
            DETAIL_COMBO_OFF            = 0x0,
            DETAIL_COMBO_ADD            = 0x1,
            DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
            DETAIL_COMBO_MOD2X          = 0x3
        };

        enum class ScalarExpressionType_t : std::uint32_t {
            SCALAR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFF,
            SCALAR_EXPRESSION_ADD           = 0x0,
            SCALAR_EXPRESSION_SUBTRACT      = 0x1,
            SCALAR_EXPRESSION_MUL           = 0x2,
            SCALAR_EXPRESSION_DIVIDE        = 0x3,
            SCALAR_EXPRESSION_INPUT_1       = 0x4,
            SCALAR_EXPRESSION_MIN           = 0x5,
            SCALAR_EXPRESSION_MAX           = 0x6,
            SCALAR_EXPRESSION_MOD           = 0x7,
            SCALAR_EXPRESSION_EQUAL         = 0x8,
            SCALAR_EXPRESSION_GT            = 0x9,
            SCALAR_EXPRESSION_LT            = 0xA
        };

        enum class SpriteCardPerParticleScale_t : std::uint32_t {
            SPRITECARD_TEXTURE_PP_SCALE_NONE               = 0x0,
            SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE       = 0x1,
            SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME    = 0x2,
            SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
            SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
            SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA     = 0x5,
            SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS      = 0x6,
            SPRITECARD_TEXTURE_PP_SCALE_ROLL               = 0x7,
            SPRITECARD_TEXTURE_PP_SCALE_YAW                = 0x8,
            SPRITECARD_TEXTURE_PP_SCALE_PITCH              = 0x9,
            SPRITECARD_TEXTURE_PP_SCALE_RANDOM             = 0xA,
            SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM         = 0xB,
            SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME        = 0xC,
            SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME    = 0xD
        };

        enum class BlurFilterType_t : std::uint32_t {
            BLURFILTER_GAUSSIAN = 0x0,
            BLURFILTER_BOX      = 0x1
        };

        enum class StandardLightingAttenuationStyle_t : std::uint32_t {
            LIGHT_STYLE_OLD = 0x0,
            LIGHT_STYLE_NEW = 0x1
        };

        enum class ParticleParentSetMode_t : std::uint32_t {
            PARTICLE_SET_PARENT_NO        = 0x0,
            PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
            PARTICLE_SET_PARENT_ROOT      = 0x2
        };

        enum class ParticleLightingQuality_t : std::uint32_t {
            PARTICLE_LIGHTING_PER_PARTICLE      = 0x0,
            PARTICLE_LIGHTING_PER_VERTEX        = 0x1,
            PARTICLE_LIGHTING_PER_PIXEL         = 0xFFFFFFFF,
            PARTICLE_LIGHTING_OVERRIDE_POSITION = 0x2,
            PARTICLE_LIGHTING_OVERRIDE_COLOR    = 0x3,
            PARTICLE_LIGHTING_ADD_EXTRA_LIGHT   = 0x4
        };

        enum class ParticleVolumetricSmokeCreationType_t : std::uint32_t {
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0x0,
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE    = 0x1
        };

        enum class SetStatisticExpressionType_t : std::uint32_t {
            SET_EXPRESSION_UNINITIALIZED      = 0xFFFFFFFF,
            SET_EXPRESSION_SUM                = 0x0,
            SET_EXPRESSION_MEAN               = 0x1,
            SET_EXPRESSION_MEDIAN             = 0x2,
            SET_EXPRESSION_MODE               = 0x3,
            SET_EXPRESSION_STANDARD_DEVIATION = 0x4,
            SET_EXPRESSION_MIN                = 0x5,
            SET_EXPRESSION_MAX                = 0x6
        };

        enum class EventTypeSelection_t : std::uint32_t {
            PARTICLE_EVENT_TYPE_MASK_NONE                = 0x0,
            PARTICLE_EVENT_TYPE_MASK_SPAWNED             = 0x1,
            PARTICLE_EVENT_TYPE_MASK_KILLED              = 0x2,
            PARTICLE_EVENT_TYPE_MASK_COLLISION           = 0x4,
            PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION     = 0x8,
            PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED   = 0x10,
            PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 0x20,
            PARTICLE_EVENT_TYPE_MASK_USER_1              = 0x40,
            PARTICLE_EVENT_TYPE_MASK_USER_2              = 0x80,
            PARTICLE_EVENT_TYPE_MASK_USER_3              = 0x100,
            PARTICLE_EVENT_TYPE_MASK_USER_4              = 0x200
        };

        enum class ParticleMassMode_t : std::uint32_t {
            PARTICLE_MASSMODE_RADIUS_CUBED   = 0x0,
            PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
        };

        enum class ParticleHitboxBiasType_t : std::uint32_t {
            PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
            PARTICLE_HITBOX_BIAS_HITBOX = 0x1
        };

        enum class ParticleControlPointAxis_t : std::uint32_t {
            PARTICLE_CP_AXIS_X          = 0x0,
            PARTICLE_CP_AXIS_Y          = 0x1,
            PARTICLE_CP_AXIS_Z          = 0x2,
            PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
            PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
            PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
        };

        enum class ParticlePinDistance_t : std::uint32_t {
            PARTICLE_PIN_DISTANCE_NONE           = 0xFFFFFFFF,
            PARTICLE_PIN_DISTANCE_NEIGHBOR       = 0x0,
            PARTICLE_PIN_DISTANCE_FARTHEST       = 0x1,
            PARTICLE_PIN_DISTANCE_FIRST          = 0x2,
            PARTICLE_PIN_DISTANCE_LAST           = 0x3,
            PARTICLE_PIN_DISTANCE_CENTER         = 0x5,
            PARTICLE_PIN_DISTANCE_CP             = 0x6,
            PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
            PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH   = 0x8,
            PARTICLE_PIN_SPEED                   = 0x9,
            PARTICLE_PIN_COLLECTION_AGE          = 0xA,
            PARTICLE_PIN_FLOAT_VALUE             = 0xB
        };

        enum class VectorFloatExpressionType_t : std::uint32_t {
            VECTOR_FLOAT_EXPRESSION_UNINITIALIZED    = 0xFFFFFFFF,
            VECTOR_FLOAT_EXPRESSION_DOTPRODUCT       = 0x0,
            VECTOR_FLOAT_EXPRESSION_DISTANCE         = 0x1,
            VECTOR_FLOAT_EXPRESSION_DISTANCESQR      = 0x2,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH    = 0x3,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
            VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE     = 0x5
        };

        enum class ParticleFogType_t : std::uint32_t {
            PARTICLE_FOG_GAME_DEFAULT = 0x0,
            PARTICLE_FOG_ENABLED      = 0x1,
            PARTICLE_FOG_DISABLED     = 0x2
        };

        enum class VectorExpressionType_t : std::uint32_t {
            VECTOR_EXPRESSION_UNINITIALIZED = 0xFFFFFFFF,
            VECTOR_EXPRESSION_ADD           = 0x0,
            VECTOR_EXPRESSION_SUBTRACT      = 0x1,
            VECTOR_EXPRESSION_MUL           = 0x2,
            VECTOR_EXPRESSION_DIVIDE        = 0x3,
            VECTOR_EXPRESSION_INPUT_1       = 0x4,
            VECTOR_EXPRESSION_MIN           = 0x5,
            VECTOR_EXPRESSION_MAX           = 0x6,
            VECTOR_EXPRESSION_CROSSPRODUCT  = 0x7,
            VECTOR_EXPRESSION_LERP          = 0x8
        };

        enum class ParticleMultiSegmentInputSelection_t : std::uint32_t {
            PARTICLE_MULTISEGMENT_SELECTION_FLOAT  = 0x0,
            PARTICLE_MULTISEGMENT_SELECTION_STRING = 0x1
        };

        enum class ParticleRotationLockType_t : std::uint32_t {
            PARTICLE_ROTATION_LOCK_NONE      = 0x0,
            PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
            PARTICLE_ROTATION_LOCK_NORMAL    = 0x2
        };

        enum class HitboxLerpType_t : std::uint32_t {
            HITBOX_LERP_LIFETIME = 0x0,
            HITBOX_LERP_CONSTANT = 0x1
        };

        enum class ParticleAttrBoxFlags_t : std::uint32_t {
            PARTICLE_ATTR_BOX_FLAGS_NONE        = 0x0,
            PARTICLE_ATTR_BOX_FLAGS_WATER       = 0x1,
            PARTICLE_ATTR_BOX_FLAGS_ON_FIRE     = 0x2,
            PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 0x4,
            PARTICLE_ATTR_BOX_FLAGS_ASLEEP      = 0x8,
            PARTICLE_ATTR_BOX_FLAGS_FROZEN      = 0x10,
            PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 0x20
        };

        enum class ParticleTopology_t : std::uint32_t {
            PARTICLE_TOPOLOGY_POINTS = 0x0,
            PARTICLE_TOPOLOGY_LINES  = 0x1,
            PARTICLE_TOPOLOGY_TRIS   = 0x2,
            PARTICLE_TOPOLOGY_QUADS  = 0x3,
            PARTICLE_TOPOLOGY_CUBES  = 0x4
        };

        enum class ParticleLightBehaviorChoiceList_t : std::uint32_t {
            PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
            PARTICLE_LIGHT_BEHAVIOR_ROPE             = 0x1,
            PARTICLE_LIGHT_BEHAVIOR_TRAILS           = 0x2
        };

        enum class ModelHitboxType_t : std::uint32_t {
            MODEL_HITBOX_TYPE_STANDARD     = 0x0,
            MODEL_HITBOX_TYPE_RAW_BONES    = 0x1,
            MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
            MODEL_HITBOX_TYPE_SNAPSHOT     = 0x3
        };

        enum class ParticleMultiSegmentCountSelection_t : std::uint32_t {
            PARTICLE_MULTISEGMENT_SEG_COUNT_7  = 0x7,
            PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 0xE,
            PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 0x10
        };

        enum class ParticleOrientationType_t : std::uint32_t {
            PARTICLE_ORIENTATION_NONE     = 0x0,
            PARTICLE_ORIENTATION_VELOCITY = 0x1,
            PARTICLE_ORIENTATION_NORMAL   = 0x2,
            PARTICLE_ORIENTATION_ROTATION = 0x4
        };

        enum class ParticleTraceSet_t : std::uint32_t {
            PARTICLE_TRACE_SET_ALL                  = 0x0,
            PARTICLE_TRACE_SET_STATIC               = 0x1,
            PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
            PARTICLE_TRACE_SET_DYNAMIC              = 0x3
        };

        enum class ParticleTextureLayerBlendType_t : std::uint32_t {
            SPRITECARD_TEXTURE_BLEND_MULTIPLY  = 0x0,
            SPRITECARD_TEXTURE_BLEND_MOD2X     = 0x1,
            SPRITECARD_TEXTURE_BLEND_REPLACE   = 0x2,
            SPRITECARD_TEXTURE_BLEND_ADD       = 0x3,
            SPRITECARD_TEXTURE_BLEND_SUBTRACT  = 0x4,
            SPRITECARD_TEXTURE_BLEND_AVERAGE   = 0x5,
            SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6
        };

        enum class ParticleSelection_t : std::uint32_t {
            PARTICLE_SELECTION_FIRST  = 0x0,
            PARTICLE_SELECTION_LAST   = 0x1,
            PARTICLE_SELECTION_NUMBER = 0x2
        };

        enum class ParticleToolsState_t : std::uint32_t {
            PARTICLE_TOOLS_STATE_ALWAYS_ON  = 0xFFFFFFFF,
            PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0x0,
            PARTICLE_TOOLS_STATE_GAME_ONLY  = 0x1
        };

        enum class SnapshotIndexType_t : std::uint32_t {
            SNAPSHOT_INDEX_INCREMENT = 0x0,
            SNAPSHOT_INDEX_DIRECT    = 0x1
        };

        enum class ParticleOutputBlendMode_t : std::uint32_t {
            PARTICLE_OUTPUT_BLEND_MODE_ALPHA              = 0x0,
            PARTICLE_OUTPUT_BLEND_MODE_ADD                = 0x1,
            PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD          = 0x2,
            PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD     = 0x3,
            PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
            PARTICLE_OUTPUT_BLEND_MODE_MOD2X              = 0x5,
            PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN            = 0x6
        };

        enum class ParticleLightnintBranchBehavior_t : std::uint32_t {
            PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR  = 0x0,
            PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
        };

        enum class MaterialProxyType_t : std::uint32_t {
            MATERIAL_PROXY_STATUS_EFFECT = 0x0,
            MATERIAL_PROXY_TINT          = 0x1
        };

        enum class ParticleDepthFeatheringMode_t : std::uint32_t {
            PARTICLE_DEPTH_FEATHERING_OFF         = 0x0,
            PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
            PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
        };

        enum class ParticleLightUnitChoiceList_t : std::uint32_t {
            PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
            PARTICLE_LIGHT_UNIT_LUMENS   = 0x1
        };

        enum class ParticleMultiSegmentSpecialCharacter_t : std::uint32_t {
            PARTICLE_MULTISEGMENT_SPECIAL_NONE    = 0xFFFFFFFF,
            PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0x0,
            PARTICLE_MULTISEGMENT_SPECIAL_COLON   = 0x1,
            PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 0x2
        };

        enum class ParticleFalloffFunction_t : std::uint32_t {
            PARTICLE_FALLOFF_CONSTANT    = 0x0,
            PARTICLE_FALLOFF_LINEAR      = 0x1,
            PARTICLE_FALLOFF_EXPONENTIAL = 0x2
        };

        enum class ParticleSequenceCropOverride_t : std::uint32_t {
            PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT   = 0xFFFFFFFF,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON  = 0x1
        };

        enum class ParticleDetailLevel_t : std::uint32_t {
            PARTICLEDETAIL_LOW    = 0x0,
            PARTICLEDETAIL_MEDIUM = 0x1,
            PARTICLEDETAIL_HIGH   = 0x2,
            PARTICLEDETAIL_ULTRA  = 0x3
        };

        enum class BBoxVolumeType_t : std::uint32_t {
            BBOX_VOLUME     = 0x0,
            BBOX_DIMENSIONS = 0x1,
            BBOX_MINS_MAXS  = 0x2,
            BBOX_RADIUS     = 0x3
        };

        enum class SpriteCardTextureType_t : std::uint32_t {
            SPRITECARD_TEXTURE_DIFFUSE               = 0x0,
            SPRITECARD_TEXTURE_ZOOM                  = 0x1,
            SPRITECARD_TEXTURE_1D_COLOR_LOOKUP       = 0x2,
            SPRITECARD_TEXTURE_UVDISTORTION          = 0x3,
            SPRITECARD_TEXTURE_UVDISTORTION_ZOOM     = 0x4,
            SPRITECARD_TEXTURE_NORMALMAP             = 0x5,
            SPRITECARD_TEXTURE_ANIMMOTIONVEC         = 0x6,
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
            SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
            SPRITECARD_TEXTURE_DEPTH                 = 0xA,
            SPRITECARD_TEXTURE_ILLUMINATION_GRADIENT = 0xB
        };

        enum class ParticleAlphaReferenceType_t : std::uint32_t {
            PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA   = 0x0,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA  = 0x1,
            PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE  = 0x2,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
        };

        enum class SpriteCardTextureChannel_t : std::uint32_t {
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB            = 0x0,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA           = 0x1,
            SPRITECARD_TEXTURE_CHANNEL_MIX_A              = 0x2,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A          = 0x3,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK  = 0x4,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK    = 0x5,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA  = 0x6,
            SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA     = 0x7,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
            SPRITECARD_TEXTURE_CHANNEL_MIX_R              = 0x9,
            SPRITECARD_TEXTURE_CHANNEL_MIX_G              = 0xA,
            SPRITECARD_TEXTURE_CHANNEL_MIX_B              = 0xB,
            SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA         = 0xC,
            SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA         = 0xD,
            SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA         = 0xE
        };

        enum class ParticleVolumetricSmokeType_t : std::uint32_t {
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0x0,
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK     = 0x1,
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL    = 0x2
        };

        enum class RenderModelSubModelFieldType_t : std::uint32_t {
            SUBMODEL_AS_BODYGROUP_SUBMODEL                    = 0x0,
            SUBMODEL_AS_MESHGROUP_INDEX                       = 0x1,
            SUBMODEL_AS_MESHGROUP_MASK                        = 0x2,
            SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
        };

        enum class ParticleHitboxDataSelection_t : std::uint32_t {
            PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
            PARTICLE_HITBOX_COUNT         = 0x1
        };

        enum class ParticleOrientationChoiceList_t : std::uint32_t {
            PARTICLE_ORIENTATION_SCREEN_ALIGNED                 = 0x0,
            PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED               = 0x1,
            PARTICLE_ORIENTATION_WORLD_Z_ALIGNED                = 0x2,
            PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL       = 0x3,
            PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
            PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION            = 0x5
        };

        enum class ParticleCollisionMode_t : std::uint32_t {
            COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
            COLLISION_MODE_USE_NEAREST_TRACE  = 0x2,
            COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
            COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
            COLLISION_MODE_DISABLED           = 0xFFFFFFFF
        };

        enum class ParticleSortingChoiceList_t : std::uint32_t {
            PARTICLE_SORTING_NEAREST       = 0x0,
            PARTICLE_SORTING_CREATION_TIME = 0x1
        };

        enum class ParticleEndcapMode_t : std::uint32_t {
            PARTICLE_ENDCAP_ALWAYS_ON  = 0xFFFFFFFF,
            PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
            PARTICLE_ENDCAP_ENDCAP_ON  = 0x1
        };

        enum class ClosestPointTestType_t : std::uint32_t {
            PARTICLE_CLOSEST_TYPE_BOX     = 0x0,
            PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
            PARTICLE_CLOSEST_TYPE_HYBRID  = 0x2
        };

        enum class ParticleImpulseType_t : std::uint32_t {
            IMPULSE_TYPE_NONE                 = 0x0,
            IMPULSE_TYPE_GENERIC              = 0x1,
            IMPULSE_TYPE_ROPE                 = 0x2,
            IMPULSE_TYPE_EXPLOSION            = 0x4,
            IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
            IMPULSE_TYPE_PARTICLE_SYSTEM      = 0x10
        };

        enum class ParticleLiquidContents_t : std::uint32_t {
            PARTICLE_LIQUID_NONE  = 0x0,
            PARTICLE_LIQUID_OIL   = 0x1,
            PARTICLE_LIQUID_WATER = 0x2
        };

        enum class SpriteCardShaderType_t : std::uint32_t {
            SPRITECARD_SHADER_BASE   = 0x0,
            SPRITECARD_SHADER_CUSTOM = 0x1
        };

        enum class ParticleOmni2LightTypeChoiceList_t : std::uint32_t {
            PARTICLE_OMNI2_LIGHT_TYPE_POINT  = 0x0,
            PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
        };

        enum class ParticleLightFogLightingMode_t : std::uint32_t {
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE              = 0x0,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC           = 0x2,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
        };

        enum class ParticleLightTypeChoiceList_t : std::uint32_t {
            PARTICLE_LIGHT_TYPE_POINT   = 0x0,
            PARTICLE_LIGHT_TYPE_SPOT    = 0x1,
            PARTICLE_LIGHT_TYPE_FX      = 0x2,
            PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
        };

        enum class ParticleOrientationSetMode_t : std::uint32_t {
            PARTICLE_ORIENTATION_SET_NONE           = 0xFFFFFFFF,
            PARTICLE_ORIENTATION_SET_FROM_VELOCITY  = 0x0,
            PARTICLE_ORIENTATION_SET_FROM_NORMAL    = 0x1,
            PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x2
        };

        enum class ParticleCollisionMask_t : std::uint64_t {
            PARTICLE_MASK_ALL                = 0xFFFFFFFFFFFFFFFF,
            PARTICLE_MASK_SOLID              = 0xC3001,
            PARTICLE_MASK_WATER              = 0x18000,
            PARTICLE_MASK_SOLID_WATER        = 0xDB001,
            PARTICLE_MASK_SHOT               = 0x1C1003,
            PARTICLE_MASK_SHOT_BRUSHONLY     = 0x101001,
            PARTICLE_MASK_SHOT_HULL          = 0x1C3001,
            PARTICLE_MASK_OPAQUE             = 0x80,
            PARTICLE_MASK_DEFAULTPLAYERSOLID = 0xC3011,
            PARTICLE_MASK_NPCSOLID           = 0xC3021
        };

        enum class TextureRepetitionMode_t : std::uint32_t {
            TEXTURE_REPETITION_PARTICLE = 0x0,
            TEXTURE_REPETITION_PATH     = 0x1
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
            static constexpr std::uintptr_t m_Always    = 0X00C0; // CPulse_OutflowConnection
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
            static constexpr std::uintptr_t m_MethodName       = 0X0048; // PulseSymbol_t
            static constexpr std::uintptr_t m_nBlackboardIndex = 0X0058; // PulseRuntimeBlackboardReferenceIndex_t
            static constexpr std::uintptr_t m_ExpectedArgs     = 0X0060; // CUtlLeanVector<CPulseRuntimeMethodArg>
            static constexpr std::uintptr_t m_nAsyncCallMode   = 0X0070; // PulseMethodCallMode_t
            static constexpr std::uintptr_t m_OnFinished       = 0X0078; // CPulse_ResumePoint
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

        // Has VTable
        // Is Absract
        class IParticleCollection {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ParticleAttributeIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunction {
        public:
            static constexpr std::uintptr_t m_flOpStrength            = 0X0008; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOpEndCapState          = 0X0178; // ParticleEndcapMode_t
            static constexpr std::uintptr_t m_nToolsState             = 0X017C; // ParticleToolsState_t
            static constexpr std::uintptr_t m_flOpStartFadeInTime     = 0X0180; // float32
            static constexpr std::uintptr_t m_flOpEndFadeInTime       = 0X0184; // float32
            static constexpr std::uintptr_t m_flOpStartFadeOutTime    = 0X0188; // float32
            static constexpr std::uintptr_t m_flOpEndFadeOutTime      = 0X018C; // float32
            static constexpr std::uintptr_t m_flOpFadeOscillatePeriod = 0X0190; // float32
            static constexpr std::uintptr_t m_bNormalizeToStopTime    = 0X0194; // bool
            static constexpr std::uintptr_t m_flOpTimeOffsetMin       = 0X0198; // float32
            static constexpr std::uintptr_t m_flOpTimeOffsetMax       = 0X019C; // float32
            static constexpr std::uintptr_t m_nOpTimeOffsetSeed       = 0X01A0; // int32
            static constexpr std::uintptr_t m_nOpTimeScaleSeed        = 0X01A4; // int32
            static constexpr std::uintptr_t m_flOpTimeScaleMin        = 0X01A8; // float32
            static constexpr std::uintptr_t m_flOpTimeScaleMax        = 0X01AC; // float32
            static constexpr std::uintptr_t m_bDisableOperator        = 0X01B2; // bool
            static constexpr std::uintptr_t m_Notes                   = 0X01B8; // CUtlString
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionOperator : public CParticleFunction {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapGravityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vInput1           = 0X01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOutputField      = 0X0890; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0X0894; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput = 0X0898; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Decay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bRopeDecay                  = 0X01D8; // bool
            static constexpr std::uintptr_t m_bForcePreserveParticleOrder = 0X01D9; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionRenderer : public CParticleFunction {
        public:
            static constexpr std::uintptr_t VisibilityInputs         = 0X01D8; // CParticleVisibilityInputs
            static constexpr std::uintptr_t m_bCannotBeRefracted     = 0X0220; // bool
            static constexpr std::uintptr_t m_bSkipRenderingOnMobile = 0X0221; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderDeferredLight : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bUseAlphaTestWindow      = 0X0228; // bool
            static constexpr std::uintptr_t m_bUseTexture              = 0X0229; // bool
            static constexpr std::uintptr_t m_flRadiusScale            = 0X022C; // float32
            static constexpr std::uintptr_t m_flAlphaScale             = 0X0230; // float32
            static constexpr std::uintptr_t m_nAlpha2Field             = 0X0234; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale            = 0X0238; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType          = 0X08F0; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_flLightDistance          = 0X08F4; // float32
            static constexpr std::uintptr_t m_flStartFalloff           = 0X08F8; // float32
            static constexpr std::uintptr_t m_flDistanceFalloff        = 0X08FC; // float32
            static constexpr std::uintptr_t m_flSpotFoV                = 0X0900; // float32
            static constexpr std::uintptr_t m_nAlphaTestPointField     = 0X0904; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAlphaTestRangeField     = 0X0908; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAlphaTestSharpnessField = 0X090C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_hTexture                 = 0X0910; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nHSVShiftControlPoint    = 0X0918; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionPreEmission : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bRunOnce = 0X01D8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInControlPointNumber  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0X01E4; // int32
            static constexpr std::uintptr_t m_nField                 = 0X01E8; // int32
            static constexpr std::uintptr_t m_flInputMin             = 0X01EC; // float32
            static constexpr std::uintptr_t m_flInputMax             = 0X01F0; // float32
            static constexpr std::uintptr_t m_flOutputMin            = 0X01F4; // float32
            static constexpr std::uintptr_t m_flOutputMax            = 0X01F8; // float32
            static constexpr std::uintptr_t m_bUseDeltaV             = 0X01FC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01D8; // CParticleTransformInput
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct CollisionGroupContext_t {
        public:
            static constexpr std::uintptr_t m_nCollisionGroupNumber = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeOutSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeOutTime = 0X01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01DC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionConstraint : public CParticleFunction {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flRestLength    = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMinDistance   = 0X0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxDistance   = 0X04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRestingLength = 0X0628; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecAnchorVector = 0X0798; // CPerParticleVecInput
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBaseRendererSource2 : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRadiusScale                  = 0X0228; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                   = 0X0398; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flRollScale                    = 0X0508; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nAlpha2Field                   = 0X0678; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale                  = 0X0680; // CParticleCollectionRendererVecInput
            static constexpr std::uintptr_t m_nColorBlendType                = 0X0D38; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_nShaderType                    = 0X0D3C; // SpriteCardShaderType_t
            static constexpr std::uintptr_t m_strShaderOverride              = 0X0D40; // CUtlString
            static constexpr std::uintptr_t m_flCenterXOffset                = 0X0D48; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flCenterYOffset                = 0X0EB8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flBumpStrength                 = 0X1028; // float32
            static constexpr std::uintptr_t m_nCropTextureOverride           = 0X102C; // ParticleSequenceCropOverride_t
            static constexpr std::uintptr_t m_vecTexturesInput               = 0X1030; // CUtlLeanVector<TextureGroup_t>
            static constexpr std::uintptr_t m_flAnimationRate                = 0X1040; // float32
            static constexpr std::uintptr_t m_nAnimationType                 = 0X1044; // AnimationType_t
            static constexpr std::uintptr_t m_bAnimateInFPS                  = 0X1048; // bool
            static constexpr std::uintptr_t m_flMotionVectorScaleU           = 0X1050; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flMotionVectorScaleV           = 0X11C0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flSelfIllumAmount              = 0X1330; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDiffuseAmount                = 0X14A0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDiffuseClamp                 = 0X1610; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nLightingControlPoint          = 0X1780; // int32
            static constexpr std::uintptr_t m_nOutputBlendMode               = 0X1784; // ParticleOutputBlendMode_t
            static constexpr std::uintptr_t m_bGammaCorrectVertexColors      = 0X1788; // bool
            static constexpr std::uintptr_t m_bSaturateColorPreAlphaBlend    = 0X1789; // bool
            static constexpr std::uintptr_t m_flAddSelfAmount                = 0X1790; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDesaturation                 = 0X1900; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flOverbrightFactor             = 0X1A70; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nHSVShiftControlPoint          = 0X1BE0; // int32
            static constexpr std::uintptr_t m_nFogType                       = 0X1BE4; // ParticleFogType_t
            static constexpr std::uintptr_t m_flFogAmount                    = 0X1BE8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bTintByFOW                     = 0X1D58; // bool
            static constexpr std::uintptr_t m_bTintByGlobalLight             = 0X1D59; // bool
            static constexpr std::uintptr_t m_nPerParticleAlphaReference     = 0X1D5C; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleAlphaRefWindow     = 0X1D60; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nAlphaReferenceType            = 0X1D64; // ParticleAlphaReferenceType_t
            static constexpr std::uintptr_t m_flAlphaReferenceSoftness       = 0X1D68; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flSourceAlphaValueToMapToZero  = 0X1ED8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flSourceAlphaValueToMapToOne   = 0X2048; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bRefract                       = 0X21B8; // bool
            static constexpr std::uintptr_t m_bRefractSolid                  = 0X21B9; // bool
            static constexpr std::uintptr_t m_bRefract2Passes                = 0X21BA; // bool
            static constexpr std::uintptr_t m_flRefractAmount                = 0X21C0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nRefractBlurRadius             = 0X2330; // int32
            static constexpr std::uintptr_t m_nRefractBlurType               = 0X2334; // BlurFilterType_t
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsBloomPass  = 0X2338; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsWaterPass  = 0X2339; // bool
            static constexpr std::uintptr_t m_bUseMixedResolutionRendering   = 0X233A; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffecsGameOverlay = 0X233B; // bool
            static constexpr std::uintptr_t m_stencilTestID                  = 0X233C; // char[128]
            static constexpr std::uintptr_t m_bStencilTestExclude            = 0X23BC; // bool
            static constexpr std::uintptr_t m_stencilWriteID                 = 0X23BD; // char[128]
            static constexpr std::uintptr_t m_bWriteStencilOnDepthPass       = 0X243D; // bool
            static constexpr std::uintptr_t m_bWriteStencilOnDepthFail       = 0X243E; // bool
            static constexpr std::uintptr_t m_bReverseZBuffering             = 0X243F; // bool
            static constexpr std::uintptr_t m_bDisableZBuffering             = 0X2440; // bool
            static constexpr std::uintptr_t m_nFeatheringMode                = 0X2444; // ParticleDepthFeatheringMode_t
            static constexpr std::uintptr_t m_flFeatheringMinDist            = 0X2448; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFeatheringMaxDist            = 0X25B8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFeatheringFilter             = 0X2728; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFeatheringDepthMapFilter     = 0X2898; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDepthBias                    = 0X2A08; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nSortMethod                    = 0X2B78; // ParticleSortingChoiceList_t
            static constexpr std::uintptr_t m_bBlendFramesSeq0               = 0X2B7C; // bool
            static constexpr std::uintptr_t m_bMaxLuminanceBlendingSequence0 = 0X2B7D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderRopes : public CBaseRendererSource2 {
        public:
            static constexpr std::uintptr_t m_bEnableFadingAndClamping             = 0X2DF0; // bool
            static constexpr std::uintptr_t m_flMinSize                            = 0X2DF4; // float32
            static constexpr std::uintptr_t m_flMaxSize                            = 0X2DF8; // float32
            static constexpr std::uintptr_t m_flStartFadeSize                      = 0X2DFC; // float32
            static constexpr std::uintptr_t m_flEndFadeSize                        = 0X2E00; // float32
            static constexpr std::uintptr_t m_flStartFadeDot                       = 0X2E04; // float32
            static constexpr std::uintptr_t m_flEndFadeDot                         = 0X2E08; // float32
            static constexpr std::uintptr_t m_flRadiusTaper                        = 0X2E0C; // float32
            static constexpr std::uintptr_t m_nMinTesselation                      = 0X2E10; // int32
            static constexpr std::uintptr_t m_nMaxTesselation                      = 0X2E14; // int32
            static constexpr std::uintptr_t m_flTessScale                          = 0X2E18; // float32
            static constexpr std::uintptr_t m_flTextureVWorldSize                  = 0X2E20; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flTextureVScrollRate                 = 0X2F90; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flTextureVOffset                     = 0X3100; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nTextureVParamsCP                    = 0X3270; // int32
            static constexpr std::uintptr_t m_bClampV                              = 0X3274; // bool
            static constexpr std::uintptr_t m_nScaleCP1                            = 0X3278; // int32
            static constexpr std::uintptr_t m_nScaleCP2                            = 0X327C; // int32
            static constexpr std::uintptr_t m_flScaleVSizeByControlPointDistance   = 0X3280; // float32
            static constexpr std::uintptr_t m_flScaleVScrollByControlPointDistance = 0X3284; // float32
            static constexpr std::uintptr_t m_flScaleVOffsetByControlPointDistance = 0X3288; // float32
            static constexpr std::uintptr_t m_bUseScalarForTextureCoordinate       = 0X328D; // bool
            static constexpr std::uintptr_t m_nScalarFieldForTextureCoordinate     = 0X3290; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScalarAttributeTextureCoordScale   = 0X3294; // float32
            static constexpr std::uintptr_t m_bReverseOrder                        = 0X3298; // bool
            static constexpr std::uintptr_t m_bClosedLoop                          = 0X3299; // bool
            static constexpr std::uintptr_t m_nSplitField                          = 0X329C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bSortBySegmentID                     = 0X32A0; // bool
            static constexpr std::uintptr_t m_nOrientationType                     = 0X32A4; // ParticleOrientationChoiceList_t
            static constexpr std::uintptr_t m_nVectorFieldForOrientation           = 0X32A8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bDrawAsOpaque                        = 0X32AC; // bool
            static constexpr std::uintptr_t m_bGenerateNormals                     = 0X32AD; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionInitializer : public CParticleFunction {
        public:
            static constexpr std::uintptr_t m_nAssociatedEmitterIndex = 0X01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flSFXColorWarpAmount = 0X01E0; // float32
            static constexpr std::uintptr_t m_flSFXNormalAmount    = 0X01E4; // float32
            static constexpr std::uintptr_t m_flSFXMetalnessAmount = 0X01E8; // float32
            static constexpr std::uintptr_t m_flSFXRoughnessAmount = 0X01EC; // float32
            static constexpr std::uintptr_t m_flSFXSelfIllumAmount = 0X01F0; // float32
            static constexpr std::uintptr_t m_flSFXSScale          = 0X01F4; // float32
            static constexpr std::uintptr_t m_flSFXSScrollX        = 0X01F8; // float32
            static constexpr std::uintptr_t m_flSFXSScrollY        = 0X01FC; // float32
            static constexpr std::uintptr_t m_flSFXSScrollZ        = 0X0200; // float32
            static constexpr std::uintptr_t m_flSFXSOffsetX        = 0X0204; // float32
            static constexpr std::uintptr_t m_flSFXSOffsetY        = 0X0208; // float32
            static constexpr std::uintptr_t m_flSFXSOffsetZ        = 0X020C; // float32
            static constexpr std::uintptr_t m_nDetailCombo         = 0X0210; // DetailCombo_t
            static constexpr std::uintptr_t m_flSFXSDetailAmount   = 0X0214; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScale    = 0X0218; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScrollX  = 0X021C; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScrollY  = 0X0220; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScrollZ  = 0X0224; // float32
            static constexpr std::uintptr_t m_flSFXSUseModelUVs    = 0X0228; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderSound : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flDurationScale         = 0X0228; // float32
            static constexpr std::uintptr_t m_flSndLvlScale           = 0X022C; // float32
            static constexpr std::uintptr_t m_flPitchScale            = 0X0230; // float32
            static constexpr std::uintptr_t m_flVolumeScale           = 0X0234; // float32
            static constexpr std::uintptr_t m_nSndLvlField            = 0X0238; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nDurationField          = 0X023C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nPitchField             = 0X0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVolumeField            = 0X0244; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nChannel                = 0X0248; // int32
            static constexpr std::uintptr_t m_nCPReference            = 0X024C; // int32
            static constexpr std::uintptr_t m_pszSoundName            = 0X0250; // char[256]
            static constexpr std::uintptr_t m_bSuppressStopSoundEvent = 0X0350; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CParticleVisibilityInputs {
        public:
            static constexpr std::uintptr_t m_flCameraBias                = 0X0000; // float32
            static constexpr std::uintptr_t m_nCPin                       = 0X0004; // int32
            static constexpr std::uintptr_t m_flProxyRadius               = 0X0008; // float32
            static constexpr std::uintptr_t m_flInputMin                  = 0X000C; // float32
            static constexpr std::uintptr_t m_flInputMax                  = 0X0010; // float32
            static constexpr std::uintptr_t m_flInputPixelVisFade         = 0X0014; // float32
            static constexpr std::uintptr_t m_flNoPixelVisibilityFallback = 0X0018; // float32
            static constexpr std::uintptr_t m_flDistanceInputMin          = 0X001C; // float32
            static constexpr std::uintptr_t m_flDistanceInputMax          = 0X0020; // float32
            static constexpr std::uintptr_t m_flDotInputMin               = 0X0024; // float32
            static constexpr std::uintptr_t m_flDotInputMax               = 0X0028; // float32
            static constexpr std::uintptr_t m_bDotCPAngles                = 0X002C; // bool
            static constexpr std::uintptr_t m_bDotCameraAngles            = 0X002D; // bool
            static constexpr std::uintptr_t m_flAlphaScaleMin             = 0X0030; // float32
            static constexpr std::uintptr_t m_flAlphaScaleMax             = 0X0034; // float32
            static constexpr std::uintptr_t m_flRadiusScaleMin            = 0X0038; // float32
            static constexpr std::uintptr_t m_flRadiusScaleMax            = 0X003C; // float32
            static constexpr std::uintptr_t m_flRadiusScaleFOVBase        = 0X0040; // float32
            static constexpr std::uintptr_t m_bRightEye                   = 0X0044; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint = 0X01DC; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0X01E4; // int32
            static constexpr std::uintptr_t m_bReverse           = 0X01E8; // bool
            static constexpr std::uintptr_t m_bSetOrientation    = 0X01E9; // bool
            static constexpr std::uintptr_t m_nOrientationMode   = 0X01EC; // ParticleOrientationSetMode_t
            static constexpr std::uintptr_t m_nSetParent         = 0X01F0; // ParticleParentSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale       = 0X01E0; // float32
            static constexpr std::uintptr_t m_bNormalize    = 0X01E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput    = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInterpolation = 0X01E0; // CPerParticleFloatInput
        };

        // Construct Allowed
        struct ParticlePreviewBodyGroup_t {
        public:
            static constexpr std::uintptr_t m_bodyGroupName = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nValue        = 0X0008; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateScalarSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate      = 0X01D8; // float32
            static constexpr std::uintptr_t m_Frequency = 0X01DC; // float32
            static constexpr std::uintptr_t m_nField    = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOscMult = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOscAdd  = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_StatusEffect : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nDetail2Combo                      = 0X01E0; // Detail2Combo_t
            static constexpr std::uintptr_t m_flDetail2Rotation                  = 0X01E4; // float32
            static constexpr std::uintptr_t m_flDetail2Scale                     = 0X01E8; // float32
            static constexpr std::uintptr_t m_flDetail2BlendFactor               = 0X01EC; // float32
            static constexpr std::uintptr_t m_flColorWarpIntensity               = 0X01F0; // float32
            static constexpr std::uintptr_t m_flDiffuseWarpBlendToFull           = 0X01F4; // float32
            static constexpr std::uintptr_t m_flEnvMapIntensity                  = 0X01F8; // float32
            static constexpr std::uintptr_t m_flAmbientScale                     = 0X01FC; // float32
            static constexpr std::uintptr_t m_specularColor                      = 0X0200; // Color
            static constexpr std::uintptr_t m_flSpecularScale                    = 0X0204; // float32
            static constexpr std::uintptr_t m_flSpecularExponent                 = 0X0208; // float32
            static constexpr std::uintptr_t m_flSpecularExponentBlendToFull      = 0X020C; // float32
            static constexpr std::uintptr_t m_flSpecularBlendToFull              = 0X0210; // float32
            static constexpr std::uintptr_t m_rimLightColor                      = 0X0214; // Color
            static constexpr std::uintptr_t m_flRimLightScale                    = 0X0218; // float32
            static constexpr std::uintptr_t m_flReflectionsTintByBaseBlendToNone = 0X021C; // float32
            static constexpr std::uintptr_t m_flMetalnessBlendToFull             = 0X0220; // float32
            static constexpr std::uintptr_t m_flSelfIllumBlendToFull             = 0X0224; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RtEnvCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecTestDir    = 0X01E0; // Vector
            static constexpr std::uintptr_t m_vecTestNormal = 0X01EC; // Vector
            static constexpr std::uintptr_t m_bUseVelocity  = 0X01F8; // bool
            static constexpr std::uintptr_t m_bCullOnMiss   = 0X01F9; // bool
            static constexpr std::uintptr_t m_bLifeAdjust   = 0X01FA; // bool
            static constexpr std::uintptr_t m_RtEnvName     = 0X01FB; // char[128]
            static constexpr std::uintptr_t m_nRTEnvCP      = 0X027C; // int32
            static constexpr std::uintptr_t m_nComponent    = 0X0280; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainDistance : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_fMinDistance        = 0X01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_fMaxDistance        = 0X0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nControlPointNumber = 0X04B8; // int32
            static constexpr std::uintptr_t m_CenterOffset        = 0X04BC; // Vector
            static constexpr std::uintptr_t m_bGlobalCenter       = 0X04C8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecMin               = 0X01E0; // Vector
            static constexpr std::uintptr_t m_vecMax               = 0X01EC; // Vector
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01F8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_randomnessParameters = 0X01FC; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecAbsVal       = 0X01E0; // Vector
            static constexpr std::uintptr_t m_vecAbsValInv    = 0X01EC; // Vector
            static constexpr std::uintptr_t m_vecOffsetLoc    = 0X01F8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOffset        = 0X08B0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecOutputMin    = 0X0A20; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOutputMax    = 0X10D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flNoiseScale    = 0X1790; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flNoiseScaleLoc = 0X1900; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformInput  = 0X1A70; // CParticleTransformInput
            static constexpr std::uintptr_t m_bIgnoreDt       = 0X1AD8; // bool
        };

        // Construct Allowed
        struct ParticleChildrenInfo_t {
        public:
            static constexpr std::uintptr_t m_ChildRef      = 0X0000; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flDelay       = 0X0008; // float32
            static constexpr std::uintptr_t m_bEndCap       = 0X000C; // bool
            static constexpr std::uintptr_t m_bDisableChild = 0X000D; // bool
            static constexpr std::uintptr_t m_nDetailLevel  = 0X0010; // ParticleDetailLevel_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bProportional = 0X01D8; // bool
            static constexpr std::uintptr_t m_nFieldInput   = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin    = 0X01E4; // float32
            static constexpr std::uintptr_t m_flInputMax    = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin   = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax   = 0X01F0; // float32
            static constexpr std::uintptr_t m_flRemapTime   = 0X01F4; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_hModel             = 0X01E0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_names              = 0X01E8; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bShuffle           = 0X0200; // bool
            static constexpr std::uintptr_t m_bLinear            = 0X0201; // bool
            static constexpr std::uintptr_t m_bModelFromRenderer = 0X0202; // bool
            static constexpr std::uintptr_t m_nFieldOutput       = 0X0204; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PlaneCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nPlaneControlPoint = 0X01D8; // int32
            static constexpr std::uintptr_t m_vecPlaneDirection  = 0X01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_bLocalSpace        = 0X0898; // bool
            static constexpr std::uintptr_t m_flPlaneOffset      = 0X089C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityRandom : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber           = 0X01E0; // int32
            static constexpr std::uintptr_t m_fSpeedMin                     = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                     = 0X0358; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMin = 0X04C8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMax = 0X0B80; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bIgnoreDT                     = 0X1238; // bool
            static constexpr std::uintptr_t m_randomnessParameters          = 0X123C; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ModelDampenMovement : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_bBoundBox           = 0X01DC; // bool
            static constexpr std::uintptr_t m_bOutside            = 0X01DD; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0X01DE; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0X01DF; // char[128]
            static constexpr std::uintptr_t m_vecPosOffset        = 0X0260; // CPerParticleVecInput
            static constexpr std::uintptr_t m_fDrag               = 0X0918; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionForce : public CParticleFunction {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TwistAroundAxis : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_fForceAmount        = 0X01E8; // float32
            static constexpr std::uintptr_t m_TwistAxis           = 0X01EC; // Vector
            static constexpr std::uintptr_t m_bLocalSpace         = 0X01F8; // bool
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01FC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TeleportBeam : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPPosition      = 0X01D8; // int32
            static constexpr std::uintptr_t m_nCPVelocity      = 0X01DC; // int32
            static constexpr std::uintptr_t m_nCPMisc          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPColor         = 0X01E4; // int32
            static constexpr std::uintptr_t m_nCPInvalidColor  = 0X01E8; // int32
            static constexpr std::uintptr_t m_nCPExtraArcData  = 0X01EC; // int32
            static constexpr std::uintptr_t m_vGravity         = 0X01F0; // Vector
            static constexpr std::uintptr_t m_flArcMaxDuration = 0X01FC; // float32
            static constexpr std::uintptr_t m_flSegmentBreak   = 0X0200; // float32
            static constexpr std::uintptr_t m_flArcSpeed       = 0X0204; // float32
            static constexpr std::uintptr_t m_flAlpha          = 0X0208; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP             = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPOutput       = 0X01E4; // int32
            static constexpr std::uintptr_t m_vecScale        = 0X01E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_bSetMagnitude   = 0X08A0; // bool
            static constexpr std::uintptr_t m_nOutVectorField = 0X08A4; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CSpinUpdateBase : public CParticleFunctionOperator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OrientTo2dDirection : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRotOffset    = 0X01D8; // float32
            static constexpr std::uintptr_t m_flSpinStrength = 0X01DC; // float32
            static constexpr std::uintptr_t m_nFieldOutput   = 0X01E0; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInputCP1       = 0X01E0; // int32
            static constexpr std::uintptr_t m_nInputCP2       = 0X01E4; // int32
            static constexpr std::uintptr_t m_nOutputCP       = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0X01EC; // int32
            static constexpr std::uintptr_t m_flInputMin      = 0X01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInputMax      = 0X0360; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMin     = 0X04D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMax     = 0X0640; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput            = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nInputMin               = 0X01E4; // int32
            static constexpr std::uintptr_t m_nInputMax               = 0X01E8; // int32
            static constexpr std::uintptr_t m_nScaleControlPoint      = 0X01EC; // int32
            static constexpr std::uintptr_t m_nScaleControlPointField = 0X01F0; // int32
            static constexpr std::uintptr_t m_flOutputMin             = 0X01F4; // float32
            static constexpr std::uintptr_t m_flOutputMax             = 0X01F8; // float32
            static constexpr std::uintptr_t m_nSetMethod              = 0X01FC; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange            = 0X0200; // bool
            static constexpr std::uintptr_t m_bInvert                 = 0X0201; // bool
            static constexpr std::uintptr_t m_bWrap                   = 0X0202; // bool
            static constexpr std::uintptr_t m_flRemapBias             = 0X0204; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar {
        public:
            static constexpr std::uintptr_t m_hModel             = 0X0210; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_outputMinName      = 0X0218; // CUtlString
            static constexpr std::uintptr_t m_outputMaxName      = 0X0220; // CUtlString
            static constexpr std::uintptr_t m_bModelFromRenderer = 0X0228; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBaseTrailRenderer : public CBaseRendererSource2 {
        public:
            static constexpr std::uintptr_t m_nOrientationType         = 0X2DF0; // ParticleOrientationChoiceList_t
            static constexpr std::uintptr_t m_nOrientationControlPoint = 0X2DF4; // int32
            static constexpr std::uintptr_t m_flMinSize                = 0X2DF8; // float32
            static constexpr std::uintptr_t m_flMaxSize                = 0X2DFC; // float32
            static constexpr std::uintptr_t m_flStartFadeSize          = 0X2E00; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flEndFadeSize            = 0X2F70; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bClampV                  = 0X30E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderTrails : public CBaseTrailRenderer {
        public:
            static constexpr std::uintptr_t m_bEnableFadingAndClamping       = 0X30E8; // bool
            static constexpr std::uintptr_t m_flStartFadeDot                 = 0X30EC; // float32
            static constexpr std::uintptr_t m_flEndFadeDot                   = 0X30F0; // float32
            static constexpr std::uintptr_t m_nPrevPntSource                 = 0X30F4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMaxLength                    = 0X30F8; // float32
            static constexpr std::uintptr_t m_flMinLength                    = 0X30FC; // float32
            static constexpr std::uintptr_t m_bIgnoreDT                      = 0X3100; // bool
            static constexpr std::uintptr_t m_flConstrainRadiusToLengthRatio = 0X3104; // float32
            static constexpr std::uintptr_t m_flLengthScale                  = 0X3108; // float32
            static constexpr std::uintptr_t m_flLengthFadeInTime             = 0X310C; // float32
            static constexpr std::uintptr_t m_flRadiusHeadTaper              = 0X3110; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecHeadColorScale              = 0X3280; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flHeadAlphaScale               = 0X3938; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadiusTaper                  = 0X3AA8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecTailColorScale              = 0X3C18; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flTailAlphaScale               = 0X42D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nHorizCropField                = 0X4440; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVertCropField                 = 0X4444; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flForwardShift                 = 0X4448; // float32
            static constexpr std::uintptr_t m_bFlipUVBasedOnPitchYaw         = 0X444C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber   = 0X01E0; // int32
            static constexpr std::uintptr_t m_pszTimeOfDayParameter = 0X01E4; // char[128]
            static constexpr std::uintptr_t m_vecDefaultValue       = 0X0264; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DecayMaintainCount : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nParticlesToMaintain  = 0X01D8; // int32
            static constexpr std::uintptr_t m_flDecayDelay          = 0X01DC; // float32
            static constexpr std::uintptr_t m_nSnapshotControlPoint = 0X01E0; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset     = 0X01E8; // CUtlString
            static constexpr std::uintptr_t m_bLifespanDecay        = 0X01F0; // bool
            static constexpr std::uintptr_t m_flScale               = 0X01F8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bKillNewest           = 0X0368; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomModelSequence : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_ActivityName = 0X01E0; // char[256]
            static constexpr std::uintptr_t m_SequenceName = 0X02E0; // char[256]
            static constexpr std::uintptr_t m_hModel       = 0X03E0; // CStrongHandle<InfoForResourceTypeCModel>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flForceScale = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bRopes       = 0X0358; // bool
            static constexpr std::uintptr_t m_bRopesZOnly  = 0X0359; // bool
            static constexpr std::uintptr_t m_bExplosions  = 0X035A; // bool
            static constexpr std::uintptr_t m_bParticles   = 0X035B; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInControlPointNumber     = 0X01E0; // int32
            static constexpr std::uintptr_t m_nOutControlPointNumber    = 0X01E4; // int32
            static constexpr std::uintptr_t m_nField                    = 0X01E8; // int32
            static constexpr std::uintptr_t m_nHitboxDataType           = 0X01EC; // ParticleHitboxDataSelection_t
            static constexpr std::uintptr_t m_flInputMin                = 0X01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInputMax                = 0X0360; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMin               = 0X04D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMax               = 0X0640; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nHeightControlPointNumber = 0X07B0; // int32
            static constexpr std::uintptr_t m_vecComparisonVelocity     = 0X07B8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_HitboxSetName             = 0X0E70; // char[128]
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomAlpha : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAlphaMin           = 0X01E4; // int32
            static constexpr std::uintptr_t m_nAlphaMax           = 0X01E8; // int32
            static constexpr std::uintptr_t m_flAlphaRandExponent = 0X01F4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_NormalizeVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale      = 0X01DC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeInSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeInTime = 0X01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID       = 0X01E0; // int32
            static constexpr std::uintptr_t m_flClusterRefireTime = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flClusterSize       = 0X0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flClusterCooldown   = 0X04C8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bLimitChildCount    = 0X0638; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVelocityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale      = 0X01DC; // float32
            static constexpr std::uintptr_t m_bNormalize   = 0X01E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber      = 0X01E0; // int32
            static constexpr std::uintptr_t m_nDesiredHitbox           = 0X01E4; // int32
            static constexpr std::uintptr_t m_vecHitBoxScale           = 0X01E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_HitboxSetName            = 0X08A0; // char[128]
            static constexpr std::uintptr_t m_bUseBones                = 0X0920; // bool
            static constexpr std::uintptr_t m_bUseClosestPointOnHitbox = 0X0921; // bool
            static constexpr std::uintptr_t m_nTestType                = 0X0924; // ClosestPointTestType_t
            static constexpr std::uintptr_t m_flHybridRatio            = 0X0928; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bUpdatePosition          = 0X0A98; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RingWave : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput      = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_flParticlesPerOrbit = 0X0248; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInitialRadius     = 0X03B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flThickness         = 0X0528; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialSpeedMin   = 0X0698; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialSpeedMax   = 0X0808; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRoll              = 0X0978; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flPitch             = 0X0AE8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flYaw               = 0X0C58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bEvenDistribution   = 0X0DC8; // bool
            static constexpr std::uintptr_t m_bXYVelocityOnly     = 0X0DC9; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomTrailLength : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMinLength          = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMaxLength          = 0X01E4; // float32
            static constexpr std::uintptr_t m_flLengthRandExponent = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput  = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0X01E0; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01EC; // float32
            static constexpr std::uintptr_t m_bOldCode     = 0X01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput       = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_TransformStart     = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd       = 0X0248; // CParticleTransformInput
            static constexpr std::uintptr_t m_flInputMin         = 0X02B0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax         = 0X0420; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin        = 0X0590; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax        = 0X0700; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X0870; // float32
            static constexpr std::uintptr_t m_flLOSScale         = 0X0874; // float32
            static constexpr std::uintptr_t m_CollisionGroupName = 0X0878; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X08F8; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_bLOS               = 0X08FC; // bool
            static constexpr std::uintptr_t m_nSetMethod         = 0X0900; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DecayOffscreen : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flOffscreenTime = 0X01D8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fMaxDistance  = 0X01E0; // float32
            static constexpr std::uintptr_t m_flNumToAssign = 0X01E4; // float32
            static constexpr std::uintptr_t m_bLoop         = 0X01E8; // bool
            static constexpr std::uintptr_t m_bCPPairs      = 0X01E9; // bool
            static constexpr std::uintptr_t m_bSaveOffset   = 0X01EA; // bool
            static constexpr std::uintptr_t m_PathParams    = 0X01F0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EndCapTimedDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDecayTime = 0X01D8; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP0            = 0X01D8; // int32
            static constexpr std::uintptr_t m_nCP1            = 0X01DC; // int32
            static constexpr std::uintptr_t m_flMinInputValue = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMaxInputValue = 0X01E4; // float32
            static constexpr std::uintptr_t m_bInfiniteLine   = 0X01E8; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionEmitter : public CParticleFunction {
        public:
            static constexpr std::uintptr_t m_nEmitterIndex = 0X01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ContinuousEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_flEmissionDuration             = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartTime                    = 0X0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flEmitRate                     = 0X04C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flEmissionScale                = 0X0630; // float32
            static constexpr std::uintptr_t m_flScalePerParentParticle       = 0X0634; // float32
            static constexpr std::uintptr_t m_bInitFromKilledParentParticles = 0X0638; // bool
            static constexpr std::uintptr_t m_nEventType                     = 0X063C; // EventTypeSelection_t
            static constexpr std::uintptr_t m_nSnapshotControlPoint          = 0X0640; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset              = 0X0648; // CUtlString
            static constexpr std::uintptr_t m_nLimitPerUpdate                = 0X0650; // int32
            static constexpr std::uintptr_t m_bForceEmitOnFirstUpdate        = 0X0654; // bool
            static constexpr std::uintptr_t m_bForceEmitOnLastUpdate         = 0X0655; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateVectorSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate      = 0X01D8; // Vector
            static constexpr std::uintptr_t m_Frequency = 0X01E4; // Vector
            static constexpr std::uintptr_t m_nField    = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOscMult = 0X01F4; // float32
            static constexpr std::uintptr_t m_flOscAdd  = 0X01F8; // float32
            static constexpr std::uintptr_t m_bOffset   = 0X01FC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flFramerate = 0X01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flSpeedMin             = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSpeedMax             = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flEndSpread            = 0X04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flStartOffset          = 0X0630; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flEndOffset            = 0X07A0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nEndControlPointNumber = 0X0910; // int32
            static constexpr std::uintptr_t m_bTrailBias             = 0X0914; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetUserEvent : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInput           = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRisingEdge      = 0X0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nRisingEventType  = 0X04B8; // EventTypeSelection_t
            static constexpr std::uintptr_t m_flFallingEdge     = 0X04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFallingEventType = 0X0630; // EventTypeSelection_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_QuantizeFloat : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0X0348; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_BasicMovement : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Gravity              = 0X01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_fDrag                = 0X0890; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_massControls         = 0X0A00; // CParticleMassCalculationParameters
            static constexpr std::uintptr_t m_nMaxConstraintPasses = 0X0E58; // int32
            static constexpr std::uintptr_t m_bUseNewCode          = 0X0E5C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nAttributeToCopy = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nEventType       = 0X01E4; // EventTypeSelection_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Callback : public CParticleFunctionRenderer {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_GlobalLight : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale          = 0X01D8; // float32
            static constexpr std::uintptr_t m_bClampLowerRange = 0X01DC; // bool
            static constexpr std::uintptr_t m_bClampUpperRange = 0X01DD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldInput          = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutputMin         = 0X01E8; // Vector
            static constexpr std::uintptr_t m_vecOutputMax         = 0X01F4; // Vector
            static constexpr std::uintptr_t m_randomnessParameters = 0X0200; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID            = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint       = 0X01DC; // int32
            static constexpr std::uintptr_t m_nNumControlPoints        = 0X01E0; // int32
            static constexpr std::uintptr_t m_nParticleIncrement       = 0X01E4; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint        = 0X01E8; // int32
            static constexpr std::uintptr_t m_bNumBasedOnParticleCount = 0X01EC; // bool
            static constexpr std::uintptr_t m_nAttributeToRead         = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nCPField                 = 0X01F4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0X01E0; // int32
            static constexpr std::uintptr_t m_nChildControlPoint = 0X01E4; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0X01E8; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0X01EC; // int32
            static constexpr std::uintptr_t m_bSetOrientation    = 0X01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_BoxConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_vecMin            = 0X01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecMax            = 0X0890; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nCP               = 0X0F48; // int32
            static constexpr std::uintptr_t m_bLocalSpace       = 0X0F4C; // bool
            static constexpr std::uintptr_t m_bAccountForRadius = 0X0F4D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_nScaleCP            = 0X01E4; // int32
            static constexpr std::uintptr_t m_nComponent          = 0X01E8; // int32
            static constexpr std::uintptr_t m_fRadCentCore        = 0X01EC; // float32
            static constexpr std::uintptr_t m_fRadPerPoint        = 0X01F0; // float32
            static constexpr std::uintptr_t m_fRadPerPointTo      = 0X01F4; // float32
            static constexpr std::uintptr_t m_fpointAngle         = 0X01F8; // float32
            static constexpr std::uintptr_t m_fsizeOverall        = 0X01FC; // float32
            static constexpr std::uintptr_t m_fRadBias            = 0X0200; // float32
            static constexpr std::uintptr_t m_fMinRad             = 0X0204; // float32
            static constexpr std::uintptr_t m_fDistBias           = 0X0208; // float32
            static constexpr std::uintptr_t m_bUseLocalCoords     = 0X020C; // bool
            static constexpr std::uintptr_t m_bUseWithContEmit    = 0X020D; // bool
            static constexpr std::uintptr_t m_bUseOrigRadius      = 0X020E; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_AttractToControlPoint : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_vecComponentScale = 0X01E8; // Vector
            static constexpr std::uintptr_t m_fForceAmount      = 0X01F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fFalloffPower     = 0X0368; // float32
            static constexpr std::uintptr_t m_TransformInput    = 0X0370; // CParticleTransformInput
            static constexpr std::uintptr_t m_fForceAmountMin   = 0X03D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bApplyMinForce    = 0X0548; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomLifeTime : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fLifetimeMin          = 0X01E0; // float32
            static constexpr std::uintptr_t m_fLifetimeMax          = 0X01E4; // float32
            static constexpr std::uintptr_t m_fLifetimeRandExponent = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bPerParticleCenter                 = 0X01E0; // bool
            static constexpr std::uintptr_t m_nControlPointNumber                = 0X01E4; // int32
            static constexpr std::uintptr_t m_vecPosition                        = 0X01E8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecFwd                             = 0X08A0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_fSpeedMin                          = 0X0F58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                          = 0X10C8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecLocalCoordinateSystemSpeedScale = 0X1238; // Vector
            static constexpr std::uintptr_t m_bIgnoreDelta                       = 0X1245; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomRadius : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flRadiusMin          = 0X01E0; // float32
            static constexpr std::uintptr_t m_flRadiusMax          = 0X01E4; // float32
            static constexpr std::uintptr_t m_flRadiusRandExponent = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Orient2DRelToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRotOffset    = 0X01D8; // float32
            static constexpr std::uintptr_t m_flSpinStrength = 0X01DC; // float32
            static constexpr std::uintptr_t m_nCP            = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFieldOutput   = 0X01E4; // ParticleAttributeIndex_t
        };

        // Construct Allowed
        struct TextureControls_t {
        public:
            static constexpr std::uintptr_t m_flFinalTextureScaleU     = 0X0000; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureScaleV     = 0X0170; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureOffsetU    = 0X02E0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureOffsetV    = 0X0450; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureUVRotation = 0X05C0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flZoomScale              = 0X0730; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDistortion             = 0X08A0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bRandomizeOffsets        = 0X0A10; // bool
            static constexpr std::uintptr_t m_bClampUVs                = 0X0A11; // bool
            static constexpr std::uintptr_t m_nPerParticleBlend        = 0X0A14; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleScale        = 0X0A18; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleOffsetU      = 0X0A1C; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleOffsetV      = 0X0A20; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleRotation     = 0X0A24; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleZoom         = 0X0A28; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleDistortion   = 0X0A2C; // SpriteCardPerParticleScale_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct ControlPointReference_t {
        public:
            static constexpr std::uintptr_t m_controlPointNameString  = 0X0000; // int32
            static constexpr std::uintptr_t m_vOffsetFromControlPoint = 0X0004; // Vector
            static constexpr std::uintptr_t m_bOffsetInLocalSpace     = 0X0010; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression       = 0X01E0; // VectorExpressionType_t
            static constexpr std::uintptr_t m_nOutputCP         = 0X01E4; // int32
            static constexpr std::uintptr_t m_vInput1           = 0X01E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vInput2           = 0X08A0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flLerp            = 0X0F58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bNormalizedOutput = 0X10C8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPSnapshot     = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPStartPnt     = 0X01E4; // int32
            static constexpr std::uintptr_t m_nCPEndPnt       = 0X01E8; // int32
            static constexpr std::uintptr_t m_flSegments      = 0X01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOffset        = 0X0360; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOffsetDecay   = 0X04D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRecalcRate    = 0X0640; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flUVScale       = 0X07B0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flUVOffset      = 0X0920; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flSplitRate     = 0X0A90; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flBranchTwist   = 0X0C00; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nBranchBehavior = 0X0D70; // ParticleLightnintBranchBehavior_t
            static constexpr std::uintptr_t m_flRadiusStart   = 0X0D78; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRadiusEnd     = 0X0EE8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flDedicatedPool = 0X1058; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_hModel             = 0X01D8; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_inNames            = 0X01E0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_outNames           = 0X01F8; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_fallbackNames      = 0X0210; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bModelFromRenderer = 0X0228; // bool
            static constexpr std::uintptr_t m_bProportional      = 0X0229; // bool
            static constexpr std::uintptr_t m_nFieldInput        = 0X022C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput       = 0X0230; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRemapTime        = 0X0234; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01E0; // CParticleTransformInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionWarp : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecWarpMin               = 0X01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecWarpMax               = 0X0898; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nScaleControlPointNumber = 0X0F50; // int32
            static constexpr std::uintptr_t m_nControlPointNumber      = 0X0F54; // int32
            static constexpr std::uintptr_t m_nRadiusComponent         = 0X0F58; // int32
            static constexpr std::uintptr_t m_flWarpTime               = 0X0F5C; // float32
            static constexpr std::uintptr_t m_flWarpStartTime          = 0X0F60; // float32
            static constexpr std::uintptr_t m_flPrevPosScale           = 0X0F64; // float32
            static constexpr std::uintptr_t m_bInvertWarp              = 0X0F68; // bool
            static constexpr std::uintptr_t m_bUseCount                = 0X0F69; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression     = 0X01E0; // ScalarExpressionType_t
            static constexpr std::uintptr_t m_flInput1        = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInput2        = 0X0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputRemap   = 0X04C8; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputCP       = 0X0638; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0X063C; // int32
            static constexpr std::uintptr_t m_flInterpolation = 0X0640; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CreateParticleSystemRenderer : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_hEffect          = 0X0228; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nEventType       = 0X0230; // EventTypeSelection_t
            static constexpr std::uintptr_t m_vecCPs           = 0X0238; // CUtlLeanVector<CPAssignment_t>
            static constexpr std::uintptr_t m_szParticleConfig = 0X0248; // CUtlString
            static constexpr std::uintptr_t m_AggregationPos   = 0X0250; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMin        = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMax        = 0X01E4; // float32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nComponent   = 0X01EC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InheritFromParentParticles : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale             = 0X01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement          = 0X01E0; // int32
            static constexpr std::uintptr_t m_bRandomDistribution = 0X01E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nExpression       = 0X01E0; // VectorExpressionType_t
            static constexpr std::uintptr_t m_vInput1           = 0X01E8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2           = 0X08A0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flLerp            = 0X0F58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField      = 0X10C8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0X10CC; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput = 0X10D0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSetMethod     = 0X01D8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_TransformInput = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0X0248; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0X024C; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0X0250; // float32
            static constexpr std::uintptr_t m_vecOutputMin   = 0X0254; // Vector
            static constexpr std::uintptr_t m_vecOutputMax   = 0X0260; // Vector
            static constexpr std::uintptr_t m_flRadius       = 0X026C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecPoint1    = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecPoint2    = 0X0898; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP          = 0X01D8; // int32
            static constexpr std::uintptr_t m_flDistance   = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecScale     = 0X0350; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nDistSqrAttr = 0X0A08; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bCenterOffset         = 0X0228; // bool
            static constexpr std::uintptr_t m_hModel                = 0X0230; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_modelInput            = 0X0238; // CParticleModelInput
            static constexpr std::uintptr_t m_fSizeCullScale        = 0X0298; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDisableShadows       = 0X0408; // bool
            static constexpr std::uintptr_t m_bDisableMotionBlur    = 0X0409; // bool
            static constexpr std::uintptr_t m_bAcceptsDecals        = 0X040A; // bool
            static constexpr std::uintptr_t m_fDrawFilter           = 0X0410; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nAngularVelocityField = 0X0580; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_flInputValue    = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nCPOutput       = 0X0350; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0X0354; // int32
            static constexpr std::uintptr_t m_flQuantizeValue = 0X0358; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bFireOnEmissionEnd = 0X01E0; // bool
            static constexpr std::uintptr_t m_bIncludeChildren   = 0X01E1; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFloatCollection : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0X0350; // ParticleAttributeIndex_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPathParameters {
        public:
            static constexpr std::uintptr_t m_nStartControlPointNumber = 0X0000; // int32
            static constexpr std::uintptr_t m_nEndControlPointNumber   = 0X0004; // int32
            static constexpr std::uintptr_t m_nBulgeControl            = 0X0008; // int32
            static constexpr std::uintptr_t m_flBulge                  = 0X000C; // float32
            static constexpr std::uintptr_t m_flMidPoint               = 0X0010; // float32
            static constexpr std::uintptr_t m_vStartPointOffset        = 0X0014; // Vector
            static constexpr std::uintptr_t m_vMidPointOffset          = 0X0020; // Vector
            static constexpr std::uintptr_t m_vEndOffset               = 0X002C; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapScalarEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput  = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0X01E0; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecOffsetMin = 0X01E0; // Vector
            static constexpr std::uintptr_t m_vecOffsetMax = 0X01EC; // Vector
            static constexpr std::uintptr_t m_bUseNormal   = 0X01F9; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LazyCullCompareFloat : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flComparsion1 = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flComparsion2 = 0X0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flCullTime    = 0X04B8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPIn       = 0X01E0; // int32
            static constexpr std::uintptr_t m_vecCP1Pos   = 0X01E4; // Vector
            static constexpr std::uintptr_t m_nCPOut      = 0X01F0; // int32
            static constexpr std::uintptr_t m_nCPOutField = 0X01F4; // int32
            static constexpr std::uintptr_t m_nCPSSPosOut = 0X01F8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SpinUpdate : public CSpinUpdateBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_NormalOffset : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_OffsetMin           = 0X01E0; // Vector
            static constexpr std::uintptr_t m_OffsetMax           = 0X01EC; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01F8; // int32
            static constexpr std::uintptr_t m_bLocalCoords        = 0X01FC; // bool
            static constexpr std::uintptr_t m_bNormalize          = 0X01FD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase {
        public:
            static constexpr std::uintptr_t m_nFieldOutput    = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vMinOutputValue = 0X01F4; // Vector
            static constexpr std::uintptr_t m_vMaxOutputValue = 0X0200; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderAsModels : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_ModelList              = 0X0228; // CUtlVector<ModelReference_t>
            static constexpr std::uintptr_t m_flModelScale           = 0X0244; // float32
            static constexpr std::uintptr_t m_bFitToModelSize        = 0X0248; // bool
            static constexpr std::uintptr_t m_bNonUniformScaling     = 0X0249; // bool
            static constexpr std::uintptr_t m_nXAxisScalingAttribute = 0X024C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nYAxisScalingAttribute = 0X0250; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nZAxisScalingAttribute = 0X0254; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSizeCullBloat         = 0X0258; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreationNoise : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput     = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bAbsVal          = 0X01E4; // bool
            static constexpr std::uintptr_t m_bAbsValInv       = 0X01E5; // bool
            static constexpr std::uintptr_t m_flOffset         = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin      = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax      = 0X01F0; // float32
            static constexpr std::uintptr_t m_flNoiseScale     = 0X01F4; // float32
            static constexpr std::uintptr_t m_flNoiseScaleLoc  = 0X01F8; // float32
            static constexpr std::uintptr_t m_vecOffsetLoc     = 0X01FC; // Vector
            static constexpr std::uintptr_t m_flWorldTimeScale = 0X0208; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CGeneralSpin : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSpinRateDegrees    = 0X01D8; // int32
            static constexpr std::uintptr_t m_nSpinRateMinDegrees = 0X01DC; // int32
            static constexpr std::uintptr_t m_fSpinRateStopTime   = 0X01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Spin : public CGeneralSpin {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_GameLiquidSpill : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flLiquidContentsField = 0X0228; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flExpirationTime      = 0X0398; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAmountAttribute      = 0X0508; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_nParticlesToEmit                = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartTime                     = 0X0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInitFromKilledParentParticles = 0X04C0; // float32
            static constexpr std::uintptr_t m_nEventType                      = 0X04C4; // EventTypeSelection_t
            static constexpr std::uintptr_t m_flParentParticleScale           = 0X04C8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nMaxEmittedPerFrame             = 0X0638; // int32
            static constexpr std::uintptr_t m_nSnapshotControlPoint           = 0X063C; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset               = 0X0640; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainLineLength : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flMinDistance = 0X01D8; // float32
            static constexpr std::uintptr_t m_flMaxDistance = 0X01DC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecComponentScale  = 0X01E0; // Vector
            static constexpr std::uintptr_t m_flTraceOffset      = 0X01EC; // float32
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X01F0; // float32
            static constexpr std::uintptr_t m_flTraceTolerance   = 0X01F4; // float32
            static constexpr std::uintptr_t m_nMaxPlanes         = 0X01F8; // int32
            static constexpr std::uintptr_t m_CollisionGroupName = 0X0200; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X0280; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_bIncludeWater      = 0X0290; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityFromCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_velocityInput   = 0X01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_transformInput  = 0X0898; // CParticleTransformInput
            static constexpr std::uintptr_t m_flVelocityScale = 0X0900; // float32
            static constexpr std::uintptr_t m_bDirectionOnly  = 0X0904; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bUseWorldLocation = 0X01E0; // bool
            static constexpr std::uintptr_t m_bRandomize        = 0X01E2; // bool
            static constexpr std::uintptr_t m_bSetOnce          = 0X01E3; // bool
            static constexpr std::uintptr_t m_nCP               = 0X01E4; // int32
            static constexpr std::uintptr_t m_nHeadLocation     = 0X01E8; // int32
            static constexpr std::uintptr_t m_vecRotation       = 0X01EC; // QAngle
            static constexpr std::uintptr_t m_vecRotationB      = 0X01F8; // QAngle
            static constexpr std::uintptr_t m_flInterpolation   = 0X0208; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSnapshotControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_nControlPointNumber         = 0X01DC; // int32
            static constexpr std::uintptr_t m_bRandom                     = 0X01E0; // bool
            static constexpr std::uintptr_t m_nRandomSeed                 = 0X01E4; // int32
            static constexpr std::uintptr_t m_bSetNormal                  = 0X01E8; // bool
            static constexpr std::uintptr_t m_bSetRadius                  = 0X01E9; // bool
            static constexpr std::uintptr_t m_nIndexType                  = 0X01EC; // SnapshotIndexType_t
            static constexpr std::uintptr_t m_flReadIndex                 = 0X01F0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flIncrement                 = 0X0360; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nFullLoopIncrement          = 0X04D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nSnapShotStartPoint         = 0X0640; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation             = 0X07B0; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MultiSegmentDisplaySnapshotGenerator : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPSnapshot          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nSegCount            = 0X01E4; // ParticleMultiSegmentCountSelection_t
            static constexpr std::uintptr_t m_nInputType           = 0X01E8; // ParticleMultiSegmentInputSelection_t
            static constexpr std::uintptr_t m_strDefaultString     = 0X01F0; // CUtlString
            static constexpr std::uintptr_t m_flValue              = 0X01F8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_SpecialCharList      = 0X0368; // CUtlVector<ParticleMultiSegmentSpecialCharacter_t>
            static constexpr std::uintptr_t m_vecColorUnlit        = 0X0380; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecColorLit          = 0X0A38; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flRadius             = 0X10F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flSpacing            = 0X1260; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMinCount           = 0X13D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxCount           = 0X1540; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bPrependEmpty        = 0X16B0; // bool
            static constexpr std::uintptr_t m_flDigitsAfterDecimal = 0X16B8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0X01D8; // Vector
            static constexpr std::uintptr_t m_RateMax         = 0X01E4; // Vector
            static constexpr std::uintptr_t m_FrequencyMin    = 0X01F0; // Vector
            static constexpr std::uintptr_t m_FrequencyMax    = 0X01FC; // Vector
            static constexpr std::uintptr_t m_nField          = 0X0208; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportional   = 0X020C; // bool
            static constexpr std::uintptr_t m_bProportionalOp = 0X020D; // bool
            static constexpr std::uintptr_t m_bOffset         = 0X020E; // bool
            static constexpr std::uintptr_t m_flStartTime_min = 0X0210; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0X0214; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0X0218; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0X021C; // float32
            static constexpr std::uintptr_t m_flOscMult       = 0X0220; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOscAdd        = 0X0390; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRateScale     = 0X0500; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PositionLock : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput   = 0X01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_flStartTime_min  = 0X0240; // float32
            static constexpr std::uintptr_t m_flStartTime_max  = 0X0244; // float32
            static constexpr std::uintptr_t m_flStartTime_exp  = 0X0248; // float32
            static constexpr std::uintptr_t m_flEndTime_min    = 0X024C; // float32
            static constexpr std::uintptr_t m_flEndTime_max    = 0X0250; // float32
            static constexpr std::uintptr_t m_flEndTime_exp    = 0X0254; // float32
            static constexpr std::uintptr_t m_flRange          = 0X0258; // float32
            static constexpr std::uintptr_t m_flRangeBias      = 0X0260; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flJumpThreshold  = 0X03D0; // float32
            static constexpr std::uintptr_t m_flPrevPosScale   = 0X03D4; // float32
            static constexpr std::uintptr_t m_bLockRot         = 0X03D8; // bool
            static constexpr std::uintptr_t m_vecScale         = 0X03E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nFieldOutput     = 0X0A98; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputPrev = 0X0A9C; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nHand         = 0X0228; // ParticleVRHandChoiceList_t
            static constexpr std::uintptr_t m_nOutputHandCP = 0X022C; // int32
            static constexpr std::uintptr_t m_nOutputField  = 0X0230; // int32
            static constexpr std::uintptr_t m_flAmplitude   = 0X0238; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPOut                 = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPIn                  = 0X01E4; // int32
            static constexpr std::uintptr_t m_flUpdateRate           = 0X01E8; // float32
            static constexpr std::uintptr_t m_flTraceLength          = 0X01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartOffset          = 0X0360; // float32
            static constexpr std::uintptr_t m_flOffset               = 0X0364; // float32
            static constexpr std::uintptr_t m_vecTraceDir            = 0X0368; // Vector
            static constexpr std::uintptr_t m_CollisionGroupName     = 0X0374; // char[128]
            static constexpr std::uintptr_t m_nTraceSet              = 0X03F4; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_bSetToEndpoint         = 0X03F8; // bool
            static constexpr std::uintptr_t m_bTraceToClosestSurface = 0X03F9; // bool
            static constexpr std::uintptr_t m_bIncludeWater          = 0X03FA; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InterpolateRadius : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flStartTime   = 0X01D8; // float32
            static constexpr std::uintptr_t m_flEndTime     = 0X01DC; // float32
            static constexpr std::uintptr_t m_flStartScale  = 0X01E0; // float32
            static constexpr std::uintptr_t m_flEndScale    = 0X01E4; // float32
            static constexpr std::uintptr_t m_bEaseInAndOut = 0X01E8; // bool
            static constexpr std::uintptr_t m_flBias        = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputMin  = 0X01DC; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TurbulenceForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flNoiseCoordScale0 = 0X01E8; // float32
            static constexpr std::uintptr_t m_flNoiseCoordScale1 = 0X01EC; // float32
            static constexpr std::uintptr_t m_flNoiseCoordScale2 = 0X01F0; // float32
            static constexpr std::uintptr_t m_flNoiseCoordScale3 = 0X01F4; // float32
            static constexpr std::uintptr_t m_vecNoiseAmount0    = 0X01F8; // Vector
            static constexpr std::uintptr_t m_vecNoiseAmount1    = 0X0204; // Vector
            static constexpr std::uintptr_t m_vecNoiseAmount2    = 0X0210; // Vector
            static constexpr std::uintptr_t m_vecNoiseAmount3    = 0X021C; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1          = 0X01E0; // int32
            static constexpr std::uintptr_t m_vecCP1Pos     = 0X01E4; // Vector
            static constexpr std::uintptr_t m_bOrientToEyes = 0X01F0; // bool
            static constexpr std::uintptr_t m_nPosition     = 0X01F4; // ParticleEntityPos_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFreezeTime = 0X01D8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bUsePerParticleRadius = 0X0228; // bool
            static constexpr std::uintptr_t m_nVertexCountKb        = 0X022C; // uint32
            static constexpr std::uintptr_t m_nIndexCountKb         = 0X0230; // uint32
            static constexpr std::uintptr_t m_fGridSize             = 0X0238; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_fRadiusScale          = 0X03A8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_fIsosurfaceThreshold  = 0X0518; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nScaleCP              = 0X0688; // int32
            static constexpr std::uintptr_t m_hMaterial             = 0X0690; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bUseWorldLocation = 0X01E0; // bool
            static constexpr std::uintptr_t m_bOrient           = 0X01E1; // bool
            static constexpr std::uintptr_t m_nCP1              = 0X01E4; // int32
            static constexpr std::uintptr_t m_nHeadLocation     = 0X01E8; // int32
            static constexpr std::uintptr_t m_flReRandomRate    = 0X01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecCPMinPos       = 0X0360; // Vector
            static constexpr std::uintptr_t m_vecCPMaxPos       = 0X036C; // Vector
            static constexpr std::uintptr_t m_flInterpolation   = 0X0378; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderVolumetricEmitter : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_strChannelType = 0X0228; // CUtlString
            static constexpr std::uintptr_t m_nType          = 0X0230; // ParticleVolumetricSmokeType_t
            static constexpr std::uintptr_t m_nCreationType  = 0X0234; // ParticleVolumetricSmokeCreationType_t
            static constexpr std::uintptr_t m_nEventType     = 0X0238; // EventTypeSelection_t
            static constexpr std::uintptr_t m_vecPos         = 0X0240; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecVelocity    = 0X08F8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flRadius       = 0X0FB0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flDensity      = 0X1120; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flTemperature  = 0X1290; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMagnitude    = 0X1400; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flKillRadius   = 0X1570; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flFalloff      = 0X16E0; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSetMethod     = 0X01D8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_TransformInput = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0X0248; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0X024C; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0X0250; // float32
            static constexpr std::uintptr_t m_flOutputMin    = 0X0254; // float32
            static constexpr std::uintptr_t m_flOutputMax    = 0X0258; // float32
            static constexpr std::uintptr_t m_flRadius       = 0X025C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale             = 0X01DC; // float32
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ScreenSpacePositionOfTarget : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecTargetPosition   = 0X01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bOututBehindness    = 0X0890; // bool
            static constexpr std::uintptr_t m_nBehindFieldOutput  = 0X0894; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flBehindOutputRemap = 0X0898; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nBehindSetMethod    = 0X0A08; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DragRelativeToPlane : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDragAtPlane       = 0X01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flFalloff           = 0X0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDirectional        = 0X04B8; // bool
            static constexpr std::uintptr_t m_vecPlaneNormal      = 0X04C0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nControlPointNumber = 0X0B78; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPtoVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPInput     = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CGeneralRandomRotation : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput           = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flDegrees              = 0X01E4; // float32
            static constexpr std::uintptr_t m_flDegreesMin           = 0X01E8; // float32
            static constexpr std::uintptr_t m_flDegreesMax           = 0X01EC; // float32
            static constexpr std::uintptr_t m_flRotationRandExponent = 0X01F0; // float32
            static constexpr std::uintptr_t m_bRandomlyFlipDirection = 0X01F4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomYaw : public CGeneralRandomRotation {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bTransformNormals   = 0X01D8; // bool
            static constexpr std::uintptr_t m_bTransformRadii     = 0X01D9; // bool
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bSetOnce       = 0X01E0; // bool
            static constexpr std::uintptr_t m_nCP1           = 0X01E4; // int32
            static constexpr std::uintptr_t m_vecCP1Pos      = 0X01E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_transformInput = 0X08A0; // CParticleTransformInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flDistance        = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bIncludeRadii     = 0X0350; // bool
            static constexpr std::uintptr_t m_flLifespanOverlap = 0X0358; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldModify      = 0X04C8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flModify          = 0X04D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nSetMethod        = 0X0640; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bUseNeighbor      = 0X0644; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPtoScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPInput     = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nField       = 0X01E0; // int32
            static constexpr std::uintptr_t m_flInputMin   = 0X01E4; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01F0; // float32
            static constexpr std::uintptr_t m_flStartTime  = 0X01F4; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0X01F8; // float32
            static constexpr std::uintptr_t m_flInterpRate = 0X01FC; // float32
            static constexpr std::uintptr_t m_nSetMethod   = 0X0200; // ParticleSetMethod_t
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class IParticleSystemDefinition {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CParticleSystemDefinition : public IParticleSystemDefinition {
        public:
            static constexpr std::uintptr_t m_nBehaviorVersion                        = 0X0008; // int32
            static constexpr std::uintptr_t m_PreEmissionOperators                    = 0X0010; // CUtlVector<CParticleFunctionPreEmission*>
            static constexpr std::uintptr_t m_Emitters                                = 0X0028; // CUtlVector<CParticleFunctionEmitter*>
            static constexpr std::uintptr_t m_Initializers                            = 0X0040; // CUtlVector<CParticleFunctionInitializer*>
            static constexpr std::uintptr_t m_Operators                               = 0X0058; // CUtlVector<CParticleFunctionOperator*>
            static constexpr std::uintptr_t m_ForceGenerators                         = 0X0070; // CUtlVector<CParticleFunctionForce*>
            static constexpr std::uintptr_t m_Constraints                             = 0X0088; // CUtlVector<CParticleFunctionConstraint*>
            static constexpr std::uintptr_t m_Renderers                               = 0X00A0; // CUtlVector<CParticleFunctionRenderer*>
            static constexpr std::uintptr_t m_Children                                = 0X00B8; // CUtlVector<ParticleChildrenInfo_t>
            static constexpr std::uintptr_t m_nFirstMultipleOverride_BackwardCompat   = 0X0178; // int32
            static constexpr std::uintptr_t m_nInitialParticles                       = 0X0258; // int32
            static constexpr std::uintptr_t m_nMaxParticles                           = 0X025C; // int32
            static constexpr std::uintptr_t m_nGroupID                                = 0X0260; // int32
            static constexpr std::uintptr_t m_BoundingBoxMin                          = 0X0264; // Vector
            static constexpr std::uintptr_t m_BoundingBoxMax                          = 0X0270; // Vector
            static constexpr std::uintptr_t m_flDepthSortBias                         = 0X027C; // float32
            static constexpr std::uintptr_t m_nSortOverridePositionCP                 = 0X0280; // int32
            static constexpr std::uintptr_t m_bInfiniteBounds                         = 0X0284; // bool
            static constexpr std::uintptr_t m_bEnableNamedValues                      = 0X0285; // bool
            static constexpr std::uintptr_t m_NamedValueDomain                        = 0X0288; // CUtlString
            static constexpr std::uintptr_t m_NamedValueLocals                        = 0X0290; // CUtlVector<ParticleNamedValueSource_t*>
            static constexpr std::uintptr_t m_ConstantColor                           = 0X02A8; // Color
            static constexpr std::uintptr_t m_ConstantNormal                          = 0X02AC; // Vector
            static constexpr std::uintptr_t m_flConstantRadius                        = 0X02B8; // float32
            static constexpr std::uintptr_t m_flConstantRotation                      = 0X02BC; // float32
            static constexpr std::uintptr_t m_flConstantRotationSpeed                 = 0X02C0; // float32
            static constexpr std::uintptr_t m_flConstantLifespan                      = 0X02C4; // float32
            static constexpr std::uintptr_t m_nConstantSequenceNumber                 = 0X02C8; // int32
            static constexpr std::uintptr_t m_nConstantSequenceNumber1                = 0X02CC; // int32
            static constexpr std::uintptr_t m_nSnapshotControlPoint                   = 0X02D0; // int32
            static constexpr std::uintptr_t m_hSnapshot                               = 0X02D8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_pszCullReplacementName                  = 0X02E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flCullRadius                            = 0X02E8; // float32
            static constexpr std::uintptr_t m_flCullFillCost                          = 0X02EC; // float32
            static constexpr std::uintptr_t m_nCullControlPoint                       = 0X02F0; // int32
            static constexpr std::uintptr_t m_hFallback                               = 0X02F8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nFallbackMaxCount                       = 0X0300; // int32
            static constexpr std::uintptr_t m_hLowViolenceDef                         = 0X0308; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_hReferenceReplacement                   = 0X0310; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flPreSimulationTime                     = 0X0318; // float32
            static constexpr std::uintptr_t m_flStopSimulationAfterTime               = 0X031C; // float32
            static constexpr std::uintptr_t m_flMaximumTimeStep                       = 0X0320; // float32
            static constexpr std::uintptr_t m_flMaximumSimTime                        = 0X0324; // float32
            static constexpr std::uintptr_t m_flMinimumSimTime                        = 0X0328; // float32
            static constexpr std::uintptr_t m_flMinimumTimeStep                       = 0X032C; // float32
            static constexpr std::uintptr_t m_nMinimumFrames                          = 0X0330; // int32
            static constexpr std::uintptr_t m_bIsGPUParticleSystem                    = 0X0334; // bool
            static constexpr std::uintptr_t m_nMinCPULevel                            = 0X0338; // int32
            static constexpr std::uintptr_t m_nMinGPULevel                            = 0X033C; // int32
            static constexpr std::uintptr_t m_flNoDrawTimeToGoToSleep                 = 0X0340; // float32
            static constexpr std::uintptr_t m_flMaxDrawDistance                       = 0X0344; // float32
            static constexpr std::uintptr_t m_flStartFadeDistance                     = 0X0348; // float32
            static constexpr std::uintptr_t m_flMaxCreationDistance                   = 0X034C; // float32
            static constexpr std::uintptr_t m_nAggregationMinAvailableParticles       = 0X0350; // int32
            static constexpr std::uintptr_t m_flAggregateRadius                       = 0X0354; // float32
            static constexpr std::uintptr_t m_bShouldBatch                            = 0X0358; // bool
            static constexpr std::uintptr_t m_bShouldHitboxesFallbackToRenderBounds   = 0X0359; // bool
            static constexpr std::uintptr_t m_bShouldHitboxesFallbackToSnapshot       = 0X035A; // bool
            static constexpr std::uintptr_t m_bShouldHitboxesFallbackToCollisionHulls = 0X035B; // bool
            static constexpr std::uintptr_t m_nViewModelEffect                        = 0X035C; // InheritableBoolType_t
            static constexpr std::uintptr_t m_bScreenSpaceEffect                      = 0X0360; // bool
            static constexpr std::uintptr_t m_pszTargetLayerID                        = 0X0368; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nSkipRenderControlPoint                 = 0X0370; // int32
            static constexpr std::uintptr_t m_nAllowRenderControlPoint                = 0X0374; // int32
            static constexpr std::uintptr_t m_bShouldSort                             = 0X0378; // bool
            static constexpr std::uintptr_t m_controlPointConfigurations              = 0X03C0; // CUtlVector<ParticleControlPointConfiguration_t>
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_hModel             = 0X01D8; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_inNames            = 0X01E0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_outNames           = 0X01F8; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_fallbackNames      = 0X0210; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bModelFromRenderer = 0X0228; // bool
            static constexpr std::uintptr_t m_nFieldInput        = 0X022C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput       = 0X0230; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput   = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0X01DC; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0X01E0; // float32
            static constexpr std::uintptr_t m_vecOutputMin   = 0X01E4; // Vector
            static constexpr std::uintptr_t m_vecOutputMax   = 0X01F0; // Vector
            static constexpr std::uintptr_t m_TransformStart = 0X0200; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd   = 0X0268; // CParticleTransformInput
            static constexpr std::uintptr_t m_nSetMethod     = 0X02D0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange   = 0X02D4; // bool
            static constexpr std::uintptr_t m_bRadialCheck   = 0X02D5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRotateRateDegrees = 0X0228; // float32
            static constexpr std::uintptr_t m_flForwardDegrees    = 0X022C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_UpdateLightSource : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vColorTint                = 0X01D8; // Color
            static constexpr std::uintptr_t m_flBrightnessScale         = 0X01DC; // float32
            static constexpr std::uintptr_t m_flRadiusScale             = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMinimumLightingRadius   = 0X01E4; // float32
            static constexpr std::uintptr_t m_flMaximumLightingRadius   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flPositionDampingConstant = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateWithinBox : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecMin               = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecMax               = 0X0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nControlPointNumber  = 0X0F50; // int32
            static constexpr std::uintptr_t m_bLocalSpace          = 0X0F54; // bool
            static constexpr std::uintptr_t m_randomnessParameters = 0X0F58; // CRandomNumberGeneratorParameters
            static constexpr std::uintptr_t m_bUseNewCode          = 0X0F60; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0X01E0; // int32
            static constexpr std::uintptr_t m_flNumberOfChildren = 0X01E8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ControlpointLight : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale          = 0X01D8; // float32
            static constexpr std::uintptr_t m_nControlPoint1   = 0X0660; // int32
            static constexpr std::uintptr_t m_nControlPoint2   = 0X0664; // int32
            static constexpr std::uintptr_t m_nControlPoint3   = 0X0668; // int32
            static constexpr std::uintptr_t m_nControlPoint4   = 0X066C; // int32
            static constexpr std::uintptr_t m_vecCPOffset1     = 0X0670; // Vector
            static constexpr std::uintptr_t m_vecCPOffset2     = 0X067C; // Vector
            static constexpr std::uintptr_t m_vecCPOffset3     = 0X0688; // Vector
            static constexpr std::uintptr_t m_vecCPOffset4     = 0X0694; // Vector
            static constexpr std::uintptr_t m_LightFiftyDist1  = 0X06A0; // float32
            static constexpr std::uintptr_t m_LightZeroDist1   = 0X06A4; // float32
            static constexpr std::uintptr_t m_LightFiftyDist2  = 0X06A8; // float32
            static constexpr std::uintptr_t m_LightZeroDist2   = 0X06AC; // float32
            static constexpr std::uintptr_t m_LightFiftyDist3  = 0X06B0; // float32
            static constexpr std::uintptr_t m_LightZeroDist3   = 0X06B4; // float32
            static constexpr std::uintptr_t m_LightFiftyDist4  = 0X06B8; // float32
            static constexpr std::uintptr_t m_LightZeroDist4   = 0X06BC; // float32
            static constexpr std::uintptr_t m_LightColor1      = 0X06C0; // Color
            static constexpr std::uintptr_t m_LightColor2      = 0X06C4; // Color
            static constexpr std::uintptr_t m_LightColor3      = 0X06C8; // Color
            static constexpr std::uintptr_t m_LightColor4      = 0X06CC; // Color
            static constexpr std::uintptr_t m_bLightType1      = 0X06D0; // bool
            static constexpr std::uintptr_t m_bLightType2      = 0X06D1; // bool
            static constexpr std::uintptr_t m_bLightType3      = 0X06D2; // bool
            static constexpr std::uintptr_t m_bLightType4      = 0X06D3; // bool
            static constexpr std::uintptr_t m_bLightDynamic1   = 0X06D4; // bool
            static constexpr std::uintptr_t m_bLightDynamic2   = 0X06D5; // bool
            static constexpr std::uintptr_t m_bLightDynamic3   = 0X06D6; // bool
            static constexpr std::uintptr_t m_bLightDynamic4   = 0X06D7; // bool
            static constexpr std::uintptr_t m_bUseNormal       = 0X06D8; // bool
            static constexpr std::uintptr_t m_bUseHLambert     = 0X06D9; // bool
            static constexpr std::uintptr_t m_bClampLowerRange = 0X06DE; // bool
            static constexpr std::uintptr_t m_bClampUpperRange = 0X06DF; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_nAttributeToWrite   = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP       = 0X01E0; // int32
            static constexpr std::uintptr_t m_flInterpolation     = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecScale            = 0X0358; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flBoundaryDampening = 0X0A10; // float32
            static constexpr std::uintptr_t m_bSetVelocity        = 0X0A14; // bool
            static constexpr std::uintptr_t m_bLockToSurface      = 0X0A15; // bool
            static constexpr std::uintptr_t m_flGridSpacing       = 0X0A18; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput   = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax     = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin    = 0X04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax    = 0X0630; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformStart = 0X07A0; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd   = 0X0808; // CParticleTransformInput
            static constexpr std::uintptr_t m_nSetMethod     = 0X0870; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange   = 0X0874; // bool
            static constexpr std::uintptr_t m_bAdditive      = 0X0875; // bool
            static constexpr std::uintptr_t m_bCapsule       = 0X0876; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flOffset               = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxTraceLength       = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecTraceDir            = 0X04C0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_CollisionGroupName     = 0X0B78; // char[128]
            static constexpr std::uintptr_t m_nTraceSet              = 0X0BF8; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nTraceMissBehavior     = 0X0C08; // ParticleTraceMissBehavior_t
            static constexpr std::uintptr_t m_bIncludeWater          = 0X0C0C; // bool
            static constexpr std::uintptr_t m_nAttribute             = 0X0C10; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bSetPXYZOnly           = 0X0C14; // bool
            static constexpr std::uintptr_t m_bSetNormal             = 0X0C15; // bool
            static constexpr std::uintptr_t m_nGroundNormalAttribute = 0X0C18; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bOffsetonColOnly       = 0X0C1C; // bool
            static constexpr std::uintptr_t m_flOffsetByRadiusFactor = 0X0C20; // float32
            static constexpr std::uintptr_t m_nPreserveOffsetCP      = 0X0C24; // int32
            static constexpr std::uintptr_t m_nIgnoreCP              = 0X0C28; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMin        = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMax        = 0X01E4; // float32
            static constexpr std::uintptr_t m_flExponent   = 0X01E8; // float32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01EC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderPostProcessing : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flPostProcessStrength = 0X0228; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_hPostTexture          = 0X0398; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            static constexpr std::uintptr_t m_nPriority             = 0X03A0; // ParticlePostProcessPriorityGroup_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_nCP                          = 0X01D8; // int32
            static constexpr std::uintptr_t m_vecCpOffset                  = 0X01DC; // Vector
            static constexpr std::uintptr_t m_nCollisionMode               = 0X01E8; // ParticleCollisionMode_t
            static constexpr std::uintptr_t m_nCollisionModeMin            = 0X01EC; // ParticleCollisionMode_t
            static constexpr std::uintptr_t m_nTraceSet                    = 0X01F0; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_CollisionGroupName           = 0X01F4; // char[128]
            static constexpr std::uintptr_t m_bWorldOnly                   = 0X0274; // bool
            static constexpr std::uintptr_t m_bBrushOnly                   = 0X0275; // bool
            static constexpr std::uintptr_t m_bIncludeWater                = 0X0276; // bool
            static constexpr std::uintptr_t m_nIgnoreCP                    = 0X0278; // int32
            static constexpr std::uintptr_t m_flCpMovementTolerance        = 0X027C; // float32
            static constexpr std::uintptr_t m_flRetestRate                 = 0X0280; // float32
            static constexpr std::uintptr_t m_flTraceTolerance             = 0X0284; // float32
            static constexpr std::uintptr_t m_flCollisionConfirmationSpeed = 0X0288; // float32
            static constexpr std::uintptr_t m_nMaxTracesPerFrame           = 0X028C; // float32
            static constexpr std::uintptr_t m_flRadiusScale                = 0X0290; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flBounceAmount               = 0X0400; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSlideAmount                = 0X0570; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRandomDirScale             = 0X06E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bDecayBounce                 = 0X0850; // bool
            static constexpr std::uintptr_t m_bKillonContact               = 0X0851; // bool
            static constexpr std::uintptr_t m_flMinSpeed                   = 0X0854; // float32
            static constexpr std::uintptr_t m_bSetNormal                   = 0X0858; // bool
            static constexpr std::uintptr_t m_nStickOnCollisionField       = 0X085C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flStopSpeed                  = 0X0860; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nEntityStickDataField        = 0X09D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nEntityStickNormalField      = 0X09D4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderBlobs : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_cubeWidth      = 0X0228; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_cutoffRadius   = 0X0398; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_renderRadius   = 0X0508; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nVertexCountKb = 0X0678; // uint32
            static constexpr std::uintptr_t m_nIndexCountKb  = 0X067C; // uint32
            static constexpr std::uintptr_t m_nScaleCP       = 0X0680; // int32
            static constexpr std::uintptr_t m_MaterialVars   = 0X0688; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_hMaterial      = 0X06B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0X01D8; // float32
            static constexpr std::uintptr_t m_RateMax         = 0X01DC; // float32
            static constexpr std::uintptr_t m_FrequencyMin    = 0X01E0; // float32
            static constexpr std::uintptr_t m_FrequencyMax    = 0X01E4; // float32
            static constexpr std::uintptr_t m_nField          = 0X01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportional   = 0X01EC; // bool
            static constexpr std::uintptr_t m_bProportionalOp = 0X01ED; // bool
            static constexpr std::uintptr_t m_flStartTime_min = 0X01F0; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0X01F4; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0X01F8; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0X01FC; // float32
            static constexpr std::uintptr_t m_flOscMult       = 0X0200; // float32
            static constexpr std::uintptr_t m_flOscAdd        = 0X0204; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeOut : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeOutTimeMin = 0X01D8; // float32
            static constexpr std::uintptr_t m_flFadeOutTimeMax = 0X01DC; // float32
            static constexpr std::uintptr_t m_flFadeOutTimeExp = 0X01E0; // float32
            static constexpr std::uintptr_t m_flFadeBias       = 0X01E4; // float32
            static constexpr std::uintptr_t m_bProportional    = 0X0220; // bool
            static constexpr std::uintptr_t m_bEaseInAndOut    = 0X0221; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_vecPos        = 0X0228; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flRadius      = 0X08E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMagnitude   = 0X0A50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flShape       = 0X0BC0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flWindSpeed   = 0X0D30; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flWobble      = 0X0EA0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bIsRadialWind = 0X1010; // bool
            static constexpr std::uintptr_t m_nEventType    = 0X1014; // EventTypeSelection_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomSequence : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nSequenceMin = 0X01E0; // int32
            static constexpr std::uintptr_t m_nSequenceMax = 0X01E4; // int32
            static constexpr std::uintptr_t m_bShuffle     = 0X01E8; // bool
            static constexpr std::uintptr_t m_bLinear      = 0X01E9; // bool
            static constexpr std::uintptr_t m_WeightedList = 0X01F0; // CUtlVector<SequenceWeightedList_t>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate        = 0X01D8; // float32
            static constexpr std::uintptr_t m_flStartTime = 0X01DC; // float32
            static constexpr std::uintptr_t m_flEndTime   = 0X01E0; // float32
            static constexpr std::uintptr_t m_nField      = 0X0210; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bEaseOut    = 0X0214; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_DistanceCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0X01E0; // int32
            static constexpr std::uintptr_t m_flDistance    = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCullInside   = 0X0358; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flParentRadiusScale = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadiusScale       = 0X0348; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nLocalSpaceCP        = 0X01E4; // int32
            static constexpr std::uintptr_t m_nWeightUpdateCP      = 0X01E8; // int32
            static constexpr std::uintptr_t m_bUseVerticalVelocity = 0X01EC; // bool
            static constexpr std::uintptr_t m_vecScale             = 0X01F0; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nExpression       = 0X01D8; // VectorExpressionType_t
            static constexpr std::uintptr_t m_vInput1           = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2           = 0X0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flLerp            = 0X0F50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField      = 0X10C0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0X10C4; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput = 0X10C8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_AddVectorToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecScale             = 0X01E0; // Vector
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01EC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldInput          = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vOffsetMin           = 0X01F4; // Vector
            static constexpr std::uintptr_t m_vOffsetMax           = 0X0200; // Vector
            static constexpr std::uintptr_t m_randomnessParameters = 0X020C; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0X01F0; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01F4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0X0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRotOffset    = 0X0244; // float32
            static constexpr std::uintptr_t m_flSpinStrength = 0X0248; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderStatusEffect : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_pTextureColorWarp        = 0X0228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureDetail2          = 0X0230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureDiffuseWarp      = 0X0238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureFresnelColorWarp = 0X0240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureFresnelWarp      = 0X0248; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureSpecularWarp     = 0X0250; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureEnvMap           = 0X0258; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RandomForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_MinForce = 0X01E8; // Vector
            static constexpr std::uintptr_t m_MaxForce = 0X01F4; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nInputMin    = 0X01DC; // int32
            static constexpr std::uintptr_t m_nInputMax    = 0X01E0; // int32
            static constexpr std::uintptr_t m_flOutputMin  = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01E8; // float32
            static constexpr std::uintptr_t m_bBackwards   = 0X01EC; // bool
            static constexpr std::uintptr_t m_nSetMethod   = 0X01F0; // ParticleSetMethod_t
        };

        // Construct Allowed
        struct ParticlePreviewState_t {
        public:
            static constexpr std::uintptr_t m_previewModel                 = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nModSpecificData             = 0X0008; // uint32
            static constexpr std::uintptr_t m_groundType                   = 0X000C; // PetGroundType_t
            static constexpr std::uintptr_t m_sequenceName                 = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_nFireParticleOnSequenceFrame = 0X0018; // int32
            static constexpr std::uintptr_t m_hitboxSetName                = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_materialGroupName            = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_vecBodyGroups                = 0X0030; // CUtlVector<ParticlePreviewBodyGroup_t>
            static constexpr std::uintptr_t m_flPlaybackSpeed              = 0X0048; // float32
            static constexpr std::uintptr_t m_flParticleSimulationRate     = 0X004C; // float32
            static constexpr std::uintptr_t m_bShouldDrawHitboxes          = 0X0050; // bool
            static constexpr std::uintptr_t m_bShouldDrawAttachments       = 0X0051; // bool
            static constexpr std::uintptr_t m_bShouldDrawAttachmentNames   = 0X0052; // bool
            static constexpr std::uintptr_t m_bShouldDrawControlPointAxes  = 0X0053; // bool
            static constexpr std::uintptr_t m_bAnimationNonLooping         = 0X0054; // bool
            static constexpr std::uintptr_t m_bSequenceNameIsAnimClipPath  = 0X0055; // bool
            static constexpr std::uintptr_t m_vecPreviewGravity            = 0X0058; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LocalAccelerationForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_nCP      = 0X01E8; // int32
            static constexpr std::uintptr_t m_nScaleCP = 0X01EC; // int32
            static constexpr std::uintptr_t m_vecAccel = 0X01F0; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ModelCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_bBoundBox           = 0X01DC; // bool
            static constexpr std::uintptr_t m_bCullOutside        = 0X01DD; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0X01DE; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0X01DF; // char[128]
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFloat : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0X0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod   = 0X034C; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_Lerp         = 0X0350; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vInputMin           = 0X01E4; // Vector
            static constexpr std::uintptr_t m_vInputMax           = 0X01F0; // Vector
            static constexpr std::uintptr_t m_vOutputMin          = 0X01FC; // Vector
            static constexpr std::uintptr_t m_vOutputMax          = 0X0208; // Vector
            static constexpr std::uintptr_t m_TransformInput      = 0X0218; // CParticleTransformInput
            static constexpr std::uintptr_t m_LocalSpaceTransform = 0X0280; // CParticleTransformInput
            static constexpr std::uintptr_t m_flStartTime         = 0X02E8; // float32
            static constexpr std::uintptr_t m_flEndTime           = 0X02EC; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0X02F0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bOffset             = 0X02F4; // bool
            static constexpr std::uintptr_t m_bAccelerate         = 0X02F5; // bool
            static constexpr std::uintptr_t m_flRemapBias         = 0X02F8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ScreenSpaceDistanceToEdge : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput      = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMaxDistFromEdge = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap     = 0X0350; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nSetMethod        = 0X04C0; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase {
        public:
            static constexpr std::uintptr_t m_nFieldOutput     = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMinOutputValue = 0X01F4; // float32
            static constexpr std::uintptr_t m_flMaxOutputValue = 0X01F8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVectortoCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldInput            = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nParticleNumber        = 0X01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset   = 0X01E0; // CUtlString
            static constexpr std::uintptr_t m_nAttributeToRead    = 0X01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAttributeToWrite   = 0X01EC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP       = 0X01F0; // int32
            static constexpr std::uintptr_t m_bRandom             = 0X01F4; // bool
            static constexpr std::uintptr_t m_bReverse            = 0X01F5; // bool
            static constexpr std::uintptr_t m_nRandomSeed         = 0X01F8; // int32
            static constexpr std::uintptr_t m_nSnapShotStartPoint = 0X0200; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nSnapShotIncrement  = 0X0370; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation     = 0X04E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bSubSample          = 0X0650; // bool
            static constexpr std::uintptr_t m_bPrev               = 0X0651; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nStartCP           = 0X01E0; // int32
            static constexpr std::uintptr_t m_nEndCP             = 0X01E4; // int32
            static constexpr std::uintptr_t m_nOutputCP          = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOutputCPField     = 0X01EC; // int32
            static constexpr std::uintptr_t m_bSetOnce           = 0X01F0; // bool
            static constexpr std::uintptr_t m_flInputMin         = 0X01F4; // float32
            static constexpr std::uintptr_t m_flInputMax         = 0X01F8; // float32
            static constexpr std::uintptr_t m_flOutputMin        = 0X01FC; // float32
            static constexpr std::uintptr_t m_flOutputMax        = 0X0200; // float32
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X0204; // float32
            static constexpr std::uintptr_t m_flLOSScale         = 0X0208; // float32
            static constexpr std::uintptr_t m_bLOS               = 0X020C; // bool
            static constexpr std::uintptr_t m_CollisionGroupName = 0X020D; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X0290; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nSetParent         = 0X0294; // ParticleParentSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nHand         = 0X01E4; // int32
            static constexpr std::uintptr_t m_vecCP1Pos     = 0X01E8; // Vector
            static constexpr std::uintptr_t m_bOrientToHand = 0X01F4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_fMinDistance     = 0X01D8; // float32
            static constexpr std::uintptr_t m_flMaxDistance0   = 0X01DC; // float32
            static constexpr std::uintptr_t m_flMaxDistanceMid = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMaxDistance1   = 0X01E4; // float32
            static constexpr std::uintptr_t m_PathParameters   = 0X01F0; // CPathParameters
            static constexpr std::uintptr_t m_flTravelTime     = 0X0230; // float32
            static constexpr std::uintptr_t m_nFieldScale      = 0X0234; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nManualTField    = 0X0238; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPoint  = 0X01D8; // int32
            static constexpr std::uintptr_t m_vecPointOffset = 0X01DC; // Vector
            static constexpr std::uintptr_t m_flDistance     = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCullInside    = 0X0358; // bool
            static constexpr std::uintptr_t m_nAttribute     = 0X035C; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateAlongPath : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fMaxDistance  = 0X01E0; // float32
            static constexpr std::uintptr_t m_PathParams    = 0X01F0; // CPathParameters
            static constexpr std::uintptr_t m_bUseRandomCPs = 0X0230; // bool
            static constexpr std::uintptr_t m_vEndOffset    = 0X0234; // Vector
            static constexpr std::uintptr_t m_bSaveOffset   = 0X0240; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_GameDecalRenderer : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_sDecalGroupName             = 0X0228; // CGlobalSymbol
            static constexpr std::uintptr_t m_nEventType                  = 0X0230; // EventTypeSelection_t
            static constexpr std::uintptr_t m_nInteractionMask            = 0X0238; // ParticleCollisionMask_t
            static constexpr std::uintptr_t m_nCollisionGroup             = 0X0240; // ParticleCollisionGroup_t
            static constexpr std::uintptr_t m_vecStartPos                 = 0X0248; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecEndPos                   = 0X0900; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flTraceBloat                = 0X0FB8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flDecalSize                 = 0X1128; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nDecalGroupIndex            = 0X1298; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flDecalRotation             = 0X1408; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vModulationColor            = 0X1578; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bUseGameDefaultDecalSize    = 0X1C30; // bool
            static constexpr std::uintptr_t m_bRandomDecalRotation        = 0X1C31; // bool
            static constexpr std::uintptr_t m_bRandomlySelectDecalInGroup = 0X1C32; // bool
            static constexpr std::uintptr_t m_bNoDecalsOnOwner            = 0X1C33; // bool
            static constexpr std::uintptr_t m_bVisualizeTraces            = 0X1C34; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_HitboxSetName      = 0X01D8; // char[128]
            static constexpr std::uintptr_t m_AttachmentName     = 0X0258; // char[128]
            static constexpr std::uintptr_t m_nFirstControlPoint = 0X02D8; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0X02DC; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0X02E0; // int32
            static constexpr std::uintptr_t m_bSkin              = 0X02E4; // bool
            static constexpr std::uintptr_t m_bAttachment        = 0X02E5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_ColorFadeMin    = 0X01D8; // Color
            static constexpr std::uintptr_t m_ColorFadeMax    = 0X01F4; // Color
            static constexpr std::uintptr_t m_flFadeStartTime = 0X0204; // float32
            static constexpr std::uintptr_t m_flFadeEndTime   = 0X0208; // float32
            static constexpr std::uintptr_t m_nFieldOutput    = 0X020C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bEaseInOut      = 0X0210; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_hModel             = 0X01E0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_names              = 0X01E8; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_values             = 0X0200; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nFieldInput        = 0X0218; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput       = 0X021C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod         = 0X0220; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bModelFromRenderer = 0X0224; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderPoints : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_hMaterial = 0X0228; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderLights : public C_OP_RenderPoints {
        public:
            static constexpr std::uintptr_t m_flAnimationRate = 0X0230; // float32
            static constexpr std::uintptr_t m_nAnimationType  = 0X0234; // AnimationType_t
            static constexpr std::uintptr_t m_bAnimateInFPS   = 0X0238; // bool
            static constexpr std::uintptr_t m_flMinSize       = 0X023C; // float32
            static constexpr std::uintptr_t m_flMaxSize       = 0X0240; // float32
            static constexpr std::uintptr_t m_flStartFadeSize = 0X0244; // float32
            static constexpr std::uintptr_t m_flEndFadeSize   = 0X0248; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DecayClampCount : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCount = 0X01D8; // CParticleCollectionFloatInput
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CRandomNumberGeneratorParameters {
        public:
            static constexpr std::uintptr_t m_bDistributeEvenly = 0X0000; // bool
            static constexpr std::uintptr_t m_nSeed             = 0X0004; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_ColorMin             = 0X01F8; // Color
            static constexpr std::uintptr_t m_ColorMax             = 0X01FC; // Color
            static constexpr std::uintptr_t m_TintMin              = 0X0200; // Color
            static constexpr std::uintptr_t m_TintMax              = 0X0204; // Color
            static constexpr std::uintptr_t m_flTintPerc           = 0X0208; // float32
            static constexpr std::uintptr_t m_nTintBlendMode       = 0X020C; // ParticleColorBlendMode_t
            static constexpr std::uintptr_t m_flLightAmplification = 0X0210; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetAttributeToScalarExpression : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0X01E0; // ScalarExpressionType_t
            static constexpr std::uintptr_t m_flInput1      = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInput2      = 0X0358; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap = 0X04C8; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0X0638; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0X063C; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateOnGrid : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nXCount             = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nYCount             = 0X0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nZCount             = 0X04C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nXSpacing           = 0X0630; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nYSpacing           = 0X07A0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nZSpacing           = 0X0910; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nControlPointNumber = 0X0A80; // int32
            static constexpr std::uintptr_t m_bLocalSpace         = 0X0A84; // bool
            static constexpr std::uintptr_t m_bCenter             = 0X0A85; // bool
            static constexpr std::uintptr_t m_bHollow             = 0X0A86; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_vecRateMin             = 0X01E4; // Vector
            static constexpr std::uintptr_t m_vecRateMax             = 0X01F0; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VelocityMatchingForce : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDirScale         = 0X01D8; // float32
            static constexpr std::uintptr_t m_flSpdScale         = 0X01DC; // float32
            static constexpr std::uintptr_t m_flNeighborDistance = 0X01E0; // float32
            static constexpr std::uintptr_t m_flFacingStrength   = 0X01E4; // float32
            static constexpr std::uintptr_t m_bUseAABB           = 0X01E8; // bool
            static constexpr std::uintptr_t m_nCPBroadcast       = 0X01EC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMin      = 0X01E0; // float32
            static constexpr std::uintptr_t m_flMax      = 0X01E4; // float32
            static constexpr std::uintptr_t m_flExponent = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bUseBones             = 0X01E0; // bool
            static constexpr std::uintptr_t m_bForceZ               = 0X01E1; // bool
            static constexpr std::uintptr_t m_nControlPointNumber   = 0X01E4; // int32
            static constexpr std::uintptr_t m_nHeightCP             = 0X01E8; // int32
            static constexpr std::uintptr_t m_bUseWaterHeight       = 0X01EC; // bool
            static constexpr std::uintptr_t m_flDesiredHeight       = 0X01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecHitBoxScale        = 0X0360; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecDirectionBias      = 0X0A18; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nBiasType             = 0X10D0; // ParticleHitboxBiasType_t
            static constexpr std::uintptr_t m_bLocalCoords          = 0X10D4; // bool
            static constexpr std::uintptr_t m_bPreferMovingBoxes    = 0X10D5; // bool
            static constexpr std::uintptr_t m_HitboxSetName         = 0X10D6; // char[128]
            static constexpr std::uintptr_t m_flHitboxVelocityScale = 0X1158; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxBoneVelocity     = 0X12C8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ModelSurfaceSnapshotGenerator : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPSnapshot     = 0X01E0; // int32
            static constexpr std::uintptr_t m_modelInput      = 0X01E8; // CParticleModelInput
            static constexpr std::uintptr_t m_flRecalcRate    = 0X0248; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flUSpacing      = 0X03B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flVSpacing      = 0X0528; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flSurfaceOffset = 0X0698; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bSetNormal      = 0X0808; // bool
            static constexpr std::uintptr_t m_bSetUp          = 0X0809; // bool
            static constexpr std::uintptr_t m_bSetGravity     = 0X080A; // bool
            static constexpr std::uintptr_t m_bSetUV          = 0X080B; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RestartAfterDuration : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDurationMin = 0X01D8; // float32
            static constexpr std::uintptr_t m_flDurationMax = 0X01DC; // float32
            static constexpr std::uintptr_t m_nCP           = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPField      = 0X01E4; // int32
            static constexpr std::uintptr_t m_nChildGroupID = 0X01E8; // int32
            static constexpr std::uintptr_t m_bOnlyChildren = 0X01EC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderClothForce : public CParticleFunctionRenderer {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput   = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin    = 0X01E0; // float32
            static constexpr std::uintptr_t m_flInputMax    = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMin   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMax   = 0X01EC; // float32
            static constexpr std::uintptr_t m_flRadiusScale = 0X01F0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fMaxDistance  = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flNumToAssign = 0X0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bLoop         = 0X04C0; // bool
            static constexpr std::uintptr_t m_bCPPairs      = 0X04C1; // bool
            static constexpr std::uintptr_t m_bSaveOffset   = 0X04C2; // bool
            static constexpr std::uintptr_t m_PathParams    = 0X04D0; // CPathParameters
        };

        // Construct Allowed
        struct VecInputMaterialVariable_t {
        public:
            static constexpr std::uintptr_t m_strVariable = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_vecInput    = 0X0008; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0X0248; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale        = 0X024C; // float32
            static constexpr std::uintptr_t m_flOffsetRot    = 0X0250; // float32
            static constexpr std::uintptr_t m_vecOffsetAxis  = 0X0254; // Vector
            static constexpr std::uintptr_t m_bNormalize     = 0X0260; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeStart = 0X01D8; // float32
            static constexpr std::uintptr_t m_flFadeEnd   = 0X01DC; // float32
            static constexpr std::uintptr_t m_bCPPairs    = 0X01E0; // bool
            static constexpr std::uintptr_t m_PathParams  = 0X01F0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_NormalLock : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_vecRotation    = 0X0248; // Vector
            static constexpr std::uintptr_t m_bUseQuat       = 0X0254; // bool
            static constexpr std::uintptr_t m_bWriteNormal   = 0X0255; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Cull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flCullPerc  = 0X01D8; // float32
            static constexpr std::uintptr_t m_flCullStart = 0X01DC; // float32
            static constexpr std::uintptr_t m_flCullEnd   = 0X01E0; // float32
            static constexpr std::uintptr_t m_flCullExp   = 0X01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomYawFlip : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flPercent = 0X01E0; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SequenceWeightedList_t {
        public:
            static constexpr std::uintptr_t m_nSequence        = 0X0000; // int32
            static constexpr std::uintptr_t m_flRelativeWeight = 0X0004; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput     = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput    = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement      = 0X01E0; // int32
            static constexpr std::uintptr_t m_DistanceCheck   = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInterpolation = 0X0358; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderText : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_OutlineColor = 0X0228; // Color
            static constexpr std::uintptr_t m_DefaultText  = 0X0230; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpToInitialPosition : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_flInterpolation     = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nCacheField         = 0X0350; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale             = 0X0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecScale            = 0X04C8; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomRotation : public CGeneralRandomRotation {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpEndCapVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutput    = 0X01DC; // Vector
            static constexpr std::uintptr_t m_flLerpTime   = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VelocityDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMinVelocity = 0X01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInputCP          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nOutputCP         = 0X01E4; // int32
            static constexpr std::uintptr_t m_flInterpolation   = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_b2DOrientation    = 0X0358; // bool
            static constexpr std::uintptr_t m_bAvoidSingularity = 0X0359; // bool
            static constexpr std::uintptr_t m_bPointAway        = 0X035A; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToPointList : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_pointList           = 0X01E0; // CUtlVector<PointDefinition_t>
            static constexpr std::uintptr_t m_bPlaceAlongPath     = 0X01F8; // bool
            static constexpr std::uintptr_t m_bClosedLoop         = 0X01F9; // bool
            static constexpr std::uintptr_t m_nNumPointsAlongPath = 0X01FC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flOffset           = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X0348; // float32
            static constexpr std::uintptr_t m_flTolerance        = 0X034C; // float32
            static constexpr std::uintptr_t m_vecTraceDir        = 0X0350; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flTraceOffset      = 0X0A08; // float32
            static constexpr std::uintptr_t m_flLerpRate         = 0X0A0C; // float32
            static constexpr std::uintptr_t m_CollisionGroupName = 0X0A10; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X0A90; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nRefCP1            = 0X0A94; // int32
            static constexpr std::uintptr_t m_nRefCP2            = 0X0A98; // int32
            static constexpr std::uintptr_t m_nLerpCP            = 0X0A9C; // int32
            static constexpr std::uintptr_t m_nTraceMissBehavior = 0X0AA8; // ParticleTraceMissBehavior_t
            static constexpr std::uintptr_t m_bIncludeShotHull   = 0X0AAC; // bool
            static constexpr std::uintptr_t m_bIncludeWater      = 0X0AAD; // bool
            static constexpr std::uintptr_t m_bSetNormal         = 0X0AB0; // bool
            static constexpr std::uintptr_t m_bScaleOffset       = 0X0AB1; // bool
            static constexpr std::uintptr_t m_nPreserveOffsetCP  = 0X0AB4; // int32
            static constexpr std::uintptr_t m_nIgnoreCP          = 0X0AB8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nInputControlPoint  = 0X01D8; // int32
            static constexpr std::uintptr_t m_nOutputControlPoint = 0X01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputVec1    = 0X01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_InputVec2    = 0X0890; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nFieldOutput = 0X0F48; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bNormalize   = 0X0F4C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_vecRotation    = 0X0240; // Vector
            static constexpr std::uintptr_t m_bUseQuat       = 0X024C; // bool
            static constexpr std::uintptr_t m_bWriteNormal   = 0X024D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale                = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldOutput           = 0X0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement             = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bSubSample             = 0X04C0; // bool
            static constexpr std::uintptr_t m_bRandomDistribution    = 0X04C1; // bool
            static constexpr std::uintptr_t m_bReverse               = 0X04C2; // bool
            static constexpr std::uintptr_t m_nMissingParentBehavior = 0X04C4; // MissingParentInheritBehavior_t
            static constexpr std::uintptr_t m_flInterpolation        = 0X04C8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nSequenceMin = 0X01E0; // int32
            static constexpr std::uintptr_t m_nSequenceMax = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFloatCollection : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0X01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0X0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod   = 0X034C; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_Lerp         = 0X0350; // CParticleCollectionFloatInput
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PointDefinition_t {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0X0000; // int32
            static constexpr std::uintptr_t m_bLocalCoords  = 0X0004; // bool
            static constexpr std::uintptr_t m_vOffset       = 0X0008; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1             = 0X01E0; // int32
            static constexpr std::uintptr_t m_nHeadLocationMin = 0X01E4; // int32
            static constexpr std::uintptr_t m_nHeadLocationMax = 0X01E8; // int32
            static constexpr std::uintptr_t m_flResetRate      = 0X01F0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Diffusion : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRadiusScale        = 0X01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVoxelGridResolution = 0X01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_AgeNoise : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bAbsVal         = 0X01E0; // bool
            static constexpr std::uintptr_t m_bAbsValInv      = 0X01E1; // bool
            static constexpr std::uintptr_t m_flOffset        = 0X01E4; // float32
            static constexpr std::uintptr_t m_flAgeMin        = 0X01E8; // float32
            static constexpr std::uintptr_t m_flAgeMax        = 0X01EC; // float32
            static constexpr std::uintptr_t m_flNoiseScale    = 0X01F0; // float32
            static constexpr std::uintptr_t m_flNoiseScaleLoc = 0X01F4; // float32
            static constexpr std::uintptr_t m_vecOffsetLoc    = 0X01F8; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput  = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nComponent   = 0X01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecPoint1    = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecPoint2    = 0X0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flInputMin   = 0X0F50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax   = 0X10C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin  = 0X1230; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax  = 0X13A0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nSetMethod   = 0X1510; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bDeltaTime   = 0X1514; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DampenToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_flRange             = 0X01DC; // float32
            static constexpr std::uintptr_t m_flScale             = 0X01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vStartValue          = 0X01D8; // Vector
            static constexpr std::uintptr_t m_nFieldInput1         = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputScale1        = 0X01E8; // float32
            static constexpr std::uintptr_t m_nFieldInput2         = 0X01EC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputScale2        = 0X01F0; // float32
            static constexpr std::uintptr_t m_nControlPointInput1  = 0X01F4; // ControlPointReference_t
            static constexpr std::uintptr_t m_flControlPointScale1 = 0X0208; // float32
            static constexpr std::uintptr_t m_nControlPointInput2  = 0X020C; // ControlPointReference_t
            static constexpr std::uintptr_t m_flControlPointScale2 = 0X0220; // float32
            static constexpr std::uintptr_t m_nFieldOutput         = 0X0224; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vFinalOutputScale    = 0X0228; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToBone : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_modelInput          = 0X01D8; // CParticleModelInput
            static constexpr std::uintptr_t m_transformInput      = 0X0238; // CParticleTransformInput
            static constexpr std::uintptr_t m_flLifeTimeFadeStart = 0X02A0; // float32
            static constexpr std::uintptr_t m_flLifeTimeFadeEnd   = 0X02A4; // float32
            static constexpr std::uintptr_t m_flJumpThreshold     = 0X02A8; // float32
            static constexpr std::uintptr_t m_flPrevPosScale      = 0X02AC; // float32
            static constexpr std::uintptr_t m_HitboxSetName       = 0X02B0; // char[128]
            static constexpr std::uintptr_t m_bRigid              = 0X0330; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0X0331; // bool
            static constexpr std::uintptr_t m_nFieldOutput        = 0X0334; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputPrev    = 0X0338; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nRotationSetType    = 0X033C; // ParticleRotationLockType_t
            static constexpr std::uintptr_t m_bRigidRotationLock  = 0X0340; // bool
            static constexpr std::uintptr_t m_vecRotation         = 0X0348; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flRotLerp           = 0X0A00; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ScreenSpaceRotateTowardTarget : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecTargetPosition             = 0X01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOutputRemap                 = 0X0890; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nSetMethod                    = 0X0A00; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_flScreenEdgeAlignmentDistance = 0X0A08; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementMaintainOffset : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecOffset    = 0X01D8; // Vector
            static constexpr std::uintptr_t m_nCP          = 0X01E4; // int32
            static constexpr std::uintptr_t m_bRadiusScale = 0X01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateWithinCapsuleTransform : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fRadiusMin                    = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fRadiusMax                    = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fHeight                       = 0X04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformInput                = 0X0630; // CParticleTransformInput
            static constexpr std::uintptr_t m_fSpeedMin                     = 0X0698; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                     = 0X0808; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedRandExp                 = 0X0978; // float32
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMin = 0X0980; // CPerParticleVecInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMax = 0X1038; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nFieldOutput                  = 0X16F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldVelocity                = 0X16F4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetVec : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue        = 0X01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOutputField      = 0X0890; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0X0894; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_Lerp              = 0X0898; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bNormalizedOutput = 0X0A08; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flVelocityScale     = 0X01E0; // float32
            static constexpr std::uintptr_t m_flIncrement         = 0X01E4; // float32
            static constexpr std::uintptr_t m_bRandomDistribution = 0X01E8; // bool
            static constexpr std::uintptr_t m_nRandomSeed         = 0X01EC; // int32
            static constexpr std::uintptr_t m_bSubFrame           = 0X01F0; // bool
            static constexpr std::uintptr_t m_bSetRopeSegmentID   = 0X01F1; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CheckParticleForWater : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flRadius      = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldOutput  = 0X0350; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputRemap = 0X0358; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nSetMethod    = 0X04C8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderOmni2Light : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nLightType           = 0X0228; // ParticleOmni2LightTypeChoiceList_t
            static constexpr std::uintptr_t m_nMaxAllowed          = 0X022C; // uint16
            static constexpr std::uintptr_t m_vColorBlend          = 0X0230; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType      = 0X08E8; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_nBrightnessUnit      = 0X08EC; // ParticleLightUnitChoiceList_t
            static constexpr std::uintptr_t m_flBrightnessLumens   = 0X08F0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flBrightnessCandelas = 0X0A60; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bCastShadows         = 0X0BD0; // bool
            static constexpr std::uintptr_t m_bDynamicBounce       = 0X0BD1; // bool
            static constexpr std::uintptr_t m_flBounceScale        = 0X0BD8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bFog                 = 0X0D48; // bool
            static constexpr std::uintptr_t m_flFogScale           = 0X0D50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLuminaireRadius    = 0X0EC0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSkirt              = 0X1030; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRange              = 0X11A0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInnerConeAngle     = 0X1310; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOuterConeAngle     = 0X1480; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_hLightCookie         = 0X15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_bSphericalCookie     = 0X15F8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFirstControlPoint  = 0X01D8; // int32
            static constexpr std::uintptr_t m_nSecondControlPoint = 0X01DC; // int32
            static constexpr std::uintptr_t m_bUseRadius          = 0X01E0; // bool
            static constexpr std::uintptr_t m_flRadiusScale       = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flParentRadiusScale = 0X0358; // CParticleCollectionFloatInput
        };

        // Construct Allowed
        struct CPAssignment_t {
        public:
            static constexpr std::uintptr_t m_nCPNumber        = 0X0000; // int32
            static constexpr std::uintptr_t m_Pos              = 0X0008; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOrientationMode = 0X06C0; // ParticleOrientationSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nSnapshotControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_nControlPointNumber         = 0X01E4; // int32
            static constexpr std::uintptr_t m_bRandom                     = 0X01E8; // bool
            static constexpr std::uintptr_t m_nRandomSeed                 = 0X01EC; // int32
            static constexpr std::uintptr_t m_bRigid                      = 0X01F0; // bool
            static constexpr std::uintptr_t m_bSetNormal                  = 0X01F1; // bool
            static constexpr std::uintptr_t m_bIgnoreDt                   = 0X01F2; // bool
            static constexpr std::uintptr_t m_flMinNormalVelocity         = 0X01F4; // float32
            static constexpr std::uintptr_t m_flMaxNormalVelocity         = 0X01F8; // float32
            static constexpr std::uintptr_t m_nIndexType                  = 0X01FC; // SnapshotIndexType_t
            static constexpr std::uintptr_t m_flReadIndex                 = 0X0200; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flIncrement                 = 0X0370; // float32
            static constexpr std::uintptr_t m_nFullLoopIncrement          = 0X0374; // int32
            static constexpr std::uintptr_t m_nSnapShotStartPoint         = 0X0378; // int32
            static constexpr std::uintptr_t m_flBoneVelocity              = 0X037C; // float32
            static constexpr std::uintptr_t m_flBoneVelocityMax           = 0X0380; // float32
            static constexpr std::uintptr_t m_bCopyColor                  = 0X0384; // bool
            static constexpr std::uintptr_t m_bCopyAlpha                  = 0X0385; // bool
            static constexpr std::uintptr_t m_bSetRadius                  = 0X0386; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LagCompensation : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nDesiredVelocityCP      = 0X01D8; // int32
            static constexpr std::uintptr_t m_nLatencyCP              = 0X01DC; // int32
            static constexpr std::uintptr_t m_nLatencyCPField         = 0X01E0; // int32
            static constexpr std::uintptr_t m_nDesiredVelocityCPField = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CollideWithSelf : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flRadiusScale  = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMinimumSpeed = 0X0348; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Noise : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput              = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputMin               = 0X01DC; // float32
            static constexpr std::uintptr_t m_flOutputMax               = 0X01E0; // float32
            static constexpr std::uintptr_t m_fl4NoiseScale             = 0X01E4; // float32
            static constexpr std::uintptr_t m_bAdditive                 = 0X01E8; // bool
            static constexpr std::uintptr_t m_flNoiseAnimationTimeScale = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flStartFadeInTime  = 0X01D8; // float32
            static constexpr std::uintptr_t m_flEndFadeInTime    = 0X01DC; // float32
            static constexpr std::uintptr_t m_flStartFadeOutTime = 0X01E0; // float32
            static constexpr std::uintptr_t m_flEndFadeOutTime   = 0X01E4; // float32
            static constexpr std::uintptr_t m_flStartAlpha       = 0X01E8; // float32
            static constexpr std::uintptr_t m_flEndAlpha         = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ColorAdjustHSL : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flHueAdjust        = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSaturationAdjust = 0X0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLightnessAdjust  = 0X04B8; // CPerParticleFloatInput
        };

        // Construct Allowed
        class CParticleMassCalculationParameters {
        public:
            static constexpr std::uintptr_t m_nMassMode       = 0X0000; // ParticleMassMode_t
            static constexpr std::uintptr_t m_flRadius        = 0X0008; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flNominalRadius = 0X0178; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flScale         = 0X02E8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SequenceFromModel : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputAnim    = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin          = 0X01E4; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0X01F0; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0X01F4; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_AlphaDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMinAlpha = 0X01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRadiusScale = 0X01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01DC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitVec : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue             = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOutputField           = 0X0898; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod             = 0X089C; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput      = 0X08A0; // bool
            static constexpr std::uintptr_t m_bWritePreviousPosition = 0X08A1; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_nForceInModel       = 0X01E4; // int32
            static constexpr std::uintptr_t m_bEvenDistribution   = 0X01E8; // bool
            static constexpr std::uintptr_t m_nDesiredHitbox      = 0X01EC; // int32
            static constexpr std::uintptr_t m_vecHitBoxScale      = 0X01F0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecDirectionBias    = 0X08A8; // Vector
            static constexpr std::uintptr_t m_bMaintainHitbox     = 0X08B4; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0X08B5; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0X08B6; // char[128]
            static constexpr std::uintptr_t m_flShellSize         = 0X0938; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber         = 0X01D8; // int32
            static constexpr std::uintptr_t m_nSnapshotControlPointNumber = 0X01DC; // int32
            static constexpr std::uintptr_t m_bSetNormal                  = 0X01E0; // bool
            static constexpr std::uintptr_t m_bSetRadius                  = 0X01E1; // bool
            static constexpr std::uintptr_t m_flInterpolation             = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flTValue                    = 0X0358; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutput     = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flStartTime  = 0X0350; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0X0354; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_CollisionGroupName  = 0X01E0; // char[128]
            static constexpr std::uintptr_t m_nTraceSet           = 0X0260; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_vecOutputMin        = 0X0264; // Vector
            static constexpr std::uintptr_t m_vecOutputMax        = 0X0270; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber = 0X027C; // int32
            static constexpr std::uintptr_t m_bPerParticle        = 0X0280; // bool
            static constexpr std::uintptr_t m_bTranslate          = 0X0281; // bool
            static constexpr std::uintptr_t m_bProportional       = 0X0282; // bool
            static constexpr std::uintptr_t m_flTraceLength       = 0X0284; // float32
            static constexpr std::uintptr_t m_bPerParticleTR      = 0X0288; // bool
            static constexpr std::uintptr_t m_bInherit            = 0X0289; // bool
            static constexpr std::uintptr_t m_nChildCP            = 0X028C; // int32
            static constexpr std::uintptr_t m_nChildGroupID       = 0X0290; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ClampScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputMin  = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax  = 0X0350; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1         = 0X01E0; // int32
            static constexpr std::uintptr_t m_vecCP1Pos    = 0X01E4; // Vector
            static constexpr std::uintptr_t m_bOrientToHMD = 0X01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput          = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin           = 0X01E0; // float32
            static constexpr std::uintptr_t m_flInputMax           = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMin          = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMax          = 0X01EC; // float32
            static constexpr std::uintptr_t m_nSetMethod           = 0X01F0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange         = 0X01F4; // bool
            static constexpr std::uintptr_t m_bSetPreviousParticle = 0X01F5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression     = 0X01E0; // VectorFloatExpressionType_t
            static constexpr std::uintptr_t m_vecInput1       = 0X01E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecInput2       = 0X08A0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flLerp          = 0X0F58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap   = 0X10C8; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputCP       = 0X1238; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0X123C; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput   = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0X01DC; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0X01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin    = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax    = 0X01E8; // float32
            static constexpr std::uintptr_t m_TransformStart = 0X01F0; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd   = 0X0258; // CParticleTransformInput
            static constexpr std::uintptr_t m_nSetMethod     = 0X02C0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange   = 0X02C4; // bool
            static constexpr std::uintptr_t m_bRadialCheck   = 0X02C5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PlaneCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0X01E0; // int32
            static constexpr std::uintptr_t m_flDistance    = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCullInside   = 0X0358; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber  = 0X01E0; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset    = 0X01E8; // CUtlString
            static constexpr std::uintptr_t m_nAttributeToRead     = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAttributeToWrite    = 0X01F4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP        = 0X01F8; // int32
            static constexpr std::uintptr_t m_bRandom              = 0X01FC; // bool
            static constexpr std::uintptr_t m_bReverse             = 0X01FD; // bool
            static constexpr std::uintptr_t m_nSnapShotIncrement   = 0X0200; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nManualSnapshotIndex = 0X0370; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nRandomSeed          = 0X04E0; // int32
            static constexpr std::uintptr_t m_bLocalSpaceAngles    = 0X04E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderCables : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRadiusScale                 = 0X0228; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                  = 0X0398; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecColorScale                 = 0X0508; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType               = 0X0BC0; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_hMaterial                     = 0X0BC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nTextureRepetitionMode        = 0X0BD0; // TextureRepetitionMode_t
            static constexpr std::uintptr_t m_flTextureRepeatsPerSegment    = 0X0BD8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flTextureRepeatsCircumference = 0X0D48; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flColorMapOffsetV             = 0X0EB8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flColorMapOffsetU             = 0X1028; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flNormalMapOffsetV            = 0X1198; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flNormalMapOffsetU            = 0X1308; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDrawCableCaps                = 0X1478; // bool
            static constexpr std::uintptr_t m_flCapRoundness                = 0X147C; // float32
            static constexpr std::uintptr_t m_flCapOffsetAmount             = 0X1480; // float32
            static constexpr std::uintptr_t m_flTessScale                   = 0X1484; // float32
            static constexpr std::uintptr_t m_nMinTesselation               = 0X1488; // int32
            static constexpr std::uintptr_t m_nMaxTesselation               = 0X148C; // int32
            static constexpr std::uintptr_t m_nRoundness                    = 0X1490; // int32
            static constexpr std::uintptr_t m_nForceRoundnessFixed          = 0X1494; // bool
            static constexpr std::uintptr_t m_LightingTransform             = 0X1498; // CParticleTransformInput
            static constexpr std::uintptr_t m_MaterialFloatVars             = 0X1500; // CUtlLeanVector<FloatInputMaterialVariable_t>
            static constexpr std::uintptr_t m_MaterialVecVars               = 0X1520; // CUtlLeanVector<VecInputMaterialVariable_t>
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InheritVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_flVelocityScale     = 0X01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nSourceCP          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nDestCP            = 0X01E4; // int32
            static constexpr std::uintptr_t m_nFlowCP            = 0X01E8; // int32
            static constexpr std::uintptr_t m_nActiveCP          = 0X01EC; // int32
            static constexpr std::uintptr_t m_nActiveCPField     = 0X01F0; // int32
            static constexpr std::uintptr_t m_flRetestRate       = 0X01F8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bAdaptiveThreshold = 0X0368; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionOffset : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_OffsetMin            = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_OffsetMax            = 0X0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_TransformInput       = 0X0F50; // CParticleTransformInput
            static constexpr std::uintptr_t m_bLocalCoords         = 0X0FB8; // bool
            static constexpr std::uintptr_t m_bProportional        = 0X0FB9; // bool
            static constexpr std::uintptr_t m_randomnessParameters = 0X0FBC; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_transformInput    = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_nControlPointAxis = 0X0248; // ParticleControlPointAxis_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ShapeMatchingConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flShapeRestorationTime = 0X01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetChildControlPoints : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint = 0X01DC; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bReverse           = 0X0358; // bool
            static constexpr std::uintptr_t m_bSetOrientation    = 0X0359; // bool
            static constexpr std::uintptr_t m_nOrientation       = 0X035C; // ParticleOrientationType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ChladniWave : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput            = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin              = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax              = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin             = 0X04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax             = 0X0630; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecWaveLength           = 0X07A0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecHarmonics            = 0X0E58; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nSetMethod              = 0X1510; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_nLocalSpaceControlPoint = 0X1514; // int32
            static constexpr std::uintptr_t m_b3D                     = 0X1518; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP            = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput   = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale        = 0X01E0; // float32
            static constexpr std::uintptr_t m_flOffsetRot    = 0X01E4; // float32
            static constexpr std::uintptr_t m_vecOffsetAxis  = 0X01E8; // Vector
            static constexpr std::uintptr_t m_bNormalize     = 0X01F4; // bool
            static constexpr std::uintptr_t m_nFieldStrength = 0X01F8; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nOutputControlPoint = 0X01E0; // int32
            static constexpr std::uintptr_t m_nOutputField        = 0X01E4; // int32
            static constexpr std::uintptr_t m_flInputMin          = 0X01E8; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0X01F0; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0X01F4; // float32
            static constexpr std::uintptr_t m_StackName           = 0X01F8; // CUtlString
            static constexpr std::uintptr_t m_OperatorName        = 0X0200; // CUtlString
            static constexpr std::uintptr_t m_FieldName           = 0X0208; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ScreenSpacePositionOfTarget : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecTargetPosition   = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bOututBehindness    = 0X0898; // bool
            static constexpr std::uintptr_t m_nBehindFieldOutput  = 0X089C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flBehindOutputRemap = 0X08A0; // CParticleRemapFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RtEnvCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecTestDir          = 0X01D8; // Vector
            static constexpr std::uintptr_t m_vecTestNormal       = 0X01E4; // Vector
            static constexpr std::uintptr_t m_bCullOnMiss         = 0X01F0; // bool
            static constexpr std::uintptr_t m_bStickInsteadOfCull = 0X01F1; // bool
            static constexpr std::uintptr_t m_RtEnvName           = 0X01F2; // char[128]
            static constexpr std::uintptr_t m_nRTEnvCP            = 0X0274; // int32
            static constexpr std::uintptr_t m_nComponent          = 0X0278; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PinParticleToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber       = 0X01D8; // int32
            static constexpr std::uintptr_t m_vecOffset                 = 0X01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_bOffsetLocal              = 0X0898; // bool
            static constexpr std::uintptr_t m_nParticleSelection        = 0X089C; // ParticleSelection_t
            static constexpr std::uintptr_t m_nParticleNumber           = 0X08A0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nPinBreakType             = 0X0A10; // ParticlePinDistance_t
            static constexpr std::uintptr_t m_flBreakDistance           = 0X0A18; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flBreakSpeed              = 0X0B88; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAge                     = 0X0CF8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nBreakControlPointNumber  = 0X0E68; // int32
            static constexpr std::uintptr_t m_nBreakControlPointNumber2 = 0X0E6C; // int32
            static constexpr std::uintptr_t m_flBreakValue              = 0X0E70; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation           = 0X0FE0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bRetainInitialVelocity    = 0X1150; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPtoVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPInput      = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP = 0X01E0; // int32
            static constexpr std::uintptr_t m_vInputMin     = 0X01E4; // Vector
            static constexpr std::uintptr_t m_vInputMax     = 0X01F0; // Vector
            static constexpr std::uintptr_t m_vOutputMin    = 0X01FC; // Vector
            static constexpr std::uintptr_t m_vOutputMax    = 0X0208; // Vector
            static constexpr std::uintptr_t m_flStartTime   = 0X0214; // float32
            static constexpr std::uintptr_t m_flEndTime     = 0X0218; // float32
            static constexpr std::uintptr_t m_flInterpRate  = 0X021C; // float32
            static constexpr std::uintptr_t m_nSetMethod    = 0X0220; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bOffset       = 0X0224; // bool
            static constexpr std::uintptr_t m_bAccelerate   = 0X0225; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputRadius      = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_InputMagnitude   = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFalloffFunction = 0X04C0; // ParticleFalloffFunction_t
            static constexpr std::uintptr_t m_InputFalloffExp  = 0X04C8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nImpulseType     = 0X0638; // ParticleImpulseType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DensityForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flRadiusScale   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flForceScale    = 0X01EC; // float32
            static constexpr std::uintptr_t m_flTargetDensity = 0X01F0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nComponent1        = 0X01E0; // int32
            static constexpr std::uintptr_t m_nComponent2        = 0X01E4; // int32
            static constexpr std::uintptr_t m_TransformInput     = 0X01E8; // CParticleTransformInput
            static constexpr std::uintptr_t m_flParticleDensity  = 0X0250; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOffset           = 0X03C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadius1          = 0X0530; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadius2          = 0X06A0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bUseCount          = 0X0810; // bool
            static constexpr std::uintptr_t m_bUseLocalCoords    = 0X0811; // bool
            static constexpr std::uintptr_t m_bOffsetExistingPos = 0X0812; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_fMinDistance  = 0X01D8; // float32
            static constexpr std::uintptr_t m_flMaxDistance = 0X01DC; // float32
            static constexpr std::uintptr_t m_flTimeScale   = 0X01E0; // float32
            static constexpr std::uintptr_t m_bLoopedPath   = 0X01E4; // bool
            static constexpr std::uintptr_t m_pointList     = 0X01E8; // CUtlVector<PointDefinitionWithTimeValues_t>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bUseWorldLocation = 0X01E0; // bool
            static constexpr std::uintptr_t m_bOrient           = 0X01E1; // bool
            static constexpr std::uintptr_t m_bSetOnce          = 0X01E2; // bool
            static constexpr std::uintptr_t m_nCP1              = 0X01E4; // int32
            static constexpr std::uintptr_t m_nCP2              = 0X01E8; // int32
            static constexpr std::uintptr_t m_nCP3              = 0X01EC; // int32
            static constexpr std::uintptr_t m_nCP4              = 0X01F0; // int32
            static constexpr std::uintptr_t m_vecCP1Pos         = 0X01F4; // Vector
            static constexpr std::uintptr_t m_vecCP2Pos         = 0X0200; // Vector
            static constexpr std::uintptr_t m_vecCP3Pos         = 0X020C; // Vector
            static constexpr std::uintptr_t m_vecCP4Pos         = 0X0218; // Vector
            static constexpr std::uintptr_t m_nHeadLocation     = 0X0224; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0X01D8; // VectorFloatExpressionType_t
            static constexpr std::uintptr_t m_vInput1       = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2       = 0X0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOutputRemap = 0X0F50; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0X10C0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0X10C4; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecRotAxis     = 0X01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flRotRate      = 0X0890; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_TransformInput = 0X0A00; // CParticleTransformInput
            static constexpr std::uintptr_t m_bLocalSpace    = 0X0A68; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_IntraParticleForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flAttractionMinDistance = 0X01E8; // float32
            static constexpr std::uintptr_t m_flAttractionMaxDistance = 0X01EC; // float32
            static constexpr std::uintptr_t m_flAttractionMaxStrength = 0X01F0; // float32
            static constexpr std::uintptr_t m_flRepulsionMinDistance  = 0X01F4; // float32
            static constexpr std::uintptr_t m_flRepulsionMaxDistance  = 0X01F8; // float32
            static constexpr std::uintptr_t m_flRepulsionMaxStrength  = 0X01FC; // float32
            static constexpr std::uintptr_t m_bUseAABB                = 0X0200; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFloat : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue    = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0X0350; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0X0354; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_InputStrength = 0X0358; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateOnModel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_modelInput                        = 0X01E0; // CParticleModelInput
            static constexpr std::uintptr_t m_transformInput                    = 0X0240; // CParticleTransformInput
            static constexpr std::uintptr_t m_nForceInModel                     = 0X02A8; // int32
            static constexpr std::uintptr_t m_bScaleToVolume                    = 0X02AC; // bool
            static constexpr std::uintptr_t m_bEvenDistribution                 = 0X02AD; // bool
            static constexpr std::uintptr_t m_nDesiredHitbox                    = 0X02B0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nHitboxValueFromControlPointIndex = 0X0420; // int32
            static constexpr std::uintptr_t m_vecHitBoxScale                    = 0X0428; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flBoneVelocity                    = 0X0AE0; // float32
            static constexpr std::uintptr_t m_flMaxBoneVelocity                 = 0X0AE4; // float32
            static constexpr std::uintptr_t m_vecDirectionBias                  = 0X0AE8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_HitboxSetName                     = 0X11A0; // char[128]
            static constexpr std::uintptr_t m_bLocalCoords                      = 0X1220; // bool
            static constexpr std::uintptr_t m_bUseBones                         = 0X1221; // bool
            static constexpr std::uintptr_t m_bUseMesh                          = 0X1222; // bool
            static constexpr std::uintptr_t m_flShellSize                       = 0X1228; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldInput  = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement   = 0X01E0; // int32
            static constexpr std::uintptr_t m_nGroupID     = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PerParticleForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flForceScale = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vForce       = 0X0358; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nCP          = 0X0A10; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderProjected : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bProjectCharacter             = 0X0228; // bool
            static constexpr std::uintptr_t m_bProjectWorld                 = 0X0229; // bool
            static constexpr std::uintptr_t m_bProjectWater                 = 0X022A; // bool
            static constexpr std::uintptr_t m_bFlipHorizontal               = 0X022B; // bool
            static constexpr std::uintptr_t m_bEnableProjectedDepthControls = 0X022C; // bool
            static constexpr std::uintptr_t m_flMinProjectionDepth          = 0X0230; // float32
            static constexpr std::uintptr_t m_flMaxProjectionDepth          = 0X0234; // float32
            static constexpr std::uintptr_t m_vecProjectedMaterials         = 0X0238; // CUtlVector<RenderProjectedMaterial_t>
            static constexpr std::uintptr_t m_flMaterialSelection           = 0X0250; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flAnimationTimeScale          = 0X03C0; // float32
            static constexpr std::uintptr_t m_bOrientToNormal               = 0X03C4; // bool
            static constexpr std::uintptr_t m_MaterialVars                  = 0X03C8; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_flRadiusScale                 = 0X03E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                  = 0X0550; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRollScale                   = 0X06C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAlpha2Field                  = 0X0830; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale                 = 0X0838; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType               = 0X0EF0; // ParticleColorBlendType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MaxVelocity : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMaxVelocity    = 0X01D8; // float32
            static constexpr std::uintptr_t m_flMinVelocity    = 0X01DC; // float32
            static constexpr std::uintptr_t m_nOverrideCP      = 0X01E0; // int32
            static constexpr std::uintptr_t m_nOverrideCPField = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fSpeedMin = 0X01E0; // float32
            static constexpr std::uintptr_t m_fSpeedMax = 0X01E4; // float32
            static constexpr std::uintptr_t m_bIgnoreDt = 0X01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MaintainEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_nParticlesToMaintain  = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartTime           = 0X0350; // float32
            static constexpr std::uintptr_t m_flEmissionDuration    = 0X0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flEmissionRate        = 0X04C8; // float32
            static constexpr std::uintptr_t m_nSnapshotControlPoint = 0X04CC; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset     = 0X04D0; // CUtlString
            static constexpr std::uintptr_t m_bEmitInstantaneously  = 0X04D8; // bool
            static constexpr std::uintptr_t m_bFinalEmitOnStop      = 0X04D9; // bool
            static constexpr std::uintptr_t m_flScale               = 0X04E0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumberStart = 0X01E0; // int32
            static constexpr std::uintptr_t m_nControlPointNumberEnd   = 0X01E4; // int32
            static constexpr std::uintptr_t m_bLocalCoords             = 0X01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0X0248; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOffsetRot    = 0X024C; // float32
            static constexpr std::uintptr_t m_nComponent     = 0X0250; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeAndKill : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flStartFadeInTime           = 0X01D8; // float32
            static constexpr std::uintptr_t m_flEndFadeInTime             = 0X01DC; // float32
            static constexpr std::uintptr_t m_flStartFadeOutTime          = 0X01E0; // float32
            static constexpr std::uintptr_t m_flEndFadeOutTime            = 0X01E4; // float32
            static constexpr std::uintptr_t m_flStartAlpha                = 0X01E8; // float32
            static constexpr std::uintptr_t m_flEndAlpha                  = 0X01EC; // float32
            static constexpr std::uintptr_t m_bForcePreserveParticleOrder = 0X01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ColorInterpolate : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_ColorFade       = 0X01D8; // Color
            static constexpr std::uintptr_t m_flFadeStartTime = 0X01E8; // float32
            static constexpr std::uintptr_t m_flFadeEndTime   = 0X01EC; // float32
            static constexpr std::uintptr_t m_nFieldOutput    = 0X01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bEaseInOut      = 0X01F4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarSpline : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0X01D8; // float32
            static constexpr std::uintptr_t m_RateMax         = 0X01DC; // float32
            static constexpr std::uintptr_t m_flStartTime_min = 0X01E0; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0X01E4; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0X01EC; // float32
            static constexpr std::uintptr_t m_flBias          = 0X01F0; // float32
            static constexpr std::uintptr_t m_nField          = 0X0220; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportionalOp = 0X0224; // bool
            static constexpr std::uintptr_t m_bEaseOut        = 0X0225; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPOutput = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MaintainSequentialPath : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_fMaxDistance       = 0X01D8; // float32
            static constexpr std::uintptr_t m_flNumToAssign      = 0X01DC; // float32
            static constexpr std::uintptr_t m_flCohesionStrength = 0X01E0; // float32
            static constexpr std::uintptr_t m_flTolerance        = 0X01E4; // float32
            static constexpr std::uintptr_t m_bLoop              = 0X01E8; // bool
            static constexpr std::uintptr_t m_bUseParticleCount  = 0X01E9; // bool
            static constexpr std::uintptr_t m_PathParams         = 0X01F0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_flDuration          = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDestroyImmediately = 0X0350; // bool
            static constexpr std::uintptr_t m_bPlayEndCap         = 0X0351; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeStart = 0X01DC; // float32
            static constexpr std::uintptr_t m_flFadeEnd   = 0X01E0; // float32
            static constexpr std::uintptr_t m_bCPPairs    = 0X01E4; // bool
            static constexpr std::uintptr_t m_PathParams  = 0X01F0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ClampVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutputMin = 0X01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOutputMax = 0X0898; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_pTextureColorWarp = 0X0228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureNormal    = 0X0230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureMetalness = 0X0238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureRoughness = 0X0240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureSelfIllum = 0X0248; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureDetail    = 0X0250; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WindForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_vForce = 0X01E8; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetVariable : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_variableReference = 0X01E0; // CParticleVariableRef
            static constexpr std::uintptr_t m_transformInput    = 0X0230; // CParticleTransformInput
            static constexpr std::uintptr_t m_positionOffset    = 0X0298; // Vector
            static constexpr std::uintptr_t m_rotationOffset    = 0X02A4; // QAngle
            static constexpr std::uintptr_t m_vecInput          = 0X02B0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_floatInput        = 0X0968; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderStandardLight : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nLightType                     = 0X0228; // ParticleLightTypeChoiceList_t
            static constexpr std::uintptr_t m_nMaxAllowed                    = 0X022C; // uint16
            static constexpr std::uintptr_t m_vecColorScale                  = 0X0230; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType                = 0X08E8; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_flIntensity                    = 0X08F0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bCastShadows                   = 0X0A60; // bool
            static constexpr std::uintptr_t m_bDynamicBounce                 = 0X0A61; // bool
            static constexpr std::uintptr_t m_flBounceScale                  = 0X0A68; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flTheta                        = 0X0BD8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flPhi                          = 0X0D48; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRadiusMultiplier             = 0X0EB8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAttenuationStyle              = 0X1028; // StandardLightingAttenuationStyle_t
            static constexpr std::uintptr_t m_flFalloffLinearity             = 0X1030; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flFiftyPercentFalloff          = 0X11A0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flZeroPercentFalloff           = 0X1310; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bRenderDiffuse                 = 0X1480; // bool
            static constexpr std::uintptr_t m_bRenderSpecular                = 0X1481; // bool
            static constexpr std::uintptr_t m_lightCookie                    = 0X1488; // CUtlString
            static constexpr std::uintptr_t m_nPriority                      = 0X1490; // int32
            static constexpr std::uintptr_t m_nFogLightingMode               = 0X1494; // ParticleLightFogLightingMode_t
            static constexpr std::uintptr_t m_flFogContribution              = 0X1498; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nCapsuleLightBehavior          = 0X1608; // ParticleLightBehaviorChoiceList_t
            static constexpr std::uintptr_t m_flCapsuleLength                = 0X160C; // float32
            static constexpr std::uintptr_t m_bReverseOrder                  = 0X1610; // bool
            static constexpr std::uintptr_t m_bClosedLoop                    = 0X1611; // bool
            static constexpr std::uintptr_t m_nPrevPntSource                 = 0X1614; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMaxLength                    = 0X1618; // float32
            static constexpr std::uintptr_t m_flMinLength                    = 0X161C; // float32
            static constexpr std::uintptr_t m_bIgnoreDT                      = 0X1620; // bool
            static constexpr std::uintptr_t m_flConstrainRadiusToLengthRatio = 0X1624; // float32
            static constexpr std::uintptr_t m_flLengthScale                  = 0X1628; // float32
            static constexpr std::uintptr_t m_flLengthFadeInTime             = 0X162C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceToTransform : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput       = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin         = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax         = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin        = 0X04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax        = 0X0630; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformStart     = 0X07A0; // CParticleTransformInput
            static constexpr std::uintptr_t m_bLOS               = 0X0808; // bool
            static constexpr std::uintptr_t m_CollisionGroupName = 0X0809; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X088C; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X0890; // float32
            static constexpr std::uintptr_t m_flLOSScale         = 0X0894; // float32
            static constexpr std::uintptr_t m_nSetMethod         = 0X0898; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange       = 0X089C; // bool
            static constexpr std::uintptr_t m_bAdditive          = 0X089D; // bool
            static constexpr std::uintptr_t m_vecComponentScale  = 0X08A0; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP          = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOffsetRot  = 0X01E0; // float32
            static constexpr std::uintptr_t m_nComponent   = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1               = 0X01E0; // int32
            static constexpr std::uintptr_t m_vecCP1Pos          = 0X01E4; // Vector
            static constexpr std::uintptr_t m_bUseAvgParticlePos = 0X01F0; // bool
            static constexpr std::uintptr_t m_nSetParent         = 0X01F4; // ParticleParentSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression            = 0X01E0; // SetStatisticExpressionType_t
            static constexpr std::uintptr_t m_flDecimalPlaces        = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0X0358; // int32
            static constexpr std::uintptr_t m_nOutVectorField        = 0X035C; // int32
            static constexpr std::uintptr_t m_nField                 = 0X0360; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputRemap          = 0X0368; // CParticleRemapFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nInputCP1            = 0X01D8; // int32
            static constexpr std::uintptr_t m_nInputCP2            = 0X01DC; // int32
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin           = 0X01E4; // float32
            static constexpr std::uintptr_t m_flInputMax           = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin          = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax          = 0X01F0; // float32
            static constexpr std::uintptr_t m_bUseParticleVelocity = 0X01F4; // bool
            static constexpr std::uintptr_t m_nSetMethod           = 0X01F8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange         = 0X01FC; // bool
            static constexpr std::uintptr_t m_bUseParticleNormal   = 0X01FD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInputControlPoint  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nOutputControlPoint = 0X01E4; // int32
            static constexpr std::uintptr_t m_nInputField         = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOutputField        = 0X01EC; // int32
            static constexpr std::uintptr_t m_flInputMin          = 0X01F0; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0X01F4; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0X01F8; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0X01FC; // float32
            static constexpr std::uintptr_t m_bDerivative         = 0X0200; // bool
            static constexpr std::uintptr_t m_flInterpRate        = 0X0204; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_vecRotAxis = 0X01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flRotRate  = 0X0898; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nCP        = 0X0A08; // int32
            static constexpr std::uintptr_t m_nLocalCP   = 0X0A0C; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CurlNoiseForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_nNoiseType     = 0X01E8; // ParticleDirectionNoiseType_t
            static constexpr std::uintptr_t m_vecNoiseFreq   = 0X01F0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecNoiseScale  = 0X08A8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOffset      = 0X0F60; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOffsetRate  = 0X1618; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flWorleySeed   = 0X1CD0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flWorleyJitter = 0X1E40; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nCP          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRotOffset  = 0X01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetSimulationRate : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_flSimulationScale = 0X01E0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeIn : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeInTimeMin = 0X01D8; // float32
            static constexpr std::uintptr_t m_flFadeInTimeMax = 0X01DC; // float32
            static constexpr std::uintptr_t m_flFadeInTimeExp = 0X01E0; // float32
            static constexpr std::uintptr_t m_bProportional   = 0X01E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderScreenShake : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flDurationScale  = 0X0228; // float32
            static constexpr std::uintptr_t m_flRadiusScale    = 0X022C; // float32
            static constexpr std::uintptr_t m_flFrequencyScale = 0X0230; // float32
            static constexpr std::uintptr_t m_flAmplitudeScale = 0X0234; // float32
            static constexpr std::uintptr_t m_nRadiusField     = 0X0238; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nDurationField   = 0X023C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFrequencyField  = 0X0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAmplitudeField  = 0X0244; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFilterCP        = 0X0248; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_flInputMin             = 0X01E4; // float32
            static constexpr std::uintptr_t m_flInputMax             = 0X01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin            = 0X01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax            = 0X01F0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nColorCP          = 0X01E0; // int32
            static constexpr std::uintptr_t m_nColorGemEnableCP = 0X01E4; // int32
            static constexpr std::uintptr_t m_nOutputCP         = 0X01E8; // int32
            static constexpr std::uintptr_t m_DefaultHSVColor   = 0X01EC; // Color
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVectorToRotations : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecInput    = 0X01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecRotation = 0X0890; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_GlobalScale : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flScale                  = 0X01E0; // float32
            static constexpr std::uintptr_t m_nScaleControlPointNumber = 0X01E4; // int32
            static constexpr std::uintptr_t m_nControlPointNumber      = 0X01E8; // int32
            static constexpr std::uintptr_t m_bScaleRadius             = 0X01EC; // bool
            static constexpr std::uintptr_t m_bScalePosition           = 0X01ED; // bool
            static constexpr std::uintptr_t m_bScaleVelocity           = 0X01EE; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0X01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flVelocityMin       = 0X01E0; // float32
            static constexpr std::uintptr_t m_flVelocityMax       = 0X01E4; // float32
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E8; // int32
            static constexpr std::uintptr_t m_HitboxSetName       = 0X01EC; // char[128]
            static constexpr std::uintptr_t m_bUseBones           = 0X026C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutput    = 0X01DC; // Vector
            static constexpr std::uintptr_t m_flStartTime  = 0X01E8; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0X01EC; // float32
            static constexpr std::uintptr_t m_nSetMethod   = 0X01F0; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nSourceCP = 0X01E0; // int32
            static constexpr std::uintptr_t m_nDestCP   = 0X01E4; // int32
            static constexpr std::uintptr_t m_nCPField  = 0X01E8; // int32
        };

        // Construct Allowed
        struct TextureGroup_t {
        public:
            static constexpr std::uintptr_t m_bEnabled                    = 0X0000; // bool
            static constexpr std::uintptr_t m_bReplaceTextureWithGradient = 0X0001; // bool
            static constexpr std::uintptr_t m_hTexture                    = 0X0008; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Gradient                    = 0X0010; // CColorGradient
            static constexpr std::uintptr_t m_nTextureType                = 0X0028; // SpriteCardTextureType_t
            static constexpr std::uintptr_t m_nTextureChannels            = 0X002C; // SpriteCardTextureChannel_t
            static constexpr std::uintptr_t m_nTextureBlendMode           = 0X0030; // ParticleTextureLayerBlendType_t
            static constexpr std::uintptr_t m_flTextureBlend              = 0X0038; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_TextureControls             = 0X01A8; // TextureControls_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TimeVaryingForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flStartLerpTime = 0X01E8; // float32
            static constexpr std::uintptr_t m_StartingForce   = 0X01EC; // Vector
            static constexpr std::uintptr_t m_flEndLerpTime   = 0X01F8; // float32
            static constexpr std::uintptr_t m_EndingForce     = 0X01FC; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInterpRate       = 0X01D8; // float32
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X01DC; // float32
            static constexpr std::uintptr_t m_flTolerance        = 0X01E0; // float32
            static constexpr std::uintptr_t m_flTraceOffset      = 0X01E4; // float32
            static constexpr std::uintptr_t m_CollisionGroupName = 0X01E8; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X0268; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nInputCP           = 0X026C; // int32
            static constexpr std::uintptr_t m_nOutputCP          = 0X0270; // int32
            static constexpr std::uintptr_t m_bIncludeWater      = 0X0280; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bTransformNormals   = 0X01D8; // bool
            static constexpr std::uintptr_t m_bTransformRadii     = 0X01D9; // bool
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01DC; // int32
            static constexpr std::uintptr_t m_flLifeTimeFadeStart = 0X01E0; // float32
            static constexpr std::uintptr_t m_flLifeTimeFadeEnd   = 0X01E4; // float32
            static constexpr std::uintptr_t m_flJumpThreshold     = 0X01E8; // float32
            static constexpr std::uintptr_t m_flPrevPosScale      = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fRadiusMin                    = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fRadiusMax                    = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecDistanceBias               = 0X04C0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecDistanceBiasAbs            = 0X0B78; // Vector
            static constexpr std::uintptr_t m_TransformInput                = 0X0B88; // CParticleTransformInput
            static constexpr std::uintptr_t m_fSpeedMin                     = 0X0BF0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                     = 0X0D60; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedRandExp                 = 0X0ED0; // float32
            static constexpr std::uintptr_t m_bLocalCoords                  = 0X0ED4; // bool
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMin = 0X0ED8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMax = 0X1590; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nFieldOutput                  = 0X1C48; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldVelocity                = 0X1C4C; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RadiusDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMinRadius = 0X01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldInput         = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin          = 0X01E8; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0X01EC; // float32
            static constexpr std::uintptr_t m_vecOutputMin        = 0X01F0; // Vector
            static constexpr std::uintptr_t m_vecOutputMax        = 0X01FC; // Vector
            static constexpr std::uintptr_t m_flStartTime         = 0X0208; // float32
            static constexpr std::uintptr_t m_flEndTime           = 0X020C; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0X0210; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_nControlPointNumber = 0X0214; // int32
            static constexpr std::uintptr_t m_bLocalCoords        = 0X0218; // bool
            static constexpr std::uintptr_t m_flRemapBias         = 0X021C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputAnim    = 0X01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin          = 0X01EC; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0X01F0; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0X01F4; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0X01F8; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0X01FC; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_NoiseEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_flEmissionDuration      = 0X01E0; // float32
            static constexpr std::uintptr_t m_flStartTime             = 0X01E4; // float32
            static constexpr std::uintptr_t m_flEmissionScale         = 0X01E8; // float32
            static constexpr std::uintptr_t m_nScaleControlPoint      = 0X01EC; // int32
            static constexpr std::uintptr_t m_nScaleControlPointField = 0X01F0; // int32
            static constexpr std::uintptr_t m_nWorldNoisePoint        = 0X01F4; // int32
            static constexpr std::uintptr_t m_bAbsVal                 = 0X01F8; // bool
            static constexpr std::uintptr_t m_bAbsValInv              = 0X01F9; // bool
            static constexpr std::uintptr_t m_flOffset                = 0X01FC; // float32
            static constexpr std::uintptr_t m_flOutputMin             = 0X0200; // float32
            static constexpr std::uintptr_t m_flOutputMax             = 0X0204; // float32
            static constexpr std::uintptr_t m_flNoiseScale            = 0X0208; // float32
            static constexpr std::uintptr_t m_flWorldNoiseScale       = 0X020C; // float32
            static constexpr std::uintptr_t m_vecOffsetLoc            = 0X0210; // Vector
            static constexpr std::uintptr_t m_flWorldTimeScale        = 0X021C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID        = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nFirstChild          = 0X0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nNumChildrenToEnable = 0X04C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bPlayEndcapOnStop    = 0X0630; // bool
            static constexpr std::uintptr_t m_bDestroyImmediately  = 0X0631; // bool
        };

        // Construct Allowed
        struct ModelReference_t {
        public:
            static constexpr std::uintptr_t m_model                        = 0X0000; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_flRelativeProbabilityOfSpawn = 0X0008; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PlanarConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_PointOnPlane          = 0X01D8; // Vector
            static constexpr std::uintptr_t m_PlaneNormal           = 0X01E4; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber   = 0X01F0; // int32
            static constexpr std::uintptr_t m_bGlobalOrigin         = 0X01F4; // bool
            static constexpr std::uintptr_t m_bGlobalNormal         = 0X01F5; // bool
            static constexpr std::uintptr_t m_flRadiusScale         = 0X01F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaximumDistanceToCP = 0X0368; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bUseOldCode           = 0X04D8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateFromCPs : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nIncrement      = 0X01E0; // int32
            static constexpr std::uintptr_t m_nMinCP          = 0X01E4; // int32
            static constexpr std::uintptr_t m_nMaxCP          = 0X01E8; // int32
            static constexpr std::uintptr_t m_nDynamicCPCount = 0X01F0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockPoints : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nMinCol       = 0X01D8; // int32
            static constexpr std::uintptr_t m_nMaxCol       = 0X01DC; // int32
            static constexpr std::uintptr_t m_nMinRow       = 0X01E0; // int32
            static constexpr std::uintptr_t m_nMaxRow       = 0X01E4; // int32
            static constexpr std::uintptr_t m_nControlPoint = 0X01E8; // int32
            static constexpr std::uintptr_t m_flBlendValue  = 0X01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput    = 0X01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_flDensity         = 0X0248; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialRadius   = 0X03B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialSpeedMin = 0X0528; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialSpeedMax = 0X0698; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bUseParticleCount = 0X0808; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CPVelocityForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E8; // int32
            static constexpr std::uintptr_t m_flScale             = 0X01F0; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ScaleVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecScale = 0X01E0; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MoveToHitbox : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_modelInput          = 0X01D8; // CParticleModelInput
            static constexpr std::uintptr_t m_transformInput      = 0X0238; // CParticleTransformInput
            static constexpr std::uintptr_t m_flLifeTimeLerpStart = 0X02A4; // float32
            static constexpr std::uintptr_t m_flLifeTimeLerpEnd   = 0X02A8; // float32
            static constexpr std::uintptr_t m_flPrevPosScale      = 0X02AC; // float32
            static constexpr std::uintptr_t m_HitboxSetName       = 0X02B0; // char[128]
            static constexpr std::uintptr_t m_bUseBones           = 0X0330; // bool
            static constexpr std::uintptr_t m_nLerpType           = 0X0334; // HitboxLerpType_t
            static constexpr std::uintptr_t m_flInterpolation     = 0X0338; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PinRopeSegmentParticleToParent : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nParticleSelection = 0X01D8; // ParticleSelection_t
            static constexpr std::uintptr_t m_nParticleNumber    = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation    = 0X0350; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PointList : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_pointList           = 0X01E8; // CUtlVector<PointDefinition_t>
            static constexpr std::uintptr_t m_bPlaceAlongPath     = 0X0200; // bool
            static constexpr std::uintptr_t m_bClosedLoop         = 0X0201; // bool
            static constexpr std::uintptr_t m_nNumPointsAlongPath = 0X0204; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInterpolation = 0X01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldInputFrom = 0X0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldInput     = 0X034C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput    = 0X0350; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomColor : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_ColorMin             = 0X01FC; // Color
            static constexpr std::uintptr_t m_ColorMax             = 0X0200; // Color
            static constexpr std::uintptr_t m_TintMin              = 0X0204; // Color
            static constexpr std::uintptr_t m_TintMax              = 0X0208; // Color
            static constexpr std::uintptr_t m_flTintPerc           = 0X020C; // float32
            static constexpr std::uintptr_t m_flUpdateThreshold    = 0X0210; // float32
            static constexpr std::uintptr_t m_nTintCP              = 0X0214; // int32
            static constexpr std::uintptr_t m_nFieldOutput         = 0X0218; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nTintBlendMode       = 0X021C; // ParticleColorBlendMode_t
            static constexpr std::uintptr_t m_flLightAmplification = 0X0220; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetGravityToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput        = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPOutput       = 0X01E4; // int32
            static constexpr std::uintptr_t m_flScale         = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bSetPosition    = 0X0358; // bool
            static constexpr std::uintptr_t m_bSetOrientation = 0X0359; // bool
            static constexpr std::uintptr_t m_bSetZDown       = 0X035A; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flScale             = 0X01E0; // float32
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement          = 0X01E8; // int32
            static constexpr std::uintptr_t m_bRandomDistribution = 0X01EC; // bool
            static constexpr std::uintptr_t m_nRandomSeed         = 0X01F0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate        = 0X01D8; // float32
            static constexpr std::uintptr_t m_flStartTime = 0X01DC; // float32
            static constexpr std::uintptr_t m_flEndTime   = 0X01E0; // float32
            static constexpr std::uintptr_t m_nField      = 0X0210; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flAParm       = 0X01E0; // float32
            static constexpr std::uintptr_t m_flBParm       = 0X01E4; // float32
            static constexpr std::uintptr_t m_flCParm       = 0X01E8; // float32
            static constexpr std::uintptr_t m_flDParm       = 0X01EC; // float32
            static constexpr std::uintptr_t m_flScale       = 0X01F0; // float32
            static constexpr std::uintptr_t m_flSpeedMin    = 0X01F4; // float32
            static constexpr std::uintptr_t m_flSpeedMax    = 0X01F8; // float32
            static constexpr std::uintptr_t m_nBaseCP       = 0X01FC; // int32
            static constexpr std::uintptr_t m_bUniformSpeed = 0X0200; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_nScaleControlPoint  = 0X01DC; // int32
            static constexpr std::uintptr_t m_nScaleCPField       = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFieldInput         = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bOffsetLocal        = 0X01EC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flFlattenStrength      = 0X0228; // float32
            static constexpr std::uintptr_t m_nStrengthFieldOverride = 0X022C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRadiusScale          = 0X0230; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderLightBeam : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nMaxAllowed                = 0X0228; // uint16
            static constexpr std::uintptr_t m_vColorBlend                = 0X0230; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType            = 0X08E8; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_flBrightnessLumensPerMeter = 0X08F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCastShadows               = 0X0A60; // bool
            static constexpr std::uintptr_t m_bDynamicBounce             = 0X0A61; // bool
            static constexpr std::uintptr_t m_flBounceScale              = 0X0A68; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flSkirt                    = 0X0BD8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRange                    = 0X0D48; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flThickness                = 0X0EB8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID        = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFirstChild          = 0X01E4; // int32
            static constexpr std::uintptr_t m_nNumChildrenToEnable = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDisableChildren     = 0X0358; // bool
            static constexpr std::uintptr_t m_bPlayEndcapOnStop    = 0X0359; // bool
            static constexpr std::uintptr_t m_bDestroyImmediately  = 0X035A; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput       = 0X01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin         = 0X01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax         = 0X0358; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin        = 0X04C8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax        = 0X0638; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nStartCP           = 0X07A8; // int32
            static constexpr std::uintptr_t m_bLOS               = 0X07AC; // bool
            static constexpr std::uintptr_t m_CollisionGroupName = 0X07AD; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0X0830; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0X0838; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLOSScale         = 0X09A8; // float32
            static constexpr std::uintptr_t m_nSetMethod         = 0X09AC; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange       = 0X09B0; // bool
            static constexpr std::uintptr_t m_vecDistanceScale   = 0X09B4; // Vector
            static constexpr std::uintptr_t m_flRemapBias        = 0X09C0; // float32
        };

        // Construct Allowed
        class CReplicationParameters {
        public:
            static constexpr std::uintptr_t m_nReplicationMode         = 0X0000; // ParticleReplicationMode_t
            static constexpr std::uintptr_t m_bScaleChildParticleRadii = 0X0004; // bool
            static constexpr std::uintptr_t m_flMinRandomRadiusScale   = 0X0008; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxRandomRadiusScale   = 0X0178; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vMinRandomDisplacement   = 0X02E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vMaxRandomDisplacement   = 0X09A0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flModellingScale         = 0X1058; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EndCapDecay : public CParticleFunctionOperator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flMinDist           = 0X01E8; // float32
            static constexpr std::uintptr_t m_vecForceAtMinDist   = 0X01EC; // Vector
            static constexpr std::uintptr_t m_flMaxDist           = 0X01F8; // float32
            static constexpr std::uintptr_t m_vecForceAtMaxDist   = 0X01FC; // Vector
            static constexpr std::uintptr_t m_vecPlaneNormal      = 0X0208; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber = 0X0214; // int32
            static constexpr std::uintptr_t m_flExponent          = 0X0218; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDensityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRadiusScale        = 0X01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput         = 0X01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flDensityMin         = 0X01E0; // float32
            static constexpr std::uintptr_t m_flDensityMax         = 0X01E4; // float32
            static constexpr std::uintptr_t m_vecOutputMin         = 0X01E8; // Vector
            static constexpr std::uintptr_t m_vecOutputMax         = 0X01F4; // Vector
            static constexpr std::uintptr_t m_bUseParentDensity    = 0X0200; // bool
            static constexpr std::uintptr_t m_nVoxelGridResolution = 0X0204; // int32
        };

        // Construct Allowed
        struct ParticleControlPointConfiguration_t {
        public:
            static constexpr std::uintptr_t m_name         = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_drivers      = 0X0008; // CUtlVector<ParticleControlPointDriver_t>
            static constexpr std::uintptr_t m_previewState = 0X0020; // ParticlePreviewState_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_nFieldInput         = 0X01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput        = 0X01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bLocalSpace         = 0X01EC; // bool
        };

        // Construct Allowed
        struct MaterialVariable_t {
        public:
            static constexpr std::uintptr_t m_strVariable    = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nVariableField = 0X0008; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale        = 0X000C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapSpeed : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0X01DC; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0X01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0X01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0X01E8; // float32
            static constexpr std::uintptr_t m_nSetMethod   = 0X01EC; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bIgnoreDelta = 0X01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderModels : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsBloomPass    = 0X0228; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsWaterPass    = 0X0229; // bool
            static constexpr std::uintptr_t m_bUseMixedResolutionRendering     = 0X022A; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffecsGameOverlay   = 0X022B; // bool
            static constexpr std::uintptr_t m_ModelList                        = 0X0230; // CUtlVector<ModelReference_t>
            static constexpr std::uintptr_t m_nBodyGroupField                  = 0X0248; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSubModelField                   = 0X024C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bIgnoreNormal                    = 0X0250; // bool
            static constexpr std::uintptr_t m_bOrientZ                         = 0X0251; // bool
            static constexpr std::uintptr_t m_bCenterOffset                    = 0X0252; // bool
            static constexpr std::uintptr_t m_vecLocalOffset                   = 0X0258; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecLocalRotation                 = 0X0910; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bIgnoreRadius                    = 0X0FC8; // bool
            static constexpr std::uintptr_t m_nModelScaleCP                    = 0X0FCC; // int32
            static constexpr std::uintptr_t m_vecComponentScale                = 0X0FD0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bLocalScale                      = 0X1688; // bool
            static constexpr std::uintptr_t m_nSizeCullBloat                   = 0X168C; // int32
            static constexpr std::uintptr_t m_bAnimated                        = 0X1690; // bool
            static constexpr std::uintptr_t m_flAnimationRate                  = 0X1698; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bScaleAnimationRate              = 0X1808; // bool
            static constexpr std::uintptr_t m_bForceLoopingAnimation           = 0X1809; // bool
            static constexpr std::uintptr_t m_bResetAnimOnStop                 = 0X180A; // bool
            static constexpr std::uintptr_t m_bManualAnimFrame                 = 0X180B; // bool
            static constexpr std::uintptr_t m_nAnimationScaleField             = 0X180C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAnimationField                  = 0X1810; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nManualFrameField                = 0X1814; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_ActivityName                     = 0X1818; // char[256]
            static constexpr std::uintptr_t m_SequenceName                     = 0X1918; // char[256]
            static constexpr std::uintptr_t m_bEnableClothSimulation           = 0X1A18; // bool
            static constexpr std::uintptr_t m_bDisableClothGroundCollision     = 0X1A19; // bool
            static constexpr std::uintptr_t m_ClothEffectName                  = 0X1A1A; // char[64]
            static constexpr std::uintptr_t m_hOverrideMaterial                = 0X1A60; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_bOverrideTranslucentMaterials    = 0X1A68; // bool
            static constexpr std::uintptr_t m_nSkin                            = 0X1A70; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_MaterialVars                     = 0X1BE0; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_flRenderFilter                   = 0X1BF8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flManualModelSelection           = 0X1D68; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_modelInput                       = 0X1ED8; // CParticleModelInput
            static constexpr std::uintptr_t m_nLOD                             = 0X1F38; // int32
            static constexpr std::uintptr_t m_EconSlotName                     = 0X1F3C; // char[256]
            static constexpr std::uintptr_t m_bOriginalModel                   = 0X203C; // bool
            static constexpr std::uintptr_t m_bSuppressTint                    = 0X203D; // bool
            static constexpr std::uintptr_t m_nSubModelFieldType               = 0X2040; // RenderModelSubModelFieldType_t
            static constexpr std::uintptr_t m_bDisableShadows                  = 0X2044; // bool
            static constexpr std::uintptr_t m_bDisableDepthPrepass             = 0X2045; // bool
            static constexpr std::uintptr_t m_bAcceptsDecals                   = 0X2046; // bool
            static constexpr std::uintptr_t m_bForceDrawInterlevedWithSiblings = 0X2047; // bool
            static constexpr std::uintptr_t m_bDoNotDrawInParticlePass         = 0X2048; // bool
            static constexpr std::uintptr_t m_bAllowApproximateTransforms      = 0X2049; // bool
            static constexpr std::uintptr_t m_szRenderAttribute                = 0X204A; // char[260]
            static constexpr std::uintptr_t m_flRadiusScale                    = 0X2150; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                     = 0X22C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRollScale                      = 0X2430; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAlpha2Field                     = 0X25A0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale                    = 0X25A8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType                  = 0X2C60; // ParticleColorBlendType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderClientPhysicsImpulse : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRadius     = 0X0228; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMagnitude  = 0X0398; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nSimIdFilter = 0X0508; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput  = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPOutput = 0X01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flRestLength           = 0X01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMinDistance          = 0X0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxDistance          = 0X04B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAdjustmentScale      = 0X0628; // float32
            static constexpr std::uintptr_t m_flInitialRestingLength = 0X0630; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecWarpMin               = 0X01E0; // Vector
            static constexpr std::uintptr_t m_vecWarpMax               = 0X01EC; // Vector
            static constexpr std::uintptr_t m_InputValue               = 0X01F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flPrevPosScale           = 0X0368; // float32
            static constexpr std::uintptr_t m_nScaleControlPointNumber = 0X036C; // int32
            static constexpr std::uintptr_t m_nControlPointNumber      = 0X0370; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_ControlPoint = 0X01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VectorNoise : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput              = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutputMin              = 0X01DC; // Vector
            static constexpr std::uintptr_t m_vecOutputMax              = 0X01E8; // Vector
            static constexpr std::uintptr_t m_fl4NoiseScale             = 0X01F4; // float32
            static constexpr std::uintptr_t m_bAdditive                 = 0X01F8; // bool
            static constexpr std::uintptr_t m_bOffset                   = 0X01F9; // bool
            static constexpr std::uintptr_t m_flNoiseAnimationTimeScale = 0X01FC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nInputMin    = 0X01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nInputMax    = 0X0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMin  = 0X04C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMax  = 0X0630; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bActiveRange = 0X07A0; // bool
            static constexpr std::uintptr_t m_nSetMethod   = 0X07A4; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_QuantizeFloat : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0X0350; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nBBoxType                 = 0X01E0; // BBoxVolumeType_t
            static constexpr std::uintptr_t m_nInControlPointNumber     = 0X01E4; // int32
            static constexpr std::uintptr_t m_nOutControlPointNumber    = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOutControlPointMaxNumber = 0X01EC; // int32
            static constexpr std::uintptr_t m_nField                    = 0X01F0; // int32
            static constexpr std::uintptr_t m_flInputMin                = 0X01F4; // float32
            static constexpr std::uintptr_t m_flInputMax                = 0X01F8; // float32
            static constexpr std::uintptr_t m_flOutputMin               = 0X01FC; // float32
            static constexpr std::uintptr_t m_flOutputMax               = 0X0200; // float32
            static constexpr std::uintptr_t m_bBBoxOnly                 = 0X0204; // bool
            static constexpr std::uintptr_t m_bCubeRoot                 = 0X0205; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01D8; // int32
            static constexpr std::uintptr_t m_vecOffset           = 0X01DC; // Vector
            static constexpr std::uintptr_t m_bOffsetLocal        = 0X01E8; // bool
        };

        // Construct Allowed
        struct ParticleControlPointDriver_t {
        public:
            static constexpr std::uintptr_t m_iControlPoint  = 0X0000; // ParticleParamID_t
            static constexpr std::uintptr_t m_iAttachType    = 0X0010; // ParticleAttachment_t
            static constexpr std::uintptr_t m_attachmentName = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_vecOffset      = 0X0020; // Vector
            static constexpr std::uintptr_t m_angOffset      = 0X002C; // QAngle
            static constexpr std::uintptr_t m_entityName     = 0X0038; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ParentVortices : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flForceScale    = 0X01E8; // float32
            static constexpr std::uintptr_t m_vecTwistAxis    = 0X01EC; // Vector
            static constexpr std::uintptr_t m_bFlipBasedOnYaw = 0X01F8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput              = 0X01E0; // int32
            static constexpr std::uintptr_t m_nCPOutputVel          = 0X01E4; // int32
            static constexpr std::uintptr_t m_bNormalize            = 0X01E8; // bool
            static constexpr std::uintptr_t m_nCPOutputMag          = 0X01EC; // int32
            static constexpr std::uintptr_t m_nCPField              = 0X01F0; // int32
            static constexpr std::uintptr_t m_vecComparisonVelocity = 0X01F8; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ClientPhysics : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_strPhysicsType            = 0X0228; // CUtlString
            static constexpr std::uintptr_t m_bStartAsleep              = 0X0230; // bool
            static constexpr std::uintptr_t m_flPlayerWakeRadius        = 0X0238; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flVehicleWakeRadius       = 0X03A8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bUseHighQualitySimulation = 0X0518; // bool
            static constexpr std::uintptr_t m_nMaxParticleCount         = 0X051C; // int32
            static constexpr std::uintptr_t m_bRespectExclusionVolumes  = 0X0520; // bool
            static constexpr std::uintptr_t m_bKillParticles            = 0X0521; // bool
            static constexpr std::uintptr_t m_bDeleteSim                = 0X0522; // bool
            static constexpr std::uintptr_t m_nControlPoint             = 0X0524; // int32
            static constexpr std::uintptr_t m_nForcedSimId              = 0X0528; // int32
            static constexpr std::uintptr_t m_nColorBlendType           = 0X052C; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_nForcedStatusEffects      = 0X0530; // ParticleAttrBoxFlags_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SpinYaw : public CGeneralSpin {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PointDefinitionWithTimeValues_t : public PointDefinition_t {
        public:
            static constexpr std::uintptr_t m_flTimeDuration = 0X0014; // float32
        };

        // Construct Allowed
        struct RenderProjectedMaterial_t {
        public:
            static constexpr std::uintptr_t m_hMaterial = 0X0000; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetFloatAttributeToVectorExpression : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0X01E0; // VectorFloatExpressionType_t
            static constexpr std::uintptr_t m_vInput1       = 0X01E8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2       = 0X08A0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOutputRemap = 0X0F58; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0X10C8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0X10CC; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ExternalWindForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_vecSamplePosition        = 0X01E8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecScale                 = 0X08A0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bSampleWind              = 0X0F58; // bool
            static constexpr std::uintptr_t m_bSampleWater             = 0X0F59; // bool
            static constexpr std::uintptr_t m_bDampenNearWaterPlane    = 0X0F5A; // bool
            static constexpr std::uintptr_t m_bSampleGravity           = 0X0F5B; // bool
            static constexpr std::uintptr_t m_vecGravityForce          = 0X0F60; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bUseBasicMovementGravity = 0X1618; // bool
            static constexpr std::uintptr_t m_flLocalGravityScale      = 0X1620; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLocalBuoyancyScale     = 0X1790; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecBuoyancyForce         = 0X1900; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ModelCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0X01E0; // int32
            static constexpr std::uintptr_t m_bBoundBox           = 0X01E4; // bool
            static constexpr std::uintptr_t m_bCullOutside        = 0X01E5; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0X01E6; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0X01E7; // char[128]
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderSprites : public CBaseRendererSource2 {
        public:
            static constexpr std::uintptr_t m_nSequenceOverride                     = 0X2DF0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bSequenceNumbersAreRawSequenceIndices = 0X2F60; // bool
            static constexpr std::uintptr_t m_nOrientationType                      = 0X2F64; // ParticleOrientationChoiceList_t
            static constexpr std::uintptr_t m_nOrientationControlPoint              = 0X2F68; // int32
            static constexpr std::uintptr_t m_bUseYawWithNormalAligned              = 0X2F6C; // bool
            static constexpr std::uintptr_t m_flMinSize                             = 0X2F70; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flMaxSize                             = 0X30E0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flAlphaAdjustWithSizeAdjust           = 0X3250; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flStartFadeSize                       = 0X33C0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flEndFadeSize                         = 0X3530; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flStartFadeDot                        = 0X36A0; // float32
            static constexpr std::uintptr_t m_flEndFadeDot                          = 0X36A4; // float32
            static constexpr std::uintptr_t m_bDistanceAlpha                        = 0X36A8; // bool
            static constexpr std::uintptr_t m_bSoftEdges                            = 0X36A9; // bool
            static constexpr std::uintptr_t m_flEdgeSoftnessStart                   = 0X36AC; // float32
            static constexpr std::uintptr_t m_flEdgeSoftnessEnd                     = 0X36B0; // float32
            static constexpr std::uintptr_t m_bOutline                              = 0X36B4; // bool
            static constexpr std::uintptr_t m_OutlineColor                          = 0X36B5; // Color
            static constexpr std::uintptr_t m_nOutlineAlpha                         = 0X36BC; // int32
            static constexpr std::uintptr_t m_flOutlineStart0                       = 0X36C0; // float32
            static constexpr std::uintptr_t m_flOutlineStart1                       = 0X36C4; // float32
            static constexpr std::uintptr_t m_flOutlineEnd0                         = 0X36C8; // float32
            static constexpr std::uintptr_t m_flOutlineEnd1                         = 0X36CC; // float32
            static constexpr std::uintptr_t m_nLightingMode                         = 0X36D0; // ParticleLightingQuality_t
            static constexpr std::uintptr_t m_vecLightingOverride                   = 0X36D8; // CParticleCollectionRendererVecInput
            static constexpr std::uintptr_t m_flLightingTessellation                = 0X3D90; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flLightingDirectionality              = 0X3F00; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bParticleShadows                      = 0X4070; // bool
            static constexpr std::uintptr_t m_flShadowDensity                       = 0X4074; // float32
            static constexpr std::uintptr_t m_replicationParameters                 = 0X4078; // CReplicationParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput      = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin        = 0X01DC; // float32
            static constexpr std::uintptr_t m_flInputMax        = 0X01E0; // float32
            static constexpr std::uintptr_t m_TransformStart    = 0X01E8; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd      = 0X0250; // CParticleTransformInput
            static constexpr std::uintptr_t m_nOutputStartCP    = 0X02B8; // int32
            static constexpr std::uintptr_t m_nOutputStartField = 0X02BC; // int32
            static constexpr std::uintptr_t m_nOutputEndCP      = 0X02C0; // int32
            static constexpr std::uintptr_t m_nOutputEndField   = 0X02C4; // int32
            static constexpr std::uintptr_t m_nSetMethod        = 0X02C8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange      = 0X02CC; // bool
            static constexpr std::uintptr_t m_bRadialCheck      = 0X02CD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID            = 0X01D8; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint       = 0X01DC; // int32
            static constexpr std::uintptr_t m_nNumControlPoints        = 0X01E0; // int32
            static constexpr std::uintptr_t m_nParticleIncrement       = 0X01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nFirstSourcePoint        = 0X0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bSetOrientation          = 0X04C8; // bool
            static constexpr std::uintptr_t m_nOrientationField        = 0X04CC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bNumBasedOnParticleCount = 0X04D0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderTreeShake : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flPeakStrength                  = 0X0228; // float32
            static constexpr std::uintptr_t m_nPeakStrengthFieldOverride      = 0X022C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRadius                        = 0X0230; // float32
            static constexpr std::uintptr_t m_nRadiusFieldOverride            = 0X0234; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flShakeDuration                 = 0X0238; // float32
            static constexpr std::uintptr_t m_flTransitionTime                = 0X023C; // float32
            static constexpr std::uintptr_t m_flTwistAmount                   = 0X0240; // float32
            static constexpr std::uintptr_t m_flRadialAmount                  = 0X0244; // float32
            static constexpr std::uintptr_t m_flControlPointOrientationAmount = 0X0248; // float32
            static constexpr std::uintptr_t m_nControlPointForLinearDirection = 0X024C; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0X01D8; // ScalarExpressionType_t
            static constexpr std::uintptr_t m_flInput1      = 0X01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInput2      = 0X0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap = 0X04C0; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0X0630; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0X0634; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CycleScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nDestField            = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flStartValue          = 0X01DC; // float32
            static constexpr std::uintptr_t m_flEndValue            = 0X01E0; // float32
            static constexpr std::uintptr_t m_flCycleTime           = 0X01E4; // float32
            static constexpr std::uintptr_t m_bDoNotRepeatCycle     = 0X01E8; // bool
            static constexpr std::uintptr_t m_bSynchronizeParticles = 0X01E9; // bool
            static constexpr std::uintptr_t m_nCPScale              = 0X01EC; // int32
            static constexpr std::uintptr_t m_nCPFieldMin           = 0X01F0; // int32
            static constexpr std::uintptr_t m_nCPFieldMax           = 0X01F4; // int32
            static constexpr std::uintptr_t m_nSetMethod            = 0X01F8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nMaterialControlPoint     = 0X0228; // int32
            static constexpr std::uintptr_t m_nProxyType                = 0X022C; // MaterialProxyType_t
            static constexpr std::uintptr_t m_MaterialVars              = 0X0230; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_hOverrideMaterial         = 0X0248; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_flMaterialOverrideEnabled = 0X0250; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecColorScale             = 0X03C0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flAlpha                   = 0X0A78; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nColorBlendType           = 0X0BE8; // ParticleColorBlendType_t
        };

        // Construct Allowed
        struct FloatInputMaterialVariable_t {
        public:
            static constexpr std::uintptr_t m_strVariable = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_flInput     = 0X0008; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarLinear : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0X01D8; // float32
            static constexpr std::uintptr_t m_RateMax         = 0X01DC; // float32
            static constexpr std::uintptr_t m_flStartTime_min = 0X01E0; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0X01E4; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0X01E8; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0X01EC; // float32
            static constexpr std::uintptr_t m_nField          = 0X0210; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportionalOp = 0X0214; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RotateVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput  = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecRotAxisMin = 0X01DC; // Vector
            static constexpr std::uintptr_t m_vecRotAxisMax = 0X01E8; // Vector
            static constexpr std::uintptr_t m_flRotRateMin  = 0X01F4; // float32
            static constexpr std::uintptr_t m_flRotRateMax  = 0X01F8; // float32
            static constexpr std::uintptr_t m_bNormalize    = 0X01FC; // bool
            static constexpr std::uintptr_t m_flScale       = 0X0200; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitVecCollection : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0X01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nOutputField = 0X0898; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SequenceFromCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bKillUnused  = 0X01E0; // bool
            static constexpr std::uintptr_t m_bRadiusScale = 0X01E1; // bool
            static constexpr std::uintptr_t m_nCP          = 0X01E4; // int32
            static constexpr std::uintptr_t m_vecOffset    = 0X01E8; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInputMin   = 0X01D8; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0X01DC; // float32
            static constexpr std::uintptr_t m_flInputBias  = 0X01E0; // float32
            static constexpr std::uintptr_t m_nStartCP     = 0X01E4; // int32
            static constexpr std::uintptr_t m_nEndCP       = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOffsetCP    = 0X01EC; // int32
            static constexpr std::uintptr_t m_nOuputCP     = 0X01F0; // int32
            static constexpr std::uintptr_t m_nInputCP     = 0X01F4; // int32
            static constexpr std::uintptr_t m_bRadialCheck = 0X01F8; // bool
            static constexpr std::uintptr_t m_bScaleOffset = 0X01F9; // bool
            static constexpr std::uintptr_t m_vecOffset    = 0X01FC; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpEndCapScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0X01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutput     = 0X01DC; // float32
            static constexpr std::uintptr_t m_flLerpTime   = 0X01E0; // float32
        };
    }
}

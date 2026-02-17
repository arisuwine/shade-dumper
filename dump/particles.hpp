#pragma once
#include <cstdint>

namespace offsets {
    namespace particles {
        enum class ParticleSetMethod_t : std::uint32_t {
            PARTICLE_SET_REPLACE_VALUE        = 0x0,
            PARTICLE_SET_SCALE_INITIAL_VALUE  = 0x1,
            PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
            PARTICLE_SET_RAMP_CURRENT_VALUE   = 0x3,
            PARTICLE_SET_SCALE_CURRENT_VALUE  = 0x4,
            PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5
        };

        enum class ParticleControlPointAxis_t : std::uint32_t {
            PARTICLE_CP_AXIS_X          = 0x0,
            PARTICLE_CP_AXIS_Y          = 0x1,
            PARTICLE_CP_AXIS_Z          = 0x2,
            PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
            PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
            PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5
        };

        enum class ParticleMassMode_t : std::uint32_t {
            PARTICLE_MASSMODE_RADIUS_CUBED   = 0x0,
            PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2
        };

        enum class ParticleColorBlendType_t : std::uint32_t {
            PARTICLE_COLOR_BLEND_MULTIPLY   = 0x0,
            PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
            PARTICLE_COLOR_BLEND_DIVIDE     = 0x2,
            PARTICLE_COLOR_BLEND_ADD        = 0x3,
            PARTICLE_COLOR_BLEND_SUBTRACT   = 0x4,
            PARTICLE_COLOR_BLEND_MOD2X      = 0x5,
            PARTICLE_COLOR_BLEND_SCREEN     = 0x6,
            PARTICLE_COLOR_BLEND_MAX        = 0x7,
            PARTICLE_COLOR_BLEND_MIN        = 0x8,
            PARTICLE_COLOR_BLEND_REPLACE    = 0x9,
            PARTICLE_COLOR_BLEND_AVERAGE    = 0xA,
            PARTICLE_COLOR_BLEND_NEGATE     = 0xB,
            PARTICLE_COLOR_BLEND_LUMINANCE  = 0xC
        };

        enum class ParticleImpulseType_t : std::uint32_t {
            IMPULSE_TYPE_NONE                 = 0x0,
            IMPULSE_TYPE_GENERIC              = 0x1,
            IMPULSE_TYPE_ROPE                 = 0x2,
            IMPULSE_TYPE_EXPLOSION            = 0x4,
            IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
            IMPULSE_TYPE_PARTICLE_SYSTEM      = 0x10
        };

        enum class ParticleFalloffFunction_t : std::uint32_t {
            PARTICLE_FALLOFF_CONSTANT    = 0x0,
            PARTICLE_FALLOFF_LINEAR      = 0x1,
            PARTICLE_FALLOFF_EXPONENTIAL = 0x2
        };

        enum class ParticleEntityPos_t : std::uint32_t {
            PARTICLE_ABS_ORIGIN        = 0x0,
            PARTICLE_WORLDSPACE_CENTER = 0x1,
            PARTICLE_EYES              = 0x2
        };

        enum class AnimationType_t : std::uint32_t {
            ANIMATION_TYPE_FIXED_RATE    = 0x0,
            ANIMATION_TYPE_FIT_LIFETIME  = 0x1,
            ANIMATION_TYPE_MANUAL_FRAMES = 0x2
        };

        enum class ClosestPointTestType_t : std::uint32_t {
            PARTICLE_CLOSEST_TYPE_BOX     = 0x0,
            PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
            PARTICLE_CLOSEST_TYPE_HYBRID  = 0x2
        };

        enum class InheritableBoolType_t : std::uint32_t {
            INHERITABLE_BOOL_INHERIT = 0x0,
            INHERITABLE_BOOL_FALSE   = 0x1,
            INHERITABLE_BOOL_TRUE    = 0x2
        };

        enum class ParticleHitboxBiasType_t : std::uint32_t {
            PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
            PARTICLE_HITBOX_BIAS_HITBOX = 0x1
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

        enum class RenderModelSubModelFieldType_t : std::uint32_t {
            SUBMODEL_AS_BODYGROUP_SUBMODEL                    = 0x0,
            SUBMODEL_AS_MESHGROUP_INDEX                       = 0x1,
            SUBMODEL_AS_MESHGROUP_MASK                        = 0x2,
            SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3
        };

        enum class ParticleOrientationType_t : std::uint32_t {
            PARTICLE_ORIENTATION_NONE     = 0x0,
            PARTICLE_ORIENTATION_VELOCITY = 0x1,
            PARTICLE_ORIENTATION_NORMAL   = 0x2,
            PARTICLE_ORIENTATION_ROTATION = 0x4
        };

        enum class ParticleFanType_t : std::uint32_t {
            PARTICLE_FAN_TYPE_FAN        = 0x0,
            PARTICLE_FAN_TYPE_ROTOR_WASH = 0x1,
            PARTICLE_FAN_TYPE_RADIAL     = 0x2
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

        enum class PetGroundType_t : std::uint32_t {
            PET_GROUND_NONE  = 0x0,
            PET_GROUND_GRID  = 0x1,
            PET_GROUND_PLANE = 0x2
        };

        enum class ModelHitboxType_t : std::uint32_t {
            MODEL_HITBOX_TYPE_STANDARD     = 0x0,
            MODEL_HITBOX_TYPE_RAW_BONES    = 0x1,
            MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
            MODEL_HITBOX_TYPE_SNAPSHOT     = 0x3
        };

        enum class SpriteCardShaderType_t : std::uint32_t {
            SPRITECARD_SHADER_BASE   = 0x0,
            SPRITECARD_SHADER_CUSTOM = 0x1
        };

        enum class ParticleTopology_t : std::uint32_t {
            PARTICLE_TOPOLOGY_POINTS = 0x0,
            PARTICLE_TOPOLOGY_LINES  = 0x1,
            PARTICLE_TOPOLOGY_TRIS   = 0x2,
            PARTICLE_TOPOLOGY_QUADS  = 0x3,
            PARTICLE_TOPOLOGY_CUBES  = 0x4
        };

        enum class ParticleDetailLevel_t : std::uint32_t {
            PARTICLEDETAIL_LOW    = 0x0,
            PARTICLEDETAIL_MEDIUM = 0x1,
            PARTICLEDETAIL_HIGH   = 0x2,
            PARTICLEDETAIL_ULTRA  = 0x3
        };

        enum class ParticleTraceSet_t : std::uint32_t {
            PARTICLE_TRACE_SET_ALL                  = 0x0,
            PARTICLE_TRACE_SET_STATIC               = 0x1,
            PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
            PARTICLE_TRACE_SET_DYNAMIC              = 0x3
        };

        enum class ParticleCollisionMode_t : std::uint32_t {
            COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
            COLLISION_MODE_USE_NEAREST_TRACE  = 0x2,
            COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
            COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
            COLLISION_MODE_DISABLED           = 0xFFFFFFFF
        };

        enum class ParticleColorBlendMode_t : std::uint32_t {
            PARTICLEBLEND_DEFAULT  = 0x0,
            PARTICLEBLEND_OVERLAY  = 0x1,
            PARTICLEBLEND_DARKEN   = 0x2,
            PARTICLEBLEND_LIGHTEN  = 0x3,
            PARTICLEBLEND_MULTIPLY = 0x4
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

        enum class VectorFloatExpressionType_t : std::uint32_t {
            VECTOR_FLOAT_EXPRESSION_UNINITIALIZED    = 0xFFFFFFFF,
            VECTOR_FLOAT_EXPRESSION_DOTPRODUCT       = 0x0,
            VECTOR_FLOAT_EXPRESSION_DISTANCE         = 0x1,
            VECTOR_FLOAT_EXPRESSION_DISTANCESQR      = 0x2,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH    = 0x3,
            VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
            VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE     = 0x5
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

        enum class MissingParentInheritBehavior_t : std::uint32_t {
            MISSING_PARENT_DO_NOTHING = 0xFFFFFFFF,
            MISSING_PARENT_KILL       = 0x0,
            MISSING_PARENT_FIND_NEW   = 0x1,
            MISSING_PARENT_SAME_INDEX = 0x2
        };

        enum class HitboxLerpType_t : std::uint32_t {
            HITBOX_LERP_LIFETIME = 0x0,
            HITBOX_LERP_CONSTANT = 0x1
        };

        enum class ParticleSelection_t : std::uint32_t {
            PARTICLE_SELECTION_FIRST  = 0x0,
            PARTICLE_SELECTION_LAST   = 0x1,
            PARTICLE_SELECTION_NUMBER = 0x2
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

        enum class ParticleDirectionNoiseType_t : std::uint32_t {
            PARTICLE_DIR_NOISE_PERLIN       = 0x0,
            PARTICLE_DIR_NOISE_CURL         = 0x1,
            PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2
        };

        enum class ParticleRotationLockType_t : std::uint32_t {
            PARTICLE_ROTATION_LOCK_NONE      = 0x0,
            PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
            PARTICLE_ROTATION_LOCK_NORMAL    = 0x2
        };

        enum class ParticleEndcapMode_t : std::uint32_t {
            PARTICLE_ENDCAP_ALWAYS_ON  = 0xFFFFFFFF,
            PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
            PARTICLE_ENDCAP_ENDCAP_ON  = 0x1
        };

        enum class ParticleLightingQuality_t : std::uint32_t {
            PARTICLE_LIGHTING_PER_PARTICLE      = 0x0,
            PARTICLE_LIGHTING_PER_VERTEX        = 0x1,
            PARTICLE_LIGHTING_PER_PIXEL         = 0xFFFFFFFF,
            PARTICLE_LIGHTING_OVERRIDE_POSITION = 0x2,
            PARTICLE_LIGHTING_OVERRIDE_COLOR    = 0x3,
            PARTICLE_LIGHTING_ADD_EXTRA_LIGHT   = 0x4
        };

        enum class StandardLightingAttenuationStyle_t : std::uint32_t {
            LIGHT_STYLE_OLD = 0x0,
            LIGHT_STYLE_NEW = 0x1
        };

        enum class ParticleTraceMissBehavior_t : std::uint32_t {
            PARTICLE_TRACE_MISS_BEHAVIOR_NONE      = 0x0,
            PARTICLE_TRACE_MISS_BEHAVIOR_KILL      = 0x1,
            PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2
        };

        enum class ParticleOrientationSetMode_t : std::uint32_t {
            PARTICLE_ORIENTATION_SET_NONE           = 0xFFFFFFFF,
            PARTICLE_ORIENTATION_SET_FROM_VELOCITY  = 0x0,
            PARTICLE_ORIENTATION_SET_FROM_NORMAL    = 0x1,
            PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x2
        };

        enum class ParticleLightnintBranchBehavior_t : std::uint32_t {
            PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR  = 0x0,
            PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1
        };

        enum class ParticleLightFogLightingMode_t : std::uint32_t {
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE              = 0x0,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC           = 0x2,
            PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4
        };

        enum class ParticleSequenceCropOverride_t : std::uint32_t {
            PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT   = 0xFFFFFFFF,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
            PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON  = 0x1
        };

        enum class ParticleParentSetMode_t : std::uint32_t {
            PARTICLE_SET_PARENT_NO        = 0x0,
            PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
            PARTICLE_SET_PARENT_ROOT      = 0x2
        };

        enum class MaterialProxyType_t : std::uint32_t {
            MATERIAL_PROXY_STATUS_EFFECT = 0x0,
            MATERIAL_PROXY_TINT          = 0x1
        };

        enum class BBoxVolumeType_t : std::uint32_t {
            BBOX_VOLUME     = 0x0,
            BBOX_DIMENSIONS = 0x1,
            BBOX_MINS_MAXS  = 0x2,
            BBOX_RADIUS     = 0x3
        };

        enum class ParticleHitboxDataSelection_t : std::uint32_t {
            PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
            PARTICLE_HITBOX_COUNT         = 0x1
        };

        enum class SnapshotIndexType_t : std::uint32_t {
            SNAPSHOT_INDEX_INCREMENT = 0x0,
            SNAPSHOT_INDEX_DIRECT    = 0x1
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

        enum class ParticleCollisionGroup_t : std::uint32_t {
            PARTICLE_COLLISION_GROUP_DEFAULT     = 0x4,
            PARTICLE_COLLISION_GROUP_DEBRIS      = 0x5,
            PARTICLE_COLLISION_GROUP_INTERACTIVE = 0x7,
            PARTICLE_COLLISION_GROUP_PLAYER      = 0x8,
            PARTICLE_COLLISION_GROUP_VEHICLE     = 0xA,
            PARTICLE_COLLISION_GROUP_NPC         = 0xC,
            PARTICLE_COLLISION_GROUP_PROPS       = 0x18
        };

        enum class ParticleOrientationChoiceList_t : std::uint32_t {
            PARTICLE_ORIENTATION_SCREEN_ALIGNED                 = 0x0,
            PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED               = 0x1,
            PARTICLE_ORIENTATION_WORLD_Z_ALIGNED                = 0x2,
            PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL       = 0x3,
            PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
            PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION            = 0x5
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

        enum class ParticleAlphaReferenceType_t : std::uint32_t {
            PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA   = 0x0,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA  = 0x1,
            PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE  = 0x2,
            PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3
        };

        enum class BlurFilterType_t : std::uint32_t {
            BLURFILTER_GAUSSIAN = 0x0,
            BLURFILTER_BOX      = 0x1
        };

        enum class ParticleLightTypeChoiceList_t : std::uint32_t {
            PARTICLE_LIGHT_TYPE_POINT   = 0x0,
            PARTICLE_LIGHT_TYPE_SPOT    = 0x1,
            PARTICLE_LIGHT_TYPE_FX      = 0x2,
            PARTICLE_LIGHT_TYPE_CAPSULE = 0x3
        };

        enum class ParticleLightUnitChoiceList_t : std::uint32_t {
            PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
            PARTICLE_LIGHT_UNIT_LUMENS   = 0x1
        };

        enum class ParticleOmni2LightTypeChoiceList_t : std::uint32_t {
            PARTICLE_OMNI2_LIGHT_TYPE_POINT  = 0x0,
            PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1
        };

        enum class ParticleLightBehaviorChoiceList_t : std::uint32_t {
            PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
            PARTICLE_LIGHT_BEHAVIOR_ROPE             = 0x1,
            PARTICLE_LIGHT_BEHAVIOR_TRAILS           = 0x2
        };

        enum class ParticleDepthFeatheringMode_t : std::uint32_t {
            PARTICLE_DEPTH_FEATHERING_OFF         = 0x0,
            PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
            PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2
        };

        enum class ParticleVRHandChoiceList_t : std::uint32_t {
            PARTICLE_VRHAND_LEFT      = 0x0,
            PARTICLE_VRHAND_RIGHT     = 0x1,
            PARTICLE_VRHAND_CP        = 0x2,
            PARTICLE_VRHAND_CP_OBJECT = 0x3
        };

        enum class ParticleSortingChoiceList_t : std::uint32_t {
            PARTICLE_SORTING_NEAREST       = 0x0,
            PARTICLE_SORTING_CREATION_TIME = 0x1
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

        enum class ParticleTextureLayerBlendType_t : std::uint32_t {
            SPRITECARD_TEXTURE_BLEND_MULTIPLY  = 0x0,
            SPRITECARD_TEXTURE_BLEND_MOD2X     = 0x1,
            SPRITECARD_TEXTURE_BLEND_REPLACE   = 0x2,
            SPRITECARD_TEXTURE_BLEND_ADD       = 0x3,
            SPRITECARD_TEXTURE_BLEND_SUBTRACT  = 0x4,
            SPRITECARD_TEXTURE_BLEND_AVERAGE   = 0x5,
            SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6
        };

        enum class ParticlePostProcessPriorityGroup_t : std::uint32_t {
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME        = 0x0,
            PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE      = 0x1,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT     = 0x2,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW  = 0x3,
            PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
            PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI           = 0x5
        };

        enum class ParticleFogType_t : std::uint32_t {
            PARTICLE_FOG_GAME_DEFAULT = 0x0,
            PARTICLE_FOG_ENABLED      = 0x1,
            PARTICLE_FOG_DISABLED     = 0x2
        };

        enum class ParticleLiquidContents_t : std::uint32_t {
            PARTICLE_LIQUID_NONE  = 0x0,
            PARTICLE_LIQUID_OIL   = 0x1,
            PARTICLE_LIQUID_WATER = 0x2
        };

        enum class TextureRepetitionMode_t : std::uint32_t {
            TEXTURE_REPETITION_PARTICLE = 0x0,
            TEXTURE_REPETITION_PATH     = 0x1
        };

        enum class ParticleReplicationMode_t : std::uint32_t {
            PARTICLE_REPLICATIONMODE_NONE                               = 0x0,
            PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1
        };

        // Local Type Scope
        enum class PulseMethodCallMode_t : std::uint32_t {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET    = 0x1
        };

        // Local Type Scope
        enum class PulseCursorCancelPriority_t : std::uint32_t {
            None              = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel        = 0x2,
            HardCancel        = 0x3
        };

        // Local Type Scope
        enum class PulseBestOutflowRules_t : std::uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX            = 0x1
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CRandomNumberGeneratorParameters {
        public:
            static constexpr std::uintptr_t m_bDistributeEvenly = 0x0000; // bool
            static constexpr std::uintptr_t m_nSeed             = 0x0004; // int32
        };

        // Construct Allowed
        class CParticleMassCalculationParameters {
        public:
            static constexpr std::uintptr_t m_nMassMode       = 0x0000; // ParticleMassMode_t
            static constexpr std::uintptr_t m_flRadius        = 0x0008; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flNominalRadius = 0x0178; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flScale         = 0x02E8; // CPerParticleFloatInput
        };

        // Construct Allowed
        struct MaterialVariable_t {
        public:
            static constexpr std::uintptr_t m_strVariable    = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nVariableField = 0x0008; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale        = 0x000C; // float32
        };

        // Construct Allowed
        struct RenderProjectedMaterial_t {
        public:
            static constexpr std::uintptr_t m_hMaterial = 0x0000; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Construct Allowed
        struct CPAssignment_t {
        public:
            static constexpr std::uintptr_t m_nCPNumber        = 0x0000; // int32
            static constexpr std::uintptr_t m_Pos              = 0x0008; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOrientationMode = 0x06C0; // ParticleOrientationSetMode_t
        };

        // Construct Allowed
        struct ParticlePreviewBodyGroup_t {
        public:
            static constexpr std::uintptr_t m_bodyGroupName = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nValue        = 0x0008; // int32
        };

        // Construct Allowed
        struct ParticlePreviewState_t {
        public:
            static constexpr std::uintptr_t m_previewModel                 = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nModSpecificData             = 0x0008; // uint32
            static constexpr std::uintptr_t m_groundType                   = 0x000C; // PetGroundType_t
            static constexpr std::uintptr_t m_sequenceName                 = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_nFireParticleOnSequenceFrame = 0x0018; // int32
            static constexpr std::uintptr_t m_hitboxSetName                = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_materialGroupName            = 0x0028; // CUtlString
            static constexpr std::uintptr_t m_vecBodyGroups                = 0x0030; // CUtlVector<ParticlePreviewBodyGroup_t>
            static constexpr std::uintptr_t m_flPlaybackSpeed              = 0x0048; // float32
            static constexpr std::uintptr_t m_flParticleSimulationRate     = 0x004C; // float32
            static constexpr std::uintptr_t m_bShouldDrawHitboxes          = 0x0050; // bool
            static constexpr std::uintptr_t m_bShouldDrawAttachments       = 0x0051; // bool
            static constexpr std::uintptr_t m_bShouldDrawAttachmentNames   = 0x0052; // bool
            static constexpr std::uintptr_t m_bShouldDrawControlPointAxes  = 0x0053; // bool
            static constexpr std::uintptr_t m_bAnimationNonLooping         = 0x0054; // bool
            static constexpr std::uintptr_t m_bSequenceNameIsAnimClipPath  = 0x0055; // bool
            static constexpr std::uintptr_t m_vecPreviewGravity            = 0x0058; // Vector
        };

        // Construct Allowed
        struct ParticleControlPointDriver_t {
        public:
            static constexpr std::uintptr_t m_iControlPoint  = 0x0000; // ParticleParamID_t
            static constexpr std::uintptr_t m_iAttachType    = 0x0010; // ParticleAttachment_t
            static constexpr std::uintptr_t m_attachmentName = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_vecOffset      = 0x0020; // Vector
            static constexpr std::uintptr_t m_angOffset      = 0x002C; // QAngle
            static constexpr std::uintptr_t m_entityName     = 0x0038; // CUtlString
        };

        // Construct Allowed
        struct ParticleControlPointConfiguration_t {
        public:
            static constexpr std::uintptr_t m_name         = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_drivers      = 0x0008; // CUtlVector<ParticleControlPointDriver_t>
            static constexpr std::uintptr_t m_previewState = 0x0020; // ParticlePreviewState_t
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class IParticleSystemDefinition {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CParticleVisibilityInputs {
        public:
            static constexpr std::uintptr_t m_flCameraBias                = 0x0000; // float32
            static constexpr std::uintptr_t m_nCPin                       = 0x0004; // int32
            static constexpr std::uintptr_t m_flProxyRadius               = 0x0008; // float32
            static constexpr std::uintptr_t m_flInputMin                  = 0x000C; // float32
            static constexpr std::uintptr_t m_flInputMax                  = 0x0010; // float32
            static constexpr std::uintptr_t m_flInputPixelVisFade         = 0x0014; // float32
            static constexpr std::uintptr_t m_flNoPixelVisibilityFallback = 0x0018; // float32
            static constexpr std::uintptr_t m_flDistanceInputMin          = 0x001C; // float32
            static constexpr std::uintptr_t m_flDistanceInputMax          = 0x0020; // float32
            static constexpr std::uintptr_t m_flDotInputMin               = 0x0024; // float32
            static constexpr std::uintptr_t m_flDotInputMax               = 0x0028; // float32
            static constexpr std::uintptr_t m_bDotCPAngles                = 0x002C; // bool
            static constexpr std::uintptr_t m_bDotCameraAngles            = 0x002D; // bool
            static constexpr std::uintptr_t m_flAlphaScaleMin             = 0x0030; // float32
            static constexpr std::uintptr_t m_flAlphaScaleMax             = 0x0034; // float32
            static constexpr std::uintptr_t m_flRadiusScaleMin            = 0x0038; // float32
            static constexpr std::uintptr_t m_flRadiusScaleMax            = 0x003C; // float32
            static constexpr std::uintptr_t m_flRadiusScaleFOVBase        = 0x0040; // float32
            static constexpr std::uintptr_t m_bRightEye                   = 0x0044; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CPathParameters {
        public:
            static constexpr std::uintptr_t m_nStartControlPointNumber = 0x0000; // int32
            static constexpr std::uintptr_t m_nEndControlPointNumber   = 0x0004; // int32
            static constexpr std::uintptr_t m_nBulgeControl            = 0x0008; // int32
            static constexpr std::uintptr_t m_flBulge                  = 0x000C; // float32
            static constexpr std::uintptr_t m_flMidPoint               = 0x0010; // float32
            static constexpr std::uintptr_t m_vStartPointOffset        = 0x0014; // Vector
            static constexpr std::uintptr_t m_vMidPointOffset          = 0x0020; // Vector
            static constexpr std::uintptr_t m_vEndOffset               = 0x002C; // Vector
        };

        // Construct Allowed
        struct ParticleChildrenInfo_t {
        public:
            static constexpr std::uintptr_t m_ChildRef      = 0x0000; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flDelay       = 0x0008; // float32
            static constexpr std::uintptr_t m_bEndCap       = 0x000C; // bool
            static constexpr std::uintptr_t m_bDisableChild = 0x000D; // bool
            static constexpr std::uintptr_t m_nDetailLevel  = 0x0010; // ParticleDetailLevel_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct ControlPointReference_t {
        public:
            static constexpr std::uintptr_t m_controlPointNameString  = 0x0000; // int32
            static constexpr std::uintptr_t m_vOffsetFromControlPoint = 0x0004; // Vector
            static constexpr std::uintptr_t m_bOffsetInLocalSpace     = 0x0010; // bool
        };

        // Construct Allowed
        struct ModelReference_t {
        public:
            static constexpr std::uintptr_t m_model                        = 0x0000; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_flRelativeProbabilityOfSpawn = 0x0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct SequenceWeightedList_t {
        public:
            static constexpr std::uintptr_t m_nSequence        = 0x0000; // int32
            static constexpr std::uintptr_t m_flRelativeWeight = 0x0004; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct CollisionGroupContext_t {
        public:
            static constexpr std::uintptr_t m_nCollisionGroupNumber = 0x0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PointDefinition_t {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0x0000; // int32
            static constexpr std::uintptr_t m_bLocalCoords  = 0x0004; // bool
            static constexpr std::uintptr_t m_vOffset       = 0x0008; // Vector
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunction {
        public:
            static constexpr std::uintptr_t m_flOpStrength            = 0x0008; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOpEndCapState          = 0x0178; // ParticleEndcapMode_t
            static constexpr std::uintptr_t m_flOpStartFadeInTime     = 0x017C; // float32
            static constexpr std::uintptr_t m_flOpEndFadeInTime       = 0x0180; // float32
            static constexpr std::uintptr_t m_flOpStartFadeOutTime    = 0x0184; // float32
            static constexpr std::uintptr_t m_flOpEndFadeOutTime      = 0x0188; // float32
            static constexpr std::uintptr_t m_flOpFadeOscillatePeriod = 0x018C; // float32
            static constexpr std::uintptr_t m_bNormalizeToStopTime    = 0x0190; // bool
            static constexpr std::uintptr_t m_flOpTimeOffsetMin       = 0x0194; // float32
            static constexpr std::uintptr_t m_flOpTimeOffsetMax       = 0x0198; // float32
            static constexpr std::uintptr_t m_nOpTimeOffsetSeed       = 0x019C; // int32
            static constexpr std::uintptr_t m_nOpTimeScaleSeed        = 0x01A0; // int32
            static constexpr std::uintptr_t m_flOpTimeScaleMin        = 0x01A4; // float32
            static constexpr std::uintptr_t m_flOpTimeScaleMax        = 0x01A8; // float32
            static constexpr std::uintptr_t m_bDisableOperator        = 0x01AE; // bool
            static constexpr std::uintptr_t m_Notes                   = 0x01B0; // CUtlString
        };

        // Construct Allowed
        struct TextureControls_t {
        public:
            static constexpr std::uintptr_t m_flFinalTextureScaleU     = 0x0000; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureScaleV     = 0x0170; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureOffsetU    = 0x02E0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureOffsetV    = 0x0450; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFinalTextureUVRotation = 0x05C0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flZoomScale              = 0x0730; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDistortion             = 0x08A0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bRandomizeOffsets        = 0x0A10; // bool
            static constexpr std::uintptr_t m_bClampUVs                = 0x0A11; // bool
            static constexpr std::uintptr_t m_nPerParticleBlend        = 0x0A14; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleScale        = 0x0A18; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleOffsetU      = 0x0A1C; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleOffsetV      = 0x0A20; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleRotation     = 0x0A24; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleZoom         = 0x0A28; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleDistortion   = 0x0A2C; // SpriteCardPerParticleScale_t
        };

        // Construct Allowed
        struct TextureGroup_t {
        public:
            static constexpr std::uintptr_t m_bEnabled                    = 0x0000; // bool
            static constexpr std::uintptr_t m_bReplaceTextureWithGradient = 0x0001; // bool
            static constexpr std::uintptr_t m_hTexture                    = 0x0008; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Gradient                    = 0x0010; // CColorGradient
            static constexpr std::uintptr_t m_nTextureType                = 0x0028; // SpriteCardTextureType_t
            static constexpr std::uintptr_t m_nTextureChannels            = 0x002C; // SpriteCardTextureChannel_t
            static constexpr std::uintptr_t m_nTextureBlendMode           = 0x0030; // ParticleTextureLayerBlendType_t
            static constexpr std::uintptr_t m_flTextureBlend              = 0x0038; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_TextureControls             = 0x01A8; // TextureControls_t
        };

        // Construct Allowed
        class CReplicationParameters {
        public:
            static constexpr std::uintptr_t m_nReplicationMode         = 0x0000; // ParticleReplicationMode_t
            static constexpr std::uintptr_t m_bScaleChildParticleRadii = 0x0004; // bool
            static constexpr std::uintptr_t m_flMinRandomRadiusScale   = 0x0008; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxRandomRadiusScale   = 0x0178; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vMinRandomDisplacement   = 0x02E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vMaxRandomDisplacement   = 0x09A0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flModellingScale         = 0x1058; // CParticleCollectionFloatInput
        };

        // Construct Allowed
        struct FloatInputMaterialVariable_t {
        public:
            static constexpr std::uintptr_t m_strVariable = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_flInput     = 0x0008; // CParticleCollectionFloatInput
        };

        // Construct Allowed
        struct VecInputMaterialVariable_t {
        public:
            static constexpr std::uintptr_t m_strVariable = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_vecInput    = 0x0008; // CParticleCollectionVecInput
        };

        // Has VTable
        // Local Type Scope
        class CPulseExecCursor {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        class CPulse_BlackboardReference {
        public:
            static constexpr std::uintptr_t m_hBlackboardResource = 0x0000; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            static constexpr std::uintptr_t m_BlackboardResource  = 0x0008; // PulseSymbol_t
            static constexpr std::uintptr_t m_nNodeID             = 0x0018; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_NodeName            = 0x0020; // CGlobalSymbol
        };

        // Construct Allowed
        // Local Type Scope
        class CPulse_InvokeBinding {
        public:
            static constexpr std::uintptr_t m_RegisterMap     = 0x0000; // PulseRegisterMap_t
            static constexpr std::uintptr_t m_FuncName        = 0x0030; // PulseSymbol_t
            static constexpr std::uintptr_t m_nCellIndex      = 0x0040; // PulseRuntimeCellIndex_t
            static constexpr std::uintptr_t m_nSrcChunk       = 0x0044; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nSrcInstruction = 0x0048; // int32
        };

        // Construct Allowed
        // Local Type Scope
        class CPulse_CallInfo {
        public:
            static constexpr std::uintptr_t m_PortName        = 0x0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_nEditorNodeID   = 0x0010; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_RegisterMap     = 0x0018; // PulseRegisterMap_t
            static constexpr std::uintptr_t m_CallMethodID    = 0x0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_nSrcChunk       = 0x004C; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nSrcInstruction = 0x0050; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Base {
        public:
            static constexpr std::uintptr_t m_nEditorNodeID = 0x0008; // PulseDocNodeID_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseGraphDef {
        public:
            static constexpr std::uintptr_t m_DomainIdentifier     = 0x0008; // PulseSymbol_t
            static constexpr std::uintptr_t m_DomainSubType        = 0x0018; // CPulseValueFullType
            static constexpr std::uintptr_t m_ParentMapName        = 0x0030; // PulseSymbol_t
            static constexpr std::uintptr_t m_ParentXmlName        = 0x0040; // PulseSymbol_t
            static constexpr std::uintptr_t m_Chunks               = 0x0050; // CUtlVector<CPulse_Chunk*>
            static constexpr std::uintptr_t m_Cells                = 0x0068; // CUtlVector<CPulseCell_Base*>
            static constexpr std::uintptr_t m_Vars                 = 0x0080; // CUtlVector<CPulse_Variable>
            static constexpr std::uintptr_t m_PublicOutputs        = 0x0098; // CUtlVector<CPulse_PublicOutput>
            static constexpr std::uintptr_t m_InvokeBindings       = 0x00B0; // CUtlVector<CPulse_InvokeBinding*>
            static constexpr std::uintptr_t m_CallInfos            = 0x00C8; // CUtlVector<CPulse_CallInfo*>
            static constexpr std::uintptr_t m_Constants            = 0x00E0; // CUtlVector<CPulse_Constant>
            static constexpr std::uintptr_t m_DomainValues         = 0x00F8; // CUtlVector<CPulse_DomainValue>
            static constexpr std::uintptr_t m_BlackboardReferences = 0x0110; // CUtlVector<CPulse_BlackboardReference>
            static constexpr std::uintptr_t m_OutputConnections    = 0x0128; // CUtlVector<CPulse_OutputConnection*>
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePulseGraphInstance {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseArraylib {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseMathlib {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestScriptLib {
        public:
        };

        // Local Type Scope
        class CPulse_OutflowConnection {
        public:
            static constexpr std::uintptr_t m_SourceOutflowName  = 0x0000; // PulseSymbol_t
            static constexpr std::uintptr_t m_nDestChunk         = 0x0010; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_nInstruction       = 0x0014; // int32
            static constexpr std::uintptr_t m_OutflowRegisterMap = 0x0018; // PulseRegisterMap_t
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseNodeDynamicOutflows_t__DynamicOutflow_t {
        public:
            static constexpr std::uintptr_t m_OutflowID  = 0x0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_Connection = 0x0008; // CPulse_OutflowConnection
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseNodeDynamicOutflows_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0x0000; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_BaseLerp__CursorState_t {
        public:
            static constexpr std::uintptr_t m_StartTime = 0x0000; // GameTime_t
            static constexpr std::uintptr_t m_EndTime   = 0x0004; // GameTime_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nNextIndex = 0x0000; // int32
        };

        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_CycleShuffled__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_Shuffle      = 0x0000; // CUtlVectorFixedGrowable<uint8,8>
            static constexpr std::uintptr_t m_nNextShuffle = 0x0020; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_IntervalTimer__CursorState_t {
        public:
            static constexpr std::uintptr_t m_StartTime           = 0x0000; // GameTime_t
            static constexpr std::uintptr_t m_EndTime             = 0x0004; // GameTime_t
            static constexpr std::uintptr_t m_flWaitInterval      = 0x0008; // float32
            static constexpr std::uintptr_t m_flWaitIntervalHigh  = 0x000C; // float32
            static constexpr std::uintptr_t m_bCompleteOnNextWake = 0x0010; // bool
        };

        // Construct Allowed
        // Local Type Scope
        struct OutflowWithRequirements_t {
        public:
            static constexpr std::uintptr_t m_Connection             = 0x0000; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_DestinationFlowNodeID  = 0x0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_RequirementNodeIDs     = 0x0050; // CUtlVector<PulseDocNodeID_t>
            static constexpr std::uintptr_t m_nCursorStateBlockIndex = 0x0068; // CUtlVector<int32>
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseSelectorOutflowList_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0x0000; // CUtlVector<OutflowWithRequirements_t>
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CPulseCell_LimitCount__Criteria_t {
        public:
            static constexpr std::uintptr_t m_bLimitCountPasses = 0x0000; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_LimitCount__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nCurrentCount = 0x0000; // int32
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CPulseCell_IsRequirementValid__Criteria_t {
        public:
            static constexpr std::uintptr_t m_bIsValid = 0x0000; // bool
        };

        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Timeline__TimelineEvent_t {
        public:
            static constexpr std::uintptr_t m_flTimeFromPrevious = 0x0000; // float32
            static constexpr std::uintptr_t m_EventOutflow       = 0x0008; // CPulse_OutflowConnection
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseObservableBoolExpression_t {
        public:
            static constexpr std::uintptr_t m_EvaluateConnection                      = 0x0000; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_DependentObservableVars                 = 0x0048; // CUtlVector<PulseRuntimeVarIndex_t>
            static constexpr std::uintptr_t m_DependentObservableBlackboardReferences = 0x0060; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseCursorFuncs {
        public:
        };

        // Local Type Scope
        struct CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
        public:
            static constexpr std::uintptr_t m_TagName = 0x0000; // PulseSymbol_t
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
        class CParticleFunctionInitializer : public CParticleFunction {
        public:
            static constexpr std::uintptr_t m_nAssociatedEmitterIndex = 0x01D0; // int32
        };

        // Has VTable
        // Construct Allowed
        class CParticleSystemDefinition : public IParticleSystemDefinition {
        public:
            static constexpr std::uintptr_t m_nBehaviorVersion                        = 0x0008; // int32
            static constexpr std::uintptr_t m_PreEmissionOperators                    = 0x0010; // CUtlVector<CParticleFunctionPreEmission*>
            static constexpr std::uintptr_t m_Emitters                                = 0x0028; // CUtlVector<CParticleFunctionEmitter*>
            static constexpr std::uintptr_t m_Initializers                            = 0x0040; // CUtlVector<CParticleFunctionInitializer*>
            static constexpr std::uintptr_t m_Operators                               = 0x0058; // CUtlVector<CParticleFunctionOperator*>
            static constexpr std::uintptr_t m_ForceGenerators                         = 0x0070; // CUtlVector<CParticleFunctionForce*>
            static constexpr std::uintptr_t m_Constraints                             = 0x0088; // CUtlVector<CParticleFunctionConstraint*>
            static constexpr std::uintptr_t m_Renderers                               = 0x00A0; // CUtlVector<CParticleFunctionRenderer*>
            static constexpr std::uintptr_t m_Children                                = 0x00B8; // CUtlVector<ParticleChildrenInfo_t>
            static constexpr std::uintptr_t m_nFirstMultipleOverride_BackwardCompat   = 0x0178; // int32
            static constexpr std::uintptr_t m_nInitialParticles                       = 0x0258; // int32
            static constexpr std::uintptr_t m_nMaxParticles                           = 0x025C; // int32
            static constexpr std::uintptr_t m_nGroupID                                = 0x0260; // int32
            static constexpr std::uintptr_t m_BoundingBoxMin                          = 0x0264; // Vector
            static constexpr std::uintptr_t m_BoundingBoxMax                          = 0x0270; // Vector
            static constexpr std::uintptr_t m_flDepthSortBias                         = 0x027C; // float32
            static constexpr std::uintptr_t m_nSortOverridePositionCP                 = 0x0280; // int32
            static constexpr std::uintptr_t m_bInfiniteBounds                         = 0x0284; // bool
            static constexpr std::uintptr_t m_bEnableNamedValues                      = 0x0285; // bool
            static constexpr std::uintptr_t m_NamedValueDomain                        = 0x0288; // CUtlString
            static constexpr std::uintptr_t m_NamedValueLocals                        = 0x0290; // CUtlVector<ParticleNamedValueSource_t*>
            static constexpr std::uintptr_t m_ConstantColor                           = 0x02A8; // Color
            static constexpr std::uintptr_t m_ConstantNormal                          = 0x02AC; // Vector
            static constexpr std::uintptr_t m_flConstantRadius                        = 0x02B8; // float32
            static constexpr std::uintptr_t m_flConstantRotation                      = 0x02BC; // float32
            static constexpr std::uintptr_t m_flConstantRotationSpeed                 = 0x02C0; // float32
            static constexpr std::uintptr_t m_flConstantLifespan                      = 0x02C4; // float32
            static constexpr std::uintptr_t m_nConstantSequenceNumber                 = 0x02C8; // int32
            static constexpr std::uintptr_t m_nConstantSequenceNumber1                = 0x02CC; // int32
            static constexpr std::uintptr_t m_nSnapshotControlPoint                   = 0x02D0; // int32
            static constexpr std::uintptr_t m_hSnapshot                               = 0x02D8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_pszCullReplacementName                  = 0x02E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flCullRadius                            = 0x02E8; // float32
            static constexpr std::uintptr_t m_flCullFillCost                          = 0x02EC; // float32
            static constexpr std::uintptr_t m_nCullControlPoint                       = 0x02F0; // int32
            static constexpr std::uintptr_t m_hFallback                               = 0x02F8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nFallbackMaxCount                       = 0x0300; // int32
            static constexpr std::uintptr_t m_hLowViolenceDef                         = 0x0308; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_hReferenceReplacement                   = 0x0310; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flPreSimulationTime                     = 0x0318; // float32
            static constexpr std::uintptr_t m_flStopSimulationAfterTime               = 0x031C; // float32
            static constexpr std::uintptr_t m_flMaximumTimeStep                       = 0x0320; // float32
            static constexpr std::uintptr_t m_flMaximumSimTime                        = 0x0324; // float32
            static constexpr std::uintptr_t m_flMinimumSimTime                        = 0x0328; // float32
            static constexpr std::uintptr_t m_flMinimumTimeStep                       = 0x032C; // float32
            static constexpr std::uintptr_t m_nMinimumFrames                          = 0x0330; // int32
            static constexpr std::uintptr_t m_nMinCPULevel                            = 0x0334; // int32
            static constexpr std::uintptr_t m_nMinGPULevel                            = 0x0338; // int32
            static constexpr std::uintptr_t m_flNoDrawTimeToGoToSleep                 = 0x033C; // float32
            static constexpr std::uintptr_t m_flMaxDrawDistance                       = 0x0340; // float32
            static constexpr std::uintptr_t m_flStartFadeDistance                     = 0x0344; // float32
            static constexpr std::uintptr_t m_flMaxCreationDistance                   = 0x0348; // float32
            static constexpr std::uintptr_t m_nAggregationMinAvailableParticles       = 0x034C; // int32
            static constexpr std::uintptr_t m_flAggregateRadius                       = 0x0350; // float32
            static constexpr std::uintptr_t m_bShouldBatch                            = 0x0354; // bool
            static constexpr std::uintptr_t m_bShouldHitboxesFallbackToRenderBounds   = 0x0355; // bool
            static constexpr std::uintptr_t m_bShouldHitboxesFallbackToSnapshot       = 0x0356; // bool
            static constexpr std::uintptr_t m_bShouldHitboxesFallbackToCollisionHulls = 0x0357; // bool
            static constexpr std::uintptr_t m_nViewModelEffect                        = 0x0358; // InheritableBoolType_t
            static constexpr std::uintptr_t m_bScreenSpaceEffect                      = 0x035C; // bool
            static constexpr std::uintptr_t m_pszTargetLayerID                        = 0x0360; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nSkipRenderControlPoint                 = 0x0368; // int32
            static constexpr std::uintptr_t m_nAllowRenderControlPoint                = 0x036C; // int32
            static constexpr std::uintptr_t m_bShouldSort                             = 0x0370; // bool
            static constexpr std::uintptr_t m_controlPointConfigurations              = 0x03B8; // CUtlVector<ParticleControlPointConfiguration_t>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class PointDefinitionWithTimeValues_t : public PointDefinition_t {
        public:
            static constexpr std::uintptr_t m_flTimeDuration = 0x0014; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionEmitter : public CParticleFunction {
        public:
            static constexpr std::uintptr_t m_nEmitterIndex = 0x01D0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateOnModel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_modelInput                        = 0x01D8; // CParticleModelInput
            static constexpr std::uintptr_t m_transformInput                    = 0x0238; // CParticleTransformInput
            static constexpr std::uintptr_t m_nForceInModel                     = 0x02A0; // int32
            static constexpr std::uintptr_t m_bScaleToVolume                    = 0x02A4; // bool
            static constexpr std::uintptr_t m_bEvenDistribution                 = 0x02A5; // bool
            static constexpr std::uintptr_t m_nDesiredHitbox                    = 0x02A8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nHitboxValueFromControlPointIndex = 0x0418; // int32
            static constexpr std::uintptr_t m_vecHitBoxScale                    = 0x0420; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flBoneVelocity                    = 0x0AD8; // float32
            static constexpr std::uintptr_t m_flMaxBoneVelocity                 = 0x0ADC; // float32
            static constexpr std::uintptr_t m_vecDirectionBias                  = 0x0AE0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_HitboxSetName                     = 0x1198; // char[128]
            static constexpr std::uintptr_t m_bLocalCoords                      = 0x1218; // bool
            static constexpr std::uintptr_t m_bUseBones                         = 0x1219; // bool
            static constexpr std::uintptr_t m_bUseMesh                          = 0x121A; // bool
            static constexpr std::uintptr_t m_flShellSize                       = 0x1220; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionOperator : public CParticleFunction {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionForce : public CParticleFunction {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionConstraint : public CParticleFunction {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionRenderer : public CParticleFunction {
        public:
            static constexpr std::uintptr_t VisibilityInputs         = 0x01D0; // CParticleVisibilityInputs
            static constexpr std::uintptr_t m_bCannotBeRefracted     = 0x0218; // bool
            static constexpr std::uintptr_t m_bSkipRenderingOnMobile = 0x0219; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bPerParticleCenter                 = 0x01D8; // bool
            static constexpr std::uintptr_t m_nControlPointNumber                = 0x01DC; // int32
            static constexpr std::uintptr_t m_vecPosition                        = 0x01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecFwd                             = 0x0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_fSpeedMin                          = 0x0F50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                          = 0x10C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecLocalCoordinateSystemSpeedScale = 0x1230; // Vector
            static constexpr std::uintptr_t m_bIgnoreDelta                       = 0x123D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_QuantizeFloat : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0x0348; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PositionLock : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput   = 0x01D0; // CParticleTransformInput
            static constexpr std::uintptr_t m_flStartTime_min  = 0x0238; // float32
            static constexpr std::uintptr_t m_flStartTime_max  = 0x023C; // float32
            static constexpr std::uintptr_t m_flStartTime_exp  = 0x0240; // float32
            static constexpr std::uintptr_t m_flEndTime_min    = 0x0244; // float32
            static constexpr std::uintptr_t m_flEndTime_max    = 0x0248; // float32
            static constexpr std::uintptr_t m_flEndTime_exp    = 0x024C; // float32
            static constexpr std::uintptr_t m_flRange          = 0x0250; // float32
            static constexpr std::uintptr_t m_flRangeBias      = 0x0258; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flJumpThreshold  = 0x03C8; // float32
            static constexpr std::uintptr_t m_flPrevPosScale   = 0x03CC; // float32
            static constexpr std::uintptr_t m_bLockRot         = 0x03D0; // bool
            static constexpr std::uintptr_t m_vecScale         = 0x03D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nFieldOutput     = 0x0A90; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputPrev = 0x0A94; // ParticleAttributeIndex_t
        };

        // Local Type Scope
        class SignatureOutflow_Continue : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBaseRendererSource2 : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRadiusScale                  = 0x0220; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                   = 0x0390; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flRollScale                    = 0x0500; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nAlpha2Field                   = 0x0670; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale                  = 0x0678; // CParticleCollectionRendererVecInput
            static constexpr std::uintptr_t m_nColorBlendType                = 0x0D30; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_nShaderType                    = 0x0D34; // SpriteCardShaderType_t
            static constexpr std::uintptr_t m_strShaderOverride              = 0x0D38; // CUtlString
            static constexpr std::uintptr_t m_flCenterXOffset                = 0x0D40; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flCenterYOffset                = 0x0EB0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flBumpStrength                 = 0x1020; // float32
            static constexpr std::uintptr_t m_nCropTextureOverride           = 0x1024; // ParticleSequenceCropOverride_t
            static constexpr std::uintptr_t m_vecTexturesInput               = 0x1028; // CUtlLeanVector<TextureGroup_t>
            static constexpr std::uintptr_t m_flAnimationRate                = 0x1038; // float32
            static constexpr std::uintptr_t m_nAnimationType                 = 0x103C; // AnimationType_t
            static constexpr std::uintptr_t m_bAnimateInFPS                  = 0x1040; // bool
            static constexpr std::uintptr_t m_flMotionVectorScaleU           = 0x1048; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flMotionVectorScaleV           = 0x11B8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flSelfIllumAmount              = 0x1328; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDiffuseAmount                = 0x1498; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDiffuseClamp                 = 0x1608; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nLightingControlPoint          = 0x1778; // int32
            static constexpr std::uintptr_t m_nOutputBlendMode               = 0x177C; // ParticleOutputBlendMode_t
            static constexpr std::uintptr_t m_bGammaCorrectVertexColors      = 0x1780; // bool
            static constexpr std::uintptr_t m_bSaturateColorPreAlphaBlend    = 0x1781; // bool
            static constexpr std::uintptr_t m_flAddSelfAmount                = 0x1788; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDesaturation                 = 0x18F8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flOverbrightFactor             = 0x1A68; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nHSVShiftControlPoint          = 0x1BD8; // int32
            static constexpr std::uintptr_t m_nFogType                       = 0x1BDC; // ParticleFogType_t
            static constexpr std::uintptr_t m_flFogAmount                    = 0x1BE0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bTintByFOW                     = 0x1D50; // bool
            static constexpr std::uintptr_t m_bTintByGlobalLight             = 0x1D51; // bool
            static constexpr std::uintptr_t m_nPerParticleAlphaReference     = 0x1D54; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nPerParticleAlphaRefWindow     = 0x1D58; // SpriteCardPerParticleScale_t
            static constexpr std::uintptr_t m_nAlphaReferenceType            = 0x1D5C; // ParticleAlphaReferenceType_t
            static constexpr std::uintptr_t m_flAlphaReferenceSoftness       = 0x1D60; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flSourceAlphaValueToMapToZero  = 0x1ED0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flSourceAlphaValueToMapToOne   = 0x2040; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bRefract                       = 0x21B0; // bool
            static constexpr std::uintptr_t m_bRefractSolid                  = 0x21B1; // bool
            static constexpr std::uintptr_t m_flRefractAmount                = 0x21B8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nRefractBlurRadius             = 0x2328; // int32
            static constexpr std::uintptr_t m_nRefractBlurType               = 0x232C; // BlurFilterType_t
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsBloomPass  = 0x2330; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsWaterPass  = 0x2331; // bool
            static constexpr std::uintptr_t m_bUseMixedResolutionRendering   = 0x2332; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffecsGameOverlay = 0x2333; // bool
            static constexpr std::uintptr_t m_stencilTestID                  = 0x2334; // char[128]
            static constexpr std::uintptr_t m_bStencilTestExclude            = 0x23B4; // bool
            static constexpr std::uintptr_t m_stencilWriteID                 = 0x23B5; // char[128]
            static constexpr std::uintptr_t m_bWriteStencilOnDepthPass       = 0x2435; // bool
            static constexpr std::uintptr_t m_bWriteStencilOnDepthFail       = 0x2436; // bool
            static constexpr std::uintptr_t m_bReverseZBuffering             = 0x2437; // bool
            static constexpr std::uintptr_t m_bDisableZBuffering             = 0x2438; // bool
            static constexpr std::uintptr_t m_nFeatheringMode                = 0x243C; // ParticleDepthFeatheringMode_t
            static constexpr std::uintptr_t m_flFeatheringMinDist            = 0x2440; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFeatheringMaxDist            = 0x25B0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFeatheringFilter             = 0x2720; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flFeatheringDepthMapFilter     = 0x2890; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flDepthBias                    = 0x2A00; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nSortMethod                    = 0x2B70; // ParticleSortingChoiceList_t
            static constexpr std::uintptr_t m_bBlendFramesSeq0               = 0x2B74; // bool
            static constexpr std::uintptr_t m_bMaxLuminanceBlendingSequence0 = 0x2B75; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderCables : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRadiusScale                 = 0x0220; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                  = 0x0390; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecColorScale                 = 0x0500; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType               = 0x0BB8; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_hMaterial                     = 0x0BC0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nTextureRepetitionMode        = 0x0BC8; // TextureRepetitionMode_t
            static constexpr std::uintptr_t m_flTextureRepeatsPerSegment    = 0x0BD0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flTextureRepeatsCircumference = 0x0D40; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flColorMapOffsetV             = 0x0EB0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flColorMapOffsetU             = 0x1020; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flNormalMapOffsetV            = 0x1190; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flNormalMapOffsetU            = 0x1300; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDrawCableCaps                = 0x1470; // bool
            static constexpr std::uintptr_t m_flCapRoundness                = 0x1474; // float32
            static constexpr std::uintptr_t m_flCapOffsetAmount             = 0x1478; // float32
            static constexpr std::uintptr_t m_flTessScale                   = 0x147C; // float32
            static constexpr std::uintptr_t m_nMinTesselation               = 0x1480; // int32
            static constexpr std::uintptr_t m_nMaxTesselation               = 0x1484; // int32
            static constexpr std::uintptr_t m_nRoundness                    = 0x1488; // int32
            static constexpr std::uintptr_t m_nForceRoundnessFixed          = 0x148C; // bool
            static constexpr std::uintptr_t m_LightingTransform             = 0x1490; // CParticleTransformInput
            static constexpr std::uintptr_t m_MaterialFloatVars             = 0x14F8; // CUtlLeanVector<FloatInputMaterialVariable_t>
            static constexpr std::uintptr_t m_MaterialVecVars               = 0x1518; // CUtlLeanVector<VecInputMaterialVariable_t>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeOutSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeOutTime = 0x01D0; // float32
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_IsRequirementValid : public CPulseCell_BaseRequirement {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSetMethod     = 0x01D0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_TransformInput = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0x0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0x0244; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0x0248; // float32
            static constexpr std::uintptr_t m_flOutputMin    = 0x024C; // float32
            static constexpr std::uintptr_t m_flOutputMax    = 0x0250; // float32
            static constexpr std::uintptr_t m_flRadius       = 0x0254; // float32
        };

        // Local Type Scope
        class CPulse_ResumePoint : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_fMinDistance     = 0x01D0; // float32
            static constexpr std::uintptr_t m_flMaxDistance0   = 0x01D4; // float32
            static constexpr std::uintptr_t m_flMaxDistanceMid = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMaxDistance1   = 0x01DC; // float32
            static constexpr std::uintptr_t m_PathParameters   = 0x01E0; // CPathParameters
            static constexpr std::uintptr_t m_flTravelTime     = 0x0220; // float32
            static constexpr std::uintptr_t m_nFieldScale      = 0x0224; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nManualTField    = 0x0228; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TimeVaryingForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flStartLerpTime = 0x01E0; // float32
            static constexpr std::uintptr_t m_StartingForce   = 0x01E4; // Vector
            static constexpr std::uintptr_t m_flEndLerpTime   = 0x01F0; // float32
            static constexpr std::uintptr_t m_EndingForce     = 0x01F4; // Vector
        };

        // Local Type Scope
        class SignatureOutflow_Resume : public CPulse_ResumePoint {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseFlow : public CPulseCell_Base {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_nCP                          = 0x01D0; // int32
            static constexpr std::uintptr_t m_vecCpOffset                  = 0x01D4; // Vector
            static constexpr std::uintptr_t m_nCollisionMode               = 0x01E0; // ParticleCollisionMode_t
            static constexpr std::uintptr_t m_nCollisionModeMin            = 0x01E4; // ParticleCollisionMode_t
            static constexpr std::uintptr_t m_nTraceSet                    = 0x01E8; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_CollisionGroupName           = 0x01EC; // char[128]
            static constexpr std::uintptr_t m_bWorldOnly                   = 0x026C; // bool
            static constexpr std::uintptr_t m_bBrushOnly                   = 0x026D; // bool
            static constexpr std::uintptr_t m_bIncludeWater                = 0x026E; // bool
            static constexpr std::uintptr_t m_nIgnoreCP                    = 0x0270; // int32
            static constexpr std::uintptr_t m_flCpMovementTolerance        = 0x0274; // float32
            static constexpr std::uintptr_t m_flRetestRate                 = 0x0278; // float32
            static constexpr std::uintptr_t m_flTraceTolerance             = 0x027C; // float32
            static constexpr std::uintptr_t m_flCollisionConfirmationSpeed = 0x0280; // float32
            static constexpr std::uintptr_t m_nMaxTracesPerFrame           = 0x0284; // float32
            static constexpr std::uintptr_t m_flRadiusScale                = 0x0288; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flBounceAmount               = 0x03F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSlideAmount                = 0x0568; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRandomDirScale             = 0x06D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bDecayBounce                 = 0x0848; // bool
            static constexpr std::uintptr_t m_bKillonContact               = 0x0849; // bool
            static constexpr std::uintptr_t m_flMinSpeed                   = 0x084C; // float32
            static constexpr std::uintptr_t m_bSetNormal                   = 0x0850; // bool
            static constexpr std::uintptr_t m_nStickOnCollisionField       = 0x0854; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flStopSpeed                  = 0x0858; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nEntityStickDataField        = 0x09C8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nEntityStickNormalField      = 0x09CC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_EntryChunk  = 0x0048; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_RegisterMap = 0x0050; // PulseRegisterMap_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockPoints : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nMinCol       = 0x01D0; // int32
            static constexpr std::uintptr_t m_nMaxCol       = 0x01D4; // int32
            static constexpr std::uintptr_t m_nMinRow       = 0x01D8; // int32
            static constexpr std::uintptr_t m_nMaxRow       = 0x01DC; // int32
            static constexpr std::uintptr_t m_nControlPoint = 0x01E0; // int32
            static constexpr std::uintptr_t m_flBlendValue  = 0x01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_MethodName  = 0x0080; // PulseSymbol_t
            static constexpr std::uintptr_t m_Description = 0x0090; // CUtlString
            static constexpr std::uintptr_t m_bIsPublic   = 0x0098; // bool
            static constexpr std::uintptr_t m_ReturnType  = 0x00A0; // CPulseValueFullType
            static constexpr std::uintptr_t m_Args        = 0x00B8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainDistance : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_fMinDistance        = 0x01D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_fMaxDistance        = 0x0340; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nControlPointNumber = 0x04B0; // int32
            static constexpr std::uintptr_t m_CenterOffset        = 0x04B4; // Vector
            static constexpr std::uintptr_t m_bGlobalCenter       = 0x04C0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputMin  = 0x01D4; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flAParm       = 0x01D8; // float32
            static constexpr std::uintptr_t m_flBParm       = 0x01DC; // float32
            static constexpr std::uintptr_t m_flCParm       = 0x01E0; // float32
            static constexpr std::uintptr_t m_flDParm       = 0x01E4; // float32
            static constexpr std::uintptr_t m_flScale       = 0x01E8; // float32
            static constexpr std::uintptr_t m_flSpeedMin    = 0x01EC; // float32
            static constexpr std::uintptr_t m_flSpeedMax    = 0x01F0; // float32
            static constexpr std::uintptr_t m_nBaseCP       = 0x01F4; // int32
            static constexpr std::uintptr_t m_bUniformSpeed = 0x01F8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_ObservableVariableListener : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_nBlackboardReference = 0x0080; // PulseRuntimeBlackboardReferenceIndex_t
            static constexpr std::uintptr_t m_bSelfReference       = 0x0082; // bool
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
        class CPulseCell_BaseValue : public CPulseCell_Base {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nExpression       = 0x01D8; // VectorExpressionType_t
            static constexpr std::uintptr_t m_vInput1           = 0x01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2           = 0x0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flLerp            = 0x0F50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField      = 0x10C0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0x10C4; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput = 0x10C8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_OutputIndex = 0x0048; // PulseRuntimeOutputIndex_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Timeline : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_TimelineEvents        = 0x0048; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            static constexpr std::uintptr_t m_bWaitForChildOutflows = 0x0060; // bool
            static constexpr std::uintptr_t m_OnFinished            = 0x0068; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled            = 0x00B0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0x01E8; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_UnyieldResume = 0x0048; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0x0048; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MaxVelocity : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMaxVelocity    = 0x01D0; // float32
            static constexpr std::uintptr_t m_flMinVelocity    = 0x01D4; // float32
            static constexpr std::uintptr_t m_nOverrideCP      = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOverrideCPField = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0x0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0x0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PlanarConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_PointOnPlane          = 0x01D0; // Vector
            static constexpr std::uintptr_t m_PlaneNormal           = 0x01DC; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber   = 0x01E8; // int32
            static constexpr std::uintptr_t m_bGlobalOrigin         = 0x01EC; // bool
            static constexpr std::uintptr_t m_bGlobalNormal         = 0x01ED; // bool
            static constexpr std::uintptr_t m_flRadiusScale         = 0x01F0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaximumDistanceToCP = 0x0360; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bUseOldCode           = 0x04D0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DampenToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_flRange             = 0x01D4; // float32
            static constexpr std::uintptr_t m_flScale             = 0x01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DecayOffscreen : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flOffscreenTime = 0x01D0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_nAttributeToWrite   = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP       = 0x01D8; // int32
            static constexpr std::uintptr_t m_flInterpolation     = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecScale            = 0x0350; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flBoundaryDampening = 0x0A08; // float32
            static constexpr std::uintptr_t m_bSetVelocity        = 0x0A0C; // bool
            static constexpr std::uintptr_t m_bLockToSurface      = 0x0A0D; // bool
            static constexpr std::uintptr_t m_flGridSpacing       = 0x0A10; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ModelCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_bBoundBox           = 0x01D4; // bool
            static constexpr std::uintptr_t m_bCullOutside        = 0x01D5; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0x01D6; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0x01D7; // char[128]
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOverrideCP         = 0x01DC; // int32
            static constexpr std::uintptr_t m_nDensity            = 0x01E0; // int32
            static constexpr std::uintptr_t m_flInitialRadius     = 0x01E4; // float32
            static constexpr std::uintptr_t m_flInitialSpeedMin   = 0x01E8; // float32
            static constexpr std::uintptr_t m_flInitialSpeedMax   = 0x01EC; // float32
            static constexpr std::uintptr_t m_bUseParticleCount   = 0x01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Unknown : public CPulseCell_Base {
        public:
            static constexpr std::uintptr_t m_UnknownKeys = 0x0048; // KeyValues3
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRotateRateDegrees = 0x0220; // float32
            static constexpr std::uintptr_t m_flForwardDegrees    = 0x0224; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_WaitForObservable : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Condition = 0x0048; // PulseObservableBoolExpression_t
            static constexpr std::uintptr_t m_OnTrue    = 0x00C0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flVelocityScale     = 0x01D8; // float32
            static constexpr std::uintptr_t m_flIncrement         = 0x01DC; // float32
            static constexpr std::uintptr_t m_bRandomDistribution = 0x01E0; // bool
            static constexpr std::uintptr_t m_nRandomSeed         = 0x01E4; // int32
            static constexpr std::uintptr_t m_bSubFrame           = 0x01E8; // bool
            static constexpr std::uintptr_t m_bSetRopeSegmentID   = 0x01E9; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_Curve : public CPulseCell_BaseValue {
        public:
            static constexpr std::uintptr_t m_Curve = 0x0048; // CPiecewiseCurve
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_FireCursors : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Outflows              = 0x0048; // CUtlVector<CPulse_OutflowConnection>
            static constexpr std::uintptr_t m_bWaitForChildOutflows = 0x0060; // bool
            static constexpr std::uintptr_t m_OnFinished            = 0x0068; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled            = 0x00B0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderClothForce : public CParticleFunctionRenderer {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderOmni2Light : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nLightType           = 0x0220; // ParticleOmni2LightTypeChoiceList_t
            static constexpr std::uintptr_t m_vColorBlend          = 0x0228; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType      = 0x08E0; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_nBrightnessUnit      = 0x08E4; // ParticleLightUnitChoiceList_t
            static constexpr std::uintptr_t m_flBrightnessLumens   = 0x08E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flBrightnessCandelas = 0x0A58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bCastShadows         = 0x0BC8; // bool
            static constexpr std::uintptr_t m_bFog                 = 0x0BC9; // bool
            static constexpr std::uintptr_t m_flFogScale           = 0x0BD0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLuminaireRadius    = 0x0D40; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSkirt              = 0x0EB0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRange              = 0x1020; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInnerConeAngle     = 0x1190; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOuterConeAngle     = 0x1300; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_hLightCookie         = 0x1470; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_bSphericalCookie     = 0x1478; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeStart = 0x01D0; // float32
            static constexpr std::uintptr_t m_flFadeEnd   = 0x01D4; // float32
            static constexpr std::uintptr_t m_bCPPairs    = 0x01D8; // bool
            static constexpr std::uintptr_t m_PathParams  = 0x01E0; // CPathParameters
        };

        // Has VTable
        // Local Type Scope
        class CParticleCollectionBindingInstance : public CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_Gradient : public CPulseCell_BaseValue {
        public:
            static constexpr std::uintptr_t m_Gradient = 0x0048; // CColorGradient
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ShapeMatchingConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flShapeRestorationTime = 0x01D0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_IntervalTimer : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Completed  = 0x0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnInterval = 0x0090; // SignatureOutflow_Continue
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_LimitCount : public CPulseCell_BaseRequirement {
        public:
            static constexpr std::uintptr_t m_nLimitCount = 0x0048; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_InlineNodeSkipSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_nFlowNodeID = 0x0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_bAnd        = 0x004C; // bool
            static constexpr std::uintptr_t m_PassOutflow = 0x0050; // PulseSelectorOutflowList_t
            static constexpr std::uintptr_t m_FailOutflow = 0x0068; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_PickBestOutflowSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_nCheckType  = 0x0048; // PulseBestOutflowRules_t
            static constexpr std::uintptr_t m_OutflowList = 0x0050; // PulseSelectorOutflowList_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InterpolateRadius : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flStartTime   = 0x01D0; // float32
            static constexpr std::uintptr_t m_flEndTime     = 0x01D4; // float32
            static constexpr std::uintptr_t m_flStartScale  = 0x01D8; // float32
            static constexpr std::uintptr_t m_flEndScale    = 0x01DC; // float32
            static constexpr std::uintptr_t m_bEaseInAndOut = 0x01E0; // bool
            static constexpr std::uintptr_t m_flBias        = 0x01E4; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseState : public CPulseCell_BaseYieldingInflow {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_nCursorsAllowedToWait = 0x0048; // int32
            static constexpr std::uintptr_t m_WaitComplete          = 0x0050; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InheritFromParentParticles : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale             = 0x01D0; // float32
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement          = 0x01D8; // int32
            static constexpr std::uintptr_t m_bRandomDistribution = 0x01DC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CollideWithSelf : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flRadiusScale  = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMinimumSpeed = 0x0340; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint = 0x01D4; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0x01DC; // int32
            static constexpr std::uintptr_t m_bReverse           = 0x01E0; // bool
            static constexpr std::uintptr_t m_bSetOrientation    = 0x01E1; // bool
            static constexpr std::uintptr_t m_nOrientationMode   = 0x01E4; // ParticleOrientationSetMode_t
            static constexpr std::uintptr_t m_nSetParent         = 0x01E8; // ParticleParentSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0x01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_fMinDistance  = 0x01D0; // float32
            static constexpr std::uintptr_t m_flMaxDistance = 0x01D4; // float32
            static constexpr std::uintptr_t m_flTimeScale   = 0x01D8; // float32
            static constexpr std::uintptr_t m_bLoopedPath   = 0x01DC; // bool
            static constexpr std::uintptr_t m_pointList     = 0x01E0; // CUtlVector<PointDefinitionWithTimeValues_t>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WaterImpulseRenderer : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_vecPos        = 0x0220; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flRadius      = 0x08D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMagnitude   = 0x0A48; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flShape       = 0x0BB8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flWindSpeed   = 0x0D28; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flWobble      = 0x0E98; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bIsRadialWind = 0x1008; // bool
            static constexpr std::uintptr_t m_nEventType    = 0x100C; // EventTypeSelection_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput  = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nComponent   = 0x01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_BoxConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_vecMin            = 0x01D0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecMax            = 0x0888; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nCP               = 0x0F40; // int32
            static constexpr std::uintptr_t m_bLocalSpace       = 0x0F44; // bool
            static constexpr std::uintptr_t m_bAccountForRadius = 0x0F45; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomRadius : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flRadiusMin          = 0x01D8; // float32
            static constexpr std::uintptr_t m_flRadiusMax          = 0x01DC; // float32
            static constexpr std::uintptr_t m_flRadiusRandExponent = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flRestLength           = 0x01D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMinDistance          = 0x0340; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxDistance          = 0x04B0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAdjustmentScale      = 0x0620; // float32
            static constexpr std::uintptr_t m_flInitialRestingLength = 0x0628; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flRestLength    = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMinDistance   = 0x0340; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxDistance   = 0x04B0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRestingLength = 0x0620; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecAnchorVector = 0x0790; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConstrainLineLength : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flMinDistance = 0x01D0; // float32
            static constexpr std::uintptr_t m_flMaxDistance = 0x01D4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMin        = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMax        = 0x01DC; // float32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nComponent   = 0x01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RingWave : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput      = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_flParticlesPerOrbit = 0x0240; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInitialRadius     = 0x03B0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flThickness         = 0x0520; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialSpeedMin   = 0x0690; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInitialSpeedMax   = 0x0800; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRoll              = 0x0970; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flPitch             = 0x0AE0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flYaw               = 0x0C50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bEvenDistribution   = 0x0DC0; // bool
            static constexpr std::uintptr_t m_bXYVelocityOnly     = 0x0DC1; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nComponent1        = 0x01D8; // int32
            static constexpr std::uintptr_t m_nComponent2        = 0x01DC; // int32
            static constexpr std::uintptr_t m_TransformInput     = 0x01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_flParticleDensity  = 0x0248; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOffset           = 0x03B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadius1          = 0x0528; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadius2          = 0x0698; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bUseCount          = 0x0808; // bool
            static constexpr std::uintptr_t m_bUseLocalCoords    = 0x0809; // bool
            static constexpr std::uintptr_t m_bOffsetExistingPos = 0x080A; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ScreenSpacePositionOfTarget : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecTargetPosition   = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bOututBehindness    = 0x0890; // bool
            static constexpr std::uintptr_t m_nBehindFieldOutput  = 0x0894; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flBehindOutputRemap = 0x0898; // CParticleRemapFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_nScaleCP            = 0x01DC; // int32
            static constexpr std::uintptr_t m_nComponent          = 0x01E0; // int32
            static constexpr std::uintptr_t m_fRadCentCore        = 0x01E4; // float32
            static constexpr std::uintptr_t m_fRadPerPoint        = 0x01E8; // float32
            static constexpr std::uintptr_t m_fRadPerPointTo      = 0x01EC; // float32
            static constexpr std::uintptr_t m_fpointAngle         = 0x01F0; // float32
            static constexpr std::uintptr_t m_fsizeOverall        = 0x01F4; // float32
            static constexpr std::uintptr_t m_fRadBias            = 0x01F8; // float32
            static constexpr std::uintptr_t m_fMinRad             = 0x01FC; // float32
            static constexpr std::uintptr_t m_fDistBias           = 0x0200; // float32
            static constexpr std::uintptr_t m_bUseLocalCoords     = 0x0204; // bool
            static constexpr std::uintptr_t m_bUseWithContEmit    = 0x0205; // bool
            static constexpr std::uintptr_t m_bUseOrigRadius      = 0x0206; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bUseBones             = 0x01D8; // bool
            static constexpr std::uintptr_t m_bForceZ               = 0x01D9; // bool
            static constexpr std::uintptr_t m_nControlPointNumber   = 0x01DC; // int32
            static constexpr std::uintptr_t m_nHeightCP             = 0x01E0; // int32
            static constexpr std::uintptr_t m_bUseWaterHeight       = 0x01E4; // bool
            static constexpr std::uintptr_t m_flDesiredHeight       = 0x01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecHitBoxScale        = 0x0358; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecDirectionBias      = 0x0A10; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nBiasType             = 0x10C8; // ParticleHitboxBiasType_t
            static constexpr std::uintptr_t m_bLocalCoords          = 0x10CC; // bool
            static constexpr std::uintptr_t m_bPreferMovingBoxes    = 0x10CD; // bool
            static constexpr std::uintptr_t m_HitboxSetName         = 0x10CE; // char[128]
            static constexpr std::uintptr_t m_flHitboxVelocityScale = 0x1150; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flMaxBoneVelocity     = 0x12C0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber      = 0x01D8; // int32
            static constexpr std::uintptr_t m_nDesiredHitbox           = 0x01DC; // int32
            static constexpr std::uintptr_t m_vecHitBoxScale           = 0x01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_HitboxSetName            = 0x0898; // char[128]
            static constexpr std::uintptr_t m_bUseBones                = 0x0918; // bool
            static constexpr std::uintptr_t m_bUseClosestPointOnHitbox = 0x0919; // bool
            static constexpr std::uintptr_t m_nTestType                = 0x091C; // ClosestPointTestType_t
            static constexpr std::uintptr_t m_flHybridRatio            = 0x0920; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bUpdatePosition          = 0x0A90; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_nForceInModel       = 0x01DC; // int32
            static constexpr std::uintptr_t m_bEvenDistribution   = 0x01E0; // bool
            static constexpr std::uintptr_t m_nDesiredHitbox      = 0x01E4; // int32
            static constexpr std::uintptr_t m_vecHitBoxScale      = 0x01E8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecDirectionBias    = 0x08A0; // Vector
            static constexpr std::uintptr_t m_bMaintainHitbox     = 0x08AC; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0x08AD; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0x08AE; // char[128]
            static constexpr std::uintptr_t m_flShellSize         = 0x0930; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fRadiusMin                    = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fRadiusMax                    = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecDistanceBias               = 0x04B8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecDistanceBiasAbs            = 0x0B70; // Vector
            static constexpr std::uintptr_t m_TransformInput                = 0x0B80; // CParticleTransformInput
            static constexpr std::uintptr_t m_fSpeedMin                     = 0x0BE8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                     = 0x0D58; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedRandExp                 = 0x0EC8; // float32
            static constexpr std::uintptr_t m_bLocalCoords                  = 0x0ECC; // bool
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMin = 0x0ED0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMax = 0x1588; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nFieldOutput                  = 0x1C40; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldVelocity                = 0x1C44; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateVectorSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate      = 0x01D0; // Vector
            static constexpr std::uintptr_t m_Frequency = 0x01DC; // Vector
            static constexpr std::uintptr_t m_nField    = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOscMult = 0x01EC; // float32
            static constexpr std::uintptr_t m_flOscAdd  = 0x01F0; // float32
            static constexpr std::uintptr_t m_bOffset   = 0x01F4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateWithinCapsuleTransform : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fRadiusMin                    = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fRadiusMax                    = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fHeight                       = 0x04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformInput                = 0x0628; // CParticleTransformInput
            static constexpr std::uintptr_t m_fSpeedMin                     = 0x0690; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                     = 0x0800; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedRandExp                 = 0x0970; // float32
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMin = 0x0978; // CPerParticleVecInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMax = 0x1030; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nFieldOutput                  = 0x16E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldVelocity                = 0x16EC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fMaxDistance  = 0x01D8; // float32
            static constexpr std::uintptr_t m_flNumToAssign = 0x01DC; // float32
            static constexpr std::uintptr_t m_bLoop         = 0x01E0; // bool
            static constexpr std::uintptr_t m_bCPPairs      = 0x01E1; // bool
            static constexpr std::uintptr_t m_bSaveOffset   = 0x01E2; // bool
            static constexpr std::uintptr_t m_PathParams    = 0x01F0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateWithinBox : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecMin               = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecMax               = 0x0890; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nControlPointNumber  = 0x0F48; // int32
            static constexpr std::uintptr_t m_bLocalSpace          = 0x0F4C; // bool
            static constexpr std::uintptr_t m_randomnessParameters = 0x0F50; // CRandomNumberGeneratorParameters
            static constexpr std::uintptr_t m_bUseNewCode          = 0x0F58; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInterpolation = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldInputFrom = 0x0340; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldInput     = 0x0344; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput    = 0x0348; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateOnGrid : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nXCount             = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nYCount             = 0x0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nZCount             = 0x04B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nXSpacing           = 0x0628; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nYSpacing           = 0x0798; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nZSpacing           = 0x0908; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nControlPointNumber = 0x0A78; // int32
            static constexpr std::uintptr_t m_bLocalSpace         = 0x0A7C; // bool
            static constexpr std::uintptr_t m_bCenter             = 0x0A7D; // bool
            static constexpr std::uintptr_t m_bHollow             = 0x0A7E; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionOffset : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_OffsetMin            = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_OffsetMax            = 0x0890; // CPerParticleVecInput
            static constexpr std::uintptr_t m_TransformInput       = 0x0F48; // CParticleTransformInput
            static constexpr std::uintptr_t m_bLocalCoords         = 0x0FB0; // bool
            static constexpr std::uintptr_t m_bProportional        = 0x0FB1; // bool
            static constexpr std::uintptr_t m_randomnessParameters = 0x0FB4; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderSound : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flDurationScale         = 0x0220; // float32
            static constexpr std::uintptr_t m_flSndLvlScale           = 0x0224; // float32
            static constexpr std::uintptr_t m_flPitchScale            = 0x0228; // float32
            static constexpr std::uintptr_t m_flVolumeScale           = 0x022C; // float32
            static constexpr std::uintptr_t m_nSndLvlField            = 0x0230; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nDurationField          = 0x0234; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nPitchField             = 0x0238; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVolumeField            = 0x023C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nChannel                = 0x0240; // int32
            static constexpr std::uintptr_t m_nCPReference            = 0x0244; // int32
            static constexpr std::uintptr_t m_pszSoundName            = 0x0248; // char[256]
            static constexpr std::uintptr_t m_bSuppressStopSoundEvent = 0x0348; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumberStart = 0x01D8; // int32
            static constexpr std::uintptr_t m_nControlPointNumberEnd   = 0x01DC; // int32
            static constexpr std::uintptr_t m_bLocalCoords             = 0x01E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_CollisionGroupName  = 0x01D8; // char[128]
            static constexpr std::uintptr_t m_nTraceSet           = 0x0258; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_vecOutputMin        = 0x025C; // Vector
            static constexpr std::uintptr_t m_vecOutputMax        = 0x0268; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber = 0x0274; // int32
            static constexpr std::uintptr_t m_bPerParticle        = 0x0278; // bool
            static constexpr std::uintptr_t m_bTranslate          = 0x0279; // bool
            static constexpr std::uintptr_t m_bProportional       = 0x027A; // bool
            static constexpr std::uintptr_t m_flTraceLength       = 0x027C; // float32
            static constexpr std::uintptr_t m_bPerParticleTR      = 0x0280; // bool
            static constexpr std::uintptr_t m_bInherit            = 0x0281; // bool
            static constexpr std::uintptr_t m_nChildCP            = 0x0284; // int32
            static constexpr std::uintptr_t m_nChildGroupID       = 0x0288; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flOffset                 = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxTraceLength         = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_CollisionGroupName       = 0x04B8; // char[128]
            static constexpr std::uintptr_t m_nTraceSet                = 0x0538; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nTraceMissBehavior       = 0x0548; // ParticleTraceMissBehavior_t
            static constexpr std::uintptr_t m_bIncludeWater            = 0x054C; // bool
            static constexpr std::uintptr_t m_bSetNormal               = 0x054D; // bool
            static constexpr std::uintptr_t m_nAttribute               = 0x0550; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bSetPXYZOnly             = 0x0554; // bool
            static constexpr std::uintptr_t m_bTraceAlongNormal        = 0x0555; // bool
            static constexpr std::uintptr_t m_nTraceDirectionAttribute = 0x0558; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bOffsetonColOnly         = 0x055C; // bool
            static constexpr std::uintptr_t m_flOffsetByRadiusFactor   = 0x0560; // float32
            static constexpr std::uintptr_t m_nPreserveOffsetCP        = 0x0564; // int32
            static constexpr std::uintptr_t m_nIgnoreCP                = 0x0568; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fSpeedMin = 0x01D8; // float32
            static constexpr std::uintptr_t m_fSpeedMax = 0x01DC; // float32
            static constexpr std::uintptr_t m_bIgnoreDt = 0x01E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityRandom : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber           = 0x01D8; // int32
            static constexpr std::uintptr_t m_fSpeedMin                     = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fSpeedMax                     = 0x0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMin = 0x04C0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_LocalCoordinateSystemSpeedMax = 0x0B78; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bIgnoreDT                     = 0x1230; // bool
            static constexpr std::uintptr_t m_randomnessParameters          = 0x1234; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecAbsVal       = 0x01D8; // Vector
            static constexpr std::uintptr_t m_vecAbsValInv    = 0x01E4; // Vector
            static constexpr std::uintptr_t m_vecOffsetLoc    = 0x01F0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOffset        = 0x08A8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecOutputMin    = 0x0A18; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOutputMax    = 0x10D0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flNoiseScale    = 0x1788; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flNoiseScaleLoc = 0x18F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformInput  = 0x1A68; // CParticleTransformInput
            static constexpr std::uintptr_t m_bIgnoreDt       = 0x1AD0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVectortoCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldInput            = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nParticleNumber        = 0x01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flVelocityMin       = 0x01D8; // float32
            static constexpr std::uintptr_t m_flVelocityMax       = 0x01DC; // float32
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01E0; // int32
            static constexpr std::uintptr_t m_HitboxSetName       = 0x01E4; // char[128]
            static constexpr std::uintptr_t m_bUseBones           = 0x0264; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomLifeTime : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fLifetimeMin          = 0x01D8; // float32
            static constexpr std::uintptr_t m_fLifetimeMax          = 0x01DC; // float32
            static constexpr std::uintptr_t m_fLifetimeRandExponent = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Decay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bRopeDecay                  = 0x01D0; // bool
            static constexpr std::uintptr_t m_bForcePreserveParticleOrder = 0x01D1; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PerParticleForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flForceScale = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vForce       = 0x0350; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nCP          = 0x0A08; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMin        = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMax        = 0x01DC; // float32
            static constexpr std::uintptr_t m_flExponent   = 0x01E0; // float32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01E4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderRopes : public CBaseRendererSource2 {
        public:
            static constexpr std::uintptr_t m_bEnableFadingAndClamping             = 0x2DE8; // bool
            static constexpr std::uintptr_t m_flMinSize                            = 0x2DEC; // float32
            static constexpr std::uintptr_t m_flMaxSize                            = 0x2DF0; // float32
            static constexpr std::uintptr_t m_flStartFadeSize                      = 0x2DF4; // float32
            static constexpr std::uintptr_t m_flEndFadeSize                        = 0x2DF8; // float32
            static constexpr std::uintptr_t m_flStartFadeDot                       = 0x2DFC; // float32
            static constexpr std::uintptr_t m_flEndFadeDot                         = 0x2E00; // float32
            static constexpr std::uintptr_t m_flRadiusTaper                        = 0x2E04; // float32
            static constexpr std::uintptr_t m_nMinTesselation                      = 0x2E08; // int32
            static constexpr std::uintptr_t m_nMaxTesselation                      = 0x2E0C; // int32
            static constexpr std::uintptr_t m_flTessScale                          = 0x2E10; // float32
            static constexpr std::uintptr_t m_flTextureVWorldSize                  = 0x2E18; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flTextureVScrollRate                 = 0x2F88; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flTextureVOffset                     = 0x30F8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nTextureVParamsCP                    = 0x3268; // int32
            static constexpr std::uintptr_t m_bClampV                              = 0x326C; // bool
            static constexpr std::uintptr_t m_nScaleCP1                            = 0x3270; // int32
            static constexpr std::uintptr_t m_nScaleCP2                            = 0x3274; // int32
            static constexpr std::uintptr_t m_flScaleVSizeByControlPointDistance   = 0x3278; // float32
            static constexpr std::uintptr_t m_flScaleVScrollByControlPointDistance = 0x327C; // float32
            static constexpr std::uintptr_t m_flScaleVOffsetByControlPointDistance = 0x3280; // float32
            static constexpr std::uintptr_t m_bUseScalarForTextureCoordinate       = 0x3285; // bool
            static constexpr std::uintptr_t m_nScalarFieldForTextureCoordinate     = 0x3288; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScalarAttributeTextureCoordScale   = 0x328C; // float32
            static constexpr std::uintptr_t m_bReverseOrder                        = 0x3290; // bool
            static constexpr std::uintptr_t m_bClosedLoop                          = 0x3291; // bool
            static constexpr std::uintptr_t m_nSplitField                          = 0x3294; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bSortBySegmentID                     = 0x3298; // bool
            static constexpr std::uintptr_t m_nOrientationType                     = 0x329C; // ParticleOrientationChoiceList_t
            static constexpr std::uintptr_t m_nVectorFieldForOrientation           = 0x32A0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bDrawAsOpaque                        = 0x32A4; // bool
            static constexpr std::uintptr_t m_bGenerateNormals                     = 0x32A5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecMin               = 0x01D8; // Vector
            static constexpr std::uintptr_t m_vecMax               = 0x01E4; // Vector
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01F0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_randomnessParameters = 0x01F4; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nSequenceMin = 0x01D8; // int32
            static constexpr std::uintptr_t m_nSequenceMax = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_AddVectorToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecScale             = 0x01D8; // Vector
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldInput          = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vOffsetMin           = 0x01EC; // Vector
            static constexpr std::uintptr_t m_vOffsetMax           = 0x01F8; // Vector
            static constexpr std::uintptr_t m_randomnessParameters = 0x0204; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bUsePerParticleRadius = 0x0220; // bool
            static constexpr std::uintptr_t m_nVertexCountKb        = 0x0224; // uint32
            static constexpr std::uintptr_t m_nIndexCountKb         = 0x0228; // uint32
            static constexpr std::uintptr_t m_fGridSize             = 0x0230; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_fRadiusScale          = 0x03A0; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_fIsosurfaceThreshold  = 0x0510; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nScaleCP              = 0x0680; // int32
            static constexpr std::uintptr_t m_hMaterial             = 0x0688; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMin      = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMax      = 0x01DC; // float32
            static constexpr std::uintptr_t m_flExponent = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ClampVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutputMin = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOutputMax = 0x0890; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomAlpha : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAlphaMin           = 0x01DC; // int32
            static constexpr std::uintptr_t m_nAlphaMax           = 0x01E0; // int32
            static constexpr std::uintptr_t m_flAlphaRandExponent = 0x01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpEndCapScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutput     = 0x01D4; // float32
            static constexpr std::uintptr_t m_flLerpTime   = 0x01D8; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CGeneralRandomRotation : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput           = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flDegrees              = 0x01DC; // float32
            static constexpr std::uintptr_t m_flDegreesMin           = 0x01E0; // float32
            static constexpr std::uintptr_t m_flDegreesMax           = 0x01E4; // float32
            static constexpr std::uintptr_t m_flRotationRandExponent = 0x01E8; // float32
            static constexpr std::uintptr_t m_bRandomlyFlipDirection = 0x01EC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomRotation : public CGeneralRandomRotation {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nCP          = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRotOffset  = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_AttractToControlPoint : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_vecComponentScale = 0x01E0; // Vector
            static constexpr std::uintptr_t m_fForceAmount      = 0x01F0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_fFalloffPower     = 0x0360; // float32
            static constexpr std::uintptr_t m_TransformInput    = 0x0368; // CParticleTransformInput
            static constexpr std::uintptr_t m_fForceAmountMin   = 0x03D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bApplyMinForce    = 0x0540; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFloat : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue    = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0x0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0x034C; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_InputStrength = 0x0350; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomColor : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_ColorMin             = 0x01F4; // Color
            static constexpr std::uintptr_t m_ColorMax             = 0x01F8; // Color
            static constexpr std::uintptr_t m_TintMin              = 0x01FC; // Color
            static constexpr std::uintptr_t m_TintMax              = 0x0200; // Color
            static constexpr std::uintptr_t m_flTintPerc           = 0x0204; // float32
            static constexpr std::uintptr_t m_flUpdateThreshold    = 0x0208; // float32
            static constexpr std::uintptr_t m_nTintCP              = 0x020C; // int32
            static constexpr std::uintptr_t m_nFieldOutput         = 0x0210; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nTintBlendMode       = 0x0214; // ParticleColorBlendMode_t
            static constexpr std::uintptr_t m_flLightAmplification = 0x0218; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ClientPhysics : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_strPhysicsType            = 0x0220; // CUtlString
            static constexpr std::uintptr_t m_bStartAsleep              = 0x0228; // bool
            static constexpr std::uintptr_t m_flPlayerWakeRadius        = 0x0230; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flVehicleWakeRadius       = 0x03A0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bUseHighQualitySimulation = 0x0510; // bool
            static constexpr std::uintptr_t m_nMaxParticleCount         = 0x0514; // int32
            static constexpr std::uintptr_t m_bRespectExclusionVolumes  = 0x0518; // bool
            static constexpr std::uintptr_t m_bKillParticles            = 0x0519; // bool
            static constexpr std::uintptr_t m_bDeleteSim                = 0x051A; // bool
            static constexpr std::uintptr_t m_nControlPoint             = 0x051C; // int32
            static constexpr std::uintptr_t m_nForcedSimId              = 0x0520; // int32
            static constexpr std::uintptr_t m_nColorBlendType           = 0x0524; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_nForcedStatusEffects      = 0x0528; // ParticleAttrBoxFlags_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_ColorMin             = 0x01F0; // Color
            static constexpr std::uintptr_t m_ColorMax             = 0x01F4; // Color
            static constexpr std::uintptr_t m_TintMin              = 0x01F8; // Color
            static constexpr std::uintptr_t m_TintMax              = 0x01FC; // Color
            static constexpr std::uintptr_t m_flTintPerc           = 0x0200; // float32
            static constexpr std::uintptr_t m_nTintBlendMode       = 0x0204; // ParticleColorBlendMode_t
            static constexpr std::uintptr_t m_flLightAmplification = 0x0208; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ChladniWave : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput            = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin              = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax              = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin             = 0x04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax             = 0x0628; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecWaveLength           = 0x0798; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecHarmonics            = 0x0E50; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nSetMethod              = 0x1508; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_nLocalSpaceControlPoint = 0x150C; // int32
            static constexpr std::uintptr_t m_b3D                     = 0x1510; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomTrailLength : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flMinLength          = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMaxLength          = 0x01DC; // float32
            static constexpr std::uintptr_t m_flLengthRandExponent = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MaintainSequentialPath : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_fMaxDistance       = 0x01D0; // float32
            static constexpr std::uintptr_t m_flNumToAssign      = 0x01D4; // float32
            static constexpr std::uintptr_t m_flCohesionStrength = 0x01D8; // float32
            static constexpr std::uintptr_t m_flTolerance        = 0x01DC; // float32
            static constexpr std::uintptr_t m_bLoop              = 0x01E0; // bool
            static constexpr std::uintptr_t m_bUseParticleCount  = 0x01E1; // bool
            static constexpr std::uintptr_t m_PathParams         = 0x01F0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomSequence : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nSequenceMin = 0x01D8; // int32
            static constexpr std::uintptr_t m_nSequenceMax = 0x01DC; // int32
            static constexpr std::uintptr_t m_bShuffle     = 0x01E0; // bool
            static constexpr std::uintptr_t m_bLinear      = 0x01E1; // bool
            static constexpr std::uintptr_t m_WeightedList = 0x01E8; // CUtlVector<SequenceWeightedList_t>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ScreenSpaceRotateTowardTarget : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecTargetPosition             = 0x01D0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOutputRemap                 = 0x0888; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nSetMethod                    = 0x09F8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_flScreenEdgeAlignmentDistance = 0x0A00; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SequenceFromCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bKillUnused  = 0x01D8; // bool
            static constexpr std::uintptr_t m_bRadiusScale = 0x01D9; // bool
            static constexpr std::uintptr_t m_nCP          = 0x01DC; // int32
            static constexpr std::uintptr_t m_vecOffset    = 0x01E0; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVelocityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale      = 0x01D4; // float32
            static constexpr std::uintptr_t m_bNormalize   = 0x01D8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomModelSequence : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_ActivityName = 0x01D8; // char[256]
            static constexpr std::uintptr_t m_SequenceName = 0x02D8; // char[256]
            static constexpr std::uintptr_t m_hModel       = 0x03D8; // CStrongHandle<InfoForResourceTypeCModel>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Orient2DRelToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRotOffset    = 0x01D0; // float32
            static constexpr std::uintptr_t m_flSpinStrength = 0x01D4; // float32
            static constexpr std::uintptr_t m_nCP            = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput   = 0x01DC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ScaleVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecScale = 0x01D8; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionWarp : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecWarpMin               = 0x01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecWarpMax               = 0x0890; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nScaleControlPointNumber = 0x0F48; // int32
            static constexpr std::uintptr_t m_nControlPointNumber      = 0x0F4C; // int32
            static constexpr std::uintptr_t m_nRadiusComponent         = 0x0F50; // int32
            static constexpr std::uintptr_t m_flWarpTime               = 0x0F54; // float32
            static constexpr std::uintptr_t m_flWarpStartTime          = 0x0F58; // float32
            static constexpr std::uintptr_t m_flPrevPosScale           = 0x0F5C; // float32
            static constexpr std::uintptr_t m_bInvertWarp              = 0x0F60; // bool
            static constexpr std::uintptr_t m_bUseCount                = 0x0F61; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecWarpMin               = 0x01D8; // Vector
            static constexpr std::uintptr_t m_vecWarpMax               = 0x01E4; // Vector
            static constexpr std::uintptr_t m_InputValue               = 0x01F0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flPrevPosScale           = 0x0360; // float32
            static constexpr std::uintptr_t m_nScaleControlPointNumber = 0x0364; // int32
            static constexpr std::uintptr_t m_nControlPointNumber      = 0x0368; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetVec : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue        = 0x01D0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOutputField      = 0x0888; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0x088C; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_Lerp              = 0x0890; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bNormalizedOutput = 0x0A00; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput   = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax     = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin    = 0x04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax    = 0x0628; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformStart = 0x0798; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd   = 0x0800; // CParticleTransformInput
            static constexpr std::uintptr_t m_nSetMethod     = 0x0868; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange   = 0x086C; // bool
            static constexpr std::uintptr_t m_bAdditive      = 0x086D; // bool
            static constexpr std::uintptr_t m_bCapsule       = 0x086E; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreationNoise : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput     = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bAbsVal          = 0x01DC; // bool
            static constexpr std::uintptr_t m_bAbsValInv       = 0x01DD; // bool
            static constexpr std::uintptr_t m_flOffset         = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin      = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax      = 0x01E8; // float32
            static constexpr std::uintptr_t m_flNoiseScale     = 0x01EC; // float32
            static constexpr std::uintptr_t m_flNoiseScaleLoc  = 0x01F0; // float32
            static constexpr std::uintptr_t m_vecOffsetLoc     = 0x01F4; // Vector
            static constexpr std::uintptr_t m_flWorldTimeScale = 0x0200; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_HitboxSetName      = 0x01D0; // char[128]
            static constexpr std::uintptr_t m_AttachmentName     = 0x0250; // char[128]
            static constexpr std::uintptr_t m_nFirstControlPoint = 0x02D0; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0x02D4; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0x02D8; // int32
            static constexpr std::uintptr_t m_bSkin              = 0x02DC; // bool
            static constexpr std::uintptr_t m_bAttachment        = 0x02DD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CheckParticleForWater : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flRadius      = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldOutput  = 0x0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputRemap = 0x0350; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nSetMethod    = 0x04C0; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput    = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInterpolation = 0x01D8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateAlongPath : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fMaxDistance  = 0x01D8; // float32
            static constexpr std::uintptr_t m_PathParams    = 0x01E0; // CPathParameters
            static constexpr std::uintptr_t m_bUseRandomCPs = 0x0220; // bool
            static constexpr std::uintptr_t m_vEndOffset    = 0x0224; // Vector
            static constexpr std::uintptr_t m_bSaveOffset   = 0x0230; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flSpeedMin             = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSpeedMax             = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flEndSpread            = 0x04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flStartOffset          = 0x0628; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flEndOffset            = 0x0798; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nEndControlPointNumber = 0x0908; // int32
            static constexpr std::uintptr_t m_bTrailBias             = 0x090C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput            = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nInputMin               = 0x01DC; // int32
            static constexpr std::uintptr_t m_nInputMax               = 0x01E0; // int32
            static constexpr std::uintptr_t m_nScaleControlPoint      = 0x01E4; // int32
            static constexpr std::uintptr_t m_nScaleControlPointField = 0x01E8; // int32
            static constexpr std::uintptr_t m_flOutputMin             = 0x01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax             = 0x01F0; // float32
            static constexpr std::uintptr_t m_nSetMethod              = 0x01F4; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange            = 0x01F8; // bool
            static constexpr std::uintptr_t m_bInvert                 = 0x01F9; // bool
            static constexpr std::uintptr_t m_bWrap                   = 0x01FA; // bool
            static constexpr std::uintptr_t m_flRemapBias             = 0x01FC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFloatCollection : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0x0348; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InheritVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_flVelocityScale     = 0x01DC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RestartAfterDuration : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDurationMin = 0x01D0; // float32
            static constexpr std::uintptr_t m_flDurationMax = 0x01D4; // float32
            static constexpr std::uintptr_t m_nCP           = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPField      = 0x01DC; // int32
            static constexpr std::uintptr_t m_nChildGroupID = 0x01E0; // int32
            static constexpr std::uintptr_t m_bOnlyChildren = 0x01E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_VelocityFromCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_velocityInput   = 0x01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_transformInput  = 0x0890; // CParticleTransformInput
            static constexpr std::uintptr_t m_flVelocityScale = 0x08F8; // float32
            static constexpr std::uintptr_t m_bDirectionOnly  = 0x08FC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_AgeNoise : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_bAbsVal         = 0x01D8; // bool
            static constexpr std::uintptr_t m_bAbsValInv      = 0x01D9; // bool
            static constexpr std::uintptr_t m_flOffset        = 0x01DC; // float32
            static constexpr std::uintptr_t m_flAgeMin        = 0x01E0; // float32
            static constexpr std::uintptr_t m_flAgeMax        = 0x01E4; // float32
            static constexpr std::uintptr_t m_flNoiseScale    = 0x01E8; // float32
            static constexpr std::uintptr_t m_flNoiseScaleLoc = 0x01EC; // float32
            static constexpr std::uintptr_t m_vecOffsetLoc    = 0x01F0; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputVec1    = 0x01D0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_InputVec2    = 0x0888; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nFieldOutput = 0x0F40; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bNormalize   = 0x0F44; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_nScaleControlPoint  = 0x01D4; // int32
            static constexpr std::uintptr_t m_nScaleCPField       = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFieldInput         = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bOffsetLocal        = 0x01E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flFramerate = 0x01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldInput         = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin          = 0x01E0; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0x01E4; // float32
            static constexpr std::uintptr_t m_vecOutputMin        = 0x01E8; // Vector
            static constexpr std::uintptr_t m_vecOutputMax        = 0x01F4; // Vector
            static constexpr std::uintptr_t m_flStartTime         = 0x0200; // float32
            static constexpr std::uintptr_t m_flEndTime           = 0x0204; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0x0208; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_nControlPointNumber = 0x020C; // int32
            static constexpr std::uintptr_t m_bLocalCoords        = 0x0210; // bool
            static constexpr std::uintptr_t m_flRemapBias         = 0x0214; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vStartValue          = 0x01D0; // Vector
            static constexpr std::uintptr_t m_nFieldInput1         = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputScale1        = 0x01E0; // float32
            static constexpr std::uintptr_t m_nFieldInput2         = 0x01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputScale2        = 0x01E8; // float32
            static constexpr std::uintptr_t m_nControlPointInput1  = 0x01EC; // ControlPointReference_t
            static constexpr std::uintptr_t m_flControlPointScale1 = 0x0200; // float32
            static constexpr std::uintptr_t m_nControlPointInput2  = 0x0204; // ControlPointReference_t
            static constexpr std::uintptr_t m_flControlPointScale2 = 0x0218; // float32
            static constexpr std::uintptr_t m_nFieldOutput         = 0x021C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vFinalOutputScale    = 0x0220; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldInput          = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutputMin         = 0x01E0; // Vector
            static constexpr std::uintptr_t m_vecOutputMax         = 0x01EC; // Vector
            static constexpr std::uintptr_t m_randomnessParameters = 0x01F8; // CRandomNumberGeneratorParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_fMaxDistance  = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flNumToAssign = 0x0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bLoop         = 0x04B8; // bool
            static constexpr std::uintptr_t m_bCPPairs      = 0x04B9; // bool
            static constexpr std::uintptr_t m_bSaveOffset   = 0x04BA; // bool
            static constexpr std::uintptr_t m_PathParams    = 0x04C0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomYawFlip : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flPercent = 0x01D8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vInputMin           = 0x01DC; // Vector
            static constexpr std::uintptr_t m_vInputMax           = 0x01E8; // Vector
            static constexpr std::uintptr_t m_vOutputMin          = 0x01F4; // Vector
            static constexpr std::uintptr_t m_vOutputMax          = 0x0200; // Vector
            static constexpr std::uintptr_t m_TransformInput      = 0x0210; // CParticleTransformInput
            static constexpr std::uintptr_t m_LocalSpaceTransform = 0x0278; // CParticleTransformInput
            static constexpr std::uintptr_t m_flStartTime         = 0x02E0; // float32
            static constexpr std::uintptr_t m_flEndTime           = 0x02E4; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0x02E8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bOffset             = 0x02EC; // bool
            static constexpr std::uintptr_t m_bAccelerate         = 0x02ED; // bool
            static constexpr std::uintptr_t m_flRemapBias         = 0x02F0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flScale             = 0x01D8; // float32
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement          = 0x01E0; // int32
            static constexpr std::uintptr_t m_bRandomDistribution = 0x01E4; // bool
            static constexpr std::uintptr_t m_nRandomSeed         = 0x01E8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateFromCPs : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nIncrement      = 0x01D8; // int32
            static constexpr std::uintptr_t m_nMinCP          = 0x01DC; // int32
            static constexpr std::uintptr_t m_nMaxCP          = 0x01E0; // int32
            static constexpr std::uintptr_t m_nDynamicCPCount = 0x01E8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Cull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flCullPerc  = 0x01D0; // float32
            static constexpr std::uintptr_t m_flCullStart = 0x01D4; // float32
            static constexpr std::uintptr_t m_flCullEnd   = 0x01D8; // float32
            static constexpr std::uintptr_t m_flCullExp   = 0x01DC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput       = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin         = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax         = 0x0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin        = 0x04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax        = 0x0630; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nStartCP           = 0x07A0; // int32
            static constexpr std::uintptr_t m_bLOS               = 0x07A4; // bool
            static constexpr std::uintptr_t m_CollisionGroupName = 0x07A5; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x0828; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x0830; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLOSScale         = 0x09A0; // float32
            static constexpr std::uintptr_t m_nSetMethod         = 0x09A4; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange       = 0x09A8; // bool
            static constexpr std::uintptr_t m_vecDistanceScale   = 0x09AC; // Vector
            static constexpr std::uintptr_t m_flRemapBias        = 0x09B8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputRadius      = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_InputMagnitude   = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFalloffFunction = 0x04B8; // ParticleFalloffFunction_t
            static constexpr std::uintptr_t m_InputFalloffExp  = 0x04C0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nImpulseType     = 0x0630; // ParticleImpulseType_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecComponentScale  = 0x01D8; // Vector
            static constexpr std::uintptr_t m_flTraceOffset      = 0x01E4; // float32
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x01E8; // float32
            static constexpr std::uintptr_t m_flTraceTolerance   = 0x01EC; // float32
            static constexpr std::uintptr_t m_nMaxPlanes         = 0x01F0; // int32
            static constexpr std::uintptr_t m_CollisionGroupName = 0x01F8; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x0278; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_bIncludeWater      = 0x0288; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecOffsetMin = 0x01D8; // Vector
            static constexpr std::uintptr_t m_vecOffsetMax = 0x01E4; // Vector
            static constexpr std::uintptr_t m_bUseNormal   = 0x01F1; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_ModelCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_bBoundBox           = 0x01DC; // bool
            static constexpr std::uintptr_t m_bCullOutside        = 0x01DD; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0x01DE; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0x01DF; // char[128]
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_DistanceCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0x01D8; // int32
            static constexpr std::uintptr_t m_flDistance    = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCullInside   = 0x0350; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PlaneCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0x01D8; // int32
            static constexpr std::uintptr_t m_flDistance    = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCullInside   = 0x0350; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeInSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeInTime = 0x01D0; // float32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flDistance        = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bIncludeRadii     = 0x0348; // bool
            static constexpr std::uintptr_t m_flLifespanOverlap = 0x0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldModify      = 0x04C0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flModify          = 0x04C8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nSetMethod        = 0x0638; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bUseNeighbor      = 0x063C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RtEnvCull : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_vecTestDir    = 0x01D8; // Vector
            static constexpr std::uintptr_t m_vecTestNormal = 0x01E4; // Vector
            static constexpr std::uintptr_t m_bUseVelocity  = 0x01F0; // bool
            static constexpr std::uintptr_t m_bCullOnMiss   = 0x01F1; // bool
            static constexpr std::uintptr_t m_bLifeAdjust   = 0x01F2; // bool
            static constexpr std::uintptr_t m_RtEnvName     = 0x01F3; // char[128]
            static constexpr std::uintptr_t m_nRTEnvCP      = 0x0274; // int32
            static constexpr std::uintptr_t m_nComponent    = 0x0278; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D0; // CParticleTransformInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_transformInput    = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_nControlPointAxis = 0x0240; // ParticleControlPointAxis_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_NormalOffset : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_OffsetMin           = 0x01D8; // Vector
            static constexpr std::uintptr_t m_OffsetMax           = 0x01E4; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01F0; // int32
            static constexpr std::uintptr_t m_bLocalCoords        = 0x01F4; // bool
            static constexpr std::uintptr_t m_bNormalize          = 0x01F5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber  = 0x01D8; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset    = 0x01E0; // CUtlString
            static constexpr std::uintptr_t m_nAttributeToRead     = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAttributeToWrite    = 0x01EC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP        = 0x01F0; // int32
            static constexpr std::uintptr_t m_bRandom              = 0x01F4; // bool
            static constexpr std::uintptr_t m_bReverse             = 0x01F5; // bool
            static constexpr std::uintptr_t m_nSnapShotIncrement   = 0x01F8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nManualSnapshotIndex = 0x0368; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nRandomSeed          = 0x04D8; // int32
            static constexpr std::uintptr_t m_bLocalSpaceAngles    = 0x04DC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFieldInput         = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bLocalSpace         = 0x01E4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nSnapshotControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_nControlPointNumber         = 0x01DC; // int32
            static constexpr std::uintptr_t m_bRandom                     = 0x01E0; // bool
            static constexpr std::uintptr_t m_nRandomSeed                 = 0x01E4; // int32
            static constexpr std::uintptr_t m_bRigid                      = 0x01E8; // bool
            static constexpr std::uintptr_t m_bSetNormal                  = 0x01E9; // bool
            static constexpr std::uintptr_t m_bIgnoreDt                   = 0x01EA; // bool
            static constexpr std::uintptr_t m_flMinNormalVelocity         = 0x01EC; // float32
            static constexpr std::uintptr_t m_flMaxNormalVelocity         = 0x01F0; // float32
            static constexpr std::uintptr_t m_nIndexType                  = 0x01F4; // SnapshotIndexType_t
            static constexpr std::uintptr_t m_flReadIndex                 = 0x01F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flIncrement                 = 0x0368; // float32
            static constexpr std::uintptr_t m_nFullLoopIncrement          = 0x036C; // int32
            static constexpr std::uintptr_t m_nSnapShotStartPoint         = 0x0370; // int32
            static constexpr std::uintptr_t m_flBoneVelocity              = 0x0374; // float32
            static constexpr std::uintptr_t m_flBoneVelocityMax           = 0x0378; // float32
            static constexpr std::uintptr_t m_bCopyColor                  = 0x037C; // bool
            static constexpr std::uintptr_t m_bCopyAlpha                  = 0x037D; // bool
            static constexpr std::uintptr_t m_bSetRadius                  = 0x037E; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nAttributeToCopy = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nEventType       = 0x01DC; // EventTypeSelection_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_GlobalScale : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flScale                  = 0x01D8; // float32
            static constexpr std::uintptr_t m_nScaleControlPointNumber = 0x01DC; // int32
            static constexpr std::uintptr_t m_nControlPointNumber      = 0x01E0; // int32
            static constexpr std::uintptr_t m_bScaleRadius             = 0x01E4; // bool
            static constexpr std::uintptr_t m_bScalePosition           = 0x01E5; // bool
            static constexpr std::uintptr_t m_bScaleVelocity           = 0x01E6; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nLocalSpaceCP        = 0x01DC; // int32
            static constexpr std::uintptr_t m_nWeightUpdateCP      = 0x01E0; // int32
            static constexpr std::uintptr_t m_bUseVerticalVelocity = 0x01E4; // bool
            static constexpr std::uintptr_t m_vecScale             = 0x01E8; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0x0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale        = 0x0244; // float32
            static constexpr std::uintptr_t m_flOffsetRot    = 0x0248; // float32
            static constexpr std::uintptr_t m_vecOffsetAxis  = 0x024C; // Vector
            static constexpr std::uintptr_t m_bNormalize     = 0x0258; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0x0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOffsetRot    = 0x0244; // float32
            static constexpr std::uintptr_t m_nComponent     = 0x0248; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D8; // CParticleTransformInput
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_vecRotation    = 0x0240; // Vector
            static constexpr std::uintptr_t m_bUseQuat       = 0x024C; // bool
            static constexpr std::uintptr_t m_bWriteNormal   = 0x024D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetUserEvent : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInput           = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRisingEdge      = 0x0340; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nRisingEventType  = 0x04B0; // EventTypeSelection_t
            static constexpr std::uintptr_t m_flFallingEdge     = 0x04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFallingEventType = 0x0628; // EventTypeSelection_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01DC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputAnim    = 0x01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin          = 0x01E4; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0x01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0x01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0x01F0; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0x01F4; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VelocityMatchingForce : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDirScale         = 0x01D0; // float32
            static constexpr std::uintptr_t m_flSpdScale         = 0x01D4; // float32
            static constexpr std::uintptr_t m_flNeighborDistance = 0x01D8; // float32
            static constexpr std::uintptr_t m_flFacingStrength   = 0x01DC; // float32
            static constexpr std::uintptr_t m_bUseAABB           = 0x01E0; // bool
            static constexpr std::uintptr_t m_nCPBroadcast       = 0x01E4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_PointList : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_pointList           = 0x01E0; // CUtlVector<PointDefinition_t>
            static constexpr std::uintptr_t m_bPlaceAlongPath     = 0x01F8; // bool
            static constexpr std::uintptr_t m_bClosedLoop         = 0x01F9; // bool
            static constexpr std::uintptr_t m_nNumPointsAlongPath = 0x01FC; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_hModel             = 0x01D8; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_names              = 0x01E0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bShuffle           = 0x01F8; // bool
            static constexpr std::uintptr_t m_bLinear            = 0x01F9; // bool
            static constexpr std::uintptr_t m_bModelFromRenderer = 0x01FA; // bool
            static constexpr std::uintptr_t m_nFieldOutput       = 0x01FC; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_NoiseEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_flEmissionDuration      = 0x01D8; // float32
            static constexpr std::uintptr_t m_flStartTime             = 0x01DC; // float32
            static constexpr std::uintptr_t m_flEmissionScale         = 0x01E0; // float32
            static constexpr std::uintptr_t m_nScaleControlPoint      = 0x01E4; // int32
            static constexpr std::uintptr_t m_nScaleControlPointField = 0x01E8; // int32
            static constexpr std::uintptr_t m_nWorldNoisePoint        = 0x01EC; // int32
            static constexpr std::uintptr_t m_bAbsVal                 = 0x01F0; // bool
            static constexpr std::uintptr_t m_bAbsValInv              = 0x01F1; // bool
            static constexpr std::uintptr_t m_flOffset                = 0x01F4; // float32
            static constexpr std::uintptr_t m_flOutputMin             = 0x01F8; // float32
            static constexpr std::uintptr_t m_flOutputMax             = 0x01FC; // float32
            static constexpr std::uintptr_t m_flNoiseScale            = 0x0200; // float32
            static constexpr std::uintptr_t m_flWorldNoiseScale       = 0x0204; // float32
            static constexpr std::uintptr_t m_vecOffsetLoc            = 0x0208; // Vector
            static constexpr std::uintptr_t m_flWorldTimeScale        = 0x0214; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_hModel             = 0x01D8; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_names              = 0x01E0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_values             = 0x01F8; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nFieldInput        = 0x0210; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput       = 0x0214; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod         = 0x0218; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bModelFromRenderer = 0x021C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nInputMin    = 0x01D4; // int32
            static constexpr std::uintptr_t m_nInputMax    = 0x01D8; // int32
            static constexpr std::uintptr_t m_flOutputMin  = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01E0; // float32
            static constexpr std::uintptr_t m_bBackwards   = 0x01E4; // bool
            static constexpr std::uintptr_t m_nSetMethod   = 0x01E8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_pTextureColorWarp = 0x0220; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureNormal    = 0x0228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureMetalness = 0x0230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureRoughness = 0x0238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureSelfIllum = 0x0240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureDetail    = 0x0248; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_StatusEffect : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nDetail2Combo                      = 0x01D8; // Detail2Combo_t
            static constexpr std::uintptr_t m_flDetail2Rotation                  = 0x01DC; // float32
            static constexpr std::uintptr_t m_flDetail2Scale                     = 0x01E0; // float32
            static constexpr std::uintptr_t m_flDetail2BlendFactor               = 0x01E4; // float32
            static constexpr std::uintptr_t m_flColorWarpIntensity               = 0x01E8; // float32
            static constexpr std::uintptr_t m_flDiffuseWarpBlendToFull           = 0x01EC; // float32
            static constexpr std::uintptr_t m_flEnvMapIntensity                  = 0x01F0; // float32
            static constexpr std::uintptr_t m_flAmbientScale                     = 0x01F4; // float32
            static constexpr std::uintptr_t m_specularColor                      = 0x01F8; // Color
            static constexpr std::uintptr_t m_flSpecularScale                    = 0x01FC; // float32
            static constexpr std::uintptr_t m_flSpecularExponent                 = 0x0200; // float32
            static constexpr std::uintptr_t m_flSpecularExponentBlendToFull      = 0x0204; // float32
            static constexpr std::uintptr_t m_flSpecularBlendToFull              = 0x0208; // float32
            static constexpr std::uintptr_t m_rimLightColor                      = 0x020C; // Color
            static constexpr std::uintptr_t m_flRimLightScale                    = 0x0210; // float32
            static constexpr std::uintptr_t m_flReflectionsTintByBaseBlendToNone = 0x0214; // float32
            static constexpr std::uintptr_t m_flMetalnessBlendToFull             = 0x0218; // float32
            static constexpr std::uintptr_t m_flSelfIllumBlendToFull             = 0x021C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_flSFXColorWarpAmount = 0x01D8; // float32
            static constexpr std::uintptr_t m_flSFXNormalAmount    = 0x01DC; // float32
            static constexpr std::uintptr_t m_flSFXMetalnessAmount = 0x01E0; // float32
            static constexpr std::uintptr_t m_flSFXRoughnessAmount = 0x01E4; // float32
            static constexpr std::uintptr_t m_flSFXSelfIllumAmount = 0x01E8; // float32
            static constexpr std::uintptr_t m_flSFXSScale          = 0x01EC; // float32
            static constexpr std::uintptr_t m_flSFXSScrollX        = 0x01F0; // float32
            static constexpr std::uintptr_t m_flSFXSScrollY        = 0x01F4; // float32
            static constexpr std::uintptr_t m_flSFXSScrollZ        = 0x01F8; // float32
            static constexpr std::uintptr_t m_flSFXSOffsetX        = 0x01FC; // float32
            static constexpr std::uintptr_t m_flSFXSOffsetY        = 0x0200; // float32
            static constexpr std::uintptr_t m_flSFXSOffsetZ        = 0x0204; // float32
            static constexpr std::uintptr_t m_nDetailCombo         = 0x0208; // DetailCombo_t
            static constexpr std::uintptr_t m_flSFXSDetailAmount   = 0x020C; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScale    = 0x0210; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScrollX  = 0x0214; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScrollY  = 0x0218; // float32
            static constexpr std::uintptr_t m_flSFXSDetailScrollZ  = 0x021C; // float32
            static constexpr std::uintptr_t m_flSFXSUseModelUVs    = 0x0220; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetAttributeToScalarExpression : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0x01D8; // ScalarExpressionType_t
            static constexpr std::uintptr_t m_flInput1      = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInput2      = 0x0350; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap = 0x04C0; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0x0630; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0x0634; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_SetFloatAttributeToVectorExpression : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0x01D8; // VectorFloatExpressionType_t
            static constexpr std::uintptr_t m_vInput1       = 0x01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2       = 0x0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOutputRemap = 0x0F50; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0x10C0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0x10C4; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitVecCollection : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0x01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nOutputField = 0x0890; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_InitVec : public CParticleFunctionInitializer {
        public:
            static constexpr std::uintptr_t m_InputValue             = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOutputField           = 0x0890; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod             = 0x0894; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput      = 0x0898; // bool
            static constexpr std::uintptr_t m_bWritePreviousPosition = 0x0899; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_nParticlesToEmit                = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartTime                     = 0x0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInitFromKilledParentParticles = 0x04B8; // float32
            static constexpr std::uintptr_t m_nEventType                      = 0x04BC; // EventTypeSelection_t
            static constexpr std::uintptr_t m_flParentParticleScale           = 0x04C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nMaxEmittedPerFrame             = 0x0630; // int32
            static constexpr std::uintptr_t m_nSnapshotControlPoint           = 0x0634; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset               = 0x0638; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ContinuousEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_flEmissionDuration             = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartTime                    = 0x0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flEmitRate                     = 0x04B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flEmissionScale                = 0x0628; // float32
            static constexpr std::uintptr_t m_flScalePerParentParticle       = 0x062C; // float32
            static constexpr std::uintptr_t m_bInitFromKilledParentParticles = 0x0630; // bool
            static constexpr std::uintptr_t m_nEventType                     = 0x0634; // EventTypeSelection_t
            static constexpr std::uintptr_t m_nSnapshotControlPoint          = 0x0638; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset              = 0x0640; // CUtlString
            static constexpr std::uintptr_t m_nLimitPerUpdate                = 0x0648; // int32
            static constexpr std::uintptr_t m_bForceEmitOnFirstUpdate        = 0x064C; // bool
            static constexpr std::uintptr_t m_bForceEmitOnLastUpdate         = 0x064D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MaintainEmitter : public CParticleFunctionEmitter {
        public:
            static constexpr std::uintptr_t m_nParticlesToMaintain  = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartTime           = 0x0348; // float32
            static constexpr std::uintptr_t m_flEmissionDuration    = 0x0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flEmissionRate        = 0x04C0; // float32
            static constexpr std::uintptr_t m_nSnapshotControlPoint = 0x04C4; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset     = 0x04C8; // CUtlString
            static constexpr std::uintptr_t m_bEmitInstantaneously  = 0x04D0; // bool
            static constexpr std::uintptr_t m_bFinalEmitOnStop      = 0x04D1; // bool
            static constexpr std::uintptr_t m_flScale               = 0x04D8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RandomForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_MinForce = 0x01E0; // Vector
            static constexpr std::uintptr_t m_MaxForce = 0x01EC; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CPVelocityForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01E0; // int32
            static constexpr std::uintptr_t m_flScale             = 0x01E8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ParentVortices : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flForceScale    = 0x01E0; // float32
            static constexpr std::uintptr_t m_vecTwistAxis    = 0x01E4; // Vector
            static constexpr std::uintptr_t m_bFlipBasedOnYaw = 0x01F0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInputMin   = 0x01D0; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0x01D4; // float32
            static constexpr std::uintptr_t m_flInputBias  = 0x01D8; // float32
            static constexpr std::uintptr_t m_nStartCP     = 0x01DC; // int32
            static constexpr std::uintptr_t m_nEndCP       = 0x01E0; // int32
            static constexpr std::uintptr_t m_nOffsetCP    = 0x01E4; // int32
            static constexpr std::uintptr_t m_nOuputCP     = 0x01E8; // int32
            static constexpr std::uintptr_t m_nInputCP     = 0x01EC; // int32
            static constexpr std::uintptr_t m_bRadialCheck = 0x01F0; // bool
            static constexpr std::uintptr_t m_bScaleOffset = 0x01F1; // bool
            static constexpr std::uintptr_t m_vecOffset    = 0x01F4; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TwistAroundAxis : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_fForceAmount        = 0x01E0; // float32
            static constexpr std::uintptr_t m_TwistAxis           = 0x01E4; // Vector
            static constexpr std::uintptr_t m_bLocalSpace         = 0x01F0; // bool
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01F4; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CGeneralSpin : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSpinRateDegrees    = 0x01D0; // int32
            static constexpr std::uintptr_t m_nSpinRateMinDegrees = 0x01D4; // int32
            static constexpr std::uintptr_t m_fSpinRateStopTime   = 0x01DC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flMinDist           = 0x01E0; // float32
            static constexpr std::uintptr_t m_vecForceAtMinDist   = 0x01E4; // Vector
            static constexpr std::uintptr_t m_flMaxDist           = 0x01F0; // float32
            static constexpr std::uintptr_t m_vecForceAtMaxDist   = 0x01F4; // Vector
            static constexpr std::uintptr_t m_vecPlaneNormal      = 0x0200; // Vector
            static constexpr std::uintptr_t m_nControlPointNumber = 0x020C; // int32
            static constexpr std::uintptr_t m_flExponent          = 0x0210; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TurbulenceForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flNoiseCoordScale0 = 0x01E0; // float32
            static constexpr std::uintptr_t m_flNoiseCoordScale1 = 0x01E4; // float32
            static constexpr std::uintptr_t m_flNoiseCoordScale2 = 0x01E8; // float32
            static constexpr std::uintptr_t m_flNoiseCoordScale3 = 0x01EC; // float32
            static constexpr std::uintptr_t m_vecNoiseAmount0    = 0x01F0; // Vector
            static constexpr std::uintptr_t m_vecNoiseAmount1    = 0x01FC; // Vector
            static constexpr std::uintptr_t m_vecNoiseAmount2    = 0x0208; // Vector
            static constexpr std::uintptr_t m_vecNoiseAmount3    = 0x0214; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CurlNoiseForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_nNoiseType     = 0x01E0; // ParticleDirectionNoiseType_t
            static constexpr std::uintptr_t m_vecNoiseFreq   = 0x01E8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecNoiseScale  = 0x08A0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOffset      = 0x0F58; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecOffsetRate  = 0x1610; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flWorleySeed   = 0x1CC8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flWorleyJitter = 0x1E38; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nHand         = 0x0220; // ParticleVRHandChoiceList_t
            static constexpr std::uintptr_t m_nOutputHandCP = 0x0224; // int32
            static constexpr std::uintptr_t m_nOutputField  = 0x0228; // int32
            static constexpr std::uintptr_t m_flAmplitude   = 0x0230; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_WindForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_vForce = 0x01E0; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ExternalWindForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_vecSamplePosition        = 0x01E0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecScale                 = 0x0898; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bSampleWind              = 0x0F50; // bool
            static constexpr std::uintptr_t m_bSampleWater             = 0x0F51; // bool
            static constexpr std::uintptr_t m_bDampenNearWaterPlane    = 0x0F52; // bool
            static constexpr std::uintptr_t m_bSampleGravity           = 0x0F53; // bool
            static constexpr std::uintptr_t m_vecGravityForce          = 0x0F58; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bUseBasicMovementGravity = 0x1610; // bool
            static constexpr std::uintptr_t m_flLocalGravityScale      = 0x1618; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLocalBuoyancyScale     = 0x1788; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecBuoyancyForce         = 0x18F8; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Callback : public CParticleFunctionRenderer {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPtoVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPInput     = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flForceScale = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bRopes       = 0x0350; // bool
            static constexpr std::uintptr_t m_bRopesZOnly  = 0x0351; // bool
            static constexpr std::uintptr_t m_bExplosions  = 0x0352; // bool
            static constexpr std::uintptr_t m_bParticles   = 0x0353; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LocalAccelerationForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_nCP      = 0x01E0; // int32
            static constexpr std::uintptr_t m_nScaleCP = 0x01E4; // int32
            static constexpr std::uintptr_t m_vecAccel = 0x01E8; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DensityForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flRadiusScale   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flForceScale    = 0x01E4; // float32
            static constexpr std::uintptr_t m_flTargetDensity = 0x01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_IntraParticleForce : public CParticleFunctionForce {
        public:
            static constexpr std::uintptr_t m_flAttractionMinDistance = 0x01E0; // float32
            static constexpr std::uintptr_t m_flAttractionMaxDistance = 0x01E4; // float32
            static constexpr std::uintptr_t m_flAttractionMaxStrength = 0x01E8; // float32
            static constexpr std::uintptr_t m_flRepulsionMinDistance  = 0x01EC; // float32
            static constexpr std::uintptr_t m_flRepulsionMaxDistance  = 0x01F0; // float32
            static constexpr std::uintptr_t m_flRepulsionMaxStrength  = 0x01F4; // float32
            static constexpr std::uintptr_t m_bUseAABB                = 0x01F8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ClampScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputMin  = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax  = 0x0348; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_BasicMovement : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Gravity              = 0x01D0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_fDrag                = 0x0888; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_massControls         = 0x09F8; // CParticleMassCalculationParameters
            static constexpr std::uintptr_t m_nMaxConstraintPasses = 0x0E50; // int32
            static constexpr std::uintptr_t m_bUseNewCode          = 0x0E54; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flStartFadeInTime  = 0x01D0; // float32
            static constexpr std::uintptr_t m_flEndFadeInTime    = 0x01D4; // float32
            static constexpr std::uintptr_t m_flStartFadeOutTime = 0x01D8; // float32
            static constexpr std::uintptr_t m_flEndFadeOutTime   = 0x01DC; // float32
            static constexpr std::uintptr_t m_flStartAlpha       = 0x01E0; // float32
            static constexpr std::uintptr_t m_flEndAlpha         = 0x01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SequenceFromModel : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputAnim    = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin          = 0x01DC; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0x01E8; // float32
            static constexpr std::uintptr_t m_nSetMethod          = 0x01EC; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeOut : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeOutTimeMin = 0x01D0; // float32
            static constexpr std::uintptr_t m_flFadeOutTimeMax = 0x01D4; // float32
            static constexpr std::uintptr_t m_flFadeOutTimeExp = 0x01D8; // float32
            static constexpr std::uintptr_t m_flFadeBias       = 0x01DC; // float32
            static constexpr std::uintptr_t m_bProportional    = 0x0210; // bool
            static constexpr std::uintptr_t m_bEaseInAndOut    = 0x0211; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0x01D0; // float32
            static constexpr std::uintptr_t m_RateMax         = 0x01D4; // float32
            static constexpr std::uintptr_t m_FrequencyMin    = 0x01D8; // float32
            static constexpr std::uintptr_t m_FrequencyMax    = 0x01DC; // float32
            static constexpr std::uintptr_t m_nField          = 0x01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportional   = 0x01E4; // bool
            static constexpr std::uintptr_t m_bProportionalOp = 0x01E5; // bool
            static constexpr std::uintptr_t m_flStartTime_min = 0x01E8; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0x01EC; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0x01F0; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0x01F4; // float32
            static constexpr std::uintptr_t m_flOscMult       = 0x01F8; // float32
            static constexpr std::uintptr_t m_flOscAdd        = 0x01FC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateScalarSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate      = 0x01D0; // float32
            static constexpr std::uintptr_t m_Frequency = 0x01D4; // float32
            static constexpr std::uintptr_t m_nField    = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOscMult = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOscAdd  = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OscillateVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0x01D0; // Vector
            static constexpr std::uintptr_t m_RateMax         = 0x01DC; // Vector
            static constexpr std::uintptr_t m_FrequencyMin    = 0x01E8; // Vector
            static constexpr std::uintptr_t m_FrequencyMax    = 0x01F4; // Vector
            static constexpr std::uintptr_t m_nField          = 0x0200; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportional   = 0x0204; // bool
            static constexpr std::uintptr_t m_bProportionalOp = 0x0205; // bool
            static constexpr std::uintptr_t m_bOffset         = 0x0206; // bool
            static constexpr std::uintptr_t m_flStartTime_min = 0x0208; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0x020C; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0x0210; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0x0214; // float32
            static constexpr std::uintptr_t m_flOscMult       = 0x0218; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOscAdd        = 0x0388; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRateScale     = 0x04F8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput          = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin           = 0x01D8; // float32
            static constexpr std::uintptr_t m_flInputMax           = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMin          = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMax          = 0x01E4; // float32
            static constexpr std::uintptr_t m_nSetMethod           = 0x01E8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange         = 0x01EC; // bool
            static constexpr std::uintptr_t m_bSetPreviousParticle = 0x01ED; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ScreenSpacePositionOfTarget : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecTargetPosition   = 0x01D0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bOututBehindness    = 0x0888; // bool
            static constexpr std::uintptr_t m_nBehindFieldOutput  = 0x088C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flBehindOutputRemap = 0x0890; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nBehindSetMethod    = 0x0A00; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ScreenSpaceDistanceToEdge : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput      = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMaxDistFromEdge = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap     = 0x0348; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nSetMethod        = 0x04B8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeStart = 0x01D4; // float32
            static constexpr std::uintptr_t m_flFadeEnd   = 0x01D8; // float32
            static constexpr std::uintptr_t m_bCPPairs    = 0x01DC; // bool
            static constexpr std::uintptr_t m_PathParams  = 0x01E0; // CPathParameters
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput  = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0x01D8; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01E4; // float32
            static constexpr std::uintptr_t m_bOldCode     = 0x01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDensityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRadiusScale        = 0x01D0; // float32
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flDensityMin         = 0x01D8; // float32
            static constexpr std::uintptr_t m_flDensityMax         = 0x01DC; // float32
            static constexpr std::uintptr_t m_vecOutputMin         = 0x01E0; // Vector
            static constexpr std::uintptr_t m_vecOutputMax         = 0x01EC; // Vector
            static constexpr std::uintptr_t m_bUseParentDensity    = 0x01F8; // bool
            static constexpr std::uintptr_t m_nVoxelGridResolution = 0x01FC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Diffusion : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRadiusScale        = 0x01D0; // float32
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVoxelGridResolution = 0x01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapScalarEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput  = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0x01D8; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bProportional = 0x01D0; // bool
            static constexpr std::uintptr_t m_nFieldInput   = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin    = 0x01DC; // float32
            static constexpr std::uintptr_t m_flInputMax    = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin   = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax   = 0x01E8; // float32
            static constexpr std::uintptr_t m_flRemapTime   = 0x01EC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nInputMin    = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nInputMax    = 0x0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMin  = 0x04B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMax  = 0x0628; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bActiveRange = 0x0798; // bool
            static constexpr std::uintptr_t m_nSetMethod   = 0x079C; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput   = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin    = 0x01D8; // float32
            static constexpr std::uintptr_t m_flInputMax    = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMin   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMax   = 0x01E4; // float32
            static constexpr std::uintptr_t m_flRadiusScale = 0x01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutput     = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flStartTime  = 0x0348; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0x034C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpEndCapVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutput    = 0x01D4; // Vector
            static constexpr std::uintptr_t m_flLerpTime   = 0x01E0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutput    = 0x01D4; // Vector
            static constexpr std::uintptr_t m_flStartTime  = 0x01E0; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0x01E4; // float32
            static constexpr std::uintptr_t m_nSetMethod   = 0x01E8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapSpeed : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin   = 0x01D4; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0x01D8; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01E0; // float32
            static constexpr std::uintptr_t m_nSetMethod   = 0x01E4; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bIgnoreDelta = 0x01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarLinear : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0x01D0; // float32
            static constexpr std::uintptr_t m_RateMax         = 0x01D4; // float32
            static constexpr std::uintptr_t m_flStartTime_min = 0x01D8; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0x01DC; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0x01E4; // float32
            static constexpr std::uintptr_t m_nField          = 0x0210; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportionalOp = 0x0214; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarSpline : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_RateMin         = 0x01D0; // float32
            static constexpr std::uintptr_t m_RateMax         = 0x01D4; // float32
            static constexpr std::uintptr_t m_flStartTime_min = 0x01D8; // float32
            static constexpr std::uintptr_t m_flStartTime_max = 0x01DC; // float32
            static constexpr std::uintptr_t m_flEndTime_min   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flEndTime_max   = 0x01E4; // float32
            static constexpr std::uintptr_t m_flBias          = 0x01E8; // float32
            static constexpr std::uintptr_t m_nField          = 0x0210; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bProportionalOp = 0x0214; // bool
            static constexpr std::uintptr_t m_bEaseOut        = 0x0215; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate        = 0x01D0; // float32
            static constexpr std::uintptr_t m_flStartTime = 0x01D4; // float32
            static constexpr std::uintptr_t m_flEndTime   = 0x01D8; // float32
            static constexpr std::uintptr_t m_nField      = 0x0200; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Noise : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput              = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputMin               = 0x01D4; // float32
            static constexpr std::uintptr_t m_flOutputMax               = 0x01D8; // float32
            static constexpr std::uintptr_t m_fl4NoiseScale             = 0x01DC; // float32
            static constexpr std::uintptr_t m_bAdditive                 = 0x01E0; // bool
            static constexpr std::uintptr_t m_flNoiseAnimationTimeScale = 0x01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VectorNoise : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput              = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecOutputMin              = 0x01D4; // Vector
            static constexpr std::uintptr_t m_vecOutputMax              = 0x01E0; // Vector
            static constexpr std::uintptr_t m_fl4NoiseScale             = 0x01EC; // float32
            static constexpr std::uintptr_t m_bAdditive                 = 0x01F0; // bool
            static constexpr std::uintptr_t m_bOffset                   = 0x01F1; // bool
            static constexpr std::uintptr_t m_flNoiseAnimationTimeScale = 0x01F4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFreezeTime = 0x01D0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EndCapTimedDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDecayTime = 0x01D0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EndCapDecay : public CParticleFunctionOperator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_VelocityDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMinVelocity = 0x01D0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_AlphaDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMinAlpha = 0x01D0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RadiusDecay : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flMinRadius = 0x01D0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DecayMaintainCount : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nParticlesToMaintain  = 0x01D0; // int32
            static constexpr std::uintptr_t m_flDecayDelay          = 0x01D4; // float32
            static constexpr std::uintptr_t m_nSnapshotControlPoint = 0x01D8; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset     = 0x01E0; // CUtlString
            static constexpr std::uintptr_t m_bLifespanDecay        = 0x01E8; // bool
            static constexpr std::uintptr_t m_flScale               = 0x01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bKillNewest           = 0x0360; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DecayClampCount : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCount = 0x01D0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LazyCullCompareFloat : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flComparsion1 = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flComparsion2 = 0x0340; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flCullTime    = 0x04B0; // CPerParticleFloatInput
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CSpinUpdateBase : public CParticleFunctionOperator {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_Spin : public CGeneralSpin {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SpinUpdate : public CSpinUpdateBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSnapshotControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_nControlPointNumber         = 0x01D4; // int32
            static constexpr std::uintptr_t m_bRandom                     = 0x01D8; // bool
            static constexpr std::uintptr_t m_nRandomSeed                 = 0x01DC; // int32
            static constexpr std::uintptr_t m_bSetNormal                  = 0x01E0; // bool
            static constexpr std::uintptr_t m_bSetRadius                  = 0x01E1; // bool
            static constexpr std::uintptr_t m_nIndexType                  = 0x01E4; // SnapshotIndexType_t
            static constexpr std::uintptr_t m_flReadIndex                 = 0x01E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flIncrement                 = 0x0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nFullLoopIncrement          = 0x04C8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nSnapShotStartPoint         = 0x0638; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation             = 0x07A8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SpinYaw : public CGeneralSpin {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_GameLiquidSpill : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flLiquidContentsField = 0x0220; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flExpirationTime      = 0x0390; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAmountAttribute      = 0x0500; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ColorInterpolate : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_ColorFade       = 0x01D0; // Color
            static constexpr std::uintptr_t m_flFadeStartTime = 0x01E0; // float32
            static constexpr std::uintptr_t m_flFadeEndTime   = 0x01E4; // float32
            static constexpr std::uintptr_t m_nFieldOutput    = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bEaseInOut      = 0x01EC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_ColorFadeMin    = 0x01D0; // Color
            static constexpr std::uintptr_t m_ColorFadeMax    = 0x01EC; // Color
            static constexpr std::uintptr_t m_flFadeStartTime = 0x01FC; // float32
            static constexpr std::uintptr_t m_flFadeEndTime   = 0x0200; // float32
            static constexpr std::uintptr_t m_nFieldOutput    = 0x0204; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bEaseInOut      = 0x0208; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ControlpointLight : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale          = 0x01D0; // float32
            static constexpr std::uintptr_t m_nControlPoint1   = 0x0660; // int32
            static constexpr std::uintptr_t m_nControlPoint2   = 0x0664; // int32
            static constexpr std::uintptr_t m_nControlPoint3   = 0x0668; // int32
            static constexpr std::uintptr_t m_nControlPoint4   = 0x066C; // int32
            static constexpr std::uintptr_t m_vecCPOffset1     = 0x0670; // Vector
            static constexpr std::uintptr_t m_vecCPOffset2     = 0x067C; // Vector
            static constexpr std::uintptr_t m_vecCPOffset3     = 0x0688; // Vector
            static constexpr std::uintptr_t m_vecCPOffset4     = 0x0694; // Vector
            static constexpr std::uintptr_t m_LightFiftyDist1  = 0x06A0; // float32
            static constexpr std::uintptr_t m_LightZeroDist1   = 0x06A4; // float32
            static constexpr std::uintptr_t m_LightFiftyDist2  = 0x06A8; // float32
            static constexpr std::uintptr_t m_LightZeroDist2   = 0x06AC; // float32
            static constexpr std::uintptr_t m_LightFiftyDist3  = 0x06B0; // float32
            static constexpr std::uintptr_t m_LightZeroDist3   = 0x06B4; // float32
            static constexpr std::uintptr_t m_LightFiftyDist4  = 0x06B8; // float32
            static constexpr std::uintptr_t m_LightZeroDist4   = 0x06BC; // float32
            static constexpr std::uintptr_t m_LightColor1      = 0x06C0; // Color
            static constexpr std::uintptr_t m_LightColor2      = 0x06C4; // Color
            static constexpr std::uintptr_t m_LightColor3      = 0x06C8; // Color
            static constexpr std::uintptr_t m_LightColor4      = 0x06CC; // Color
            static constexpr std::uintptr_t m_bLightType1      = 0x06D0; // bool
            static constexpr std::uintptr_t m_bLightType2      = 0x06D1; // bool
            static constexpr std::uintptr_t m_bLightType3      = 0x06D2; // bool
            static constexpr std::uintptr_t m_bLightType4      = 0x06D3; // bool
            static constexpr std::uintptr_t m_bLightDynamic1   = 0x06D4; // bool
            static constexpr std::uintptr_t m_bLightDynamic2   = 0x06D5; // bool
            static constexpr std::uintptr_t m_bLightDynamic3   = 0x06D6; // bool
            static constexpr std::uintptr_t m_bLightDynamic4   = 0x06D7; // bool
            static constexpr std::uintptr_t m_bUseNormal       = 0x06D8; // bool
            static constexpr std::uintptr_t m_bUseHLambert     = 0x06D9; // bool
            static constexpr std::uintptr_t m_bClampLowerRange = 0x06DE; // bool
            static constexpr std::uintptr_t m_bClampUpperRange = 0x06DF; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapGravityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vInput1           = 0x01D0; // CPerParticleVecInput
            static constexpr std::uintptr_t m_nOutputField      = 0x0888; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0x088C; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput = 0x0890; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_GlobalLight : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale          = 0x01D0; // float32
            static constexpr std::uintptr_t m_bClampLowerRange = 0x01D4; // bool
            static constexpr std::uintptr_t m_bClampUpperRange = 0x01D5; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_hModel             = 0x01D0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_inNames            = 0x01D8; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_outNames           = 0x01F0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_fallbackNames      = 0x0208; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bModelFromRenderer = 0x0220; // bool
            static constexpr std::uintptr_t m_nFieldInput        = 0x0224; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput       = 0x0228; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput       = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_TransformStart     = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd       = 0x0240; // CParticleTransformInput
            static constexpr std::uintptr_t m_flInputMin         = 0x02A8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax         = 0x0418; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin        = 0x0588; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax        = 0x06F8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x0868; // float32
            static constexpr std::uintptr_t m_flLOSScale         = 0x086C; // float32
            static constexpr std::uintptr_t m_CollisionGroupName = 0x0870; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x08F0; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_bLOS               = 0x08F4; // bool
            static constexpr std::uintptr_t m_nSetMethod         = 0x08F8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetChildControlPoints : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint = 0x01D4; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bReverse           = 0x0350; // bool
            static constexpr std::uintptr_t m_bSetOrientation    = 0x0351; // bool
            static constexpr std::uintptr_t m_nOrientation       = 0x0354; // ParticleOrientationType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID            = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint       = 0x01D4; // int32
            static constexpr std::uintptr_t m_nNumControlPoints        = 0x01D8; // int32
            static constexpr std::uintptr_t m_nParticleIncrement       = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nFirstSourcePoint        = 0x0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bSetOrientation          = 0x04C0; // bool
            static constexpr std::uintptr_t m_nOrientationField        = 0x04C4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bNumBasedOnParticleCount = 0x04C8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderAsModels : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_ModelList              = 0x0220; // CUtlVector<ModelReference_t>
            static constexpr std::uintptr_t m_flModelScale           = 0x023C; // float32
            static constexpr std::uintptr_t m_bFitToModelSize        = 0x0240; // bool
            static constexpr std::uintptr_t m_bNonUniformScaling     = 0x0241; // bool
            static constexpr std::uintptr_t m_nXAxisScalingAttribute = 0x0244; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nYAxisScalingAttribute = 0x0248; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nZAxisScalingAttribute = 0x024C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSizeCullBloat         = 0x0250; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nChildGroupID            = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFirstControlPoint       = 0x01D4; // int32
            static constexpr std::uintptr_t m_nNumControlPoints        = 0x01D8; // int32
            static constexpr std::uintptr_t m_nParticleIncrement       = 0x01DC; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint        = 0x01E0; // int32
            static constexpr std::uintptr_t m_bNumBasedOnParticleCount = 0x01E4; // bool
            static constexpr std::uintptr_t m_nAttributeToRead         = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nCPField                 = 0x01EC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D0; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0x0238; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRotOffset    = 0x023C; // float32
            static constexpr std::uintptr_t m_flSpinStrength = 0x0240; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nInputCP1            = 0x01D0; // int32
            static constexpr std::uintptr_t m_nInputCP2            = 0x01D4; // int32
            static constexpr std::uintptr_t m_nFieldOutput         = 0x01D8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin           = 0x01DC; // float32
            static constexpr std::uintptr_t m_flInputMax           = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin          = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax          = 0x01E8; // float32
            static constexpr std::uintptr_t m_bUseParticleVelocity = 0x01EC; // bool
            static constexpr std::uintptr_t m_nSetMethod           = 0x01F0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange         = 0x01F4; // bool
            static constexpr std::uintptr_t m_bUseParticleNormal   = 0x01F5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_vecOffset           = 0x01D4; // Vector
            static constexpr std::uintptr_t m_bOffsetLocal        = 0x01E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PinRopeSegmentParticleToParent : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nParticleSelection = 0x01D0; // ParticleSelection_t
            static constexpr std::uintptr_t m_nParticleNumber    = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation    = 0x0348; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LerpToInitialPosition : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_flInterpolation     = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nCacheField         = 0x0348; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale             = 0x0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecScale            = 0x04C0; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput   = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0x01D4; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0x01D8; // float32
            static constexpr std::uintptr_t m_flOutputMin    = 0x01DC; // float32
            static constexpr std::uintptr_t m_flOutputMax    = 0x01E0; // float32
            static constexpr std::uintptr_t m_TransformStart = 0x01E8; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd   = 0x0250; // CParticleTransformInput
            static constexpr std::uintptr_t m_nSetMethod     = 0x02B8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange   = 0x02BC; // bool
            static constexpr std::uintptr_t m_bRadialCheck   = 0x02BD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_NormalLock : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput   = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0x01D4; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0x01D8; // float32
            static constexpr std::uintptr_t m_vecOutputMin   = 0x01DC; // Vector
            static constexpr std::uintptr_t m_vecOutputMax   = 0x01E8; // Vector
            static constexpr std::uintptr_t m_TransformStart = 0x01F8; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd   = 0x0260; // CParticleTransformInput
            static constexpr std::uintptr_t m_nSetMethod     = 0x02C8; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange   = 0x02CC; // bool
            static constexpr std::uintptr_t m_bRadialCheck   = 0x02CD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput      = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin        = 0x01D4; // float32
            static constexpr std::uintptr_t m_flInputMax        = 0x01D8; // float32
            static constexpr std::uintptr_t m_TransformStart    = 0x01E0; // CParticleTransformInput
            static constexpr std::uintptr_t m_TransformEnd      = 0x0248; // CParticleTransformInput
            static constexpr std::uintptr_t m_nOutputStartCP    = 0x02B0; // int32
            static constexpr std::uintptr_t m_nOutputStartField = 0x02B4; // int32
            static constexpr std::uintptr_t m_nOutputEndCP      = 0x02B8; // int32
            static constexpr std::uintptr_t m_nOutputEndField   = 0x02BC; // int32
            static constexpr std::uintptr_t m_nSetMethod        = 0x02C0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange      = 0x02C4; // bool
            static constexpr std::uintptr_t m_bRadialCheck      = 0x02C5; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecPoint1    = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecPoint2    = 0x0890; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flInputMin   = 0x0F48; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax   = 0x10B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin  = 0x1228; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax  = 0x1398; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nSetMethod   = 0x1508; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bDeltaTime   = 0x150C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecPoint1    = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecPoint2    = 0x0890; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceToTransform : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput       = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin         = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInputMax         = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMin        = 0x04B8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputMax        = 0x0628; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_TransformStart     = 0x0798; // CParticleTransformInput
            static constexpr std::uintptr_t m_bLOS               = 0x0800; // bool
            static constexpr std::uintptr_t m_CollisionGroupName = 0x0801; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x0884; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x0888; // float32
            static constexpr std::uintptr_t m_flLOSScale         = 0x088C; // float32
            static constexpr std::uintptr_t m_nSetMethod         = 0x0890; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bActiveRange       = 0x0894; // bool
            static constexpr std::uintptr_t m_bAdditive          = 0x0895; // bool
            static constexpr std::uintptr_t m_vecComponentScale  = 0x0898; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RtEnvCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecTestDir          = 0x01D0; // Vector
            static constexpr std::uintptr_t m_vecTestNormal       = 0x01DC; // Vector
            static constexpr std::uintptr_t m_bCullOnMiss         = 0x01E8; // bool
            static constexpr std::uintptr_t m_bStickInsteadOfCull = 0x01E9; // bool
            static constexpr std::uintptr_t m_RtEnvName           = 0x01EA; // char[128]
            static constexpr std::uintptr_t m_nRTEnvCP            = 0x026C; // int32
            static constexpr std::uintptr_t m_nComponent          = 0x0270; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP          = 0x01D0; // int32
            static constexpr std::uintptr_t m_flDistance   = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecScale     = 0x0348; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nDistSqrAttr = 0x0A00; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MoveToHitbox : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_modelInput          = 0x01D0; // CParticleModelInput
            static constexpr std::uintptr_t m_transformInput      = 0x0230; // CParticleTransformInput
            static constexpr std::uintptr_t m_flLifeTimeLerpStart = 0x029C; // float32
            static constexpr std::uintptr_t m_flLifeTimeLerpEnd   = 0x02A0; // float32
            static constexpr std::uintptr_t m_flPrevPosScale      = 0x02A4; // float32
            static constexpr std::uintptr_t m_HitboxSetName       = 0x02A8; // char[128]
            static constexpr std::uintptr_t m_bUseBones           = 0x0328; // bool
            static constexpr std::uintptr_t m_nLerpType           = 0x032C; // HitboxLerpType_t
            static constexpr std::uintptr_t m_flInterpolation     = 0x0330; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToBone : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_modelInput          = 0x01D0; // CParticleModelInput
            static constexpr std::uintptr_t m_transformInput      = 0x0230; // CParticleTransformInput
            static constexpr std::uintptr_t m_flLifeTimeFadeStart = 0x0298; // float32
            static constexpr std::uintptr_t m_flLifeTimeFadeEnd   = 0x029C; // float32
            static constexpr std::uintptr_t m_flJumpThreshold     = 0x02A0; // float32
            static constexpr std::uintptr_t m_flPrevPosScale      = 0x02A4; // float32
            static constexpr std::uintptr_t m_HitboxSetName       = 0x02A8; // char[128]
            static constexpr std::uintptr_t m_bRigid              = 0x0328; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0x0329; // bool
            static constexpr std::uintptr_t m_nFieldOutput        = 0x032C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutputPrev    = 0x0330; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nRotationSetType    = 0x0334; // ParticleRotationLockType_t
            static constexpr std::uintptr_t m_bRigidRotationLock  = 0x0338; // bool
            static constexpr std::uintptr_t m_vecRotation         = 0x0340; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flRotLerp           = 0x09F8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPtoVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPInput      = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP = 0x01D8; // int32
            static constexpr std::uintptr_t m_vInputMin     = 0x01DC; // Vector
            static constexpr std::uintptr_t m_vInputMax     = 0x01E8; // Vector
            static constexpr std::uintptr_t m_vOutputMin    = 0x01F4; // Vector
            static constexpr std::uintptr_t m_vOutputMax    = 0x0200; // Vector
            static constexpr std::uintptr_t m_flStartTime   = 0x020C; // float32
            static constexpr std::uintptr_t m_flEndTime     = 0x0210; // float32
            static constexpr std::uintptr_t m_flInterpRate  = 0x0214; // float32
            static constexpr std::uintptr_t m_nSetMethod    = 0x0218; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bOffset       = 0x021C; // bool
            static constexpr std::uintptr_t m_bAccelerate   = 0x021D; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bTransformNormals   = 0x01D0; // bool
            static constexpr std::uintptr_t m_bTransformRadii     = 0x01D1; // bool
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bTransformNormals   = 0x01D0; // bool
            static constexpr std::uintptr_t m_bTransformRadii     = 0x01D1; // bool
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D4; // int32
            static constexpr std::uintptr_t m_flLifeTimeFadeStart = 0x01D8; // float32
            static constexpr std::uintptr_t m_flLifeTimeFadeEnd   = 0x01DC; // float32
            static constexpr std::uintptr_t m_flJumpThreshold     = 0x01E0; // float32
            static constexpr std::uintptr_t m_flPrevPosScale      = 0x01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PlaneCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nPlaneControlPoint = 0x01D0; // int32
            static constexpr std::uintptr_t m_vecPlaneDirection  = 0x01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_bLocalSpace        = 0x0890; // bool
            static constexpr std::uintptr_t m_flPlaneOffset      = 0x0894; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceCull : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPoint  = 0x01D0; // int32
            static constexpr std::uintptr_t m_vecPointOffset = 0x01D4; // Vector
            static constexpr std::uintptr_t m_flDistance     = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCullInside    = 0x0350; // bool
            static constexpr std::uintptr_t m_nAttribute     = 0x0354; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderClientPhysicsImpulse : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flRadius     = 0x0220; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMagnitude  = 0x0390; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nSimIdFilter = 0x0500; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ModelDampenMovement : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_bBoundBox           = 0x01D4; // bool
            static constexpr std::uintptr_t m_bOutside            = 0x01D5; // bool
            static constexpr std::uintptr_t m_bUseBones           = 0x01D6; // bool
            static constexpr std::uintptr_t m_HitboxSetName       = 0x01D7; // char[128]
            static constexpr std::uintptr_t m_vecPosOffset        = 0x0258; // CPerParticleVecInput
            static constexpr std::uintptr_t m_fDrag               = 0x0910; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementMaintainOffset : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecOffset    = 0x01D0; // Vector
            static constexpr std::uintptr_t m_nCP          = 0x01DC; // int32
            static constexpr std::uintptr_t m_bRadiusScale = 0x01E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flOffset           = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x0340; // float32
            static constexpr std::uintptr_t m_flTolerance        = 0x0344; // float32
            static constexpr std::uintptr_t m_flTraceOffset      = 0x0348; // float32
            static constexpr std::uintptr_t m_flLerpRate         = 0x034C; // float32
            static constexpr std::uintptr_t m_CollisionGroupName = 0x0350; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x03D0; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nRefCP1            = 0x03D4; // int32
            static constexpr std::uintptr_t m_nRefCP2            = 0x03D8; // int32
            static constexpr std::uintptr_t m_nLerpCP            = 0x03DC; // int32
            static constexpr std::uintptr_t m_nTraceMissBehavior = 0x03E8; // ParticleTraceMissBehavior_t
            static constexpr std::uintptr_t m_bIncludeShotHull   = 0x03EC; // bool
            static constexpr std::uintptr_t m_bIncludeWater      = 0x03ED; // bool
            static constexpr std::uintptr_t m_bSetNormal         = 0x03F0; // bool
            static constexpr std::uintptr_t m_bScaleOffset       = 0x03F1; // bool
            static constexpr std::uintptr_t m_nPreserveOffsetCP  = 0x03F4; // int32
            static constexpr std::uintptr_t m_nIgnoreCP          = 0x03F8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flScale                = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nFieldOutput           = 0x0340; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement             = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bRandomDistribution    = 0x04B8; // bool
            static constexpr std::uintptr_t m_bReverse               = 0x04B9; // bool
            static constexpr std::uintptr_t m_nMissingParentBehavior = 0x04BC; // MissingParentInheritBehavior_t
            static constexpr std::uintptr_t m_flInterpolation        = 0x04C0; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldInput     = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput    = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement      = 0x01D8; // int32
            static constexpr std::uintptr_t m_DistanceCheck   = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInterpolation = 0x0350; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldInput  = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nIncrement   = 0x01D8; // int32
            static constexpr std::uintptr_t m_nGroupID     = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_OrientTo2dDirection : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRotOffset    = 0x01D0; // float32
            static constexpr std::uintptr_t m_flSpinStrength = 0x01D4; // float32
            static constexpr std::uintptr_t m_nFieldOutput   = 0x01D8; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vecRotAxis     = 0x01D0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flRotRate      = 0x0888; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_TransformInput = 0x09F8; // CParticleTransformInput
            static constexpr std::uintptr_t m_bLocalSpace    = 0x0A60; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RotateVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecRotAxisMin = 0x01D4; // Vector
            static constexpr std::uintptr_t m_vecRotAxisMax = 0x01E0; // Vector
            static constexpr std::uintptr_t m_flRotRateMin  = 0x01EC; // float32
            static constexpr std::uintptr_t m_flRotRateMax  = 0x01F0; // float32
            static constexpr std::uintptr_t m_bNormalize    = 0x01F4; // bool
            static constexpr std::uintptr_t m_flScale       = 0x01F8; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LagCompensation : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nDesiredVelocityCP      = 0x01D0; // int32
            static constexpr std::uintptr_t m_nLatencyCP              = 0x01D4; // int32
            static constexpr std::uintptr_t m_nLatencyCPField         = 0x01D8; // int32
            static constexpr std::uintptr_t m_nDesiredVelocityCPField = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPtoScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPInput     = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nField       = 0x01D8; // int32
            static constexpr std::uintptr_t m_flInputMin   = 0x01DC; // float32
            static constexpr std::uintptr_t m_flInputMax   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin  = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax  = 0x01E8; // float32
            static constexpr std::uintptr_t m_flStartTime  = 0x01EC; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0x01F0; // float32
            static constexpr std::uintptr_t m_flInterpRate = 0x01F4; // float32
            static constexpr std::uintptr_t m_nSetMethod   = 0x01F8; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPoint = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale       = 0x01D8; // float32
            static constexpr std::uintptr_t m_bNormalize    = 0x01DC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DragRelativeToPlane : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flDragAtPlane       = 0x01D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flFalloff           = 0x0340; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDirectional        = 0x04B0; // bool
            static constexpr std::uintptr_t m_vecPlaneNormal      = 0x04B8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nControlPointNumber = 0x0B70; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nInputControlPoint  = 0x01D0; // int32
            static constexpr std::uintptr_t m_nOutputControlPoint = 0x01D4; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP            = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput   = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale        = 0x01D8; // float32
            static constexpr std::uintptr_t m_flOffsetRot    = 0x01DC; // float32
            static constexpr std::uintptr_t m_vecOffsetAxis  = 0x01E0; // Vector
            static constexpr std::uintptr_t m_bNormalize     = 0x01EC; // bool
            static constexpr std::uintptr_t m_nFieldStrength = 0x01F0; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_NormalizeVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale      = 0x01D4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flScale             = 0x01D4; // float32
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderBlobs : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_cubeWidth      = 0x0220; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_cutoffRadius   = 0x0390; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_renderRadius   = 0x0500; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nVertexCountKb = 0x0670; // uint32
            static constexpr std::uintptr_t m_nIndexCountKb  = 0x0674; // uint32
            static constexpr std::uintptr_t m_nScaleCP       = 0x0678; // int32
            static constexpr std::uintptr_t m_MaterialVars   = 0x0680; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_hMaterial      = 0x06B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flInterpRate       = 0x01D0; // float32
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x01D4; // float32
            static constexpr std::uintptr_t m_flTolerance        = 0x01D8; // float32
            static constexpr std::uintptr_t m_flTraceOffset      = 0x01DC; // float32
            static constexpr std::uintptr_t m_CollisionGroupName = 0x01E0; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x0260; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nInputCP           = 0x0264; // int32
            static constexpr std::uintptr_t m_nOutputCP          = 0x0268; // int32
            static constexpr std::uintptr_t m_bIncludeWater      = 0x0278; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP          = 0x01D0; // int32
            static constexpr std::uintptr_t m_nFieldOutput = 0x01D4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOffsetRot  = 0x01D8; // float32
            static constexpr std::uintptr_t m_nComponent   = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LockToPointList : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFieldOutput        = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_pointList           = 0x01D8; // CUtlVector<PointDefinition_t>
            static constexpr std::uintptr_t m_bPlaceAlongPath     = 0x01F0; // bool
            static constexpr std::uintptr_t m_bClosedLoop         = 0x01F1; // bool
            static constexpr std::uintptr_t m_nNumPointsAlongPath = 0x01F4; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_hModel             = 0x01D0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_inNames            = 0x01D8; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_outNames           = 0x01F0; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_fallbackNames      = 0x0208; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bModelFromRenderer = 0x0220; // bool
            static constexpr std::uintptr_t m_bProportional      = 0x0221; // bool
            static constexpr std::uintptr_t m_nFieldInput        = 0x0224; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFieldOutput       = 0x0228; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRemapTime        = 0x022C; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderLightBeam : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_vColorBlend                = 0x0220; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType            = 0x08D8; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_flBrightnessLumensPerMeter = 0x08E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bCastShadows               = 0x0A50; // bool
            static constexpr std::uintptr_t m_flSkirt                    = 0x0A58; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRange                    = 0x0BC8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flThickness                = 0x0D38; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0x01D0; // ScalarExpressionType_t
            static constexpr std::uintptr_t m_flInput1      = 0x01D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flInput2      = 0x0348; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap = 0x04B8; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0x0628; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0x062C; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nExpression       = 0x01D0; // VectorExpressionType_t
            static constexpr std::uintptr_t m_vInput1           = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2           = 0x0890; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flLerp            = 0x0F48; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField      = 0x10B8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod        = 0x10BC; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_bNormalizedOutput = 0x10C0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CreateParticleSystemRenderer : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_hEffect          = 0x0220; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nEventType       = 0x0228; // EventTypeSelection_t
            static constexpr std::uintptr_t m_vecCPs           = 0x0230; // CUtlLeanVector<CPAssignment_t>
            static constexpr std::uintptr_t m_szParticleConfig = 0x0240; // CUtlString
            static constexpr std::uintptr_t m_AggregationPos   = 0x0248; // CPerParticleVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nExpression   = 0x01D0; // VectorFloatExpressionType_t
            static constexpr std::uintptr_t m_vInput1       = 0x01D8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vInput2       = 0x0890; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flOutputRemap = 0x0F48; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputField  = 0x10B8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod    = 0x10BC; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber         = 0x01D0; // int32
            static constexpr std::uintptr_t m_nSnapshotControlPointNumber = 0x01D4; // int32
            static constexpr std::uintptr_t m_bSetNormal                  = 0x01D8; // bool
            static constexpr std::uintptr_t m_bSetRadius                  = 0x01D9; // bool
            static constexpr std::uintptr_t m_flInterpolation             = 0x01E0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flTValue                    = 0x0350; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_QuantizeFloat : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0x0340; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFloatCollection : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0x01D0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0x0340; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod   = 0x0344; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_Lerp         = 0x0348; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFloat : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_InputValue   = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nOutputField = 0x0340; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSetMethod   = 0x0344; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_Lerp         = 0x0348; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flRadiusScale = 0x01D0; // float32
            static constexpr std::uintptr_t m_nFieldOutput  = 0x01D4; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCP0            = 0x01D0; // int32
            static constexpr std::uintptr_t m_nCP1            = 0x01D4; // int32
            static constexpr std::uintptr_t m_flMinInputValue = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMaxInputValue = 0x01DC; // float32
            static constexpr std::uintptr_t m_bInfiniteLine   = 0x01E0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase {
        public:
            static constexpr std::uintptr_t m_nFieldOutput     = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMinOutputValue = 0x01EC; // float32
            static constexpr std::uintptr_t m_flMaxOutputValue = 0x01F0; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase {
        public:
            static constexpr std::uintptr_t m_nFieldOutput    = 0x01E8; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vMinOutputValue = 0x01EC; // Vector
            static constexpr std::uintptr_t m_vMaxOutputValue = 0x01F8; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_TeleportBeam : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nCPPosition      = 0x01D0; // int32
            static constexpr std::uintptr_t m_nCPVelocity      = 0x01D4; // int32
            static constexpr std::uintptr_t m_nCPMisc          = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPColor         = 0x01DC; // int32
            static constexpr std::uintptr_t m_nCPInvalidColor  = 0x01E0; // int32
            static constexpr std::uintptr_t m_nCPExtraArcData  = 0x01E4; // int32
            static constexpr std::uintptr_t m_vGravity         = 0x01E8; // Vector
            static constexpr std::uintptr_t m_flArcMaxDuration = 0x01F4; // float32
            static constexpr std::uintptr_t m_flSegmentBreak   = 0x01F8; // float32
            static constexpr std::uintptr_t m_flArcSpeed       = 0x01FC; // float32
            static constexpr std::uintptr_t m_flAlpha          = 0x0200; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CycleScalar : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nDestField            = 0x01D0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flStartValue          = 0x01D4; // float32
            static constexpr std::uintptr_t m_flEndValue            = 0x01D8; // float32
            static constexpr std::uintptr_t m_flCycleTime           = 0x01DC; // float32
            static constexpr std::uintptr_t m_bDoNotRepeatCycle     = 0x01E0; // bool
            static constexpr std::uintptr_t m_bSynchronizeParticles = 0x01E1; // bool
            static constexpr std::uintptr_t m_nCPScale              = 0x01E4; // int32
            static constexpr std::uintptr_t m_nCPFieldMin           = 0x01E8; // int32
            static constexpr std::uintptr_t m_nCPFieldMax           = 0x01EC; // int32
            static constexpr std::uintptr_t m_nSetMethod            = 0x01F0; // ParticleSetMethod_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ColorAdjustHSL : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flHueAdjust        = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flSaturationAdjust = 0x0340; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flLightnessAdjust  = 0x04B0; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nFirstControlPoint  = 0x01D0; // int32
            static constexpr std::uintptr_t m_nSecondControlPoint = 0x01D4; // int32
            static constexpr std::uintptr_t m_bUseRadius          = 0x01D8; // bool
            static constexpr std::uintptr_t m_flRadiusScale       = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flParentRadiusScale = 0x0350; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_UpdateLightSource : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_vColorTint                = 0x01D0; // Color
            static constexpr std::uintptr_t m_flBrightnessScale         = 0x01D4; // float32
            static constexpr std::uintptr_t m_flRadiusScale             = 0x01D8; // float32
            static constexpr std::uintptr_t m_flMinimumLightingRadius   = 0x01DC; // float32
            static constexpr std::uintptr_t m_flMaximumLightingRadius   = 0x01E0; // float32
            static constexpr std::uintptr_t m_flPositionDampingConstant = 0x01E4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_GameDecalRenderer : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_sDecalGroupName             = 0x0220; // CGlobalSymbol
            static constexpr std::uintptr_t m_nEventType                  = 0x0228; // EventTypeSelection_t
            static constexpr std::uintptr_t m_nInteractionMask            = 0x0230; // ParticleCollisionMask_t
            static constexpr std::uintptr_t m_nCollisionGroup             = 0x0238; // ParticleCollisionGroup_t
            static constexpr std::uintptr_t m_vecStartPos                 = 0x0240; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecEndPos                   = 0x08F8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_flTraceBloat                = 0x0FB0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flDecalSize                 = 0x1120; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nDecalGroupIndex            = 0x1290; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flDecalRotation             = 0x1400; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vModulationColor            = 0x1570; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bUseGameDefaultDecalSize    = 0x1C28; // bool
            static constexpr std::uintptr_t m_bRandomDecalRotation        = 0x1C29; // bool
            static constexpr std::uintptr_t m_bRandomlySelectDecalInGroup = 0x1C2A; // bool
            static constexpr std::uintptr_t m_bNoDecalsOnOwner            = 0x1C2B; // bool
            static constexpr std::uintptr_t m_bVisualizeTraces            = 0x1C2C; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderText : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_OutlineColor = 0x0220; // Color
            static constexpr std::uintptr_t m_DefaultText  = 0x0228; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderPoints : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_hMaterial = 0x0220; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderPostProcessing : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flPostProcessStrength = 0x0220; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_hPostTexture          = 0x0390; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            static constexpr std::uintptr_t m_nPriority             = 0x0398; // ParticlePostProcessPriorityGroup_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderLights : public C_OP_RenderPoints {
        public:
            static constexpr std::uintptr_t m_flAnimationRate = 0x0228; // float32
            static constexpr std::uintptr_t m_nAnimationType  = 0x022C; // AnimationType_t
            static constexpr std::uintptr_t m_bAnimateInFPS   = 0x0230; // bool
            static constexpr std::uintptr_t m_flMinSize       = 0x0234; // float32
            static constexpr std::uintptr_t m_flMaxSize       = 0x0238; // float32
            static constexpr std::uintptr_t m_flStartFadeSize = 0x023C; // float32
            static constexpr std::uintptr_t m_flEndFadeSize   = 0x0240; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderModels : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsBloomPass    = 0x0220; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffectsWaterPass    = 0x0221; // bool
            static constexpr std::uintptr_t m_bUseMixedResolutionRendering     = 0x0222; // bool
            static constexpr std::uintptr_t m_bOnlyRenderInEffecsGameOverlay   = 0x0223; // bool
            static constexpr std::uintptr_t m_ModelList                        = 0x0228; // CUtlVector<ModelReference_t>
            static constexpr std::uintptr_t m_nBodyGroupField                  = 0x0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nSubModelField                   = 0x0244; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bIgnoreNormal                    = 0x0248; // bool
            static constexpr std::uintptr_t m_bOrientZ                         = 0x0249; // bool
            static constexpr std::uintptr_t m_bCenterOffset                    = 0x024A; // bool
            static constexpr std::uintptr_t m_vecLocalOffset                   = 0x0250; // CPerParticleVecInput
            static constexpr std::uintptr_t m_vecLocalRotation                 = 0x0908; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bIgnoreRadius                    = 0x0FC0; // bool
            static constexpr std::uintptr_t m_nModelScaleCP                    = 0x0FC4; // int32
            static constexpr std::uintptr_t m_vecComponentScale                = 0x0FC8; // CPerParticleVecInput
            static constexpr std::uintptr_t m_bLocalScale                      = 0x1680; // bool
            static constexpr std::uintptr_t m_nSizeCullBloat                   = 0x1684; // int32
            static constexpr std::uintptr_t m_bAnimated                        = 0x1688; // bool
            static constexpr std::uintptr_t m_flAnimationRate                  = 0x1690; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bScaleAnimationRate              = 0x1800; // bool
            static constexpr std::uintptr_t m_bForceLoopingAnimation           = 0x1801; // bool
            static constexpr std::uintptr_t m_bResetAnimOnStop                 = 0x1802; // bool
            static constexpr std::uintptr_t m_bManualAnimFrame                 = 0x1803; // bool
            static constexpr std::uintptr_t m_nAnimationScaleField             = 0x1804; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAnimationField                  = 0x1808; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nManualFrameField                = 0x180C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_ActivityName                     = 0x1810; // char[256]
            static constexpr std::uintptr_t m_SequenceName                     = 0x1910; // char[256]
            static constexpr std::uintptr_t m_bEnableClothSimulation           = 0x1A10; // bool
            static constexpr std::uintptr_t m_ClothEffectName                  = 0x1A11; // char[64]
            static constexpr std::uintptr_t m_hOverrideMaterial                = 0x1A58; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_bOverrideTranslucentMaterials    = 0x1A60; // bool
            static constexpr std::uintptr_t m_nSkin                            = 0x1A68; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_MaterialVars                     = 0x1BD8; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_flRenderFilter                   = 0x1BF0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flManualModelSelection           = 0x1D60; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_modelInput                       = 0x1ED0; // CParticleModelInput
            static constexpr std::uintptr_t m_nLOD                             = 0x1F30; // int32
            static constexpr std::uintptr_t m_EconSlotName                     = 0x1F34; // char[256]
            static constexpr std::uintptr_t m_bOriginalModel                   = 0x2034; // bool
            static constexpr std::uintptr_t m_bSuppressTint                    = 0x2035; // bool
            static constexpr std::uintptr_t m_nSubModelFieldType               = 0x2038; // RenderModelSubModelFieldType_t
            static constexpr std::uintptr_t m_bDisableShadows                  = 0x203C; // bool
            static constexpr std::uintptr_t m_bDisableDepthPrepass             = 0x203D; // bool
            static constexpr std::uintptr_t m_bAcceptsDecals                   = 0x203E; // bool
            static constexpr std::uintptr_t m_bForceDrawInterlevedWithSiblings = 0x203F; // bool
            static constexpr std::uintptr_t m_bDoNotDrawInParticlePass         = 0x2040; // bool
            static constexpr std::uintptr_t m_bAllowApproximateTransforms      = 0x2041; // bool
            static constexpr std::uintptr_t m_szRenderAttribute                = 0x2042; // char[260]
            static constexpr std::uintptr_t m_flRadiusScale                    = 0x2148; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                     = 0x22B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRollScale                      = 0x2428; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAlpha2Field                     = 0x2598; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale                    = 0x25A0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType                  = 0x2C58; // ParticleColorBlendType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bCenterOffset         = 0x0220; // bool
            static constexpr std::uintptr_t m_hModel                = 0x0228; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_modelInput            = 0x0230; // CParticleModelInput
            static constexpr std::uintptr_t m_fSizeCullScale        = 0x0290; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDisableShadows       = 0x0400; // bool
            static constexpr std::uintptr_t m_bDisableMotionBlur    = 0x0401; // bool
            static constexpr std::uintptr_t m_bAcceptsDecals        = 0x0402; // bool
            static constexpr std::uintptr_t m_fDrawFilter           = 0x0408; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nAngularVelocityField = 0x0578; // ParticleAttributeIndex_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nMaterialControlPoint     = 0x0220; // int32
            static constexpr std::uintptr_t m_nProxyType                = 0x0224; // MaterialProxyType_t
            static constexpr std::uintptr_t m_MaterialVars              = 0x0228; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_hOverrideMaterial         = 0x0240; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_flMaterialOverrideEnabled = 0x0248; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecColorScale             = 0x03B8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flAlpha                   = 0x0A70; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nColorBlendType           = 0x0BE0; // ParticleColorBlendType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderProjected : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bProjectCharacter             = 0x0220; // bool
            static constexpr std::uintptr_t m_bProjectWorld                 = 0x0221; // bool
            static constexpr std::uintptr_t m_bProjectWater                 = 0x0222; // bool
            static constexpr std::uintptr_t m_bFlipHorizontal               = 0x0223; // bool
            static constexpr std::uintptr_t m_bEnableProjectedDepthControls = 0x0224; // bool
            static constexpr std::uintptr_t m_flMinProjectionDepth          = 0x0228; // float32
            static constexpr std::uintptr_t m_flMaxProjectionDepth          = 0x022C; // float32
            static constexpr std::uintptr_t m_vecProjectedMaterials         = 0x0230; // CUtlVector<RenderProjectedMaterial_t>
            static constexpr std::uintptr_t m_flMaterialSelection           = 0x0248; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flAnimationTimeScale          = 0x03B8; // float32
            static constexpr std::uintptr_t m_bOrientToNormal               = 0x03BC; // bool
            static constexpr std::uintptr_t m_MaterialVars                  = 0x03C0; // CUtlVector<MaterialVariable_t>
            static constexpr std::uintptr_t m_flRadiusScale                 = 0x03D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAlphaScale                  = 0x0548; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRollScale                   = 0x06B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAlpha2Field                  = 0x0828; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale                 = 0x0830; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType               = 0x0EE8; // ParticleColorBlendType_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderDeferredLight : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_bUseAlphaTestWindow      = 0x0220; // bool
            static constexpr std::uintptr_t m_bUseTexture              = 0x0221; // bool
            static constexpr std::uintptr_t m_flRadiusScale            = 0x0224; // float32
            static constexpr std::uintptr_t m_flAlphaScale             = 0x0228; // float32
            static constexpr std::uintptr_t m_nAlpha2Field             = 0x022C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_vecColorScale            = 0x0230; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType          = 0x08E8; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_flLightDistance          = 0x08EC; // float32
            static constexpr std::uintptr_t m_flStartFalloff           = 0x08F0; // float32
            static constexpr std::uintptr_t m_flDistanceFalloff        = 0x08F4; // float32
            static constexpr std::uintptr_t m_flSpotFoV                = 0x08F8; // float32
            static constexpr std::uintptr_t m_nAlphaTestPointField     = 0x08FC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAlphaTestRangeField     = 0x0900; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAlphaTestSharpnessField = 0x0904; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_hTexture                 = 0x0908; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nHSVShiftControlPoint    = 0x0910; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderStandardLight : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_nLightType                     = 0x0220; // ParticleLightTypeChoiceList_t
            static constexpr std::uintptr_t m_vecColorScale                  = 0x0228; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_nColorBlendType                = 0x08E0; // ParticleColorBlendType_t
            static constexpr std::uintptr_t m_flIntensity                    = 0x08E8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bCastShadows                   = 0x0A58; // bool
            static constexpr std::uintptr_t m_flTheta                        = 0x0A60; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flPhi                          = 0x0BD0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRadiusMultiplier             = 0x0D40; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nAttenuationStyle              = 0x0EB0; // StandardLightingAttenuationStyle_t
            static constexpr std::uintptr_t m_flFalloffLinearity             = 0x0EB8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flFiftyPercentFalloff          = 0x1028; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flZeroPercentFalloff           = 0x1198; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bRenderDiffuse                 = 0x1308; // bool
            static constexpr std::uintptr_t m_bRenderSpecular                = 0x1309; // bool
            static constexpr std::uintptr_t m_lightCookie                    = 0x1310; // CUtlString
            static constexpr std::uintptr_t m_nPriority                      = 0x1318; // int32
            static constexpr std::uintptr_t m_nFogLightingMode               = 0x131C; // ParticleLightFogLightingMode_t
            static constexpr std::uintptr_t m_flFogContribution              = 0x1320; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_nCapsuleLightBehavior          = 0x1490; // ParticleLightBehaviorChoiceList_t
            static constexpr std::uintptr_t m_flCapsuleLength                = 0x1494; // float32
            static constexpr std::uintptr_t m_bReverseOrder                  = 0x1498; // bool
            static constexpr std::uintptr_t m_bClosedLoop                    = 0x1499; // bool
            static constexpr std::uintptr_t m_nPrevPntSource                 = 0x149C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMaxLength                    = 0x14A0; // float32
            static constexpr std::uintptr_t m_flMinLength                    = 0x14A4; // float32
            static constexpr std::uintptr_t m_bIgnoreDT                      = 0x14A8; // bool
            static constexpr std::uintptr_t m_flConstrainRadiusToLengthRatio = 0x14AC; // float32
            static constexpr std::uintptr_t m_flLengthScale                  = 0x14B0; // float32
            static constexpr std::uintptr_t m_flLengthFadeInTime             = 0x14B4; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderScreenShake : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flDurationScale  = 0x0220; // float32
            static constexpr std::uintptr_t m_flRadiusScale    = 0x0224; // float32
            static constexpr std::uintptr_t m_flFrequencyScale = 0x0228; // float32
            static constexpr std::uintptr_t m_flAmplitudeScale = 0x022C; // float32
            static constexpr std::uintptr_t m_nRadiusField     = 0x0230; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nDurationField   = 0x0234; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFrequencyField  = 0x0238; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAmplitudeField  = 0x023C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nFilterCP        = 0x0240; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderStatusEffect : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_pTextureColorWarp        = 0x0220; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureDetail2          = 0x0228; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureDiffuseWarp      = 0x0230; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureFresnelColorWarp = 0x0238; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureFresnelWarp      = 0x0240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureSpecularWarp     = 0x0248; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_pTextureEnvMap           = 0x0250; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flFlattenStrength      = 0x0220; // float32
            static constexpr std::uintptr_t m_nStrengthFieldOverride = 0x0224; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRadiusScale          = 0x0228; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderTreeShake : public CParticleFunctionRenderer {
        public:
            static constexpr std::uintptr_t m_flPeakStrength                  = 0x0220; // float32
            static constexpr std::uintptr_t m_nPeakStrengthFieldOverride      = 0x0224; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flRadius                        = 0x0228; // float32
            static constexpr std::uintptr_t m_nRadiusFieldOverride            = 0x022C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flShakeDuration                 = 0x0230; // float32
            static constexpr std::uintptr_t m_flTransitionTime                = 0x0234; // float32
            static constexpr std::uintptr_t m_flTwistAmount                   = 0x0238; // float32
            static constexpr std::uintptr_t m_flRadialAmount                  = 0x023C; // float32
            static constexpr std::uintptr_t m_flControlPointOrientationAmount = 0x0240; // float32
            static constexpr std::uintptr_t m_nControlPointForLinearDirection = 0x0244; // int32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseLerp : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0x0048; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber = 0x01D0; // int32
            static constexpr std::uintptr_t m_strSnapshotSubset   = 0x01D8; // CUtlString
            static constexpr std::uintptr_t m_nAttributeToRead    = 0x01E0; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nAttributeToWrite   = 0x01E4; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nLocalSpaceCP       = 0x01E8; // int32
            static constexpr std::uintptr_t m_bRandom             = 0x01EC; // bool
            static constexpr std::uintptr_t m_bReverse            = 0x01ED; // bool
            static constexpr std::uintptr_t m_nRandomSeed         = 0x01F0; // int32
            static constexpr std::uintptr_t m_nSnapShotStartPoint = 0x01F8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nSnapShotIncrement  = 0x0368; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation     = 0x04D8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bSubSample          = 0x0648; // bool
            static constexpr std::uintptr_t m_bPrev               = 0x0649; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_EventName = 0x0080; // PulseSymbol_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_TransformInput = 0x01D0; // CParticleTransformInput
            static constexpr std::uintptr_t m_vecRotation    = 0x0238; // Vector
            static constexpr std::uintptr_t m_bUseQuat       = 0x0244; // bool
            static constexpr std::uintptr_t m_bWriteNormal   = 0x0245; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PinParticleToCP : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber       = 0x01D0; // int32
            static constexpr std::uintptr_t m_vecOffset                 = 0x01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_bOffsetLocal              = 0x0890; // bool
            static constexpr std::uintptr_t m_nParticleSelection        = 0x0894; // ParticleSelection_t
            static constexpr std::uintptr_t m_nParticleNumber           = 0x0898; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nPinBreakType             = 0x0A08; // ParticlePinDistance_t
            static constexpr std::uintptr_t m_flBreakDistance           = 0x0A10; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flBreakSpeed              = 0x0B80; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flAge                     = 0x0CF0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nBreakControlPointNumber  = 0x0E60; // int32
            static constexpr std::uintptr_t m_nBreakControlPointNumber2 = 0x0E64; // int32
            static constexpr std::uintptr_t m_flBreakValue              = 0x0E68; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInterpolation           = 0x0FD8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bRetainInitialVelocity    = 0x1148; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomYaw : public CGeneralRandomRotation {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_nSetMethod     = 0x01D0; // ParticleSetMethod_t
            static constexpr std::uintptr_t m_TransformInput = 0x01D8; // CParticleTransformInput
            static constexpr std::uintptr_t m_nFieldOutput   = 0x0240; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flInputMin     = 0x0244; // float32
            static constexpr std::uintptr_t m_flInputMax     = 0x0248; // float32
            static constexpr std::uintptr_t m_vecOutputMin   = 0x024C; // Vector
            static constexpr std::uintptr_t m_vecOutputMax   = 0x0258; // Vector
            static constexpr std::uintptr_t m_flRadius       = 0x0264; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint {
        public:
            static constexpr std::uintptr_t m_flParentRadiusScale = 0x01D0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadiusScale       = 0x0340; // CPerParticleFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeIn : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flFadeInTimeMin = 0x01D0; // float32
            static constexpr std::uintptr_t m_flFadeInTimeMax = 0x01D4; // float32
            static constexpr std::uintptr_t m_flFadeInTimeExp = 0x01D8; // float32
            static constexpr std::uintptr_t m_bProportional   = 0x01DC; // bool
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CBaseTrailRenderer : public CBaseRendererSource2 {
        public:
            static constexpr std::uintptr_t m_nOrientationType         = 0x2DE8; // ParticleOrientationChoiceList_t
            static constexpr std::uintptr_t m_nOrientationControlPoint = 0x2DEC; // int32
            static constexpr std::uintptr_t m_flMinSize                = 0x2DF0; // float32
            static constexpr std::uintptr_t m_flMaxSize                = 0x2DF4; // float32
            static constexpr std::uintptr_t m_flStartFadeSize          = 0x2DF8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flEndFadeSize            = 0x2F68; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bClampV                  = 0x30D8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0x0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Local Type Scope
        class CParticleBindingRealPulse : public CParticleCollectionBindingInstance {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CParticleFunctionPreEmission : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_bRunOnce = 0x01D0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_Rate        = 0x01D0; // float32
            static constexpr std::uintptr_t m_flStartTime = 0x01D4; // float32
            static constexpr std::uintptr_t m_flEndTime   = 0x01D8; // float32
            static constexpr std::uintptr_t m_nField      = 0x0200; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_bEaseOut    = 0x0204; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_SourceEntity      = 0x0080; // PulseSymbol_t
            static constexpr std::uintptr_t m_SourceOutput      = 0x0090; // PulseSymbol_t
            static constexpr std::uintptr_t m_ExpectedParamType = 0x00A0; // CPulseValueFullType
        };

        // Has VTable
        // Construct Allowed
        class C_OP_FadeAndKill : public CParticleFunctionOperator {
        public:
            static constexpr std::uintptr_t m_flStartFadeInTime           = 0x01D0; // float32
            static constexpr std::uintptr_t m_flEndFadeInTime             = 0x01D4; // float32
            static constexpr std::uintptr_t m_flStartFadeOutTime          = 0x01D8; // float32
            static constexpr std::uintptr_t m_flEndFadeOutTime            = 0x01DC; // float32
            static constexpr std::uintptr_t m_flStartAlpha                = 0x01E0; // float32
            static constexpr std::uintptr_t m_flEndAlpha                  = 0x01E4; // float32
            static constexpr std::uintptr_t m_bForcePreserveParticleOrder = 0x01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_ControlPoint = 0x01D8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase {
        public:
            static constexpr std::uintptr_t m_nCursorsAllowedToRunParallel = 0x0098; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_MethodName     = 0x0048; // PulseSymbol_t
            static constexpr std::uintptr_t m_GameBlackboard = 0x0058; // PulseSymbol_t
            static constexpr std::uintptr_t m_ExpectedArgs   = 0x0068; // CUtlLeanVector<CPulseRuntimeMethodArg>
            static constexpr std::uintptr_t m_nAsyncCallMode = 0x0078; // PulseMethodCallMode_t
            static constexpr std::uintptr_t m_OnFinished     = 0x0080; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Value_RandomFloat : public CPulseCell_BaseValue {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderSprites : public CBaseRendererSource2 {
        public:
            static constexpr std::uintptr_t m_nSequenceOverride                     = 0x2DE8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bSequenceNumbersAreRawSequenceIndices = 0x2F58; // bool
            static constexpr std::uintptr_t m_nOrientationType                      = 0x2F5C; // ParticleOrientationChoiceList_t
            static constexpr std::uintptr_t m_nOrientationControlPoint              = 0x2F60; // int32
            static constexpr std::uintptr_t m_bUseYawWithNormalAligned              = 0x2F64; // bool
            static constexpr std::uintptr_t m_flMinSize                             = 0x2F68; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flMaxSize                             = 0x30D8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flAlphaAdjustWithSizeAdjust           = 0x3248; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flStartFadeSize                       = 0x33B8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flEndFadeSize                         = 0x3528; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flStartFadeDot                        = 0x3698; // float32
            static constexpr std::uintptr_t m_flEndFadeDot                          = 0x369C; // float32
            static constexpr std::uintptr_t m_bDistanceAlpha                        = 0x36A0; // bool
            static constexpr std::uintptr_t m_bSoftEdges                            = 0x36A1; // bool
            static constexpr std::uintptr_t m_flEdgeSoftnessStart                   = 0x36A4; // float32
            static constexpr std::uintptr_t m_flEdgeSoftnessEnd                     = 0x36A8; // float32
            static constexpr std::uintptr_t m_bOutline                              = 0x36AC; // bool
            static constexpr std::uintptr_t m_OutlineColor                          = 0x36AD; // Color
            static constexpr std::uintptr_t m_nOutlineAlpha                         = 0x36B4; // int32
            static constexpr std::uintptr_t m_flOutlineStart0                       = 0x36B8; // float32
            static constexpr std::uintptr_t m_flOutlineStart1                       = 0x36BC; // float32
            static constexpr std::uintptr_t m_flOutlineEnd0                         = 0x36C0; // float32
            static constexpr std::uintptr_t m_flOutlineEnd1                         = 0x36C4; // float32
            static constexpr std::uintptr_t m_nLightingMode                         = 0x36C8; // ParticleLightingQuality_t
            static constexpr std::uintptr_t m_vecLightingOverride                   = 0x36D0; // CParticleCollectionRendererVecInput
            static constexpr std::uintptr_t m_flLightingTessellation                = 0x3D88; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_flLightingDirectionality              = 0x3EF8; // CParticleCollectionRendererFloatInput
            static constexpr std::uintptr_t m_bParticleShadows                      = 0x4068; // bool
            static constexpr std::uintptr_t m_flShadowDensity                       = 0x406C; // float32
            static constexpr std::uintptr_t m_replicationParameters                 = 0x4070; // CReplicationParameters
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_GraphHook : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_HookName = 0x0080; // PulseSymbol_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar {
        public:
            static constexpr std::uintptr_t m_hModel             = 0x0208; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_outputMinName      = 0x0210; // CUtlString
            static constexpr std::uintptr_t m_outputMaxName      = 0x0218; // CUtlString
            static constexpr std::uintptr_t m_bModelFromRenderer = 0x0220; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bSetOnce       = 0x01D8; // bool
            static constexpr std::uintptr_t m_nCP1           = 0x01DC; // int32
            static constexpr std::uintptr_t m_vecCP1Pos      = 0x01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_transformInput = 0x0898; // CParticleTransformInput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BooleanSwitchState : public CPulseCell_BaseState {
        public:
            static constexpr std::uintptr_t m_Condition = 0x0048; // PulseObservableBoolExpression_t
            static constexpr std::uintptr_t m_SubGraph  = 0x00C0; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_WhenTrue  = 0x0108; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_WhenFalse = 0x0150; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase {
        public:
            static constexpr std::uintptr_t m_bTagSelfWhenComplete = 0x0098; // bool
            static constexpr std::uintptr_t m_nDesiredKillPriority = 0x009C; // PulseCursorCancelPriority_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nOutputControlPoint = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOutputField        = 0x01DC; // int32
            static constexpr std::uintptr_t m_flInputMin          = 0x01E0; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0x01E8; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0x01EC; // float32
            static constexpr std::uintptr_t m_StackName           = 0x01F0; // CUtlString
            static constexpr std::uintptr_t m_OperatorName        = 0x01F8; // CUtlString
            static constexpr std::uintptr_t m_FieldName           = 0x0200; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPIn       = 0x01D8; // int32
            static constexpr std::uintptr_t m_vecCP1Pos   = 0x01DC; // Vector
            static constexpr std::uintptr_t m_nCPOut      = 0x01E8; // int32
            static constexpr std::uintptr_t m_nCPOutField = 0x01EC; // int32
            static constexpr std::uintptr_t m_nCPSSPosOut = 0x01F0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RenderTrails : public CBaseTrailRenderer {
        public:
            static constexpr std::uintptr_t m_bEnableFadingAndClamping       = 0x30E0; // bool
            static constexpr std::uintptr_t m_flStartFadeDot                 = 0x30E4; // float32
            static constexpr std::uintptr_t m_flEndFadeDot                   = 0x30E8; // float32
            static constexpr std::uintptr_t m_nPrevPntSource                 = 0x30EC; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flMaxLength                    = 0x30F0; // float32
            static constexpr std::uintptr_t m_flMinLength                    = 0x30F4; // float32
            static constexpr std::uintptr_t m_bIgnoreDT                      = 0x30F8; // bool
            static constexpr std::uintptr_t m_flConstrainRadiusToLengthRatio = 0x30FC; // float32
            static constexpr std::uintptr_t m_flLengthScale                  = 0x3100; // float32
            static constexpr std::uintptr_t m_flLengthFadeInTime             = 0x3104; // float32
            static constexpr std::uintptr_t m_flRadiusHeadTaper              = 0x3108; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecHeadColorScale              = 0x3278; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flHeadAlphaScale               = 0x3930; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flRadiusTaper                  = 0x3AA0; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_vecTailColorScale              = 0x3C10; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flTailAlphaScale               = 0x42C8; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_nHorizCropField                = 0x4438; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_nVertCropField                 = 0x443C; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flForwardShift                 = 0x4440; // float32
            static constexpr std::uintptr_t m_bFlipUVBasedOnPitchYaw         = 0x4444; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0x01D8; // int32
            static constexpr std::uintptr_t m_nChildControlPoint = 0x01DC; // int32
            static constexpr std::uintptr_t m_nNumControlPoints  = 0x01E0; // int32
            static constexpr std::uintptr_t m_nFirstSourcePoint  = 0x01E4; // int32
            static constexpr std::uintptr_t m_bSetOrientation    = 0x01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nBBoxType                 = 0x01D8; // BBoxVolumeType_t
            static constexpr std::uintptr_t m_nInControlPointNumber     = 0x01DC; // int32
            static constexpr std::uintptr_t m_nOutControlPointNumber    = 0x01E0; // int32
            static constexpr std::uintptr_t m_nOutControlPointMaxNumber = 0x01E4; // int32
            static constexpr std::uintptr_t m_nField                    = 0x01E8; // int32
            static constexpr std::uintptr_t m_flInputMin                = 0x01EC; // float32
            static constexpr std::uintptr_t m_flInputMax                = 0x01F0; // float32
            static constexpr std::uintptr_t m_flOutputMin               = 0x01F4; // float32
            static constexpr std::uintptr_t m_flOutputMax               = 0x01F8; // float32
            static constexpr std::uintptr_t m_bBBoxOnly                 = 0x01FC; // bool
            static constexpr std::uintptr_t m_bCubeRoot                 = 0x01FD; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ModelSurfaceSnapshotGenerator : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPSnapshot     = 0x01D8; // int32
            static constexpr std::uintptr_t m_modelInput      = 0x01E0; // CParticleModelInput
            static constexpr std::uintptr_t m_flRecalcRate    = 0x0240; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flUSpacing      = 0x03B0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flVSpacing      = 0x0520; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flSurfaceOffset = 0x0690; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bSetNormal      = 0x0800; // bool
            static constexpr std::uintptr_t m_bSetUp          = 0x0801; // bool
            static constexpr std::uintptr_t m_bSetGravity     = 0x0802; // bool
            static constexpr std::uintptr_t m_bSetUV          = 0x0803; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nSourceCP = 0x01D8; // int32
            static constexpr std::uintptr_t m_nDestCP   = 0x01DC; // int32
            static constexpr std::uintptr_t m_nCPField  = 0x01E0; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInputControlPoint  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOutputControlPoint = 0x01DC; // int32
            static constexpr std::uintptr_t m_nInputField         = 0x01E0; // int32
            static constexpr std::uintptr_t m_nOutputField        = 0x01E4; // int32
            static constexpr std::uintptr_t m_flInputMin          = 0x01E8; // float32
            static constexpr std::uintptr_t m_flInputMax          = 0x01EC; // float32
            static constexpr std::uintptr_t m_flOutputMin         = 0x01F0; // float32
            static constexpr std::uintptr_t m_flOutputMax         = 0x01F4; // float32
            static constexpr std::uintptr_t m_bDerivative         = 0x01F8; // bool
            static constexpr std::uintptr_t m_flInterpRate        = 0x01FC; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1               = 0x01D8; // int32
            static constexpr std::uintptr_t m_vecCP1Pos          = 0x01DC; // Vector
            static constexpr std::uintptr_t m_bUseAvgParticlePos = 0x01E8; // bool
            static constexpr std::uintptr_t m_nSetParent         = 0x01EC; // ParticleParentSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_vecRateMin             = 0x01DC; // Vector
            static constexpr std::uintptr_t m_vecRateMax             = 0x01E8; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInputCP          = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOutputCP         = 0x01DC; // int32
            static constexpr std::uintptr_t m_flInterpolation   = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_b2DOrientation    = 0x0350; // bool
            static constexpr std::uintptr_t m_bAvoidSingularity = 0x0351; // bool
            static constexpr std::uintptr_t m_bPointAway        = 0x0352; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression     = 0x01D8; // ScalarExpressionType_t
            static constexpr std::uintptr_t m_flInput1        = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInput2        = 0x0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputRemap   = 0x04C0; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputCP       = 0x0630; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0x0634; // int32
            static constexpr std::uintptr_t m_flInterpolation = 0x0638; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nStartCP           = 0x01D8; // int32
            static constexpr std::uintptr_t m_nEndCP             = 0x01DC; // int32
            static constexpr std::uintptr_t m_nOutputCP          = 0x01E0; // int32
            static constexpr std::uintptr_t m_nOutputCPField     = 0x01E4; // int32
            static constexpr std::uintptr_t m_bSetOnce           = 0x01E8; // bool
            static constexpr std::uintptr_t m_flInputMin         = 0x01EC; // float32
            static constexpr std::uintptr_t m_flInputMax         = 0x01F0; // float32
            static constexpr std::uintptr_t m_flOutputMin        = 0x01F4; // float32
            static constexpr std::uintptr_t m_flOutputMax        = 0x01F8; // float32
            static constexpr std::uintptr_t m_flMaxTraceLength   = 0x01FC; // float32
            static constexpr std::uintptr_t m_flLOSScale         = 0x0200; // float32
            static constexpr std::uintptr_t m_bLOS               = 0x0204; // bool
            static constexpr std::uintptr_t m_CollisionGroupName = 0x0205; // char[128]
            static constexpr std::uintptr_t m_nTraceSet          = 0x0288; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_nSetParent         = 0x028C; // ParticleParentSetMode_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bUseWorldLocation = 0x01D8; // bool
            static constexpr std::uintptr_t m_bOrient           = 0x01D9; // bool
            static constexpr std::uintptr_t m_bSetOnce          = 0x01DA; // bool
            static constexpr std::uintptr_t m_nCP1              = 0x01DC; // int32
            static constexpr std::uintptr_t m_nCP2              = 0x01E0; // int32
            static constexpr std::uintptr_t m_nCP3              = 0x01E4; // int32
            static constexpr std::uintptr_t m_nCP4              = 0x01E8; // int32
            static constexpr std::uintptr_t m_vecCP1Pos         = 0x01EC; // Vector
            static constexpr std::uintptr_t m_vecCP2Pos         = 0x01F8; // Vector
            static constexpr std::uintptr_t m_vecCP3Pos         = 0x0204; // Vector
            static constexpr std::uintptr_t m_vecCP4Pos         = 0x0210; // Vector
            static constexpr std::uintptr_t m_nHeadLocation     = 0x021C; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bUseWorldLocation = 0x01D8; // bool
            static constexpr std::uintptr_t m_bOrient           = 0x01D9; // bool
            static constexpr std::uintptr_t m_nCP1              = 0x01DC; // int32
            static constexpr std::uintptr_t m_nHeadLocation     = 0x01E0; // int32
            static constexpr std::uintptr_t m_flReRandomRate    = 0x01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_vecCPMinPos       = 0x0358; // Vector
            static constexpr std::uintptr_t m_vecCPMaxPos       = 0x0364; // Vector
            static constexpr std::uintptr_t m_flInterpolation   = 0x0370; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetSimulationRate : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_flSimulationScale = 0x01D8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nSourceCP          = 0x01D8; // int32
            static constexpr std::uintptr_t m_nDestCP            = 0x01DC; // int32
            static constexpr std::uintptr_t m_nFlowCP            = 0x01E0; // int32
            static constexpr std::uintptr_t m_nActiveCP          = 0x01E4; // int32
            static constexpr std::uintptr_t m_nActiveCPField     = 0x01E8; // int32
            static constexpr std::uintptr_t m_flRetestRate       = 0x01F0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bAdaptiveThreshold = 0x0360; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap {
        public:
        };

        // Has VTable
        // Construct Allowed
        class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID      = 0x01D8; // int32
            static constexpr std::uintptr_t m_flNumberOfChildren = 0x01E0; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1             = 0x01D8; // int32
            static constexpr std::uintptr_t m_nHeadLocationMin = 0x01DC; // int32
            static constexpr std::uintptr_t m_nHeadLocationMax = 0x01E0; // int32
            static constexpr std::uintptr_t m_flResetRate      = 0x01E8; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInputCP1       = 0x01D8; // int32
            static constexpr std::uintptr_t m_nInputCP2       = 0x01DC; // int32
            static constexpr std::uintptr_t m_nOutputCP       = 0x01E0; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0x01E4; // int32
            static constexpr std::uintptr_t m_flInputMin      = 0x01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInputMax      = 0x0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMin     = 0x04C8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMax     = 0x0638; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID        = 0x01D8; // int32
            static constexpr std::uintptr_t m_nFirstChild          = 0x01DC; // int32
            static constexpr std::uintptr_t m_nNumChildrenToEnable = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDisableChildren     = 0x0350; // bool
            static constexpr std::uintptr_t m_bPlayEndcapOnStop    = 0x0351; // bool
            static constexpr std::uintptr_t m_bDestroyImmediately  = 0x0352; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression       = 0x01D8; // VectorExpressionType_t
            static constexpr std::uintptr_t m_nOutputCP         = 0x01DC; // int32
            static constexpr std::uintptr_t m_vInput1           = 0x01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vInput2           = 0x0898; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flLerp            = 0x0F50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_bNormalizedOutput = 0x10C0; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression            = 0x01D8; // SetStatisticExpressionType_t
            static constexpr std::uintptr_t m_flDecimalPlaces        = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0x0350; // int32
            static constexpr std::uintptr_t m_nOutVectorField        = 0x0354; // int32
            static constexpr std::uintptr_t m_nField                 = 0x0358; // ParticleAttributeIndex_t
            static constexpr std::uintptr_t m_flOutputRemap          = 0x0360; // CParticleRemapFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1          = 0x01D8; // int32
            static constexpr std::uintptr_t m_nHand         = 0x01DC; // int32
            static constexpr std::uintptr_t m_vecCP1Pos     = 0x01E0; // Vector
            static constexpr std::uintptr_t m_bOrientToHand = 0x01EC; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInControlPointNumber     = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOutControlPointNumber    = 0x01DC; // int32
            static constexpr std::uintptr_t m_nField                    = 0x01E0; // int32
            static constexpr std::uintptr_t m_nHitboxDataType           = 0x01E4; // ParticleHitboxDataSelection_t
            static constexpr std::uintptr_t m_flInputMin                = 0x01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flInputMax                = 0x0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMin               = 0x04C8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOutputMax               = 0x0638; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nHeightControlPointNumber = 0x07A8; // int32
            static constexpr std::uintptr_t m_vecComparisonVelocity     = 0x07B0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_HitboxSetName             = 0x0E68; // char[128]
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nInControlPointNumber  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0x01DC; // int32
            static constexpr std::uintptr_t m_nField                 = 0x01E0; // int32
            static constexpr std::uintptr_t m_flInputMin             = 0x01E4; // float32
            static constexpr std::uintptr_t m_flInputMax             = 0x01E8; // float32
            static constexpr std::uintptr_t m_flOutputMin            = 0x01EC; // float32
            static constexpr std::uintptr_t m_flOutputMax            = 0x01F0; // float32
            static constexpr std::uintptr_t m_bUseDeltaV             = 0x01F4; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nExpression     = 0x01D8; // VectorFloatExpressionType_t
            static constexpr std::uintptr_t m_vecInput1       = 0x01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_vecInput2       = 0x0898; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flLerp          = 0x0F50; // CPerParticleFloatInput
            static constexpr std::uintptr_t m_flOutputRemap   = 0x10C0; // CParticleRemapFloatInput
            static constexpr std::uintptr_t m_nOutputCP       = 0x1230; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0x1234; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nOutControlPointNumber = 0x01D8; // int32
            static constexpr std::uintptr_t m_flInputMin             = 0x01DC; // float32
            static constexpr std::uintptr_t m_flInputMax             = 0x01E0; // float32
            static constexpr std::uintptr_t m_flOutputMin            = 0x01E4; // float32
            static constexpr std::uintptr_t m_flOutputMax            = 0x01E8; // float32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetVariable : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_variableReference = 0x01D8; // CParticleVariableRef
            static constexpr std::uintptr_t m_transformInput    = 0x0228; // CParticleTransformInput
            static constexpr std::uintptr_t m_positionOffset    = 0x0290; // Vector
            static constexpr std::uintptr_t m_rotationOffset    = 0x029C; // QAngle
            static constexpr std::uintptr_t m_vecInput          = 0x02A8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_floatInput        = 0x0960; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bUseWorldLocation = 0x01D8; // bool
            static constexpr std::uintptr_t m_bRandomize        = 0x01DA; // bool
            static constexpr std::uintptr_t m_bSetOnce          = 0x01DB; // bool
            static constexpr std::uintptr_t m_nCP               = 0x01DC; // int32
            static constexpr std::uintptr_t m_nHeadLocation     = 0x01E0; // int32
            static constexpr std::uintptr_t m_vecRotation       = 0x01E4; // QAngle
            static constexpr std::uintptr_t m_vecRotationB      = 0x01F0; // QAngle
            static constexpr std::uintptr_t m_flInterpolation   = 0x0200; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPOutput = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_bFireOnEmissionEnd = 0x01D8; // bool
            static constexpr std::uintptr_t m_bIncludeChildren   = 0x01D9; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1          = 0x01D8; // int32
            static constexpr std::uintptr_t m_vecCP1Pos     = 0x01DC; // Vector
            static constexpr std::uintptr_t m_bOrientToEyes = 0x01E8; // bool
            static constexpr std::uintptr_t m_nPosition     = 0x01EC; // ParticleEntityPos_t
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP1         = 0x01D8; // int32
            static constexpr std::uintptr_t m_vecCP1Pos    = 0x01DC; // Vector
            static constexpr std::uintptr_t m_bOrientToHMD = 0x01E8; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nControlPointNumber   = 0x01D8; // int32
            static constexpr std::uintptr_t m_pszTimeOfDayParameter = 0x01DC; // char[128]
            static constexpr std::uintptr_t m_vecDefaultValue       = 0x025C; // Vector
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput              = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPOutputVel          = 0x01DC; // int32
            static constexpr std::uintptr_t m_bNormalize            = 0x01E0; // bool
            static constexpr std::uintptr_t m_nCPOutputMag          = 0x01E4; // int32
            static constexpr std::uintptr_t m_nCPField              = 0x01E8; // int32
            static constexpr std::uintptr_t m_vecComparisonVelocity = 0x01F0; // CParticleCollectionVecInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput  = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPOutput = 0x01DC; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_flDuration          = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bDestroyImmediately = 0x0348; // bool
            static constexpr std::uintptr_t m_bPlayEndCap         = 0x0349; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nColorCP          = 0x01D8; // int32
            static constexpr std::uintptr_t m_nColorGemEnableCP = 0x01DC; // int32
            static constexpr std::uintptr_t m_nOutputCP         = 0x01E0; // int32
            static constexpr std::uintptr_t m_DefaultHSVColor   = 0x01E4; // Color
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPOut                 = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPIn                  = 0x01DC; // int32
            static constexpr std::uintptr_t m_flUpdateRate           = 0x01E0; // float32
            static constexpr std::uintptr_t m_flTraceLength          = 0x01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flStartOffset          = 0x0358; // float32
            static constexpr std::uintptr_t m_flOffset               = 0x035C; // float32
            static constexpr std::uintptr_t m_vecTraceDir            = 0x0360; // Vector
            static constexpr std::uintptr_t m_CollisionGroupName     = 0x036C; // char[128]
            static constexpr std::uintptr_t m_nTraceSet              = 0x03EC; // ParticleTraceSet_t
            static constexpr std::uintptr_t m_bSetToEndpoint         = 0x03F0; // bool
            static constexpr std::uintptr_t m_bTraceToClosestSurface = 0x03F1; // bool
            static constexpr std::uintptr_t m_bIncludeWater          = 0x03F2; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID        = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nFirstChild          = 0x0348; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nNumChildrenToEnable = 0x04B8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bPlayEndcapOnStop    = 0x0628; // bool
            static constexpr std::uintptr_t m_bDestroyImmediately  = 0x0629; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nChildGroupID       = 0x01D8; // int32
            static constexpr std::uintptr_t m_flClusterRefireTime = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flClusterSize       = 0x0350; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flClusterCooldown   = 0x04C0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bLimitChildCount    = 0x0630; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPSnapshot     = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPStartPnt     = 0x01DC; // int32
            static constexpr std::uintptr_t m_nCPEndPnt       = 0x01E0; // int32
            static constexpr std::uintptr_t m_flSegments      = 0x01E8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOffset        = 0x0358; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flOffsetDecay   = 0x04C8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRecalcRate    = 0x0638; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flUVScale       = 0x07A8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flUVOffset      = 0x0918; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flSplitRate     = 0x0A88; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flBranchTwist   = 0x0BF8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nBranchBehavior = 0x0D68; // ParticleLightnintBranchBehavior_t
            static constexpr std::uintptr_t m_flRadiusStart   = 0x0D70; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flRadiusEnd     = 0x0EE0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_flDedicatedPool = 0x1050; // CParticleCollectionFloatInput
        };

        // Has VTable
        // Construct Allowed
        class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCP             = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPOutput       = 0x01DC; // int32
            static constexpr std::uintptr_t m_vecScale        = 0x01E0; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_bSetMagnitude   = 0x0898; // bool
            static constexpr std::uintptr_t m_nOutVectorField = 0x089C; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetGravityToCP : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_nCPInput        = 0x01D8; // int32
            static constexpr std::uintptr_t m_nCPOutput       = 0x01DC; // int32
            static constexpr std::uintptr_t m_flScale         = 0x01E0; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_bSetOrientation = 0x0350; // bool
            static constexpr std::uintptr_t m_bSetZDown       = 0x0351; // bool
        };

        // Has VTable
        // Construct Allowed
        class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_vecRotAxis = 0x01D8; // CParticleCollectionVecInput
            static constexpr std::uintptr_t m_flRotRate  = 0x0890; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nCP        = 0x0A00; // int32
            static constexpr std::uintptr_t m_nLocalCP   = 0x0A04; // int32
        };

        // Has VTable
        // Construct Allowed
        class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission {
        public:
            static constexpr std::uintptr_t m_flInputValue    = 0x01D8; // CParticleCollectionFloatInput
            static constexpr std::uintptr_t m_nCPOutput       = 0x0348; // int32
            static constexpr std::uintptr_t m_nOutVectorField = 0x034C; // int32
            static constexpr std::uintptr_t m_flQuantizeValue = 0x0350; // CParticleCollectionFloatInput
        };

    }
}
